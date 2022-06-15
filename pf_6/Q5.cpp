/*fiza ahmad
  20i-0506 BSCS-B
  Assignment 6, q5*/
#include <iostream>
using namespace std;
int main()
{
	int size=15, diff,count=0; //initializing and declaring variables 
	cout<<"\n\t* NOTE : size should be less than or equal to 15 (n<=15)\n"; //displating prompt
	cout<<"\n\t--> Enter size of array = ";cin>>size; //takinf input from user 
	while(size>15)
	{
		cout<<"\n\t* NOTE : size should be less than or equal to 15 (n<=15)\n";//displaying note if input is not valid
		cout<<"\t!Enter again!\n";	//asking from to enter again
		cout<<"\n\t--> Enter size of array = ";cin>>size;	//taking input again 
	}
	int arr[size];	//declaring array of size entered by user  
	cout<<endl;
	for(int i=0; i<size; i++)	//this loop will take arrays input from user 
	{
		cout<<"\t* Enter Element A["<<i<<"] = "; cin>>arr[i];//taking inputs
	}
	cout<<endl;
	cout<<"\n\t* Enter the difference = ";cin>>diff;//asking to enter the difference which user wants for pairs 
	cout<<"\t--> Entered array is   =  ";	//displaying the entered array
	for(int i=0; i<size; i++)	//this loop will display the entered array
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\n\n\t--> Following pairs will give difference of "<<diff<<"\n";//displaying pairs
	for(int i=0; i<size; i++)//this loop will check pairs of difference
	{
		for(int j=i+1; j<size; j++)//this nested loop will also check pairs of difference
		{
			if(arr[i]-arr[j]==diff || arr[j]-arr[i]==diff)//this condition will check if entered pairs are euqal to difference
			{
			cout<<"\t* "<<arr[i]<<" , "<<arr[j]<<endl;//this will display pairs
			count++; //this will count the pairs
			}
		}
	}
	cout<<"\n\t--> Total pairs are = "<<count<<endl<<endl;//this will show total pairs
}
