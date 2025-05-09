#include <iostream>
using namespace std;

int main(){
    int age, voting_age =30;
    cout<<"Enter your age: ";
    cin>>age;
    if (age >=voting_age){
        cout<<"You are eligible to vote!"<<endl;
    }
    else{
        cout<<"You are not eligible to vote!"<<endl;
    }   
}