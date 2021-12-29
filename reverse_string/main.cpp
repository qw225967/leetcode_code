#include<iostream> 
#include<string> 




int main() {
    std::string a = "seek truths";
    std::reverse(a.begin(),a.end());
    auto iter_left = a.begin();
    auto iter_right = a.begin();
    for(auto iter = a.begin();iter != a.end();iter++) {
        if(*iter == ' '){
            iter_right = iter;
            std::reverse(iter_left,iter_right);
            iter++;
            iter_left = iter;
        }
    }
    std::reverse(iter_left,a.end());
    std::cout << a << std::endl;


    return 0;
}
