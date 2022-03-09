#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        std::vector<std::vector<int>> dp(n+1,std::vector<int> (m+1,0));

        auto matches = [&](int i, int j) {
            if (i == 0) {
                return false;
            }
            if (p[j - 1] == '.') {
                return true;
            }
            return s[i - 1] == p[j - 1];
        };


        for(int i=0; i<=n; ++i) {
            for(int j=1; j<=m; ++j) {
                if (p[j - 1] == '*') {
                    dp[i][j] |= dp[i][j - 2];
                    if (matches(i, j - 1)) {
                        dp[i][j] |= dp[i - 1][j];
                    }
                }
                else {
                    if (matches(i, j)) {
                        dp[i][j] |= dp[i - 1][j - 1];
                    }
                }
            }
        }
        return dp[n][m];
    }
};

int main() {
  string s = "aa";
  string p = "a*"; 
  
  Solution s_instance;
  s_instance.isMatch(s,p);

  return 0;
}
