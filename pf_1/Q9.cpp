/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<string.h>
	#include<iomanip>
	using namespace std;
	int main()
	{
	string s;//declaring string 
	cout<<"Enter string : ";
	cin>>s;//taking input from user
	cout<<endl;
	cout<<setw(20)<<s<<setw(14)<<s<<endl
	<<setw(21)<<s<<setw(12)<<s<<endl
	<<setw(22)<<s<<setw(10)<<s<<endl
	<<setw(23)<<s<<setw(8)<<s<<endl
	<<setw(24)<<s<<setw(6)<<s<<endl
	<<setw(25)<<s<<s<<endl//printing pattern
	<<setw(24)<<s<<setw(6)<<s<<endl
	<<setw(23)<<s<<setw(8)<<s<<endl
	<<setw(22)<<s<<setw(10)<<s<<endl
	<<setw(21)<<s<<setw(12)<<s<<endl
	<<setw(20)<<s<<setw(14)<<s<<endl
	<<endl;
	return 0;
	}
	
