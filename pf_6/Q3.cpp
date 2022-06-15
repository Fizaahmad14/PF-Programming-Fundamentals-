/*fiza ahmad
  20i-0506 BSCS-B
  Assignment 6, q5*/
#include <iostream>
using namespace std;
int main()
{
	int size=10, diff,count=0,rowSum=0,maxRow=0,index; //initializing and declaring variables 
	cout<<"\n * NOTE : size should be less than or equal to 10 (n<=10)\n"; //displating prompt
	cout<<"\n --> Enter size of array = ";cin>>size; //takinf input from user 
	while(size>10)
	{
		cout<<"\n * NOTE : size should be less than or equal to 15 (n<=15)\n";//displaying note if input is not valid
		cout<<" !Enter again!\n";	//asking from to enter again
		cout<<"\n --> Enter size of array = ";cin>>size;	//taking input again 
	}
	bool arr[size][size];	//declaring array of size entered by user  
	cout<<"\n * NOTE : Elements should only be 1 or 0.\n"; //displating prompt
	cout<<"\n *Enter Elements*\n\n";
	for(int i=0; i<size; i++)	//this loop will take arrays input from user 
	{
		for(int j=0; j<size; j++)
		{
		cout<<" * A["<<i<<"]["<<j<<"]"<<" = "; cin>>arr[i][j];//taking inputs
		}
	}
	cout<<endl;
	cout<<" --> Entered array is \n\n";	//displaying the entered array
	for(int i=0; i<size; i++)	//this loop will display the entered array
	{
		maxRow = 0;//initialize maxRow with 0
		for(int j=0; j<size; j++)	//this nested loop will display the entered array
		{
			cout<<"  "<<arr[i][j];//displaying index by index 
			rowSum += arr[i][j];//this will sum every row
			if(rowSum>maxRow)//is sum is greater than 0 then condition 
			{
			maxRow = rowSum;//assign row sum to max
			index = i;//assinging index
			}
		}
	rowSum = 0;//refreshing row sum	
	cout<<endl;
		
	}
	cout<<"\n ~ Maximum Number of 1's are present at row index = "<<index<<endl<<endl;//displaying index 
return 0;	
}	
