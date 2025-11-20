#include<iostream>
using namespace std;
class meter {
	int meter , k;
	public:
		void getdata();
		void showdata();
};
 void meter:: getdata() {
 	cout <<"Enter the distance in meter : ";
 	 cin >> meter;
 	 k=meter/1000;
 }
  void meter::showdata() {
  	cout <<"meter = " <<meter << "\n";
  	cout <<"THE distance in kilometer is = " << k ;
  }
     int main() {
     	meter met;
     	met.getdata();
     	met.showdata();
     	return 0;
	 }
