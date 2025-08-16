#include<stdio.h>

void insertionSort(int arr[], int n) {
  for (int i=1;i<n;i++) {
    int key=arr[i];
    int j=i-1;
    
    while(j>=0 && arr[j]>key) {
      arr[j+1]=arr[j];
      j=j-1;;
    }
    arr[j+1]=key;
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
   
   
   
   insertionSort(arr,n);
   printf("\n Sorted Array after the selection Sort :");
   printarray (arr,n);
   return 0;
 }