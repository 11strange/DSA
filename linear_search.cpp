#include <iostream>
using namespace std;


struct Array{
    int A[10];
    int size;
    int length;
    
};

void Display(struct Array arr){
    int i;
    for (i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}

int LinearSearch(struct Array *arr, int key){
    int i;
    for (i=0; i<arr->length; i++){
        if (key==arr->A[i])
            return i;
    }
    return -1;
}

int main(){
    struct Array arr1 = {{1,2,3,4,5},10,5};
    Display(arr1);
    cout << "\nElement found at index: " << LinearSearch(&arr1, 7) << endl;

    return 0;
}