//============================================================================
// Name        : excercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>


using namespace std;
class myVector 
{
    private:
    
        int *arr;
        int len;
    
    public:
    //constructor with initializer list
        myVector(int len_ = 20, int defaultValue = 0):len(len_)
        {
            this->arr  = new int[len_];
            for (int i = 0 ; i < len_ ; i++)
            {
                this->arr[i] = defaultValue;
            }
            
        }
        
    //destructor
        ~myVector()
        {
            //don't forget brackets
            delete[] this->arr;
        }
        
        void printArray()
        {
            for (int i = 0 ; i < this->len ; i++)
            {
                cout<< arr[i];
                cout<< endl;
            }
        }
    
    
};

int main()
{
    myVector vec1;
    vec1.printArray();
    return 0;
    //destructor will take place and delete the dynamically allocated array
}