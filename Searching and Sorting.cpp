// Code Binary Search

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int l = 0;
    int h = n-1;
    int m;
    
    while (l <= h){
        m = (l + h)/2;
        
        if (input[m] == val){
            return m;
        }else if (input[m] < val){
            l = m+1;
        }else{
            h = m-1;
        }
    }return -1;
}


// Code Bubble Sort

using namespace std;
void bubbleSort(int * input, int size){
    for(int i=0;i<size;i++){ 
        for(int j=0;j<size-i-1;j++){ 
            if(input[j]>input[j+1]){ 
                swap(input[j],input[j+1]); 
            }
        }
    }
}


// Code Insertion Sort

void insertionSort(int *input,int size){
    int i=1;
    int temp;
    while(i<size){
        temp=input[i];
        // scan left and insert ith element to its correct position to its left .
        int j=i-1;
        while(j>=0) {
            if(input[j]>temp)
                input[j+1]=input[j];
            else 
                break;
            j--;
        }
        input[j+1]=temp;
        i++;
    }
}


// Code Merge Two Sorted Arrays

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){ 
        if(arr1[i] < arr2[j]){ 
            ans[k++] = arr1[i++]; 
        }
        else{
            ans[k++] = arr2[j++]; 
        }
    }
    while(i < size1){ 
        ans[k++] = arr1[i++];
    }
    while(j < size2){ 
        ans[k++] = arr2[j++]; 
    }
}


// Push Zeros to end

void pushZeroesEnd(int arr[], int n){
    int count=0;
    for(int i=0; i<n;i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    while(count<n){
        arr[count]=0;    
        count++;
    }
    
}


// Rotate array

#include <iostream>
using namespace std;

// #include "solution.h"

void swapElement(int input[], int i, int j)
{
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}

void reverse(int input[], int start, int end)
{
    int i = start, j = end;
    while (i < j)
    {
        swapElement(input, i, j);
        i++;
        j--;
    }
}

void rotate(int *input, int d, int n)
{
    // Write your code here
    if (d >= n && n != 0)
    {
        d = d % n;
    }
    else if (n == 0)
    {
        return;
    }

    reverse(input, 0, n - 1);
    reverse(input, 0, n - d - 1);
    reverse(input, n - d, n - 1);
}



// Second Largest in array
int findSecondLargest(int arr[], int n){
    long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(arr[i] == arr[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max){
			    max = arr[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max && arr[i] != temp){
			    max = arr[i];
		    }
	    }
        return max;
	}
}

// Check Array Rotation


int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (input[mid] > input[right])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}


// Sort 0 1 2

#include<bits/stdc++.h>
using namespace std;
void sort012(int *A, int n) {
    int k = n - 1; 
    int i = 0;
    for (; i < n; ++i) {
        if (A[i] != 0) {
            break;
        }
    }
    int j = i;
    for (; i <= k; ++i) {
        if (A[i] == 0) {
            swap(A[j++], A[i]); 
        }
        else if (A[i] == 2) {
            swap(A[i--], A[k--]); 
        }
    }
}

// Sum of Two Arrays

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int i = size1-1, j = size2-1;
    int carry=0;
    int k;
    if(size1 < size2){
      k = size2;
    }
    else{
       k = size1;
    }
    while(k >= 0){
        output[k] = (input1[i]+input2[j]+carry)%10;
          carry = (input1[i]+input2[j]+carry)/10;
        if(i>0)
            i--;
        else{
            i=-1;
            input1[i] = 0;
        }
        if(j>0)
            j--;
        else{
            j=-1;
            input2[j] = 0;
        }
        k--;
    }
}
