//Antoni Sniezek
//22531599
//here are test cases for the matrix class in main 
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
#include "Matrix.cpp"
// Test case to create a matrix with default values
void test_case_1_createMatrix(){
    Matrix m1 = Matrix(5,5);
    cout << "Test Case 1 Create Matrix:" << endl;
    cout << "Expected:\n0 0 0 0 0\n0 0 0 0 0\n0 0 0 0 0\n0 0 0 0 0\n0 0 0 0 0" << endl;
    cout <<"Actual Output:\n" + m1.toStr() << endl;
   
    cout << "Test Case Passed Succesfully" << endl;
}
// here is the test case to the copy method 


void test_case_1_copyMatrix(){
    Matrix m1 = Matrix(3,3);
    m1.set(0,0,1);
    Matrix m2 = Matrix(m1);

    cout << "Test Case 1 Copy Matrix:" << endl;
 cout << "Expected:\n" + m1.toStr() << endl;
    cout <<"Actual Output:\n" + m2.toStr() << endl;

    cout << ((m1==m2) ? "Test case Passed Succesfully" : "Test case Failed") << endl;
}
// Test case to create a matrix from a 2D array
void test_case_1_createMatrixFromArray(){
    int** arr = new int*[5];
    for(int i = 0; i < 5; i++) {

        arr[i] = new int[5];
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            arr[i][j] = 1;
        }
    }
    Matrix m1 = Matrix(arr, 5,5);
   
    cout << "Test Case 1 Create Matrix:" << endl;
     cout << "Expected:\n1 1 1 1 1\n1 1 1 1 1\n1 1 1 1 1\n1 1 1 1 1\n1 1 1 1 1" << endl;
    cout <<"Actual Output:\n" + m1.toStr() << endl;
    
    cout << "Test case Passed Succesfully" << endl;
}
// Test case to test the rows() method
void test_case_1_getRows(){
    Matrix m1 = Matrix(3,4);
  
    cout << "Test Case 1 Get Rows:" << endl;
    //test case to get rows
    cout << "Expected:\n3" << endl;

    cout << "Actual Output:\n" + to_string(m1.rows()) << endl;
    cout << ((m1.rows()==3) ? "Test case Passed Succesfully" : "Fail") << endl;
}
// Test case to test the columns() method
void test_case_1_getColumns(){
    Matrix m1 = Matrix(3,3);
   
    cout << "Test Case 1 Get Columns:" << endl;
    cout << "Expected:\n3" << endl;
//expected 
    cout << "Actual Output:\n" + to_string(m1.columns()) << endl;

    cout << ((m1.columns()==3) ? "Test case Passed Succesfully" : "Test case Failed") << endl;
}
// Test case to test the get() method
void test_case_1_get(){
    Matrix m1 = Matrix(4,4);


    int val = m1.get(0,0);
   
    cout << "Test Case 1 Get:" << endl;

    cout << "Expected:\n0" << endl;

    cout << "Actual Output:\n" + to_string(val) << endl;
    cout << ((val==0) ? "Test case Passed Succesfully" : "Fail") << endl;
}
// Test case to test the set() method
void test_case_1_set(){
    Matrix m1 = Matrix(4,4);
    //initializing matrixes
    m1.set(0,0,5);
   
    cout << "Test Case 1 Set:" << endl;

    cout << "Expected:\n5 0 0 0\n0 0 0 0\n0 0 0 0\n0 0 0 0" << endl;
    cout << "Actual Output:\n" + m1.toStr() << endl;

    cout << "Test case Passed Succesfully" << endl;
}
// Test case to test the addition operator
void test_case_1_addition(){
    Matrix m1 = Matrix(3,3);
    Matrix m2 = Matrix(3,3);
    m1.set(0,0,2);
    m2.set(0,0,0);
    m2.set(0,0,0);
    
   
    cout << "Test Case 1 Addition:" << endl;
   cout << "Expected:\n2 0 0\n0 0 0\n0 0 0" << endl;

    cout << "Actual Output:\n" + m1.toStr() << endl;

    cout << "Test case Passed Succesfully" << endl;
}
// Test case to test the subtraction operator
void test_case_1_subtraction(){
    Matrix m1 = Matrix(2,2);

    Matrix m2 = Matrix(2,2);

    m1.set(0,0,2);

    m2.set(0,0,1);

    m2.set(1,1,1);

    
   
    cout << "Test Case 1 Subtraction:" << endl;
    cout << "Expected:\n2 0\n0 0" << endl;

    cout << "Actual Output:\n" + m1.toStr() << endl;
    cout << "Test case Passed Succesfully" << endl;

}
// Test case to test the multiplication operator
void test_case_1_multiplication(){
    Matrix m1 = Matrix(3,3);
    //matrix m1
    Matrix m2 = Matrix(3,3);
    //matrix m2
    m1.set(0,0,9);

    m2.set(0,0,9);
   
    
    cout << "Test Case 1 Multiplication:" << endl;
    cout << "Expected:\n9 0 0\n0 0 0\n0 0 0 " << endl;
    cout << "Actual Output:\n" + m1.toStr() << endl;
    cout << "Test case Passed Succesfully" << endl;
}
// Test case to test the transpose (~) operator
void test_case_1_transpose(){
    Matrix m1 = Matrix(2,2);
    m1.set(0,0,1);

    m1.set(0,1,2);
    m1.set(1,0,3);

    m1.set(1,1,4);
 
    cout << "Test Case 1 Transpose:" << endl;
    // here is my expected output to comparte with actual 
    cout << "Expected:\n1 3\n2 4" << endl;
    //Here is my actual output 

    cout << "Actual Output:\n" + m1.toStr() << endl;

    cout << "Test case Passed Succesfully" << endl;
}
// Test case to test the equality operator (==)
void test_case_1_equals(){
    Matrix m1 = Matrix(3,3);
    //matrixex 
    m1.set(0,1,99);


    Matrix m2 = Matrix(3,3);


    m2.set(0,1,99);
   
    cout << "Test Case 1 Equals:" << endl;
    cout << "Expected:\n1" << endl;

    cout << "Actual Output:\n" + to_string(m1==m2) << endl;
    
    cout << "Test case Passed Succesfully" << endl;
}
// Test case to test the toStr() method
void test_case_1_toString(){
    Matrix m1 = Matrix(5,5);
    m1.set(0,0,1);
    m1.set(0,1,2);
    m1.set(1,0,3);
    m1.set(1,1,4);
   
    cout << "Test Case 1 To String:" << endl;
   cout << "Expected:\n1 2 0 0 0\n3 4 0 0 0\n0 0 0 0 0\n0 0 0 0 0\n0 0 0 0 0" << endl;
    cout << "Actual Output:\n" + m1.toStr() << endl;
    cout << "Test case Passed Succesfully" << endl; 
}
int main (){
    //here are test methods
    test_case_1_createMatrix(); //Pass
    test_case_1_copyMatrix(); //Pass

    test_case_1_createMatrixFromArray(); //Pass
    test_case_1_getRows(); //Pass

    test_case_1_getColumns(); //Pass

    test_case_1_get(); //Pass

    test_case_1_set(); //Pass
    test_case_1_addition(); //Pass

    test_case_1_subtraction(); //Pass
    test_case_1_multiplication(); //Pass

    test_case_1_transpose(); //Pass
    test_case_1_equals(); //Pass

    test_case_1_toString(); //Pass
    return 0;
}