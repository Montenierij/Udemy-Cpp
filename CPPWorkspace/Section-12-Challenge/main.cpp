/**
 * Jacob Montenieri
 * Section 12 Challenge - Udemy C++
 * This code is to practice using pointers/references
 * This code will generate two predetermined arrays
 * and then dynamically allocate space for a third
 * array that is sized to fit every multiplication
 * between the two arrays and will display the resulting
 * array before deleting the space from the heap.
 */
#include <iostream>
using namespace std;

void print(const int *const arr, size_t size);
int * apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2);

int main(){
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout<<"Array 1: ";
    print(array1,array1_size);

    
    cout<<"Array 2: ";
    print(array2,array2_size);
    
    int *results = apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t results_size {array1_size * array2_size}; // = 15
    
    cout<<"Result: ";
    print(results,results_size);
    
    delete [] results; //REMOVES FROM HEAP
    cout << endl;

    return 0;
}


/*********************************************************
 * This function expects:
 * arr - a pointer to the array of integers
 * size - the number of integers in arr
 * 
 * The function loops through arr and displays
 * all the integers in the array
 * *******************************************************/
void print(const int *const arr, size_t size){
    cout<<"[ ";
    for (size_t i(0); i<size; ++i)
        cout<< arr[i] << " ";
    cout<<"]\n";
}


 /*********************************************************
 * This function expects:
 * arr1/arr2 - a pointer to the array of integer 1/2
 * size1/size2 - the number of integers in arr 1/2
 * 
 * The function loops through both arrays and multiplies
 * all the integers in both arrays and puts them into
 * a new array whose address is passed back to main
 * *******************************************************/
int * apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2){
    int *new_array{};
    
    new_array = new int[size1 * size2];
    
    int position {0};
    for (size_t i{0}; i<size2;++i){
        for (size_t j{0}; j<size1;++j){
            new_array[position]=arr1[j]*arr2[i];
            ++position;
        }
    }
    return new_array;
}