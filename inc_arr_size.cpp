#include <iostream>
using namespace std;

int main(){
    int i;
    int *p, *q;
    p = new int[5];
    q = new int[10];
    p[0]=1; p[1] = 2, p[2] = 3; p[3] = 4; p[4] = 5; 
    for (i=0; i<10; i++){
        q[i] = p[i];
        cout<<q[i];
    }

    
// We cannot directly change the pointer size which is stored in the heap. Instead we can trabsfer into the new array where the size is more.