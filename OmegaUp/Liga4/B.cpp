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

      ll max = 0, mask = 0;
        unordered_set<ll> t;
        // search from left to right, find out for each bit is there 
        // two numbers that has different value
        for (int i = 31; i >= 0; i--){
            // mask contains the bits considered so far
            mask |= (1 << i);
            t.clear();
            // store prefix of all number with right i bits discarded
            for (ll n: nums){
                t.insert(mask & n);
            }
            
            // now find out if there are two prefix with different i-th bit
            // if there is, the new max should be current max with one 1 bit at i-th position, which is candidate
            // and the two prefix, say A and B, satisfies:
            // A ^ B = candidate
            // so we also have A ^ candidate = B or B ^ candidate = A
            // thus we can use this method to find out if such A and B exists in the set 
            ll candidate = max | (1<<i);
            for (ll prefix : t){
                if (t.find(prefix ^ candidate) != t.end()){
                    max = candidate;
                    break;
                }
                
            }
        }
    
    cout << max << endl;
}