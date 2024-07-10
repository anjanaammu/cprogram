#include<stdio.h>
int main()
{
    int n=5;
    int arr[]={5,10,15,20,25};
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("maximum element in the array:%d",max);
    return 0;

}