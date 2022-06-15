/*fiza ahmad
  20i-0506 BSCS-B
  assignment 6*/
#include <iostream>
using namespace std;
void menu();
void count(int a[],int size, int x);//declaring function's prototypee
void partition(int a[], int size);
int next_XOR(int a[], int size);
void duplicate(int a[], int size);
void circular(int a[], int size);
void search(int a[],int size, int x);
void shift_circular(int a[], int size);
int main()
{
  
  int size = 15;//declaring size
  cout<<"\n\t---WELCOME TO 7 FUNCTIONS PROGRAM---\n";
  cout<<"\n\t~ Input 15 elements in array [A]\n";       
  int arr[size]={0};
  /*taking input for array*/
  for(int i=0; i<size; i++)
     {
     cout<<"\t* Element A"<<"["<<i<<"]"<<" = ";
     cin>>arr[i];
     /*input validation*/
     while(cin.fail())
         {
         cin.clear();
         cin.ignore(100,'\n');  
         cout<<"\n\tERROR! Enter again.\n\n";
         cout<<"\t* Element A"<<"["<<i<<"]"<<" = ";
         cin>>arr[i];
         }
     }
     cout<<"\t--> Entered array is   =  ";	//displaying the entered array
    for(int i=0; i<size; i++)	//this loop will display the entered array
    {
	cout<<arr[i]<<"  ";
    }   
     
  int choice=0;
  
    menu();
    cin>>choice;
    /*input validation*/
    while(cin.fail())
         {
         cin.clear();
         cin.ignore(100,'\n');  
         cout<<"\n\tERROR! Enter again.\n\n";
         menu();
         cin>>choice;
         }
    switch(choice)
          {
                case 6:
                {
                /*display searching in array*/
               int x=0;
               cout<<"\tEnter x = "; cin>>x;
               /*input validation*/
               while(cin.fail())
                     {
                     cin.clear();
                     cin.ignore(100,'\n');  
                     cout<<"\n\tERROR! Enter again.\n\n";
                     cout<<"\tEnter x = "; cin>>x;
                     }
               /*calling partion of array*/
               search(arr,size,x);
               cout<<endl;
          break;
                }
                case 1:
                {
                /*displaying counts*/
                int x=0;
                cout<<"\tEnter x = "; cin>>x;
                /*input validation*/
                while(cin.fail())
                     {
                     cin.clear();
                     cin.ignore(100,'\n');  
                     cout<<"\n\tERROR! Enter again.\n\n";
                     cout<<"\tEnter x = "; cin>>x;
                     }
                 /*calling count*/     
                count(arr,size,x);
                 cout<<endl;
          break;
                }
          case 2:
                {
                /*calling partion of array*/
                partition(arr, size);
		 cout<<endl;
          break;
                }  
          case 3:
                {
                /*calling next_XOR*/
                cout<<"\tCount of XOR = "<<next_XOR(arr,size)<<endl;
                 cout<<endl;
          break;
                }
          case 4:
                {
                /*calling duplication*/
                duplicate(arr,size);
                cout<<endl<<endl;
          break;
                }
          case 5:
         	 {
                /*calling circular addition*/
                 circular(arr, size);
                  cout<<endl;
                }
          break; 
          case 7:
                {
                /*calling shift circular addition*/
                shift_circular(arr, size);
                 cout<<endl;
          break;
                }
          case 0: cout<<"\n\tPROGRAM END\n\n"; 
          break;
          default: {
                   cout<<"\n\tINVALID\n";
                   }
    }
  return 0;
}
/*function for menu*/
void menu()
{
  cout<<"\n\n\tSelect from following: \n\n";
  cout<<"\t1. Count occurances of x\n";
  cout<<"\t2. Partition\n";
  cout<<"\t3. Next XOR\n";
  cout<<"\t4. Duplicates in array\n";
  cout<<"\t5. Circular addition\n";
  cout<<"\t6. Search the array\n";
  cout<<"\t7. Shift Circular\n";
  cout<<"\t0. Exit\n";
  cout<<"\n\tEnter your Choice: ";
}
/*function for counting*/
void count(int a[],int size, int x)
{
  int count=0;
  for(int i=0 ; i<size ; i++)//this loop will continue till i is smaller then size-2
     {
     if(a[i]==x)//if any index is euqal to entered number than count++
     count++;
     }
   cout<<"\tCount of "<<x<<"'s = "<<count<<endl;  //displaying count  
}
/*function for partition*/
void partition(int a[], int size)
{ 
  for(int i=0 ; i<size ; i++)//this loop will continue till i is smaller then size
     {
    for(int j=0 ; j<size ; j++)//this loop will continue till j is smaller then size
      {
      if(a[i]<a[j])//if a[i]<a[j] then save a[j] in a[i]
        {
       	int temp=a[i];
        	a[i]=a[j];    
       	a[j]=temp;  
        }
      }
    }
    cout<<"\tPartition of array = ";//displaying partitian
    for(int i=0 ; i<size ; i++)//this loop will continue till i is smaller then size
    {
    	cout<<a[i]<<" ";
    }
    cout<<endl;
}
/*function for XOR numbers*/
int next_XOR(int a[], int size)
{
  if(size<=2)//if size is smaller than 2 then return -1
  return -1;
  int count=0;
  for(int i=0 ; i<size-2 ; i++)//this loop will continue till i is smaller then size-2
     {
      int XOR = a[i+1] ^ a[i+2];//taking XOR of first two indexes
      if(a[i] == XOR) //if the previos index is equal to thr sum of next two XOR then count++
      count++;
     }
  return count;//return count
}
/*function for duplication*/
void duplicate(int a[], int size)
{
    int found,count;
    for (int i=0; i<size ;i++)//this loop will continue till i is smaller then size-2
    	{
        found=0;
        for (int j=0; j<i; j++)//this loop will continue till j is smaller i
            if(a[j]==a[i])
              found++;
            if (found==0)
               {
               count=1;
               for (int j=i+1; j<size; j++)//this loop will continue till j is smaller then size
                    if(a[j]==a[i])
                      count++;
         cout<<"\tCount of "<<a[i]<<"'s = "<<count<<endl;
               }
         }
}

