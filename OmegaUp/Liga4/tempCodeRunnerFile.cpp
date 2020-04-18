#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


struct  BinaryTrie
{
    BinaryTrie *next[2];
    BinaryTrie() {
        next[0] = nullptr;
        next[1] = nullptr;
    }
};

void Insert_num(BinaryTrie* &root, ll num) {
    BinaryTrie*cur = root;
    for (int i = 62; i >= 0; --i) {
        ll c = ((num >> i) & 1);
        if (!cur->next[c]) {
            cur->next[c] = new BinaryTrie();
        }
        cur = cur->next[c];
    }
}
BinaryTrie* BuildBinaryTrie(vector<ll>&nums) {
    BinaryTrie* root = new BinaryTrie();
    for (const ll& num : nums) {
        Insert_num(root, num);
    }
    return root;
}
ll helper(BinaryTrie* &root, ll num) {
    ll res = 0;
    BinaryTrie *cur = root;
    for (int i = 62; i >= 0; --i) {
        ll c = ((num >> i) & 1) ? 0 : 1;
        if (cur->next[c]) {
            res |= (1 << i);
            cur = cur->next[c];
        }
        else {
            cur = cur->next[c ? 0 : 1];
        }
    }
    return res;
}
   
int main(){

    int n; cin >> n;
    vector<ll> nums(n);

    for(ll i=0;i<n;i++) cin >> nums[i];

    BinaryTrie *root = BuildBinaryTrie(nums);
    ll maxn = 0;
    for (const ll&n : nums) {
        maxn = max(maxn, helper(root, n));
    }
    
    cout << maxn << endl;
}