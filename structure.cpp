#include <iostream>
using namespace std;

struct car{
    string brand;
    string model;
    int price;
};
int main(){
    car car1, car2;
    car1.brand = "BMW"; 
    car1.model = "X5";  
    car1.price = 50000;
    car2.brand = "Audi";
    car2.model = "A6";  
    car2.price = 60000;
    cout<<car2.brand<<endl;     
    cout<<car2.model<<endl;
    cout<<car2.price<<endl;
    cout<<endl;
    cout<<car1.brand<<endl;
    cout<<car1.model<<endl;
    cout<<car1.price<<endl;
    return 0;
}