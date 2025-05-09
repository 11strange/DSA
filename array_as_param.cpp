#include <iostream>
using namespace std;

void array(int *a){
    for (int i = 0;i<5; i++)
        a[i] = a[i]+5;

}

int main(){
    
    int a[5] = {1,2,3,4,5};
    array(a);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}