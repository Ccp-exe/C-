//Antoni Sniezek 22531599
//Here is my code for the assignment for the 17th of 
//November in which i will be creating matrix's and then using dynamic memory allocation 
#include <iostream>
#include <ctime>
#include <string>
#include <stdexcept>
#include "Matrix.h"
using namespace std;


//This is a rough code of how the array works and allocates its memory and after
// array creation it will delete itself using delete[]
/*
int rows, cols;
cout<<"Please enter the Rows,Cols: ";
cin>>rows>>cols;

int** array =new int*[rows];
for(int i=0; i<rows; i++){
    array[i]=new int[cols];
}
array[1][2]=88;
cout<<array[1][2];
for(int i=0;i<rows; i++){
    delete[] array[i];
}
delete[] array;
array=NULL;
*/
    //this matrix function creates an array for a size of rowsXcolumns in which every
    //element in this array is 0. for example this matrix would look like this:
    //r=3
    //c=3
    //matrix:
    /*
        000
        000
        000    
    */
    Matrix::Matrix(unsigned int m, unsigned int n) {
    r= m;
    c = n;
    allocate();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            data[i][j] = 0;
        }
    }
}
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
    Matrix::Matrix(const Matrix& mat): r(mat.r),c(mat.c){
        data= new int *[r];
        for(unsigned int i=0;i<r;++i){
            data[i]=new int[c];
            for(unsigned int j=0;j<c;++j){
                data[i][j]= mat.data[i][j];
            }
        }
    }
    //in this one we are just pruely initializing the matric using 2d arrays with the size of our 
    //rows and columns
    Matrix::Matrix(int** array, unsigned int r,unsigned int c): r(r),c(c){
        data =new int*[r];
        for(unsigned int i=0;i<r;++i){
            data[i]=new int[c];
            for(unsigned int j=0; j<c;++j){
                data[i][j]=array[i][j];
            }
        }
    }
    //this is a nic and easy function to understand here we are just returning the number or rows.
   unsigned int Matrix::rows() const{
        return r;
    }
    //similarly here we are just returning the number of columns
   unsigned int Matrix::columns() const{
        return c;
    }
    //this method returns the element at the specific column and row we ask it to for example if given 
    //array[2][2]
    //we  will recieve the element located at location array[2][2]
   int Matrix::get(unsigned i,unsigned j)const{
        if(i>=r||j>=c){
            throw out_of_range("out of bounds");
        }
        return data[i][j];
    }
    //here unlike geting an element we will actually update a value at [][] of an array 
void Matrix::set(unsigned i,unsigned j, int value){
        if(i>=r||j>=c){
            throw out_of_range("out of bounds");
        }
        data[i][j]=value;
    }
    //in here we will be adding arrays this function will be adding arrays that we give is so for example array 1 and array2 
    //big thing to keep in mind is that when adding arrays the arrays must be the same in order for the addition to work
    //if arrays are NOT the same there is a error throw so say that the array is not the same size as the other array
    Matrix Matrix::operator+(const Matrix& mat){
        if(r != mat.r||c!=mat.c){
            throw invalid_argument("If adding the matrix's should be the same");
        }
        Matrix result(r,c);
        for(unsigned int i=0;i<r;++i){
            for(unsigned int j=0; j<c;++j){
                result.data[i][j]= data[i][j]+mat.data[i][j];
            }
        }
        return result;
    }
    //similarly we will be doing the excact the same for the subtraction however instead of addign we will subtract
    // there is a mutliply after this following same syntax
 Matrix Matrix::operator-(const Matrix& mat){
        if(r != mat.r||c!=mat.c){
            throw invalid_argument("If adding the matrix's should be the same");
        }
        Matrix result(r,c);
        for(unsigned int i=0;i<r;++i){
            for(unsigned int j=0; j<c;++j){
                result.data[i][j]= data[i][j]-mat.data[i][j];
            }
        }
        return result;
    }

   Matrix Matrix::operator*(const Matrix& mat){
        if(c!=mat.r){
            throw invalid_argument("If Multiplying the matrix's should be the same");
        }
        Matrix result(r,mat.c);
        for(unsigned int i=0;i<r;++i){
            for(unsigned int j=0; j<mat.c;++j){
                result.data[i][j]= 0;
                for(unsigned int k=0;k<c;++k){
                    result.data[i][j]+= data[i][k]*mat.data[k][j];
                }
            }
        }
        return result;
    }
    //for transposing we will be creating a matrix by flipping it on its diagonal, so rows become coloumns and coloumns become rows ;

    Matrix Matrix::operator~()const{
        Matrix result(c,r);
        for(unsigned int i=0;i<r;++i){
            for(unsigned int j=0;j<c;++j){
                result.data[j][i] =data[i][j];
            }
        }
        return result;
    }
    //this method checks if the array is the same so it checks equality of the arrays 
    bool Matrix::operator==(const Matrix &mat)const {
        if(r!=mat.r||c!=mat.c){
            return false;
        }
        for(unsigned int i=0;i<r;++i){
            for(unsigned int j=0;j<c; ++j){
                if(data[i][j]!=mat.data[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    //this method shows a string representation of the matrix in string format 
    string Matrix::toStr()const{

        string result ="";

        for(unsigned int i=0;i<r;++i){

            for(unsigned int j=0; j<c;++j){

                result+=to_string(data[i][j])+" ";
            }
            result+="\n";
        }
        return result;
    };
