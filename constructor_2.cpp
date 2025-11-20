#include <iostream>
using namespace std;

class Volume
{
    double l, b, h, v;

public:
    Volume();           // constructor
    double getVolume(); // get function
    ~Volume();          // destructor
};

// -------- Constructor --------
Volume::Volume()
{
    cout << "Object is being created" << endl;

    cout << "Enter length (l): ";
    cin >> l;

    cout << "Enter breadth (b): ";
    cin >> b;

    cout << "Enter height (h): ";
    cin >> h;

    v = (l * b) + (b * h) + (l * h);  // calculate v
}

// -------- Get Function --------
double Volume::getVolume()
{
    return v;
}

// -------- Destructor --------
Volume::~Volume()
{
    cout << "Object is being deleted" << endl;
}

int main()
{
    Volume obj;   // constructor runs and takes input
    cout << "Value of v = " << obj.getVolume() << endl;

    return 0;
}

