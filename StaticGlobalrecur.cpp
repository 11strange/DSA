#include <iostream>
using namespace std;

int func(int n){
    static int x = 0;
    if (n>0){
        x++;
        return func(n-1)+x;
    }

}

int main(){
    int r;
    r = func(5);
    printf("%d\n",r);

    r = func(5);
    printf("%d\n",r);
    return 0;

}