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
