#include <iostream>
using namespace std;


struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int  i;
    for (i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int BinarySearch(struct Array arr, int key){
    int l,mid,h;
    l = 0;
    h = arr.length-1;

    while (l<=h)
    {
        mid = (l+h)/2;
        if (key == arr.A[mid])
            return mid;
        else if (key<arr.A[mid])
            h = mid-1;
        else 
            l = mid+1;
    }
    return -1;

}

int main(){
    struct Array arr1;
    arr1 = {{2,3,4,5,6},10,5};
    Display(arr1);
    cout<<"Element found at index: "<<BinarySearch(arr1, 6)<<endl;
    return 0;
}