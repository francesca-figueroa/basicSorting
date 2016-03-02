//
//  Sort.hpp
//  basicSort
//
//  Created by Francesca Figueroa on 3/2/16.
//  Copyright © 2016 Isabella Figueroa. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp

#include <stdio.h>

class Sort
{
public:
    Sort();
    ~Sort();
    void printMenu();
    void printArr(int *arr, int arrSize);
    void mergeSort();
    void insertionSort(int *arr, int arrSize);
    void insertionPrint(int *arr, int arrSize, int j);
    void selectionSort();
    void quickSort();
    void bubbleSort();
protected:
private:
};


#endif /* Sort_hpp */
