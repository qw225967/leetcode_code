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
        // ?????????????????????????????????
        head = new DLinkedNode();
        tail = new DLinkedNode();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (!cache.count(key)) {
            return -1;
        }
        // ?????? key ???????????????????????????????????????????????????
        DLinkedNode* node = cache[key];
        moveToHead(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if (!cache.count(key)) {
            // ?????? key ????????????????????????????????????
            DLinkedNode* node = new DLinkedNode(key, value);
            // ??????????????????
            cache[key] = node;
            // ??????????????????????????????
            addToHead(node);
            ++size;
            if (size > capacity) {
                // ??????????????????????????????????????????????????????
                DLinkedNode* removed = removeTail();
                // ??????????????????????????????
                cache.erase(removed->key);
                // ??????????????????
                delete removed;
                --size;
            }
        }
        else {
            // ?????? key ????????????????????????????????????????????? value??????????????????
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
    lRUCache.put(1, 1); // ????????? {1=1}
    lRUCache.put(2, 2); // ????????? {1=1, 2=2}
std::cout << lRUCache.get(1) << std::endl;    // ?????? 1
    lRUCache.put(3, 3); // ??????????????????????????? 2 ?????????????????? {1=1, 3=3}
std::cout << lRUCache.get(2) << std::endl;    // ?????? -1 (?????????)
    lRUCache.put(4, 4); // ??????????????????????????? 1 ?????????????????? {4=4, 3=3}
std::cout << lRUCache.get(1) << std::endl;    // ?????? -1 (?????????)
std::cout << lRUCache.get(3) << std::endl;    // ?????? 3
std::cout << lRUCache.get(4) << std::endl;    // ?????? 4

return 0;
}
