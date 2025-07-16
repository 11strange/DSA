#include <iostream>
using namespace std;

int main(){
    int a; 
    int b;
    char operation;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operation: ";
    cin>>operation;
    if (operation == '+'){
        cout<< "Result is: "<<a+b;
    }
    else if (operation == '-'){
        cout<< a-b;

    }
    else if (operation == '*'){
        cout<< a*b;
    }
    else {
        cout<<"Invalid Operation";
    }
    return 0;

}