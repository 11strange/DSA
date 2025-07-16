#include <iostream>
using namespace std;


float getGradePoint(int marks) {
    if (marks >= 90) return 4.0;
    else if (marks >= 80) return 3.6;
    else if (marks >= 70) return 3.2;
    else if (marks >= 60) return 2.8;
    else if (marks >= 50) return 2.4;
    else if (marks >= 40) return 2.0;
    else return 0.0;  // Fail
}

int main(){
    int subjects;
    cout<<"Enter the number of subjects: ";
    cin>>subjects;

    float totalmarks = 0;
    for (int i=1; i<=subjects; i++){
        float marks;
        cout<<"Enter the mark: ";
        cin>>marks;
        totalmarks += getGradePoint(marks);
    }

    float cgpa = totalmarks/subjects;
    cout<<"Your CGPA is: "<<cgpa;
    return 0;


}