/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 4*/
	#include<iostream>
	#include<iomanip>
	using namespace std;
	int main()
	{
		int range, num, even=0, odd=0, zero=0;//declaring and initializing variables
		cout<<"\n\tEnter Range = "; cin>>range;//asking for range
		cout<<"\n\tList that "<<range<<" numbers.\n\tENTER\n\n";//asking to list the numbers
		
			for(int i=1; i<=range; i++)//loop according to range
			{
				cout<<setw(5)<<right<<i<<".   "; cin>>num; //listing the numbers
				if(num==0)    zero++;//check  for zeros
				if(num%2==0)  even++;//check for evens
				else           odd++;//check for odds
			}
			cout<<"\n\t--> Displaying count of evens, odds and zeros\n\n";//displaying evens,odds adn zeros.
			cout<<"\t _____________________\n";
			cout<<"\t| EVEN =  "<<even<<"           |\n";
			cout<<"\t|_____________________|\n";
			cout<<"\t| ODD  =  "<<odd<<"           |\n";
			cout<<"\t|_____________________|\n";
			cout<<"\t| ZERO =  "<<zero<<"           |\n";
			cout<<"\t|_____________________|\n\n";
	return 0;
	} 
