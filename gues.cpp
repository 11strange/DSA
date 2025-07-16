#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    srand(time(0));
    int num = rand()%100+1;
    int guess, attempts = 0;

    do {
        // string name;
        // cout<<"Enter your name: ";
        // cin>>name;
        cout<<"Guess the number upto 100: ";
        cin>>guess;
        attempts++;
        if (attempts==5){
            cout<<"Your attempts has been finished";
        }
        if (guess>num){
            cout<<"You are too high! Try again.."<<endl;

        }
        else if (guess<num){
            cout<<"Think high.. "<<endl;
        }
        else {
            cout<< "Uff.. Finally. After "<<attempts << " attempts.\n";
        }


    } while (guess!=num);
    
    return 0;
}