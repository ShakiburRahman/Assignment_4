#include "bubbleSort.h"
#include<iostream>

using namespace std;

void bubbleSort:: BubbleSorter(int *array, int size){
    bool flag = true;
    int number= 0;
    int temp;
    while (flag){
        flag= false;
        number++;
        for(int index=0; index<size-number; ++index ){
            if(array[index]> array[index+1]){
                temp= array[index];
                array[index]= array[index+1];
                array[index+1]=temp;

                for(int index=0;index<8; index++ ){
                    cout<< array[index]<<" ";
                }
                cout<<""<<endl;
                flag= true;
            }
        }
    }
}


void bubbleSort::BubbleSorterVector(vector<int> &data){
    bool flag = true;
    int number= 0;
    int temp;
    while (flag){
        flag= false;
        number++;
        for(int index=0; index<data.size()-number; ++index ){
            if(data[index]> data[index+1]){
                temp= data[index];
                data[index]= data[index+1];
                data[index+1]=temp;
                flag=true;
                for(vector<int>::iterator value= data.begin();value !=data.end(); ++value){
                    cout<< *value<<" ";
                }
                cout<<""<<endl;
            }
