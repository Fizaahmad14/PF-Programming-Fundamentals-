/*fiza ahmad
  20i-0506 BSCS-B
  Assignment 6, q5*/
#include <iostream>
using namespace std;
int main()
{
	int size=15, ceil=0,floor=0,x,min=100000000,max=0,no; //initializing and declaring variables 
	int arr[size]={1,1,1,1,1,1,1,1,1,2,8,10,10,12,19};	//declaring array of size entered by user  
	cout<<endl;
	cout<<"\t* Entered array is   =  ";	//displaying the entered array
	for(int i=0; i<size; i++)	//this loop will display the entered array
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\n\t* Enter Number (x) = ";cin>>x;//asking to enter x to find ceil and floor
	for(int i=0; i<size; i++)
	{
		if(arr[i]>max)	//conditon to find maximum number in array
		{
			max = arr[i];	//if arr[i]>max the max = arr[i]
			if(max<=x)     floor = max;	//if max<=x then assign max to floor
		
			
		}
		if(arr[size-i-1]<min)	//conditon to find minimum number in array
		{
			min = arr[size-i-1];	//if arr[size-i-1]<min the min = arr[size-i-1]
			if(min>=x) ceil = min; //if min>=x then assign min to ceil
		}
	}
	cout<<"\n\t* For x = "<<x<<endl<<endl;	//displaying output for x
	if (floor==0) 	cout<<"\t~ Floor does'nt exist in array\n";	//if floor is zero than display does'nt exist
	else		cout<<"\t~ Floor = "<<floor<<endl;		//else displaying floor
	if (ceil==0) 	cout<<"\t~ Ceil does'nt exist in array\n\n";	//if ceil is zero than display does'nt exist
	else		cout<<"\t~ Ceil = "<<ceil<<endl<<endl;	//else displaying ceil
return 0;	
}	
	
