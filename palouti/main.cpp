#include <iostream>
#include <vector>
class Solution {
    public:
        int GetNumber(int num) {
            std::vector<int> result_vec = {0,1,2};
            for (int i=3;i<=num;i++) {
                int temp = result_vec[i-1] + result_vec[i-2];
                result_vec.push_back(temp);
            }
            return result_vec[num];
        }
};



int main() {
    Solution s;
    std::cout << s.GetNumber(3) << std::endl;
    std::cout << s.GetNumber(4) << std::endl;
    std::cout << s.GetNumber(5) << std::endl;
    std::cout << s.GetNumber(6) << std::endl;

    return 0;
}
