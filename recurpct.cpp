#include <iostream>
using namespace std;


// Sum of Natural NUmbers
// int sum(int n){
//     if (n==0)
//         return 0;
//     return sum(n-1)+n;
// }
// int Isum(int n){
//     int s = 0;
//     int i;
//     for (i=1; i<=n; i++)
//         s = s+i;
//     return s;
// }

// int main(){
//     int r;
//     r = Isum(5);
//     printf("%d",r);
//     return 0;
// }


// Factorial

// int fact(int n){
//     if (n==0)
//         return 1;
//     return fact(n-1)*n;
// }

// int Ifact(int n){
//     int i;
//     int s = 1;

//     for (i=1; i<=n; i++)
//         s = s*i;
//     return  s;

// }

// int main(){
//     int r;
//     r = Ifact(5);
//     cout<<r;
//     return 0;

// }


// Finding the power


// int power(int m, int n){
//     if (n==0)   
//         return 1;
//     return power(m,n-1)*m;

// }

// int main(){
//    int r = power(2,5);
//    printf("%d", r);
//    return 0;
// }

// Finding Taylor Sereis

// double e(int x, int n){
//     static double p =1, f =1;
//     double r;

//     if (n==0)
//         return 1;
//     r = e(x, n-1);
//     p = p*x;
//     f = f*n;
//     return r+p/f;
// }

// int main(){
//     printf("%lf \n", e(4,15));
//     return 0;
// }


// Fibonacci

// int fib(int n){
//     int t0=0, t1=1, s,i;
//     if (n<=1)
//         return n;
//     for (i=2;i<=n; i++){
//         s = t0+t1;
//         t0=t1;
//         t1 = s;
//     }
//     return s;
// }

// int main(){
//     printf("%d\n",fib(10));
//     return 0;
// }

