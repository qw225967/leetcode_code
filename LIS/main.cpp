#include<iostream> 
#include<vector>

using namespace std;

int LIS(vector<int> &nums) {
    int n = nums.size();
    if(n <= 0) return 0;
    vector<int> dp(n,1);
    for(int i=1;i<n;i++) {
        for(int j=1;j<i;j++) {
            if(nums[j] > nums[i]) {
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    return *max_element(dp.begin(),dp.end()); 
}

int main() {

    vector<int>  a = {1,3,2,7,5,4,1,8};
   
    cout << LIS(a) << endl;

    return 0;
}
