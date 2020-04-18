#include<bits/stdc++.h> 
using namespace std; 

#define INT_SIZE 32 
  
struct TrieNode 
{ 
    int value;  
    TrieNode *arr[2]; 
}; 
  
TrieNode *newNode() 
{ 
    TrieNode *temp = new TrieNode; 
    temp->value = 0; 
    temp->arr[0] = temp->arr[1] = NULL; 
    return temp; 
} 
  
void insert(TrieNode *root, int pre_xor) 
{ 
    TrieNode *temp = root; 
  

    for (int i=INT_SIZE-1; i>=0; i--) 
    { 
        bool val = pre_xor & (1<<i); 
  
        if (temp->arr[val] == NULL) 
            temp->arr[val] = newNode(); 
  
        temp = temp->arr[val]; 
    } 
  
    temp->value = pre_xor; 
} 
  

int query(TrieNode *root, int pre_xor) 
{ 
    TrieNode *temp = root; 
    for (int i=INT_SIZE-1; i>=0; i--) 
    { 
        bool val = pre_xor & (1<<i); 
  
      
        if (temp->arr[1-val]!=NULL) 
            temp = temp->arr[1-val]; 

        else if (temp->arr[val] != NULL) 
            temp = temp->arr[val]; 
    } 
    return pre_xor^(temp->value); 
} 
  

int main() 
{ 
    int n; cin >> n;

    vector<long long int> nums(n);

    for(int i=0;i<n;i++) cin >> nums[i];

       int mask = 0;
        int ans = 0;
        for (int i = 60; i >= 0; --i) {
            unordered_set<long long int> s;
            mask += 1 << i;
            for (long long num : nums) {
                long long pre = num & mask;
                if (s.find(pre ^ (ans + (1 << i))) != s.end()) {
                    ans += 1 << i;
                    break;
                }
                s.insert(pre);
            }
        }

    cout << ans << endl;
} 