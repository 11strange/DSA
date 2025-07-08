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


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(struct Array &arr){
    int i, j;
    for(i=0,j=arr.length-1;i<j;i++,j--){
        swap(&arr.A[i], &arr.A[j]);
    }
}

int main(){
    struct Array arr1 = {{5,4,3,2,1},10,5};
    Display(arr1);
    Reverse(arr1);
    Display(arr1);
    return 0;
}