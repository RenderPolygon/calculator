#include <iostream>
using namespace std;

class Phone
{
public:
    class Battery
    {
    public:
        int capacity;
        Battery(int c)
        {
            capacity = c;
        }
        void showCapacity()
        {
            cout << "battery capacity: " << capacity << " mAh" << endl;
        }
    };
};

int main()
{
    int a;
    int b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    cout << "the sum is: " << a + b << endl;

    Phone::Battery battery(5000);
    battery.showCapacity();

    return 0;
}