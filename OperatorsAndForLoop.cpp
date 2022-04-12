// Nth Fibonacci Number

#include<iostream>
using namespace std;


int main(){
    //Write your code here. 
    int n;
    cin>>n;
    if (n == 0){
        cout<<0;
        return 0;
    }
    
    if (n == 1){
        cout<<1;
        return 0;
    }
    int a=0;
    int b=1;
    int c=a+b;
    
    for (int i=1; i<n-1; i++){
        a = b;
        b = c;
        c = a + b;
    }cout<<c;
}



// All Prime Numbers

#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    
    int n;
    cin>>n;
    
    bool flag;
    for (int i=2; i<=n; i++){
        flag = true;
        for (int j=2; j<i; j++){
            if (i % j == 0){
                flag = false;
            }
        }if (flag){
            cout<<i<<endl;
        }
    }
  
}



// Count Characters

#include<iostream>
using namespace std;
#include  <bits/stdc++.h>

int main(){
 
    char c;
    cin>>c;
    int small = 0;
    int num = 0;
    int left = 0;
    
    while (c != '$'){
        if (c >= 'a' && c <= 'z'){
            small++;
        }else if (c >= '0' && c <= '9'){
            num++;
        }else{
            left++;
        }cin.get(c);
    }cout<<small<<" "<<num<<" "<<left;
  
}


// Sum or Product


#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n;
    cin>>n;
    
    int c;
    cin>>c;
    
    if (c == 1){
        int sum = 0;
        for (int i=1; i<=n; i++){
            sum += i;
        }cout<<sum;
    }else if(c == 2){
        int p = 1;
        for (int i=2; i<=n; i++){
            p *= i;
        }cout<<p;
    }else{
        cout<<-1;
    }
	
}



// Terms of AP

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
    int n;
    cin>>n;
    
    int i=1;
    int j=1;
    
    while (i <= n){
        int s = 3*i + 2;
        
        if (s%4 != 0){
            cout<<s<<" ";
        }else{
            n++;
        }i++;
        
    }
    
}


// Reverse of a number

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n;
    cin>>n;
    int rev = 0;
    int digit;
    
    while (n > 0){
        digit = n%10;
        
        rev = rev*10 + digit;
        n = n/10;
    }cout<<rev;
	
}



// Binary to decimal


#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n;
    cin>>n;
    int digit = 0;
    int value;
    int base = 1;
    
    while (n > 0){
        
        digit = n%10;
        value += digit * base;
        base = 2*base;
        n = n/10;
        
    }cout<<value;
	
}


// Decimal to Binary

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n;
    cin>>n;
    long binary = 0;
    long pow = 1;
    
    while (n > 0){
        int digit = n%2;
        binary += digit * pow;
        pow *= 10;
        n = n/2;
    }
    cout<<binary;
}


	
// Check Number sequence

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    int count = 2, current;
    bool isDec = true; 
    while(count <= n) {
        cin >> current;
        if(current == prev) {
            cout << "false";
            return 0;
        } 
        count++;
        if(current < prev) { 
            if(isDec == false) {
                cout << "false";
                return 0;
            }
        }
        else {
            if(isDec == true) {
                isDec = false;
            }
        }
        prev = current;
    }
    cout << "true";
}
    cout<<binary;
}


