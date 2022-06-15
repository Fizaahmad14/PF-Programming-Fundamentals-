/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 2*/
#include <iostream>
using namespace std;
	int value(int n, int k)	//stating function's prototype
	{
		int index=0,r,n2=0;	//initiallizing and declaring variables
		while(n!=0)
		{
			r  = n%10;	//this will divide number into digits	
			n2 = n2*10 + r;//this will reverse the number
			n/=10;  
		}
		while(n2!=0)
		{	
			r = n2 % 10;//this will further divide reversed number into parts
			if(index==k)//check if index will equal to entered digit k  
			{
				return r; //it will return 	
			}
			n2 /= 10;//it will divide reversed number by 10 
			index++;//it will increment in index by 1	
		}
	return -1;		
	}
int main()
{
	int num, index;	//initiallizing variables
	cout<<"\n\t* Enter the Number = ";cin>>num;	//asking user to input
	cout<<"\t* Enter Index of digit you want to find = ";cin>>index;	//asking user to search index
	cout<<"\n\tSEARCHING...\n\n";
	if(value(num,index)==-1) 
	{
		cout<<"\t--> Result =  Index out of Bound\n\n";
	}
	else
	{
		cout<<"\t--> Result =  "<<value(num,index);	//to display result calling the function
		cout<<"\n\t--> Digit "<<value(num,index)<<" is located at index "<<index<<endl<<endl;//finally it will displaying final statement
	}		
	return 0;
}	
