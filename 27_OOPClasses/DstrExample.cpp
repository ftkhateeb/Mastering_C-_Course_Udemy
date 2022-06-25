//============================================================================
// Name        : excercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>

class myVector 
{
    private:
    
        int *arr;
        int len;
    
    public:
    //constructor with initializer list
        myVector(int len_ = 20, int defaultValue = 0):len(len_)
        {
            arr  = new int[len_];
            for (int i = 0 ; i < len ; i++)
            {
                arr[i] = defaultValue;
            }
            
        }
        
    //destructor
        ~myVector()
        {
            //don't forget brackets
            delete[] arr;
        }
    
    
};

int main()
{
    myVector vec1;
    return 0;
    //destructor will take place and delete the dynamically allocated array
}