/*
* Helen Wubneh
* CSCI 3110-001
* Project #1
* Due: 01/30/20
*/

 
#include <iostream>
#include <fstream>
using namespace std;

/* a function  prototype
* allocateArray
* takes in an int pointer array, int pointer size,
* and double persent
*returns an array
*/
int *allocateArray(int *arr,int *size, double percent);
/* calcAvg
* takes and int pointer array and int size
* returns average
*/
double calcAvg(int* arr,int size);
int main()
{   
    
    int* arr=NULL;
    int size;
    int *sizepointer = &size; 
    float percent=0.0;
    int i=0;
    int number=0;
    //declare an input file
    ifstream myFile;

    //declare an output file
    ofstream outFile;
    myFile.open("nums.txt");
    outFile.open("out.txt");

    //input a size from a file
    myFile>>size;
    
    //check the size
   if((size>=100&&size<=350)&&(size%50==0))
        {
        	
        }
    else
        {
            cout << "Error!" << endl;
            exit(1);
        }
        //allocate the  array
        arr= allocateArray(arr,sizepointer,percent);
        outFile << size << endl;

        //input the percent from the file
        myFile >> percent;
        
        //input the number from the file into the array
        while(myFile >> number)
        {
            arr[i]=number;
            i++;
            if(i==*sizepointer)
            {   
                //output the average
                outFile<<i<<" "<<calcAvg(arr,size)<<endl;
                arr = allocateArray(arr,sizepointer,percent);
            }
        }
      outFile << size << " " << i<<" " <<calcAvg(arr,i) <<endl;
      delete[] arr;
    
    //close the input and the output file
    myFile.close();
    outFile.close();
    return 0;
    
}
//define the function
int * allocateArray(int *arr,int * size, double percent)
{   
    //declare a new size and increment the size
    int newsize= *size * (1+percent);

   //declare a new array
    int* newArray= new int[newsize];

    if(arr!=NULL)
    {
        for(int i=0;i<newsize;i++)
            {
               //copy the old array into the new array
                newArray[i]=arr[i];
            }
    }
    delete[] arr;
    
    *size = newsize;
    return newArray;
}
//define the calcAvg function
double calcAvg(int* arr,int size)
{   
    //calculate the sum and return the average
    double sum=0.0;
    for(int i=0;i<size;i++)
    {
        sum=sum +arr[i];
    
    }
    return sum/size;
}
    
