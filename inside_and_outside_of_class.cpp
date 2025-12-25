#include <iostream>
using namespace std;

class student
{

    int roll_no;
    string name;
    string address;
    string phone_no;
    public:

    // Function defined INSIDE the class
    void getdata()
    {
        cout << "Enter the roll_no: ";
        cin >> roll_no;

        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the address: ";
        cin >> address;

        cout << "Enter the phone_no: ";
        cin >> phone_no;
    }

    // Function declaration only
    void showdata();
};

// Function defined OUTSIDE the class
void student::showdata()
{
    cout << "\nCheck your roll_no is: " << roll_no << endl;
    cout << "Check your name is: " << name << endl;
    cout << "Check your address is: " << address << endl;
    cout << "Check your phone_no is: " << phone_no << endl;
}

int main()
{
    student st;
    st.getdata();
    st.showdata();
    return 0;
}

