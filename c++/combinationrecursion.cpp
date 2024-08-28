#include <iostream>
using namespace std;
int fact(int n)
{
    if (n==0) return 1;
    return fact(n-1)*n;
}
/*int ncr(int n, int r)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}*/
int ncr(int n, int r)
{
    if(n==r||r==0)
    return 1;
    return ncr(n-1,r-1)+ncr(n-1,r);
}
int main()
{
    cout<<ncr(5,1)<<endl;
}