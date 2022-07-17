#include <bits/stdc++.h>
using namespace std;

int help(vector<vector<int>> grid,int i,int j,vector<vector<int>> &dp){
    if(i==grid.size()-1){
        return grid[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=INT_MIN;
    
    if(grid[i][j]<grid[i+1][0]){
        ans=max(ans,help(grid,i+1,0,dp));
    }
    if(grid[i][j]<grid[i+1][1]){
        ans=max(ans,help(grid,i+1,1,dp));
    }
    if(ans!=INT_MIN){
        return dp[i][j]=ans+grid[i][j];
    }
    return dp[i][j]=grid[i][j];
}
int solve(vector<vector<int>> grid,int n){
    
    vector<vector<int>> dp(n,vector<int>(2,-1));
    return max(help(grid,0,0,dp),help(grid,0,1,dp));
    
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    vector<vector<int>> grid(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            int temp;
            cin>>temp;
            grid[i][j]=temp;
        }
    }
    
    int ans=solve(grid,n);
    cout<<ans;
    return 0;
}