/*function for searching in array*/
void search(int a[],int size, int num)
{
 int found=0;
 for(int i=0; i<size; i++)//this loop will continue till i is smaller then size
   {
   if(a[i]==num)//if a[i] == num then show index i
     {
     cout<<"\t"<<num<<" is present at the index = "<<i<<endl;
     found=1;//if found than initialize found with 1
     }
   }  
   if(found==0)//if not found then show element not found
   cout<<"\tElement not found\n";
}
/*function for shift circular addition*/
void shift_circular(int a[], int size)
{
  if(size<2)//if size is smaller than equal to 1 then return 1
  return;
  int index=2;//initializng index with 2
  int a1=a[0];//initialize a1 with 0 index
  int a2=a[1];//initialize a2 with 1st index
  for(int i=0 ; i<size-2 ; i++)//this loop will continue till i is smaller then size-2
  {
    a[i] = a[index];
    index++;
  }
  a[size-2]=a1;//assign a1 new to second last index
  a[size-1]=a2;//assign a2 to last index
  cout<<"\tShift circular addition is = ";
  for(int i=0 ; i<size ; i++)//displaying shift circular addition 
  {
   	cout<<a[i]<<" ";
  }
  cout<<endl;
}
 /*function for circular addition*/
void circular(int a[], int size)
{
  if(size<=1) //if size is smaller than equal to 1 then return 1
  return;
  int count=a[0] + a[1];//intialize count by adding first two indexes  
  int countNew=a[size-1] + a[0];//initialize new count with last index and first index    
  for(int i=0 ; i<size-2 ; i++)//this loop will continue till i is smaller then size-2
     {
      	a[i] = a[i+1] + a[i+2];//initializing i index with the sum of next two indexes
     }
  a[size-2] = countNew;//assign count new to second last index
  a[size-1] = count;//assign count to last index
                  cout<<"\tCircular addition = ";
                for(int i=0 ; i<size ; i++)//displaying circular addition
                  {
                  	cout<<a[i]<<" ";
                  }
                  cout<<endl;
}
