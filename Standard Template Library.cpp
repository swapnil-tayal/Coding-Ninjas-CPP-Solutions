// Next Geater Element

#include <vector>
#include <bits/stdc++.h>
#include <stack>

vector<int> nextGreaterElement(vector<int> input) {
    stack <int> s;
    int n = input.size();
    vector<int> arr;
    
    for (int i = n-1; i>=0; i--){
        if (s.empty()){
            arr.push_back(-1);
        }else{
            if (s.empty()){
                break;
            }
            while (!s.empty() && s.top() <= input[i]){
                s.pop();
            }
            if (s.empty()){
            	arr.push_back(-1);
            }else{
            	arr.push_back(s.top());
            }
        }
        s.push(input[i]);
    }
    reverse(arr.begin(), arr.end());
    return arr;
}


// k-largest element


#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k) {
    // Write your code here
    vector<int> ans;
    vector<int> res;
    
    for (int i = 0; i<n; i++){
        ans.push_back(arr[i]);
    }
    
    sort(ans.begin(), ans.end());
    
    for (int i = n-k; i<n; i++){
        res.push_back(ans[i]);
    }
    
    return res;
}
