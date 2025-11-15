#include<stdio.h>
int main()
{
  int arr[] = {2, 3, 8, 7};
    int n = 4;
    int max = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Maximum element = %d", max);
    return 0;
}