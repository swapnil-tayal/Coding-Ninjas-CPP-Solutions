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


