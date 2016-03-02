//
//  main.cpp
//  basicSort
//
//  Created by Francesca Figueroa on 3/2/16.
//  Copyright © 2016 Isabella Figueroa. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sort.hpp"

using namespace std;


int main()
{
    const int n = 8;
    int testArr[n] =  {7,2,9,100,1534,45,13,74};   //Unsorted array to be sorted
    Sort* sSort = new Sort;  //New instance of sort class
    
    string input;
    
    while(input != "6"){
        
        sSort->printMenu();
        getline(cin, input);
        
        if(input == "1"){
            
        }
        else if(input == "2"){
            //Insertion Sort
            
            cout << endl;
            cout << "----------------" << endl;
            cout << "Insertion Sort: " << endl;
            cout << "----------------"<< endl;
            cout << "We start with the array : " << endl << endl;
            
            sSort->printArr(testArr,n);
            
            cout << endl;
            
            sSort->insertionSort(testArr,n);
            
            cout << endl;
        }
        else if(input == "3"){
            
        }
        else if(input == "4"){
            
        }
        else if(input == "5"){
            
        }
        else if(input == "6"){
            
            cout << "K thnx bye" << endl;
        }
        else {
            
            cout << "Invalid Input." << endl;
            
        }
        
        
    }
    
    
    
    
    return 0;
}
