#include <string>


class Solution {
public:
    std::string reverseParentheses(std::string s) {
        std::stack<char*> temp_stack;
        char* s_front = s.c_str();
        while(s != nullptr_t) {
            if (*s_front != ')' && flag) {
                temp_stack.push(s_front);
            } else if (!flag){
                while ( *s_front != '(' ) {
                    std::temp_str += temp_stack.pop();
                    s_front--;
                }
            }
        }  
        
    }
    std::string Helper() {
        
    }
};

void main() {

}
