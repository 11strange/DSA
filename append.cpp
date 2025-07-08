// Using Pointer
#include <iostream>
using namespace std;

// struct Array {
//     int *A;
//     int length;
//     int size;

// };

// void Display(struct Array arr) {
//     int i;
//     for (i=0; i<arr.length; i++){
//         cout<<arr.A[i]<<" ";
//     }
//         cout<<" ";
    
// }

// int main(){
//     struct Array arr1;
//     arr1.size = 10;
//     arr1.length = 4;
//     arr1.A = new int [arr1.size];
//     arr1.A[0]=1;
//     arr1.A[1]=2;
//     arr1.A[2]=3;
//     arr1.A[3]=4;
//     Display(arr1);
//     return 0;

// }

// without the pointer

struct Array{
    int A[10];
    int length;
    int size;

};

void Display(struct Array arr){
    int i;
    for (i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    struct Array arr1 = {{2,3,4,6},4,10};
    Display(arr1);

    return 0;

}









