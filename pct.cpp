#include <iostream>
using namespace std;

// int findMissing(int arr[], int n){
//     int total = (n+1)*(n+2)/2;
//     int sum = 0;
//     for (int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     return (total-sum);
// }

// int main(){
//     int arr[] = {1,2,3,4,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << "Missing element: " << findMissing(arr, n);
//     return 0;
// }=


// int findMissing(int arr[], int n){
//     int l = arr[0];
//     int i;
//     int h;
//     int diff = l-0;
//     for (i=0; i<n; i++){
//         if (arr[i]-i!=diff){
//             cout<<"Missing is: "<<i+diff<<endl;
//             break;
//         }
//     }

// }

// int main(){
//     int arr[] = {6,7,8,9,11,12,13};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     findMissing(arr,n );
//     return 0;
// }

int findMissing(int arr[], int n)
{
    int l = arr[0];
    int h = arr[n-1];
    

    int hashSize = h+1;
    int* H = new int[hashSize]{0};
    for (int i = 0; i<n; i++){
        H[arr[i]]++;
    }
    for (int i = l; i<=h; i++){
        if (H[i] == 0){
            cout<<"Missing Elements is: "<<i<<endl;

        }
    }
    delete[] H;
}

int main(){
    int arr[] = {2,3,5,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    findMissing(arr, n);
    return 0;
}