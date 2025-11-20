#include<iostream>
using namespace std;
class volume {
	  int radius,height,v;
	   public:
	   	void getdata();
	   	void showdata();
}; 
 void volume::getdata() { 
   cout <<"Enter the value of radius and height :";
   cin >> radius >> height;
   v=(4/3)*(22/7)*radius*radius*height;
 }   
  void volume::showdata() {
  	cout <<"radius = " <<radius <<"\n";
  	cout <<"height = " <<height <<"\n";
  	 cout <<"The volume is = " << v <<"\n";
  } 
           int main() {
           	volume vol;
           	vol.getdata();
           	vol.showdata();
           	return 0;
		   }
