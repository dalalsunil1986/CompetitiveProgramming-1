#include <bits/stdc++.h>

using namespace std;

void dfs(int n,vector<int> g[],vector<int> &dp,vector<bool> &visited){
    visited[n] = true;
    for(int i : g[n]){
        
        if(!visited[i])
            dfs(i,g,dp,visited);
        dp[n] = max(dp[n],dp[i] + 1);
    }
}

int main(){
    int v,e; cin >> v >> e;

    vector<int> g[v+1]; 

    for(int i=0;i<e;i++){
        int a,b; cin >> a >> b;
        g[a].push_back(b);
    }

    vector<int> dp(v+1,0);
    vector<bool> visited(v+1,false);

    for(int i=1;i<=v;i++){
        if(!visited[i]){
            dfs(i,g,dp,visited);
        }
    }

    int r = 0;

    for(int i=1;i<=v;i++){
        r = max(r,dp[i]);
    }

    cout << r << endl;
}