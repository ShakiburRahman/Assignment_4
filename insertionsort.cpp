#include "insertionsort.h"
#include<iostream>
using namespace std;
#include <vector>

void insertion::Insertion(int arr[], int arr_size){
    if( arr_size>1){
        int size = arr_size;
        for(int index=1;index<size; ++index)
        {int number= index -1;
            int key = key =arr[index];
            while (number>=0 && arr[number]>key)
            {
                arr[number+1]= arr[number];
                --number;
            }
            arr[number-1]=key;
            for(int index2=0; index2<arr_size; index2++){
                cout<<arr[index2]<<" ";
              }
            cout<<""<<endl;
        }
}
}



void insertion::InsertionVector(vector<int> &data){
    if(data.size()>1){
        for(int index=1; index< data.size();index++){
            int number = index-1;
            int key = data[index];
            while (number>=0 && data[number]> key){
                data[number+1]= data[number];
                number--;

        }
            data[number-1]= key;
            for(vector<int>::iterator value = data.begin(); value!=data.end();++value){
                cout<<*value<<" ";
                cout <<""<<endl;
            }
    }
}
