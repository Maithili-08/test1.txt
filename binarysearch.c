#include<stdio.h>
int main()  {
    int arr[25],n,i,key,low=0,high,mid;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    high=n-1;
    printf("Enter numbers in ascending order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("%d is at the position %d",key,mid+1);
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }

    }
    if(low>high)
    {
        printf("Not found");
    }
    return 0;
}