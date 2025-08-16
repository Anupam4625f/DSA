#include <stdio.h>

//merge two subarrays of arr[]
//1st SubArray is arr[l..m]
//2nd SubArray is arr[m+1..r]
void merge(int arr[],int l,int m,int r) {
  int i,j,k;
  int n1=m-l+1;
  int n2=r-m;
  
//create Temp Subarrays   
  int L[100],R[100];
 //Copy data to Temp arrays L[n1] & R[n2]
  for (i=0;i<n1;i++) {
     L[i]=arr[l+i];
  }
  
  for (j=0;j<n2;j++) {
     R[j]=arr[m+1+j];
  }
//Merge Temp Arrays back into l..R
  i=0;
  j=0;
  k=l;
  
  while(i<n1&&j<n2) {
    if (L[i]<R[j]) {
      arr[k]=L[i];
      i++;
    }
    else {
       arr[k]=R[j];
       j++;
    }
    k++;
  }
  //Copy the remaining elements of L[]
    while (i<n1) {
      arr[k]=L[i];
      i++;
      k++;
    }
  
    while (j<n2) {
      arr[k]=R[j];
      j++;
      k++;
    }
  
}
// l = left index & r = right index 
void MergeSort (int arr[], int l, int r) {
   if(l<r) {
   int m=l+(r-l)/2;
   MergeSort(arr,l,m);
   MergeSort(arr,m+1,r);
   merge(arr,l,m,r);
   }
}


void PrintArray(int arr[],int size) {
  for(int i=0;i<size;i++){
    printf(" %d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int n;
  printf("\n Enter the number of elements :");
  scanf("%d",&n);
  
  int arr[100];
  
  printf("\n Enter the %d Elements :",n);
  for(int i=0;i<n;i++) {
  printf("\n Element %d :", i+1);
    scanf("%d",&arr[i]);
  }
  
  printf("\n Original Array :");
  PrintArray(arr,n);
  
  MergeSort(arr,0,n-1);
  printf("Sorted Array:");
  PrintArray(arr,n);
  
  return 0;
}