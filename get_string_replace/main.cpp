#include<iostream>
#include<unordered_map>
#include<string>
char firstUniqChar(std::string s) {
    std::unordered_map<char,int> map_count;
    std::unordered_map<char,int> map_result;
        for(char c : s) {
            if(!map_count[c])
                map_result[c]++;    
            else {
                auto iter = map_result.find(c);
                if(iter != map_result.end())
                    map_result.erase(iter);
            }      
            map_count[c]++;
        }
        char result = map_result.begin()->first;
        return result;
}

int main() {
    std::string s = "leetcode";
   firstUniqChar(s);


    return 0;
}
