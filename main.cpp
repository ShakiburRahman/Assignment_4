#include <iostream>
#include "insertionsort.h"

using namespace std;

int main()
{

    int arr[]={14,33,27,10,35,19,48,44};
    int arrayInsertionSort[8];
//INSETION ARRAY
    cout<< "Using array-Insertionsort "<<endl;
    cout << "------------" << endl;
    insertion a;
    a.Insertion(arr,8);
    cout << "------------" << endl;
    cout<< "Using vector-Insertionsort "<<endl;
    cout << "------------" << endl;
    for(int index=0; index<8; index++)
        {
            arrayInsertionSort[index] = arr[index];
        }
     vector<int> vectorInsertionSort(arr,arr+sizeof(arr)/sizeof(int));
    a.InsertionVector(vectorInsertionSort);



    cout << "Hello World!" << endl;
    return 0;
}

