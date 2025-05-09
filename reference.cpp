#include <iostream>
using namespace std;


int main(){
    string mycar = "Ferrari";
    string &newcar = mycar;
    cout<<mycar<<" "<<newcar;
    return 0;
}