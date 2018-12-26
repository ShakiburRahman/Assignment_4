#include "mergesort.h"
#include<iostream>

using namespace std;

void Merger(int arr[], int low, int mid, int high){
int *temp= new int[high-low+1];
int index= low, key=mid+1;
int lead=0;

while(index <= mid && key <=high)
   {
       if(arr[index] <= arr[key])
           temp[lead++] = arr[index++];
       else
           temp[lead++] = arr[key++];
   }
while(index <= mid)
       temp[lead++] = arr[index++];
while(key<= high)
       temp[lead++] = arr[key++];
   for(lead= 0, index= low; index <= high; ++index, ++lead)
       arr[index] = temp[lead];
   delete []temp;
   for(int index=0; index<8; index++)
   {
       cout<<arr[index]<<" ";
   }
}


   void MergeSortHelper(int arr[], int low, int high){
       int mid;
       if(low < high)
       {
           mid = (low + high) / 2;
           MergeSortHelper(arr, low, mid);
           MergeSortHelper(arr, mid+1, high);
           Merger(arr, low, mid, high);
       }
   }

   void MergeSort::MergeSorter(int arr[], int arr_size)
   {
       cout<<"Showing Here Every Step for Merge Sort Using Array Base"<<endl;
       MergeSortHelper(arr, 0, arr_size-1);
   }











