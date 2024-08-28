#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array Arr)
{
    cout<<"Elements are"<<endl;
    for (int i = 0; i < Arr.length; i++)
    {
        cout<<Arr.A[i];
    }
    

}
int main()
{
    struct Array Arr;
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>Arr.size;
    Arr.A=new int[Arr.size];
    Arr.length=0;
    cout<<"Enter how many numbers"<<endl;
    cin>>n;
    cout<<"Enter all elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>Arr.A[i];
    }
    Arr.length=n;
    display(Arr);
}