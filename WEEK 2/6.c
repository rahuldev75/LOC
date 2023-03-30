#include<stdio.h>
int main(){ 
int arr[20],n;
printf("Enter the length of the array:");
scanf("%d", &n);
printf("enter the elements of the array: ");
for (int j=0;j<n;j++){
    scanf("%d", &arr[j]);
}
int MaxCount=0;
int MaxFreq;
for(int i=0;i<n;i++){
    int count=0; 
    for(int j=0;j<n;j++){
        int k=arr[i]; 
        if(arr[j]==k){
            count++;
}
    }
if (count >MaxCount){
    MaxCount=count;
    MaxFreq = arr[i];
}
}
printf("The most frequent no is : %d and it has occured %d times",MaxFreq, MaxCount);
}