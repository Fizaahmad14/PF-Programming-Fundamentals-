/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 3-c*/
	#include<iostream>
	#include<iomanip>
	using namespace std;
	int main()
	{
		int rows;
		int pascal=1;
		cout<<"\n\tEnter rows = "; cin>>rows;//taking rows from user
		cout<<endl;
	
			for(int i=0; i<rows; i++)//this loop will show the triangular pattren 
			{
				for(int j=1; j<=rows-i; j++)
					cout<<"  ";//this will place empty spaces where numbers can't be placed
				
				for(int k=0; k<=i; k++)
					{
						if(k==0 || i==0)
							pascal = 1;
						else
							pascal = pascal*(i-k+1)/k;//this will assign pascal = 1 when row of column will be zero
							
						cout<<setw(3)<<right<<pascal<<" ";//this will finally align and print the whole pattren		
					}
			cout<<endl;		
			}	
			
			for(int i=rows; i>=0; i--)//this loop will invert the pyramid
			{
				for(int j=1; j<=rows-i; j++)
					cout<<"  ";//this will place empty spaces where numbers can't be placed
				
				for(int k=0; k<=i; k++)
					{
						if(k==0 || i==0)
							pascal = 1;
						else
							pascal = pascal*(i-k+1)/k;//this will assign pascal = 1 when row of column will be zero
							
						cout<<setw(3)<<right<<pascal<<" ";//this will finally align and print the whole pattren		
					}
			cout<<endl;		
			}
		cout<<endl;				
	return 0;
	} 
