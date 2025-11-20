#include<iostream>
using namespace std;
class rectangle {  
   int length,breadth,area;
	   public:
	   	void getdata() {
	   		cout << "Enter the value of lenght and breadth :" ; 
	   		 cin >> length >> breadth;
	   		  area = length*breadth;
		   } 
		    void showdata() {
		    	 cout << "length = " << length <<"\n" ;
		    	 cout <<"breadth = "<< breadth <<"\n" ;
		    	 cout <<"The area of rectangle is = " << area  <<"\n" ;
			}
};       
            int main() {
            	rectangle rec ;
            	rec.getdata();
            	rec.showdata();
            	return 0;
			}
