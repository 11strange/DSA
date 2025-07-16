#include <iostream>
using namespace std;




void duplicatecount(int arr[], int n){








    for(int i=0;i<n-1;i++){          // Iterate through array elements
        if (arr[i]==arr[i+1]){       // Check if current element equals next element
            int j = i+1;              // Start counting from next position
            while (arr[j] == arr[i])  // Count consecutive occurrences
                j++;                  // Move to next element
            cout<<"The element "<<arr[i]<<" is repeated for "<<j-i<<"times"<<endl;
            i = j-1;                  // Skip the counted duplicates
        }
    }
}

// Function to count and print duplicate elements in a sorted array
// Parameters:
//   arr[] - input array
//   n - size of array
// The function assumes array is sorted in ascending order
// It counts consecutive duplicate elements and prints their count
// Example: For array [1,2,3,3,4,5,6,7,8,8,8,9]
// Output will show elements 3 and 8 with their repetition counts
  void dupl(int arr[], int n){
      for (int i=0; i<n-1; i++){
          int count =1;
          for (int j=i+1; j<n; j++){
              if (arr[i] == arr[j]){
                  count++;
                  arr[j] = -1;

              }
          }
          if (count>1){
              cout<<"The element "<<arr[i]<<" is repeated for "<<count<<" times"<<endl;
          }
      }
  }

int main(){
    int arr[] = {1,2,3,3,4,5,6,7,8,8,8,9};
    int arr1[] = {2,7,2,4,5,8,1,7,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    duplicatecount(arr, n);
    dupl(arr1, n);
    return 0;
}