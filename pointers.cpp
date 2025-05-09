#include <iostream>
using namespace std;

int main(){
    string food = "Chicken roll";
    string* ptr = &food;
    cout<<&food;
    return 0;
}