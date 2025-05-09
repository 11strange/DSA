#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
void fun(struct rectangle *p)
{
    p->length = 50;
    cout<<"Length"<<p->length<<endl<<"Breadth"<<p->breadth<<endl;

}

int main(){
    rectangle r = {10,20};
    fun(&r);
    printf("Length %d \nBreadth %d\n",r.length, r.breadth);
    return 0;
}
