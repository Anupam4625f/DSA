#include<stdio.h>

void Selectionsort (int arr[], int n) {
  for (int i=0;i<n-1;i++) {
    int min= i;
    for(int j=i+1;j<n;j++) {
      if (arr[j]<arr[min]) {
      min = j;
      }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]= temp;
  }
 }
 
 void printarray(int arr[],int n){
   for (int i=0;i<n;i++){
   printf(" %d ", arr[i]);
   }
   printf("\n");
 }
 
 int main () {
   int n;
   printf("Enter the number of Elements:");
   scanf("%d",&n);
   int arr[100];
   printf("\n Eneter %d elements :",n);
   for(int i=0;i<n;i++) {
   scanf("%d",&arr[i]);
   }
   printf("\n Original Array :");
   printarray(arr,n);
   
   Selectionsort (arr,n);
   printf("\n Sorted Array after the selection Sort :");
   printarray (arr,n);
   return 0;
 }