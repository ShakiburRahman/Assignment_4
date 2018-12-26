#include "selectionsort.h"
#include <iostream>
using namespace std;


void selectionsort::SelectionSorter(int arr[], int arr_size)
{

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

void selectionsort::SelectioSorterVector(vector <int> &data)
{

    int index,number,first_element,size = data.size();
    for(index=0; index<size+1; index++)
    {
        first_element = index;
        for(number = index+1; number < size; number++)
        {
            if (data[number] < data[first_element])
            first_element = number;
        }

        int temp = data[first_element];
            data[first_element] = data[index];
            data[index] = temp;

        for (vector<int>::iterator value = data.begin(); value != data.end(); ++value)
        cout << *value <<" " ;
        cout<<""<<endl;
     }

}
