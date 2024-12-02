//Antoni Sniezek
//22531599
#include <iostream>
using namespace std;

class Matrix
{
    private:
        unsigned int r,c; //Number of rows in the matrix//Number of columns in the matrix
        int** data; //Pointer to a dynamically allocated 2D array for matrix data
    
    void allocate(){
            data = new int*[r]; //Allocate an array of row pointers (for each row)
            for(unsigned int i = 0; i < r; i++){
                data[i] = new int[c]; //For each row, allocate an array of columns
            }
        }

        //Private method to deallocate the memory used by the matrix
        void freeMemory(){
            for(unsigned int i = 0; i < r; i++){
                delete[] data[i]; //Deallocate each row's memory
            }
            delete[] data; //Deallocate the array of row pointers
        }
    public:
        ///this matrix function creates an array for a size of rowsXcolumns in which every
        //element in this array is 0. for example this matrix would look like this:
        //r=3
        //c=3
        //matrix:
        /*
            000
            000
            000    
        */
        Matrix(unsigned int m, unsigned int n);

        //Copy constructor to create a new matrix by copying another matrix
        //in this segment we will be copyig elements from array to array and we will copy every 
        //element from the array so int this case we w ill be copying from matrix mat 
        //eg:
        /*
        array={1,2,3}

        mat.array={}

        after copy:

        array={1,2,3}

        mat.array={1,2,3}
        */
        Matrix(const Matrix &mat);

         //in this one we are just pruely initializing the matric using 2d arrays with the size of our 
     //rows and columns
        Matrix(int** array, unsigned int m, unsigned int n);

       //this is a nice and easy function to understand here we are just returning the number or rows.
        unsigned int rows() const;

       //similarly here we are just returning the number of columns
        unsigned int columns() const;

        //this method returns the element at the specific column and row we ask it to for example if given 
        //array[2][2]
        //we  will recieve the element located at location array[2][2]
        int get(unsigned int i, unsigned int j) const;

         //here unlike geting an element we will actually update a value at [][] of an array
        void set(unsigned int i, unsigned int j, int value);

        //in here we will be adding arrays this function will be adding arrays that we give is so for example array 1 and array2 
        //big thing to keep in mind is that when adding arrays the arrays must be the same in order for the addition to work
        //if arrays are NOT the same there is a error throw so say that the array is not the same size as the other array
        Matrix operator+(const Matrix &mat);

         //similarly we will be doing the excact the same for the subtraction however instead of addign we will subtract
         // there is a mutliply after this following same syntax
        Matrix operator-(const Matrix &mat);

        //Overloaded * operator to multiply two matrixes
        Matrix operator*(const Matrix &mat);

        //for transposing we will be creating a matrix by flipping it on its diagonal, so rows become coloumns and coloumns become rows ;

        Matrix operator~() const;

        //this method checks if the array is the same so it checks equality of the arrays 
        bool operator==(const Matrix &mat) const;

         //this method shows a string representation of the matrix in string format
        string toStr() const;

};