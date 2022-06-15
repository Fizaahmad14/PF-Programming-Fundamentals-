/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 4*/
#include <iostream>
#include <iomanip>
using namespace std;
	void barChart(int N1, int N2, int N3, int N4, int N5)//stating function's prototype
	{
		int highest = 0;//initiallizing and declaring variables
		if(N1>N2 && N1>N3 && N1>N4 && N1>N5) highest = N1;//store if N1 in highest if N1 is highest 	
			else if(N2>N1 && N2>N3 && N2>N4 && N2>N5) highest = N2;//store if N2 in highest if N2 is highest 
				else if(N3>N1 && N3>N2 && N3>N4 && N3>N5) highest = N3;//store if N3 in highest if N3 is highest 
					else if(N4>N1 && N4>N3 && N4>N2 && N4>N5) highest = N4;//store if N4 in highest if N4 is highest 
						else if(N5>N1 && N5>N3 && N5>N4 && N5>N2) highest = N5;//store if N5 in highest if N5 is highest 
							else highest = N1;//by default store N1
		
		for(int i=highest; i>0; i--)	//this loop will continue till i>0
		{
			cout<<"\t"<<setfill('0')<<setw(2)<<right<<i;//printing y-axis

            if (N1>=i)
                cout<<"  *";	//this will print * if N1>=i (y-axis)
            else 
                cout<<"   ";	//this will print space if condition (N1>=i) is false
            if (N2>=i)
                cout<<"  *";	//this will print * if N2>=i (y-axis)
            else 
                cout<<"   ";	//this will print space if condition (N2>=i) is false 
            if (N3>=i)
                cout<<"  *";	//this will print * if N3>=i (y-axis)
            else 
                cout<<"   ";	//this will print space if condition (N3>=i) is false 
            if (N4>=i)
                cout<<"  *";	//this will print * if N4>=i (y-axis)
            else  
                cout<<"   ";	//this will print space if condition (N4>=i) is false 
            if (N5>=i)
                cout<<"  *";	//this will print * if N5>=i (y-axis)
            else 
                cout<<"   ";	//this will print space if condition (N5>=i) is false                 

		cout<<endl;	
		}
		cout<<"  	    1  2  3  4  5\n";	//printing x-axis
		
	}
int main()	
{
	int n1,n2,n3,n4,n5;	//initiallizing and declaring variables
	cout<<"\n\t--TO PRINT VERTICAL BAR CHART, INPUT 5 NUMBERS--\n\n";
	cout<<"\t* Number 1 = ";cin>>n1;	//Asking user for inputs
	cout<<"\t* Number 2 = ";cin>>n2;
	cout<<"\t* Number 3 = ";cin>>n3;
	cout<<"\t* Number 4 = ";cin>>n4;
	cout<<"\t* Number 5 = ";cin>>n5;
	cout<<"\n\t--VERTICAL BAR CHART--\n\n";//printing vertical Chart bar
	barChart(n1,n2,n3,n4,n5);	//calling function
	cout<<endl;
return 0;	
}
