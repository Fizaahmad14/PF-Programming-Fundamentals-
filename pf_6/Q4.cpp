/*fiza ahmad
  20i-0506 BSCS-C
  assignment 4*/
#include <iostream>
#include <math.h>
using namespace std;
				/*function for sorting*/
void sort(int a[], int size);
				/*function for merging arrays*/
void mergeArrays(int a[], int b[],int,int);
int main()
{
	cout<<"\n\t---LET'S MERGE TWO ARRAYS---";
	int size1,size2;
				/*taking size of array from user*/  
	cout<<"\n\t* NOTE : size should be less than or equal to 15 (n<=15) for both arrays\n"; //displating prompt
	cout<<"\n\t--> Enter size of 1st array = ";cin>>size1; //takinf input from user 
	while(size1>15)
	{
		cout<<"\n\t* NOTE : size should be less than or equal to 15 (n<=15)\n";//displaying note if input is not valid
		cout<<"\t!Enter again!\n";	//asking from to enter again
		cout<<"\n\t--> Enter size of array = ";cin>>size1;	//taking input again 
	}
  cout<<"\n\tArray 1 :\n "; 
			/*initiallizing array and taking entries from user*/ 
  int ar1[size1]={0};
  cout<<"\tENTRIES OF MATRIX [A]\n\n";
  for(int i=0 ; i<size1 ; i++)
     {
     cout<<"\tElement A"<<"["<<i+1<<"]"<<" = ";//taking input for array 1
     cin>>ar1[i];
    		 /*input validation*/
     while(cin.fail())
         {
         cin.clear();
         cin.ignore(100,'\n');  
         cout<<"\n\tERROR! Enter again.\n";
         cout<<"\tElement A"<<"["<<i+1<<"]"<<" = ";//taking again
         cin>>ar1[i];
         }
     }
  		/*sorting in ascending order*/
  sort(ar1,size1);
  cout<<"\n\t~ SORTED ARRAY 1 = ";
  for(int i=0 ; i<size1 ; i++)
     {
     cout<<ar1[i]<<" ";
     }
  cout<<endl;
		  /*taking size of array from user*/
	cout<<"\n\t--> Enter size of 2nd array = ";cin>>size2; //taking input from user 
	while(size2>15)
	{
		cout<<"\n\t* NOTE : size should be less than or equal to 15 (n<=15)\n";//displaying note if input is not valid
		cout<<"\t!Enter again!\n";	//asking from to enter again
		cout<<"\n\t--> Enter size of array = ";cin>>size2;	//taking input again 
	}
  cout<<"\n\tArray 2 :\n ";
		/*initiallizing array and taking entries from user*/
  int ar2[size2]={0};
  cout<<"\tENTRIES OF MATRIX [B]\n\n";
  for(int i=0 ; i<size2 ; i++)
     {
     cout<<"\tElement B"<<"["<<i+1<<"]"<<" = ";
     cin>>ar2[i];
   		  /*input validation*/
     while(cin.fail())
         {
         cin.clear();
         cin.ignore(100,'\n');  
         cout<<"\n\tERROR! Enter again.\n\n";
         cout<<"\tElement B"<<"["<<i+1<<"]"<<" = ";
         cin>>ar2[i];
         }
     }
 		 /*sorting in ascending order*/
  sort(ar2,size2);
  cout<<"\n\t~ SORTED ARRAY 2: ";
  for(int i=0 ; i<size2 ; i++)
    {
    cout<<ar2[i]<<" ";
    }

 		 /*applying logic, calling function of merging arrays*/
  mergeArrays(ar1,ar2,size1,size2);
  cout<<endl<<endl;
  cout<<"\tMERGING BOTH ARRAYS :\n\n";
  		/*displaying results*/
  cout<<"\t~ Array 1 = ";
  for(int i=0 ; i<size1 ; i++)
     {
   	  cout<<ar1[i]<<" ";
     }
  cout<<"\n\t~ Array 2 = ";
  for(int i=0 ; i<size2 ; i++)
     {
    	 cout<<ar2[i]<<" ";
     }
     cout<<endl<<endl;
 return 0;   
}
		/*sorting arrays*/
void sort(int a[], int size)
   {
  for(int i=0 ; i<size ; i++)
     {
    for(int j=0 ; j<size ; j++)
       {
        if(a[i] < a[j])
          {
          int temp=a[i];
          a[i]=a[j];
          a[j]=temp;
          }
       }
     }
   }
void mergeArrays(int a[], int b[], int r, int c)
{
  //first merge
  int mergeArr[r+c];//declaring size by adding rows and columns
  for(int i=0 ; i<r ; i++)//loop for rows
    { 
    mergeArr[i]=a[i];//assigning merge arr
    }
  for(int i=0 ; i<c ; i++)//loop for columns
    {
    mergeArr[(i+r)]=b[i];//assigning sum of i and r to another array 
    }
  
  //sorting mergerd array
  sort(mergeArr, r+c);

  //spliting merged array
  for(int i=0 ; i<r ; i++)//loop for rows
    {
    a[i]=mergeArr[i];
    }
  for(int i=0 ; i<c ; i++)//loop for columns
    {
    b[i]=mergeArr[i+r];
    }
}
