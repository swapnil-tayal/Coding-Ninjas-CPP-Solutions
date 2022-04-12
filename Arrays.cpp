// Array Sum

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    
    for (int i=0; i<n; i++){
        cin>>arr[0];
        sum += arr[0];
    }cout<<sum;
}



// Linear Search

int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    for (int i=0; i<n; i++){
        if (arr[i] == x){
            return i;
        }
    }return -1;
}


// Arrange Numbers in Array

 void arrange(int arr[],int n){
    int j = 0;
	int i = 0;
    
    while(j <= n){
        
        if( j % 2 != 0){
            arr[i] = j;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    j = n;
    while(j >= 1){
        
        if(j % 2 == 0){
            arr[i] = j;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
}


// Swap Alternate

void swapAlternate(int arr[],int size){
	
    int i = 0;
    int j = i + 1;
    
    while(j < size){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i = i + 2;
        j = i + 1;
    }
}


// Find Unique

#include<climits>
int findUnique(int * arr, int size){
    for(int i=0; i<size;i++){
        int j;
        for(j=0;j<size;j++){
            if(i!=j){
                if(arr[i] == arr[j]){
                    break;
               }
            }
        }
        if(j==size){
            return arr[i];
        }
    }
    return INT_MIN;
}


// Find Duplicate

int duplicateNumber(int arr[], int size) {
    int duplicate;
    for(int i = 0; i < size - 1; ++i) {
        for(int j = i + 1; j < size; ++j) {
            if(arr[i] == arr[j]) { 
                duplicate = arr[i];
                break;
            }
        }
    }
    return duplicate;
}


// Array Intersection
void intersection(int input1[], int input2[], int size1, int size2) {
   
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if( input1[i] == input2[j] ){
                cout << input2[j]<<" ";
                input2[j] = -100000000;
                break;
            }
        }
    }
}


// Pair Sum
int pairSum(int input[], int size, int x) {
    
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            if(i!=j){
                if((input[i] + input[j]) == x){
                    count += 1;
                }
            }
        }
    }return count;
}


// Triplet Sum
int tripletSum(int *input, int size, int x)
{
	int count = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            for (int k = j+1; k<size; k++){
                if((input[i] + input[j]) + input[k] == x){
                    count += 1;  
                }
            }
        }
    }return count;
}


// Sort 0 1

void sortZeroesAndOne(int arr[], int n){    
     int count = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == 0) 
            count++; 
    } 
    for (int i = 0; i < count; i++){
        arr[i] = 0; 
    }
    for (int i = count; i < n; i++) {
        arr[i] = 1; 
    }
}
