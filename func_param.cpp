#include <iostream>
using namespace std;


// void func(string name){
//     cout<<"Hello "<<name<<"! Welcome";
// }

// int main(){
//     func("Ram Chandra Prasad");
//     return 0;
// }

float func(float fahrenheit){
    return  (5.0 / 9.0) * (fahrenheit - 32.0);
}
int main(){
    float degree;
    cout<<"Enter the temp: ";
    cin>>degree;
    float result = func(degree);
    cout<<"Fahrenheit: "<<degree<<endl;
    cout<<"To celcius: "<<result;
    return 0;
}