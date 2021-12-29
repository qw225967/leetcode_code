#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=0,n = s.size();
        if(n%2==1) l=r=n/2;
        else {
            l=n/2-1;
            r=n/2;
        }


        while(l>=0 && r<n) {
            if(checkstr(s[l])) {
                l--;
                continue;
            }
            if(checkstr(s[r])) {
                r++;
                continue;
            }
            if(cmpchar(s[l], s[r])) {
                l--;
                r++;
            } else {
                return false;
            }
        }
        return true;
    }

    bool checkstr(char c) {
        if( ((int)c <= 57 && (int)c >= 48 ) || 
            ((int)c <= 90 && (int)c >= 65 ) || 
            ((int)c <= 122 && (int)c >= 97 )) {
            return true;
        }
        return false;
    }
    bool cmpchar(char c1, char c2) {
        if( ((int)c1 <= 90 && (int)c1 >= 65 ) && 
            ((int)c2 <= 90 && (int)c2 >= 65 )) {
            if (c1 == c2) return true;
            else return false;
        } else if ( ((int)c1 <= 122 && (int)c1 >= 97 ) && 
                    ((int)c2 <= 122 && (int)c2 >= 97 )) {
            if (c1 == c2) return true;
            else return false;
        } else if( ((int)c1 <= 90 && (int)c1 >= 65 ) && 
                   ((int)c2 <= 122 && (int)c2 >= 97 )) {
            if ((int)c1 == (int)c2 - 32) return true;
            else return false;
        }  else if( ((int)c2 <= 90 && (int)c2 >= 65 ) && 
                    ((int)c1 <= 122 && (int)c1 >= 97 )) {
            if ((int)c2 == (int)c1 - 32) return true;
            else return false;
        } else {
            if (c2 == c1) return true;
            else return false;
        }
        return false;
    }
};

int main() {

    string s("A man, a plan, a canal: Panama");

    Solution ss;

    ss.isPalindrome(s); 


    return 0;
}
