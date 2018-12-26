#include <iostream>
#include "insertionsort.h"
#include "bubblesort.h"
#include "mergesort.h"
#include "selectionsort.h"
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


    cout<< "Using array-Bubblesort "<<endl;
    cout << "------------" << endl;

    int arrayBubbleSort[8];

      for(int index=0; index<8; index++)
        {
      arrayBubbleSort[index]=arr[index];
        }
        bubbleSort b;
        b.BubbleSorter(arrayBubbleSort,8);

        for(int index=0; index<8; index++)
        {
            cout<<arrayBubbleSort[index]<<" ";
        }
        cout << "------------" << endl;
        cout<< "Using vector-Bubblesort "<<endl;
        cout << "------------" << endl;

      vector<int>BubbleSorterVector(arr,arr+sizeof(arr)/ sizeof(int));
      b.BubbleSorterVector(BubbleSorterVector);
      for(int index=0; index<BubbleSorterVector.size(); index++){
            cout<< BubbleSorterVector[index]<<" ";}
        cout << "------------" << endl;



        cout<< "Using array-Mergesort "<<endl;
        cout << "------------" << endl;
        int arrayMergeSort[8];

       for(int index=0;index<8;index++)
           {
               arrayMergeSort[index]=arr[index];
           }
       mergesort c;
       c.MergeSorter(arrayMergeSort,8);
       for(int index=0;index<8;index++)
           {
               cout<<arrayMergeSort[index]<<" ";
           }

           cout << "------------" << endl;
           cout<< "Using vector-MergeSort "<<endl;
           cout << "------------" << endl;

       vector<int> vectorMergeSort(arr,arr+sizeof(arr)/sizeof(int));
       c.MergeSorterVector(vectorMergeSort);

       for(int index=0; index<vectorMergeSort.size(); index++)
              {
                  cout<<vectorMergeSort[index]<<" ";
              }



              cout << "------------" << endl;
              cout<< "Using Array-SelectionSort "<<endl;
              cout << "------------" << endl;

        int arraySelectionSort[8];

        for(int index=0; index<8; index++)
              {
                     arraySelectionSort[index] = arr[index];
                 }
                 selectionsort d;
                 d.SelectionSorter(arraySelectionSort,8);

                 for(int index=0; index<8; index++)
                 {
                     cout<<arraySelectionSort[index]<<" ";
                 }


                 cout << "------------" << endl;
                 cout<< "Using vector-SelectionSort "<<endl;
                 cout << "------------" << endl;

                 vector<int> vectorSelectionSort(arr,arr+sizeof(arr)/sizeof(int));
                 d.SelectioSorterVector(vectorSelectionSort);

                 for(int index=0;index<vectorSelectionSort.size();index++)
                 {
                     cout<<vectorSelectionSort[index]<<" ";
                 }
                 cout<<"\n"<<endl;












    cout << "Hello World!" << endl;
    return 0;
}

