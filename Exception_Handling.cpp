#include <iostream>
using namespace std;

class car
{
    int fuel;

public:
    void setFuel(int f)
    {
        if (f <= 5)
        {
            fuel=f;
            throw string("lowFuel");
        }
        else
        {
            fuel = f;
        }
    }
    int getFuel()
    {
        return fuel;
    }
};

int main()
{
    car C;
    cout << "Enter the amount of fuel remaining" << endl;
    int fu;
    cin >> fu;
    try
    {
        C.setFuel(fu);
    }
    catch(string s)
    {
        cout<<"Fuel Low"<<endl;
    }

    catch (const char *MSG)
    {
        cout << "Fuel is low , Please refill" << endl;
    }
    catch (...)
    {
        cout << "Catch all" << endl;
    }

    cout << "Remaining Fuel : " << C.getFuel() << " Litres" << endl;

    return 0;
}
