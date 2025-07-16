#include<iostream>
using namespace std;


class Element
{
public:
    int i;
    int j;
    int x;
};

class Sparse
{
private:
    int m;
    int n;
    int num;
    Element *ele;
public:
    Sparse(int m,int n, int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        ele = new Element[this->num];
    }
    ~Sparse()
    {
        delete [] ele;
    }
    void read()
    {
        cout<<"Enter non-zero elements (row column value):"<<endl;
        for (int i=0;i<num; i++) {
            cout<<"Element "<<i+1<<": ";
            cin>>ele[i].i>>ele[i].j>>ele[i].x;
            if(ele[i].i >= m || ele[i].j >= n) {
                cout<<"Invalid position! Row and column must be within matrix bounds."<<endl;
                i--;
                continue;
            }
        }
    }
    void Display()
    {
        int k =0;
        cout<<"Sparse Matrix:"<<endl;
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (k < num && ele[k].i == i && ele[k].j == j)
                    cout<<ele[k++].x<<" ";
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int rows, cols, nonZero;
    cout<<"Enter dimensions of matrix (rows columns): ";
    cin>>rows>>cols;
    cout<<"Enter number of non-zero elements: ";
    cin>>nonZero;
    
    Sparse s1(rows, cols, nonZero);
    s1.read();
    s1.Display();
    return 0;
}