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

// int findMissing(int arr[], int n)
// {
//     int l = arr[0];
//     int h = arr[n-1];
    

//     int hashSize = h+1;
//     int* H = new int[hashSize]{0};
//     for (int i = 0; i<n; i++){
//         H[arr[i]]++;
//     }
//     for (int i = l; i<=h; i++){
//         if (H[i] == 0){
//             cout<<"Missing Elements is: "<<i<<endl;

//         }
//     }
//     delete[] H;
// }

// int main(){
//     int arr[] = {2,3,5,6,7,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     findMissing(arr, n);
//     return 0;
// }



// void duplicates(int arr[], int n){
//     int last_duplicate = 0;
//     for (int i=0; i<n-1; i++){
//         if (arr[i] == arr[i+1] && arr[i]!= last_duplicate){
//             cout<<"The duplicate element is: "<<arr[i]<<endl;
//             last_duplicate = arr[i];
//         }
//     }
// }



// void duplicatecount(int arr[], int n){
//     for (int i=0; i<n-1; i++){
//         if (arr[i] == arr[i+1]){
//             int j = i+1;
//             while (arr[j] == arr[i])j++;{
//                 cout<<"The element "<<arr[i]<<"is repeated for "<<j-i<<"times"<<endl;
//                 i = j-1;



//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {2,3,4,4,5,6,7,7,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     duplicates(arr, n);
//     duplicatecount(arr,n);
//     return 0;

// }


