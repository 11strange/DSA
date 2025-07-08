#include <iostream>
using namespace std;


struct Array{
    int A[10];
    int length;
    int size;

};

void Append(struct Array *arr, int x){
    int i;
    if (arr->length<arr->size)
        arr->A[arr->length++]=x;
        cout<<arr.A[i]<<" ";

    
}
int main(){
    struct Array arr1 = {{2,3,4,5},4, 10};
    Append(&arr1,11 );
    return 0;
}