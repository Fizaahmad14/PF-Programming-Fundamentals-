/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 9 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int i=2, firstInteger = 0, secondInteger = 1, nextInteger, N;//initiallizing and declaring variales
	
	cout<<"\n\tEnter number of terms N = ";cin>>N;//taking input from user
	
	cout<<"\n\tFIBNOCCI SERIES TILL "<<N<<" TERMS\n\n"; 
	
	cout<<"\t"<<firstInteger<<"\t"<<secondInteger<<"\t";//printing 1st two terms as 0 and 1 always
	
	nextInteger = firstInteger + secondInteger ;//adding to make next term
		
		while(i<N)
			{
				i++;
				cout<<nextInteger<<"\t";//displaying series
				firstInteger = secondInteger;
				secondInteger = nextInteger;
				nextInteger = firstInteger + secondInteger;// making next term by adding previos two terms 
			}
		cout<<endl<<endl;	
	return 0;
	}   
   
