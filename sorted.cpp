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
 int isSorted(struct Array &arr){
    int i;
    for (i=0; i<arr.length-1; i++){
        if (arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
 }


 int main(){
    struct Array arr1 = {{1,2,3,4,5}, 10, 5};
    Display(arr1);
    isSorted(arr1);
    Display(arr1);
    return 0;
 }