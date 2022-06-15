/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 3-a*/
	#include<iostream>
	#include<iomanip>
	using namespace std;
	int main()
	{
		int rows;//declaring variales
		int pascal=1;
		cout<<"\n\tEnter rows = "; cin>>rows;//taking rows from user
		cout<<endl;
	
			for(int i=0; i<rows; i++)//this will shoe triangular pattren
			{
				for(int j=1; j<=rows-i; j++)
					cout<<"  ";//this will place empty spaces where numbers can't be placed
				
				for(int k=0; k<=i; k++)
					{
						if(k==0 || i==0)
							pascal = 1;//this will assign pascal = 1 when row of column will be zero
						else
							pascal = pascal*(i-k+1)/k;//this will make the pascal pyramid
							
						cout<<setw(3)<<right<<pascal<<" ";//this will align the pascal numbers and show the pyramids	
					}
			cout<<endl;		
			}
		cout<<endl;
				
	return 0;
	} 
