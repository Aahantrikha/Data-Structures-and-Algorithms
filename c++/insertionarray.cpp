#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array Arr)
{
    int i;
    cout<<"Elements are: "<<endl;
    for ( i = 0; i < Arr.length; i++)
    {
        cout<<Arr.A[i];
    }
}
void Append(struct Array *Arr, int x)
{
    if(Arr->length<Arr->size)
    {
        Arr->A[Arr->length++]=x;
    }
}
void Insert(struct Array *Arr, int index, int x)
{
    if(index>=0 && index<=Arr->length)
    {
        for(int i=Arr->length;i>index;i--)
        {
            Arr->A[i]=Arr->A[i-1];
        }
            Arr->A[index]=x;
            Arr->length++;
    }
}
int Delete(struct Array *Arr, int index)
{
    int x=0;
    if(index>=0 && index< Arr->length)
    {
        x = Arr->A[index];
        for (int i = index; i <Arr->length-1; i++)
        {
            Arr->A[i]=Arr->A[i+1];
        }
        Arr->length--;
    }

    return 0;
}
int LinearSearch(struct Array Arr,int key)
{
    for (int i = 0; i < Arr.length; i++)
    {
        if (key==Arr.A[i])
        return i;
    }
    
}
int main()
{
    struct Array Arr={{2,3,4,5,6},10,5};
    //Append(&Arr, 10);
    Display(Arr);
    Insert(&Arr,5,10);
    Display(Arr);
    cout<<Delete(&Arr,0);
    Display(Arr);
}