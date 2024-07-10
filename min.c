#include<stdio.h>
int main()
{
    int n=5;
    int arr[]={5,10,15,20,25};
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("maximum element in the array:%d",min);
    return 0;

}