#include <stdio.h>

int MaxIndex (int arr[], int n){
    int index=0;
    for(int i=1 ; i<n ; i++){
        if(arr[i]>arr[0]){
            arr[0]=arr[i];
            index=i;
       } 
    }
    return index;
} 

int MinIndex (int arr[], int n){
    int Index=0;
    for(int i=1 ; i<n ; i++){
        if(arr[i]<arr[0]){
            arr[0]=arr[i];
            Index=i;
        }
    }
    return Index;
}

float Average(int arr[], int n){
    float sum=0;
    for(int i=0 ; i<n ; i++){
        sum+=arr[i];
     }
     return (float)sum/n;
 }

 int displayArray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}

int reverseArray(int arr[], int n){
    int start=0 , end=n-1;
    for( int i=0 ; i<n/2 ; i++){
        int temp=arr[start];
        arr[start]=arr[end];
        arr [end]=temp;
        start++;
        end--;
    }
    return 0;
}

int sortArray(int arr[], int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}

int linearSearch(int arr[], int n, int key){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

