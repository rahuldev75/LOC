#include<stdio.h>

int main(){
int arr[30],n,k;
printf("Enter the length of the array:");
scanf("%d",&n);
printf("\nEnter the elements of the array:") ;
for (k=0;k<n;k++){
    scanf("%d",&arr[k]);
}
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]<0){ 
        if(i!=j){
            int temp=arr[i]; 
            arr[i]=arr[j]; 
            arr[j]=temp;
        }
        j++;
    }
}
for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
}
}