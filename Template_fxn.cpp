#include <iostream>
using namespace std;

template <class X>
void arr(int size, X first)
{
    X arr[size];
    for (int i = 0; i < size; i++)
    {
        X var = i * first;
        arr[i] = var;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    arr(5, 1.5);
}
