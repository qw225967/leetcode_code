#include<iostream>
using namespace std;

class Solution {
public:
    /**
     *
     * @param x int整型
     * @return int整型
     */
   //int sqrt(int x) {
   //     if(x<=0) return 0;  //小于等于0 返回0
   //     int ans = 1; 
   //     int num = 1;
   //     int  i = 3;
   //     while(num+i<=x){
   //         num+=i;  
   //         ans ++; // 每加一个奇数，ans+1
   //         i += 2;
   //     }
   //     return ans;
   // }
    int sqrt(int x) {
        if(x <= 0) return 0;
        int s = 1;
        int d = 1;
        while(2*d + s + 1 <= x) {
            s = 2*d + s + 1;
            d++;
        }
        return d;
    }
};



int main() {
    Solution s;

    std::cout  <<  s.sqrt(16) << std::endl;


    return 0;
}
