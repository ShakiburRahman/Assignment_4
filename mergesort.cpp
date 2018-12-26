#include "mergesort.h"
#include<iostream>

using namespace std;

void MergeSorter(int arr[],int arr_size){
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
   cout<<""<<endl;








}
