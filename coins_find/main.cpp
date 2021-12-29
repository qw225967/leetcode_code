#include<iostream>
#include<vector>
class Solution {
public:
    std::vector<int>count;
    int dp(std::vector<int>& coins, int rem) {
        if (rem < 0) return -1;
        if (rem == 0) return 0;
        if (count[rem - 1] != 0) return count[rem - 1];
        int Min = INT_MAX;
        for (int coin:coins) {
            int res = dp(coins, rem - coin);
            if (res >= 0 && res < Min) {
                Min = res + 1;
            }
        }
        count[rem - 1] = Min == INT_MAX ? -1 : Min;
        return count[rem - 1];
    }
public:
    int coinChange(std::vector<int>& coins, int amount) {
        if (amount < 1) return 0;
        count.resize(amount);
        return dp(coins, amount);
    }
};
//class Solution {
//public:
//    int coinChange(std::vector<int>& coins, int amount) {
//        std::sort(coins.begin(), coins.end());
//        int i = coins.size()-1,result=0, sum = 0;
//        for(;i>=0;i--) {
//            int val = sum;
//            int count = 0;
//            while(amount > val) {
//                val += coins[i];
//                count++;
//            }
//            result = result + count - 1;
//            sum = val - coins[i];
//            if(amount == sum)
//                return result;
//        }
//        return -1;
//    }
//};


int main() {
    std::vector<int> vec = {1,2,5};
    Solution s;
    s.coinChange(vec,11);

    return 0;
}
