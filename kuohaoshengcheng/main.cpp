#include<vector>
#include<string>
#include<iostream>
class Solution {
    std::shared_ptr<std::vector<std::string>> cache[100] = {nullptr};
    public:
    std::shared_ptr<std::vector<std::string>> generate(int n) {
        if (cache[n] != nullptr)
            return cache[n];
        if (n == 0) {
            cache[0] = std::shared_ptr<std::vector<std::string>>(new std::vector<std::string>{""});
        } else {
            auto result = std::shared_ptr<std::vector<std::string>>(new std::vector<std::string>);
            for (int i = 0; i != n; ++i) {
                auto lefts = generate(i);
                auto rights = generate(n - i - 1);
                for (const std::string& left : *lefts)
                    for (const std::string& right : *rights)
                        result -> push_back("(" + left + ")" + right);
            }
            cache[n] = result;
        }
        return cache[n];
    }
    std::vector<std::string> generateParenthesis(int n) {
        return *generate(n);
    }
};

class Solution1 {
    public:
        //std::vector<std::string> generateParenthesis(int n) {
        //    

        //}

        void generate(int left, int right, std::string& str) {
            if (left == 0 && right == 0 && right <= left) {
                str.push_back('\n');
                return; 

            }

            for(int i=0;i<left;i++) {
                generate(left - 1, right, str);
                str.push_back('(');
                if (left <= right) {
                    for(int j=0;j<right;j++) {
                        generate(left, right - 1, str);
                        str.push_back(')');
                    }
                }
            }
        }
};



int main() {
    // Solution s;
    // std::vector<std::string> r;
    // s.generateParenthesis(3);

    Solution1 s;
    std::string str;
    s.generate(3,3,str);

    std::cout << str << std::endl;



    return 0;
}
