/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
	int i,j;//declaring variables
	cout<<"\n\tENTER VALUES\n";
	cout<<"\tEnter the value of 'i' = ";cin>>i;//taking input from user
	cout<<"\tEnter the value of 'j' = ";cin>>j;
	
	cout<<"\n\tBEFORE SWAPPING\n";//displaying user input
	cout<<"\ti = "<<i<<endl;
	cout<<"\tj = "<<j<<endl;	
	
	i+=j;//applying logic for swapping
	j=i-j;
	i-=j;
	
	cout<<"\n\tAFTER SWAPPING\n";//displaying results after swapping
	cout<<"\ti = "<<i<<endl;
	cout<<"\tj = "<<j<<endl<<endl;
	return 0;
	}
