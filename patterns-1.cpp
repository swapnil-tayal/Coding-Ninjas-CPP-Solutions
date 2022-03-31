// square pattern

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<n;
        }cout<<endl;
    }
  
}




// triangular star pattern

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for (int i=0; i<=n; i++){
        for (int j=0; j<i; j++){
            cout<<"*";
        }cout<<endl;
    }
  
}




// triangle number pattern

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for (int i=1; i<n+1; i++){
        for (int j=1; j<i+1; j++){
            cout<<i;
        }cout<<endl;
    }
  
}



// reverse number pattern

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for (int i=0; i<n+1; i++){
        int p=i;
        for (int j=0; j<i; j++){
            cout<<p--;
        }cout<<endl;
    }
  
}




// Alpha pattern

#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    char k;
    for (int i=0; i<n+1; i++){
        k = i -1 + 'A';
        for (int j =0; j<i; j++){
            cout<<k;
        }cout<<endl;
    }
    
}




// character pattern

#include<iostream>
using namespace std;


int main(){

  	int n;
    cin>>n;
    char k;
    char b;
    for (int i=0; i<n+1; i++){
        
        k = 'A' + i - 1;
        
        for (int j =0; j<i; j++){
          	b = k + j;
        	cout<<b;
            
        }cout<<endl;
    }
}





// Interesting Alphabets

#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
    int n;
    cin>>n;
    char k;
    char b;
    for (int i=0; i<n+1; i++){
        
        k = 'A' + n - i;
        
        for (int j =0; j<i; j++){
          	b = k + j;
        	cout<<b;
            
        }cout<<endl;
    }
    
}

