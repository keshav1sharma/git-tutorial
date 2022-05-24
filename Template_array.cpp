#include <iostream>
using namespace std;

template <class X> 
class arr
{
    public:
    int length;
    X a[];
    
    arr( X size)
    {
        length =size;
        X a[length];
    }
    void ModArr(arr obj, X first)
    {
        for (int i = 0; i < length ; i++)
            {
                X var = i * first;
                obj.a[i] = var;
            }
    }
    void display(arr obj)
    {
        for (int i = 0; i < length; i++)
        {
            cout << obj.a[i] << " ";
        }
    }
};    

int main()
{
    arr a(10);
    a.ModArr(a,1);
    a.display(a);
}
