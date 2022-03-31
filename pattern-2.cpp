// Mirror Number Pattern

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for (int i=1; i<n+1; i++){
        for (int j=0; j<(n-i); j++){
            cout<<" ";
        }for (int j=0; j<i; j++){
            cout<<j+1;
        }cout<<endl;
    }
  
}




//  Inverted Number Pattern

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for (int i=1; i<n+1; i++){
        int p = n - i + 1;
        for (int j=0; j<(n-i+1); j++){
            cout<<p;
        }cout<<endl;
    }
  
}


//  Star Pattern

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for (int i=1; i<n+1; i++){
        for (int j=1; j<(n-i+1); j++){
            cout<<" ";
        }for (int j=0; j<(2*i - 1); j++){
            cout<<"*";
        }cout<<endl;
    }
  
}


// Triangle of Numbers

#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int p;
    for (int i=1; i<n+1; i++){
        for (int j=1; j<(n-i+1); j++){
            cout<<" ";
        }p = i;
        for (int j=1; j<i+1; j++){
            cout<<p++;
        }p = 2*i - 2;
        for (int j=1; j<i; j++){
            cout<<p--;
        }cout<<endl;
    }
    
}


//  Diamond of stars

#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int a = n/2;
    int b = a-1;
    for (int i=1; i<a+2; i++){
        for(int j=1; j<(a-i+2); j++){
            cout<<" ";
        }for(int j=0; j<(2*i - 1); j++){
            cout<<"*";
        }cout<<endl;
    }
    for (int i=b+1; i>0; i--){
        for(int j=1; j<(a-i+2); j++){
            cout<<" ";
        }for(int j=0; j<(2*i - 1); j++){
            cout<<"*";
        }cout<<endl;
    }
}
