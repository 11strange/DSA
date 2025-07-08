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
    cout<<endl;

}

void Shiftarray(struct Array &arr){
    int i;
    for (i=0; i<arr.length-1;i++){
        arr.A[i] = arr.A[i+1];
    }
    arr.length--;
}


void Rotate(struct Array &arr){
    int temp = arr.A[0];
    int i;
    for (i=0; i<arr.length-1;i++){
        arr.A[i] = arr.A[i+1];
    }
    arr.A[arr.length-1] = temp;
    
}

int main(){
    struct Array arr1 = {{1,2,3,4,5},10,5};
    struct Array arr2 = {{1,2,3,4,5},10,5};
    Display(arr1);
    Shiftarray(arr1);
    Display(arr1);
    Rotate(arr2);
    Display(arr2);
    return 0;

}