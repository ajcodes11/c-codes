#include <iostream>
using namespace std;

class Volume
{
    double r, h, v;

public:
    Volume();           // constructor
    double getVolume(); // get function
    ~Volume();          // destructor
};

// -------- Constructor --------
Volume::Volume()
{
    cout << "Object is being created" << endl;

    cout << "Enter radius (r): ";
    cin >> r;

    cout << "Enter height (h): ";
    cin >> h;

    v = (4.0/3.0) * r * r * h;  // calculate volume
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

