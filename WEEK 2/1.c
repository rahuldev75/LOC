#include <stdio.h>

int occurs(int ar[],int n){
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=ar[i];
    }
    for(int j=0;j<n;j++){
        int count=0;
        for(int i=j;i<n;i++){
            if (ar[j]==brr[i]){
                count+=1;
                brr[i]=0;
            }
        }
        if (count!=0) printf("\t%d\t%d\n",ar[j],count);
    }
    
}

int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("\nEnter array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Elements :  Occurs\n");
    occurs(ar,n);
}