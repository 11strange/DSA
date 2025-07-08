#include <iostream>
using namespace std;

void  mergeArrays(int A[], int B[],int C[], int n, int m){
  int i = 0; int j = 0; int k = 0;
  while (i<n && j<m){
    if (A[i]<B[j]){
      C[k++] = A[i++];
     
    }else {
      C[k++] = B[j++];
      
    }
  }
  while (i<n){
    C[k++] = A[i++];

  }
  while (j<m){
    C[k++] = B[j++];
  }
}


void Union(int A[], int B[], int C[], int n, int m){
  int i, j, k;
  i=j=k=0;
  while (i<n && j<m){
    if (A[i]<B[j]){
      C[k++] = A[i++];
    }
    else if (B[j] < A[i]){
      C[k++] = B[j++];
    }
    else{
      C[k++] = A[i++];
      j++;
    }
    while (i<n){
      C[k++] = A[i++];

    }
    while (j<m){
      C[k++] = B[j++];
    }

  }
}

int main() {
  int A[] = {1,3,5,7};
  int B[] = {2,4,6,8};

  int C[8];
  mergeArrays(A, B, C, 4, 4);
  cout<<"Merge Arrays"<<endl;
  for (int k=0; k<8; k++){
    cout<<C[k]<<" ";
  }
  cout<<endl;

  Union(A,B,C,4,4);
  cout<<"Union"<<endl;
  for (int x= 0;x<8 ; x++){
    cout<<C[x]<<" ";
  }
  return 0;

}