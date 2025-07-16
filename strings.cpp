#include <iostream>
using namespace std;



void length(char S[]){
    int i;
    for (i = 0;S[i]!='\0'; i++){

    }
    cout<<i<<endl;
    
}


void change(char S[]){
    int i;
    for (i=0; S[i]!='\0'; i++){
        S[i] = S[i]-32;
        cout<<S[i];
    }
    cout<<endl;
}





void Reverse(char A[]){
    int i, j;
    char t;
    for (j = 0;A[j]!='\0'; j++){
        
    }
    j = j-1;
    for (i = 0; i<j; i++,j--){
        t = A[i];
        A[i] = A[j];
        A[j] = t;

    }
    cout<<A<<endl;

}

void check(char A[], char B[]){
    int i, j;
    for (i = 0, j = 0; A[i]!='\0' && B[j]!='\0';i++, j++){
        if (A[i] != B[j]){
            break;
        }
    }
    if (A[i] == B[j]){
        cout<<"Equal"<<endl;
    }else if (A[i]<B[j]){
        cout<<"A is smaller"<<endl;
    }else {
        cout<<"B is smaller"<<endl;
    }
}


void palindrome(char A[]){
    int i, j;
    for (j = 0; A[j]!='\0'; j++){
    }
    j = j-1;
    for (i=0; i<j; i++, j--){
        if (A[i] != A[j]){
            cout<<"Not a palindrome"<<endl;
            return;
        }
    }
    cout<<"It is a palindrome"<<endl;
}


void Analogram(char A[], char B[]){
    int i;
    int H[26] = {0};

    for (i = 0; A[i]!='\0'; i++){
        H[A[i]-97]+=1;
    }


    for (i=0; B[i]!='\0'; i++){
        H[B[i]-97]-=1;
        if (H[B[i]-97]<0){
            cout<<"Not an anagram";
            return;
        }
    }
    cout<<"It is an anagram";
}
    


void duplicate(char A[]){
    int i;
    for (i=0; A[i]!='\0';i++){
        if (A[i] == A[i+1]){  // Check if current character equals next character
            int j = i+1;
            while (A[j] == A[i]){  // Count how many times the character repeats
                j++;
            }
            cout<<"The character "<<A[i]<<" is repeated for "<<j-i<<" times";
            i = j-1;  // Skip the counted duplicates in next iteration
        }
    }
}




void Permutation(char S[], int k) {
    static int A[10] = {0};       // To track used elements
    static char Res[10];          // To store the current permutation
    int i;

    // Base case: if we have built a permutation of full length
    if (S[k] == '\0') {
        Res[k] = '\0';
        cout << Res << endl;
        return;
    }

    // Recursive case
    for (i = 0; S[i] != '\0'; i++) {
        if (A[i] == 0) {
            Res[k] = S[i];
            A[i] = 1;
            Permutation(S, k + 1);
            A[i] = 0; // Backtrack
        }
    }
}



int main(){
    char str[] = "ABC";
    char a[] = "medical";
    char b[] = "decimal";

    char A[] = "madam";
    char B[] = "python";
    char S[] = "welcome";
    length(S);
    change(S);
    Reverse(A);
    check(A, B);
    palindrome(A);
    duplicate(A);
    Analogram(a,b);
    Permutation(str, 0);
    return 0; 
}