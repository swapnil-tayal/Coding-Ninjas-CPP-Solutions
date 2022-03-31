// Check Case

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    char a;
    cin>> a;
    if(a >='a' && a <='z'){
        cout<<"0";
    }
    else if(a >= 'A' && a <= 'Z'){
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
}



// Sum of Even Numbers till N

#include<iostream>
using namespace std;


int main(){

    int N;
    cin>>N;
    int sum=0;
    for (int i=2; i<N+1; i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
  
}



// Fahrenheit to Celsius Table

#include<iostream>
using namespace std;


int main(){
  	int S,E,W;
    cin>>S;
    cin>>E;
    cin>>W;
    int C;
    while(S<=E){
    
        C=(S-32)*5/9;
        
        cout<<S<<"\t"<<C<<endl;
        S=S+W;
    }
}




// Number Pattern 1

#include<iostream>
using namespace std;


int main(){

	int n;
    cin>>n;
    for (int i=0; i<n+1; i++){
        int p=i;
        for (int j=0; j<i; j++){
            cout<<p++;
        }cout<<endl;
    }
  
}

// Number Pattern 2
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
        }int p = i; 
        for (int j=0; j<i; j++){
            cout<<p++;
        }cout<<endl;
    }
}


// Start Pattern

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
        }for (int j=0; j<(2*i - 1); j++){
            cout<<"*";
        }cout<<endl;
    }
  
}


// Total Salary#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    double bsal;
    char grade;
    cin>>bsal>>grade;

	double totalsal1;
    double totalsal;
    double hra = (0.20*bsal);
    double da = (0.50*bsal);
    double pf= (0.11*bsal);
    double allow;
    
	if(grade=='A'){
		allow = 1700;
    }else if(grade=='B'){
		allow = 1500;
    }else{
		allow = 1300;
    }
   	totalsal1=(bsal+hra+da+allow);
	totalsal=totalsal1-pf;
	cout<<llround(totalsal);
	
}




// Sum of even & odd

#include<iostream>
using namespace std;

int main() {
    int num;
    int sumeven = 0;
    int sumodd = 0;
    int digit;
    cin>>num;

    while ( num > 0){
        digit = num % 10;
        if (digit % 2 == 0){
          sumeven += digit;
        }else{
          sumodd += digit;
        }num = num/ 10;
    }cout << sumeven << " " <<sumodd;
	
}





// Find power of a number

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int x,n;
    cin>>x>>n;
    int i=1;
    int ans=x;
 	if(n==0){
        ans=1;
        cout<<ans;
    }else{
        while(i<n){
            ans=ans*x;
            i=i+1;
        }cout<<ans;
    }
}
