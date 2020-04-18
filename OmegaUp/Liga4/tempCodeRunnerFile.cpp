#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = acos(-1.0);
const ld E = exp(1.0);
 
const int MAXN = 2e7 + 10;
 
int trie[MAXN][2] = {0}, cnt = 1;
 
void insert(ll x)
{
	int to = 1;
 
	for(int i = 31; i >= 0; --i)
	{
		int val = (x >> i) & 1;
		if(!trie[to][val])
			trie[to][val] = ++cnt;
		to = trie[to][val];
	}
}
 
ll rfind(ll x)
{
 
	ll ret = 0;
 
	int to = 1;
 
	for(int i = 31; i >= 0; --i)
	{
		int val = ((x >> i) & 1) ^ 1;
 
		if(!trie[to][val])
			to = trie[to][val ^ 1];
		else
			to = trie[to][val], ret = ret + (1 << i);
	}
 
	return ret;
}
 
int main()
{

    
    ll n, x, ans = 0;
 
    cin >> n;
 
    for(int i = 0; i < n; ++i)
    {
    	cin >> x;
    	if(i)
    		ans = max(ans, rfind(x));
    	insert(x);
    }
 
    cout << ans << '\n';
 
    return 0;
}