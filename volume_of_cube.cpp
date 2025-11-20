#include<iostream>
using namespace std;
class cube {
	int length,volume;
	public:
		void getdata() {
			cout << "enter the value of length :";
			cin >> length;
			volume=length*length*length;
		}
		 void showdata() {
		 	 cout << "length = " <<length <<"\n";
		 	 cout  << " The volume of cube is = " <<volume;
		 }
};  
    int main() {
    	cube c;
    	c.getdata();
    	c.showdata();
    	return 0;
	}
