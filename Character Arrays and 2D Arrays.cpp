// Check Palindrome

#include<string.h>
bool checkPalindrome(char str[]){

    int i=0;
    int j = strlen(str) - 1;
    while(j > i){
        if(str[i] != str[j]){
            return false;
        }   
        i++;
        j--;
    }    
    return true;
}


// Replace Character

#include<string.h>
void replaceCharacter(char input[], char c1, char c2) {
    int i=0;
    int j = strlen(input);
    for(i; i < j;i++){
        if(input[i] == c1){
            input[i]=c2;
        }
    }
}

// Trim Spaces

#include<string.h>
void trimSpaces(char input[]) {

    int count = 0;
    int len = strlen(input);
    for(int i = 0; input[i]; i++){
        if(input[i] != ' '){
            input[count]=input[i];
            count++;
        }
    }
    input[count] = '\0';
}

// Reverse Word Wise
int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        len++; 
    }
    return len;
}
void reverse(char input[], int start, int end) {
    int i = start, j = end;
    while(i < j) {
        char temp = input[i];
        input[i] = input[j]; 
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseCompleteString(char input[]) { 
    int i = 0, j = length(input) - 1;
    while(i < j) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseStringWordWise(char input[]) {
    reverseCompleteString(input);
    int start = 0, end = 0, i;
    for(i = 0; input[i] != '\0'; i++) { 
        if(input[i] == ' ') {
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
        }
    }
    end = i - 1;
    reverse(input, start, end); 
}



// Print All Substrings

#include<cstring>
void printSubstrings(char str[]){
    for(int start = 0; str[start] != '\0'; start++){
        for(int end = start; str[end] != '\0'; end++){
            for(int i = start; i <= end; i++){
                cout << str[i];
            }
            cout << endl;
        }
    }
}


// Column Wise Sum

#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++ ){
            cin>>arr[i][j];
        }
    }
    int j = 0;
    while(j < col){
    	int i = 0;
    	int col1 = 0;
    	for(i; i < row; i++){
        	col1 = col1 +arr[i][j];
    	}
    	j++;
    	cout<< col1 << " ";
	}
}

// Largest Row or Column

void findLargest(int **input, int n, int m)
{
    //Write your code here
    int sumr = 0;
    int maxr = -2147483648;
    int indexr = 0;
    for (int i = 0; i < n; i ++){
        int sumr = 0;
        for (int j = 0 ; j < m; j++){
            sumr += input[i][j];
        }if (sumr > maxr){
            maxr = sumr;
            indexr = i;
        }
    }
    int sumc = 0;
    int maxc = -2147483648;
    int indexc = 0;
    for (int j = 0; j < m; j++){
        int sumc = 0;
        for (int i = 0;i < n; i++){
            sumc += input[i][j];
        }if (sumc > maxc){
            maxc = sumc;
            indexc = j;
        }
    }
    
    if (maxc > maxr){
        cout<<"column"<<" "<<indexc<<" "<<maxc;
    }else{
        cout<<"row"<<" "<<indexr<<" "<<maxr;
    }
}


// Wave Print

void wavePrint(int **input, int nRows, int mCols)
{
    for(int i = 0 ;i < mCols; i++)
		{
			if(i % 2 == 0)
			{
				for(int j = 0; j < nRows; j++)
				{
					cout << input[j][i] << " ";
				}
			}
			else
			{
				for(int j = nRows - 1; j >= 0; j--)
				{
					cout << input[j][i] << " ";
				}
			}
		}
}


// Spiral Print


void spiralPrint(int **input, int row, int col)
{
    //Write your code here
    int i, k = 0, l = 0; 
    while (k < row && l < col) { 
        for (i = l; i < col; i++) { 
            cout << input[k][i] << " "; 
        } 
        k++; 
  
        for (i = k; i < row; i++) { 
            cout << input[i][col - 1] << " "; 
        } 
        col--; 
  
        if (k < row){ 
            for (i = col - 1; i >= l; i--) { 
                cout << input[row - 1][i] << " "; 
            } 
            row--; 
        } 
  
        if (l < col){ 
            for (i = row - 1; i >= k; i--) { 
                cout << input[i][l] << " "; 
            } 
            l++; 
        } 
    } 
}


// Check Permutation

bool isPermutation(char input1[], char input2[]) {
    int freq[256] = {0};
    for(int i = 0; input1[i] != '\0'; i++) { 
        int index = input1[i];
        freq[index]++; 
    }
    for(int i = 0; input2[i] != '\0'; i++) {
        int index = input2[i];
        freq[index]--; 
    }
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) { 
            return false;
        }
    }
    return true;
}


// Remove Consecutive Duplicates

void removeConsecutiveDuplicates(char input[]) { 
    int nextIndex = 1;
    char lastChar = input[0];
    for(int i = 0; input[i] != '\0';) { 
        if(input[i] == lastChar) { 
            i++; 
        } 
        else {
            input[nextIndex] = input[i];
            nextIndex++; 
            lastChar = input[i];
            i++;
        }
    }
    input[nextIndex] = '\0';
}


// Reverse Each Word

void reverse(char input[], int start, int end){
    int i = start, j = end;
    while(i < j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseEachWord(char input[]){
    int start = 0, end = 0, i;
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] == ' '){
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
        }
    }
    end = i - 1;
    reverse(input, start, end);
}


// Remove character

#include<cstring>
void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int j, n = strlen(input); 
    for (int i=j=0; i<n; i++) 
       if (input[i] != c) 
          input[j++] = input[i]; 
      
    input[j] = '\0'; 
}

// Highest Occuring Character

char highestOccurringChar(char input[]) {
    int freq[256] = {0}; 
    int indices[256];
    for(int i = 0; i < 256; i++) { 
        indices[i] = -1; 
    } 
    for(int i = 0; input[i] != '\0'; i++) { 
        int index = input[i];
        freq[index]++;
        if(indices[index] == -1) {
            indices[index] = i;
        }
    } 
    int maxIndex = 0;
    for(int i = 0; i < 256; i++) { 
        if(freq[i] > freq[maxIndex]) {
            maxIndex = i; 
        } 
        else if(freq[i] == freq[maxIndex]) {
            if(indices[i] < indices[maxIndex]) {
                maxIndex = i;
            }
        }
    }
    return (char)maxIndex;
}


// Compress the String

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// #include "solution.h"

string getCompressedString(string &input)
{
    // Write your code here.
    // Write your code here
    int size = 1e6;
    char compressString[size];
    for (int i = 0; i <= input.length(); i++)
    {
        compressString[i] = input[i];
    }
    int lastIndex = 0;
    int count = 49;
    for (int i = 1; i <= strlen(compressString); i++)
    {
        if (compressString[i] == compressString[lastIndex])
        {
            count++;
        }
        else
        {
            if (count == 49)
            {
                compressString[++lastIndex] = compressString[i];
                count = 49;
            }
            else if (i == strlen(compressString))
            {
                compressString[lastIndex + 1] = count;
                compressString[lastIndex + 2] = '\0';
            }
            else
            {
                compressString[lastIndex + 1] = count;
                compressString[lastIndex + 2] = compressString[i];
                lastIndex = (lastIndex + 2);
                count = 49;
            }
        }
    }
    return compressString;
}
