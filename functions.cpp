// Fahrenheit to Celsius Table

void printTable(int S, int E, int W) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    
    int C;
    while(S<=E){
    
        C=(S-32)*5/9;
        
        cout<<S<<"\t"<<C<<endl;
        S=S+W;
    }
    
}




// Fibonacci Number

bool checkMember(int n){ 
    
    if (n == 0 || n == 1){
        return true;
    }
    
	int a = 0;
    int b = 1;
    int c = a+b;
    
    for (int i=0; i<n; i++){
        a = b;
        b = c;
        c = a + b;
        
        if (c == n){
            return true;
        }
    }return false;
}
