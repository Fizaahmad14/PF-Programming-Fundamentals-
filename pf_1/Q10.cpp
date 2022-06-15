/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<string.h>
	#include<iomanip>
	using namespace std;
	int main()
	{
	int N1,N2,N3,N4,N5;//declaring variables
	cout<<"\n\tEnter integers within range (0-10)\n";
	cout<<"\n\tN1 = ";cin>>N1;//taking inputs from user
	cout<<"\tN2 = ";cin>>N2;
	cout<<"\tN3 = ";cin>>N3;
	cout<<"\tN4 = ";cin>>N4;
	cout<<"\tN5 = ";cin>>N5;
	cout<<"\n\tHORIZONTAL BAR CHAT\n"<<endl;//displaying horizontal chat bar
	cout<<"\tN1 = "<<setfill('*')<<setw(N1+1)<<" "<<endl;
	cout<<"\tN2 = "<<setfill('*')<<setw(N2+1)<<" "<<endl;
	cout<<"\tN3 = "<<setfill('*')<<setw(N3+1)<<" "<<endl;
	cout<<"\tN4 = "<<setfill('*')<<setw(N4+1)<<" "<<endl;
	cout<<"\tN5 = "<<setfill('*')<<setw(N5+1)<<" "<<endl;
	return 0;
	}
