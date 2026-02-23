#include<stdio.h>
int main()
{
  int arr[20];
  int n;
  printf("Enter the size of the array ");
  printf("%d",&n);
  printf("Enter the elements of array ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int max = arr[0];
  for(int i = 1; i < n; i++) 
  {
    if(arr[i] > max)
        max = arr[i];
  }
  printf("Maximum element = %d", max);
  return 0;
}