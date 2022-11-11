#include<stdio.h>

void main()
{

    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n],i,j,key;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        key=a[i];
        j=j-i;
        while(j>0&&a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("sorted array: ",key)
}
