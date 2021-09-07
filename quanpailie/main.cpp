#include <iostream>
#include <vector>

class Solution {
    public:
        std::vector<std::vector<int>> permute(std::vector<int>& nums) {
            std::vector<std::vector<int>> res;
            Helper(res, nums, 0, nums.size());
            return res;
        }

        void Helper(std::vector<std::vector<int>> &res, std::vector<int> &output, int first, int len) {
            if (first == len) {
                res.emplace_back(output);
                return;
            }
            for (int i=first;i<len;i++) {
                std::swap(output[i], output[first]);    
                Helper(res, output, first+1, len);
                std::swap(output[i], output[first]);    
            }
        }
};

int main() {
    std::vector<int> test = {1,2,3,4};
    Solution s;
    std::vector<std::vector<int>> res = s.permute(test); 
    //for (int i=0;i<res.size();i++) {
    //    for (int j=0;j<res[i].size();j++) {
    //        std::cout << res[i][j] << " ";
    //    }
    //    std::cout << std::endl;
    //} 
    return 0;
}
