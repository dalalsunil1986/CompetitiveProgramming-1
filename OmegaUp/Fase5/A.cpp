
#include <bits/stdc++.h>  
using namespace std;  
  unordered_map<string, bool> lookup;

// To find subarray with maximum sum  
// less than or equal to sum  
bool subsetSum(vector<pair<int,int>> arr, int n, int sum)
{
	// return true if sum becomes 0 (subset found)
	if (sum > 0){
        cout << sum << endl;
    }
		

	// base case: no items left or sum becomes negative
	if (n < 0 || sum < 0)
		return false;

	// construct an unique map key from dynamic elements of the input
	string key = to_string(n) + "|" + to_string(sum);

	// if sub-problem is seen for the first time, solve it and
	// store its result in a map
	if (lookup.find(key) == lookup.end())
	{
		// Case 1. include current item in the subset (arr[n]) and recur
		// for remaining items (n - 1) with remaining sum (sum - arr[n])
		bool include = subsetSum(arr, n - 1, sum - arr[n].second);

		// Case 2. exclude current item n from subset and recur for
		// remaining items (n - 1)
		bool exclude = subsetSum(arr, n - 1, sum);

		// assign true if we can get subset by including or excluding the
		// current item
		lookup[key] = include || exclude;
	}

	// return solution to current sub-problem
	return lookup[key];
}

// Driver program to test above function  
int main()  
{  
    int n; cin >> n;

    while(n!=-1){
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int a,b; cin >> a >>b;
        v.push_back({a,b});
    }

    int a; cin >> a;

    int total =0;
    for(int i=0;i<a;i++){
        int d; cin >> d;
        subsetSum(v,n,d);
    }
    cout << total << endl;
        
    cin >> n;
    }
    return 0;  
}  