//
//  Sort.cpp
//  basicSort
//
//  Created by Francesca Figueroa on 3/2/16.
//  Copyright © 2016 Isabella Figueroa. All rights reserved.
//

#include "Sort.hpp"
#include <iostream>

using namespace std;

Sort::Sort()
{
    //ctor
}

Sort::~Sort()
{
    //dtor
}

void Sort::printMenu(){
    
    cout <<  "Select the sorting method you would like to see, then press enter." << endl;
    cout << endl;
    cout << "1. Merge Sort " << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Selection Sort" << endl;
    cout << "4. Quick Sort" << endl;
    cout << "5. Bubble Sort" << endl;
    cout << "6. Quit" << endl << endl;
}

void Sort::printArr(int *arr, int arrSize){
    
    cout << "[" ;
    for(int i = 0; i < arrSize-1 ; i++){
        cout << arr[i] << ", ";
    }
    
    cout << arr[arrSize-1] << "]" << endl;
    
}


void Sort::mergeSort(int *arr, int p, int r){

}

void Sort::insertionSort(int *arr, int n){
    
    //The element at index j is the element to be inserted
    //into the "sorted portion" of the array
    
    //Consider element 0 of the array to already be sorted
    
    for(int j = 1; j < n; j++) {
        
        int current = arr[j];
        int i = j-1;    //Element in the sorted portion of array
        insertionPrint(arr, n, j);
        
        while(current < arr[i] && i >= 0){
            
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = current;
    }
    printArr(arr, n);
}

void Sort::insertionPrint(int *arr, int n, int j){
    cout << "[" ;
    //Print sorted portion of array
    for(int i = 0; i < j ; i++){
        cout << arr[i] << ", ";
    }
    
    if( j == n-1){
        cout << " | " << arr[j] << "]" << endl;
    }
    else {
        cout << " | " << arr[j] << " | ";
    }
    //Print Unsorted portion
    
    for(int i = j+1; i < n-1 ; i++){
        cout << arr[i] << ", ";
    }
    
    if(j != n-1){
       cout << arr[n-1] << "]" << endl;
    }
    
}

void Sort::selectionSort(){
    
}

void Sort::quickSort(int *arr, int start, int end){
    if (start < end) {
        int q = partition(arr, start, end);
        quickSort(arr,start, q-1);
        quickSort(arr, q+1, end);
    }
    printArr(arr, end);
}
int Sort::partition(int *arr, int start, int end){
    int x = arr[end];
    int i = start - 1;
    
    for(int j = start; j < end-1; j++){
        if (arr[j] <= x){
            i++;
            //Swap arr[i] and arr[j]
            int temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;
        }
    }
    //Swap arr[i+1] and A[end]
    int temp2 = arr[i+1];
    arr[i+1] = arr[end];
    arr[end] = temp2;
    
    
    return i+1;
}

void Sort::bubbleSort(){
    
}
