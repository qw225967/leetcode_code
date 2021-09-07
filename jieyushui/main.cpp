#include<vector>
#include<iostream>

class Solution {
    public:
        int trap(std::vector<int>& height) {
            if (height.empty()) return 0;
            int ans = 0;
            int size = height.size();
            std:: vector<int> left_max(size), right_max(size);
            left_max[0] = height[0];
            // 寻找位置i的左边最大值
            for (int i = 1; i < size; i++) {
                left_max[i] = std::max(height[i], left_max[i - 1]);
            }
            right_max[size - 1] = height[size - 1];
            // 寻找位置i右边的最大值
            for (int i = size - 2; i >= 0; i--) {
                right_max[i] = std::max(height[i], right_max[i + 1]);
            }
            for (int i = 1; i < size - 1; i++) {
                ans += std::min(left_max[i], right_max[i]) - height[i];
            }
            return ans;
        }
};

int trap(std::vector<int>& height)
{
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size()) {
        while (!st.empty() && height[current] > height[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty())
                break;
            int distance = current - st.top() - 1;
            int bounded_height = min(height[current], height[st.top()]) - height[top];
            ans += distance * bounded_height;
        }
        st.push(current++);
    }
    return ans;
}


int main() {

    std::vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};


    Solution s;
    std::cout << s.trap(height) << std::endl;
    


    return 0;
}
