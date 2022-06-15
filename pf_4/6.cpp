/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 6*/
	#include<iostream>
	#include<iomanip>
	using namespace std;
	int main()
	{
		int size ;//declare size 
		cout<<"\n\tEnter size of table = "; cin>>size;//asking for size 
		cout<<"\n\t--> TABULAR MULTIPLICATION OF "<<size<<endl<<endl;
		cout<<"         ";
		
			for(int j=1; j<=size; j++)//loop to display the arrangment of numbers 
			{
				cout<<setw(5)<<right<<j;
			}
			cout<<endl<<"\t*";	
		
			for(int j=1; j<=size; j++)//loop to show distinction 
			{
				cout<<setw(5)<<right<<"_____";
			}	
			cout<<endl;
		
			for(int i=1; i<=size; i++)//this will display the tabular multiplication
			{
				cout<<setw(5)<<right<<i<<"\t|";
					for(int j=1; j<=size; j++)
					{
						cout<<setw(5)<<right<<i*j;//this will finally take the products of numbers 	
					}
			cout<<endl;		
			}
	cout<<endl<<endl;	
	return 0;
	} 
