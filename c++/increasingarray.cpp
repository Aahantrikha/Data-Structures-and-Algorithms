#include <iostream>
using namespace std;
int main()
{
    int *p,*q;
    p= new(int[5]);
    q= new(int[10]);
    p[0]=1,p[2]=3,p[3]=5,p[4]=7,p[5]=9;
    for (int i;i<5;i++)
    {
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i];
    }
    
}