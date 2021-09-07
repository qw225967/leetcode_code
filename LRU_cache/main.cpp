#include <map>
#include <vector>
#include <iostream>
#include <unordered_map>

class LRUCache {
    public:
        LRUCache(int capacity) {
            capacity_ = capacity;
        }

        int get(int key) {
            auto iter = cache_map_.find(key);
            if (iter != cache_map_.end()) {
                coculate_priority(iter->first);
                return iter->second;
            }
            else 
                return -1;
        }

        void put(int key, int value) {
            auto iter = cache_map_.find(key);
            if (iter != cache_map_.end()) {
                coculate_priority(iter->first);
                iter->second = value;
            } else {
                if (capacity_ > 0) {
                    cache_map_[key] = value;
                    capacity_--;
                    priority_vec.push_back(key);
                } else {
                    int index = coculate_priority(key);
                    auto find_iter = cache_map_.find(index);
                    if (find_iter != cache_map_.end())
                        cache_map_.erase(find_iter);
                    cache_map_[key] = value;
                }
            }
        }

        int coculate_priority(int key) {
            auto iter = priority_vec.begin();
            bool flag = true;
            int result = -1;
            for(;iter != priority_vec.end();iter++) {
                if (*iter == key) {
                    priority_vec.erase(iter);
                    flag = false;
                    break;
                }
            }   
            if (flag) {
                result = *priority_vec.begin();
                priority_vec.erase(priority_vec.begin());
            }
            priority_vec.push_back(key);
            return result;
        }
    private:
        std::vector<int> priority_vec;
        std::map<int, int> cache_map_; 
        int capacity_;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
struct DLinkedNode {
    int key, value;
    DLinkedNode* prev;
    DLinkedNode* next;
    DLinkedNode(): key(0), value(0), prev(nullptr), next(nullptr) {}
    DLinkedNode(int _key, int _value): key(_key), value(_value), prev(nullptr), next(nullptr) {}
};

class LRUCache1 {
private:
    std::unordered_map<int, DLinkedNode*> cache;
    DLinkedNode* head;
    DLinkedNode* tail;
    int size;
    int capacity;

public:
    LRUCache1(int _capacity): capacity(_capacity), size(0) {
        // 使用伪头部和伪尾部节点
        head = new DLinkedNode();
        tail = new DLinkedNode();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (!cache.count(key)) {
            return -1;
        }
        // 如果 key 存在，先通过哈希表定位，再移到头部
        DLinkedNode* node = cache[key];
        moveToHead(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if (!cache.count(key)) {
            // 如果 key 不存在，创建一个新的节点
            DLinkedNode* node = new DLinkedNode(key, value);
            // 添加进哈希表
            cache[key] = node;
            // 添加至双向链表的头部
            addToHead(node);
            ++size;
            if (size > capacity) {
                // 如果超出容量，删除双向链表的尾部节点
                DLinkedNode* removed = removeTail();
                // 删除哈希表中对应的项
                cache.erase(removed->key);
                // 防止内存泄漏
                delete removed;
                --size;
            }
        }
        else {
            // 如果 key 存在，先通过哈希表定位，再修改 value，并移到头部
            DLinkedNode* node = cache[key];
            node->value = value;
            moveToHead(node);
        }
    }

    void addToHead(DLinkedNode* node) {
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
    }
    
    void removeNode(DLinkedNode* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void moveToHead(DLinkedNode* node) {
        removeNode(node);
        addToHead(node);
    }

    DLinkedNode* removeTail() {
        DLinkedNode* node = tail->prev;
        removeNode(node);
        return node;
    }
};


int main() {
    LRUCache lRUCache(2);
    lRUCache.put(1, 1); // 缓存是 {1=1}
    lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
std::cout << lRUCache.get(1) << std::endl;    // 返回 1
    lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
std::cout << lRUCache.get(2) << std::endl;    // 返回 -1 (未找到)
    lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
std::cout << lRUCache.get(1) << std::endl;    // 返回 -1 (未找到)
std::cout << lRUCache.get(3) << std::endl;    // 返回 3
std::cout << lRUCache.get(4) << std::endl;    // 返回 4

return 0;
}
