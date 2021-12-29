#include<iostream>
#include<string>
#include<vector>

std::string test(std::vector<int> &arr) {
    bool flag = true;
    int index = -1,indexend = arr.size()-1;
    std::string result; 
    while(flag) {
        flag = false;
        for(int i=0;i<indexend;i++) {
            std::string str1 = std::to_string(arr[i]) + std::to_string(arr[i+1]);
            std::string str2 = std::to_string(arr[i+1]) + std::to_string(arr[i]);
            if(str1 > str2)  {
                std::swap(arr[i],arr[i+1]);
                index = i;
                flag = true;    
            }
        }
        indexend = index;
    }  
    for(int s : arr) {
        result = result + std::to_string(s);
    }
    return result;
} 

int main() {
    
    std::vector<int> t = {999999998,999999997,999999999};
    auto s = test(t);
    std::cout << s << std::endl;
    return 0;
}
