// 1st

#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col) {
	// Write your code here
    
    for (int i=0; i<row; i++){
        int s = row-i;
        while(s--){
        	for (int j=0; j<col; j++){
            	cout<<input[i][j]<<" ";
        	}cout<<endl;
    	}
    }
}


// 2nd

#include <cctype> 
#include <cstring> 
int count(char arr[]){    
    int count=0;    
    for (int i=0;arr[i]!='\0';i++){    
        count++;    
    }    
    return count;    
} 
void minLengthWord(char arr[], char output[]){ 
 	int n=count(arr);   
    int i=0; 
    int minwordlength=99999999; 
    char arr2[100]; 
    for (i;i<n;i++){   
        int j=0;   
        char arr1[100];   
        while(!isspace(arr[i]) and i<n){    
            arr1[j]=arr[i];   
            j++;   
            i++;   
        }   
        arr1[j]='\0';   
        int word_length=count(arr1); 
        if  (word_length<minwordlength){ 
            minwordlength=count(arr1); 
            strcpy(arr2,arr1); 
             
        } 
    } 
    strcpy(output,arr2); 
}

// 3rd

void Leaders(int* arr,int len)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown. 
	 * Don't print any extra line.
	*/
    bool flag = true;
    for (int i=0; i<len-1; i++){
        flag = true;
        for (int j=i+1; j<len; j++){
            if (arr[j] > arr[i]){
                flag = false;
                break;
            }
        }if (flag){
            cout<<arr[i]<<" ";
        }
    }cout<<arr[len-1]<<" ";
}
