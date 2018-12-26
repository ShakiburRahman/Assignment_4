#include "selectionsort.h"
#include <iostream>
using namespace std;


void selectionsort::SelectionSorter(int arr[], int arr_size)
{
    cout<<"Showing Here Every Step for Selection Sort Using Array Base"<<endl;
    for(int index = 0; index < arr_size-1; ++index)
    {
        int Min = index;
        for(int index2 = index+1; index2<arr_size; ++index2)
            if (arr[index2] < arr[Min])
            Min = index2;

        int temp = arr[Min];
            arr[Min] = arr[index];
            arr[index] = temp;
        for(int index = 0; index<arr_size; index++)
        {
            cout<<arr[index]<<" ";
        }
        cout<<""<<endl;
    }
}
