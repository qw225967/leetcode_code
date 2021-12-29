#include<iostream>
#include<vector>


int main() {
    int weight = 20;
    std::vector<int> W = {2,3,4,5,9};
    std::vector<int> V = {3,4,5,8,10};

    int value1,value2;
    std::vector<std::vector<int>> dp(V.size(), std::vector<int>(weight,0));
    for(int i = 1; i < W.size(); i++){	// 前i件物品
		for(int j = 1; j < weight; j++){	// 背包剩余空间
			if(W[i] > j){	// 第i件物品太重放不进去
				dp[i][j] = dp[i - 1][j];
			}	
			else{
				value1 = dp[i-1][j - W[i]] + V[i];	// 第i件物品放进去
				value2 = dp[i-1][j];	// 第i件物品不放进去
				dp[i][j] = std::max(value1, value2);
			}
		}	
	}
    return 0;
}
