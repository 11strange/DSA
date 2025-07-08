#include <iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;

};
void Display(struct Array arr){
    int i;
    cout<<"The elements are: ";
    for (i=0; i<arr.length; i++){
        cout<<arr.A[i];
        cout<<" ";
    }
}

void append(Array* arr, int value){
    if (arr-> length < arr->size){
        arr->A[arr->length] = value;
        arr->length++;
    }
}



int main(){
    struct Array arr;
    int i, n;
    cout<<"Enter the size of the array: ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    cout<<"Enter the length of the array: ";
    cin>>arr.length;

    cout<<"Enter the elements";
    for (i=0; i<arr.length; i++){
        cout<<"Element ["<<i<<"]: ";
        cin>>arr.A[i];
    }
    Display(arr);
    append(&arr, 10);
    Display(arr);
    return 0;


}

// void create(Array &arr){
//     int i;
//     int length;
//     int A[10];
//     cout<<"Enter the number of elements: ";
//     cin>>length;
//     cout<<"Enter the elements ";
//     for (i=0; i<length; i++){
//         cout<<"Array element ["<<i<<"]: ";
//         cin>>A[i];
//     }
// }

// void display(Array &arr){
//     int length;
//     for (int i = 0; i<arr.length; i++){
//         cout<<A[i];
//         cout<<" ";
//     }
// }


// int main(){
//     Array arr;
//     create(arr);
//     display(arr);
//     return 0;
// }