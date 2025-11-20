#include<iostream>
using namespace std;

class displacement {
    float t, u, a, s;   // data members
public:
    void getdata();
    void calculate();
    void showdata();
};

// Function to get data
void displacement::getdata() {
    cout << "Enter the value of time (t): ";
    cin >> t;
    cout << "Enter the value of initial velocity (u): ";
    cin >> u;
    cout << "Enter the value of acceleration (a): ";
    cin >> a;
}

// Function to calculate displacement
void displacement::calculate() {
    s = (u * t) + (0.5 * a * t * t);
}

// Function to show data
void displacement::showdata() {
    cout << "\nTime (t) = " << t << " seconds\n";
    cout << "Initial velocity (u) = " << u << " m/s\n";
    cout << "Acceleration (a) = " << a << " m/s2\n";
    cout << "The displacement (s) = " << s << " meters\n";
}

// Main function
int main() {
    displacement dsp;
    dsp.getdata();      // input values
    dsp.calculate();    // calculate displacement
    dsp.showdata();     // display result
    return 0;
}

