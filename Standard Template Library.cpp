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
