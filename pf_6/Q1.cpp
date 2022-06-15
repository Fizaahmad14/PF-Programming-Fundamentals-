/*fiza ahmad
  20i-0506 BSCS-B
  assignment 6*/
#include<iostream>
void productofAB();
using namespace std;
int main()
   	{
   	productofAB();//
  	return 0;
  	}
	
void productofAB()
{   
	int m1[100][100], m2[100][100], product[100][100],r1,r2,c1,c2;
	cout<<"\n\n---PRODUCT OF [A][B]---\n\n";
	cout<<"\t* Enter number of rows for 1st matrix [A]    = "; cin>>r1;
		/* input validation */
		while(r1<0||r1>100||cin.fail())//input validation if char is entered 
  		{
   			cin.clear();
   			cin.ignore(100,'\n');  
   			cout<<"\n\tERROR! Enter again.\n";
   			cout<<"\t* Enter number of rows for 1st matrix [A]    = "; cin>>r1;
  		}
		cout<<"\t* Enter number of columns for 1st matrix [A] = "; cin>>c1;
		/* input validation */
		while(c1<0||c1>100||cin.fail())//input validation if char is entered 
  		{
  		 	cin.clear();
  			cin.ignore(100,'\n');  
   			cout<<"\n\tERROR! Enter again.\n";
   			cout<<"\t* Enter number of columns for 1st matrix [A] = "; cin>>c1;
  		}
		cout<<"\t* Enter number of rows for 2nd matrix [B]    = "; cin>>r2;
		/* input validation */
		while(r2<0||r2>100||cin.fail())//input validation if char is entered 
  		{
  		 	cin.clear();
   			cin.ignore(100,'\n');  
   			cout<<"\n\tERROR! Enter again.\n";
   			cout<<"* Enter number of rows for 2nd matrix [A]    = "; cin>>r2;
  		}
		cout<<"\t* Enter number of columns for 2nd matrix [B] = "; cin>>c2;
		/* input validation */
		while(c2<0||c2>100||cin.fail())//input validation if char is entered 
 		{
   			cin.clear();
   			cin.ignore(100,'\n');  
   			cout<<"\n\tERROR! Enter again.\n";
   			cout<<"\t* Enter number of columns for 2nd matrix [B] = "; cin>>c2;
  		}
		/*showing ERROR! if number of colums of 1st matrix are not equal to number of rows of 2nd matrix*/  
		while(c1!=r2)
		{
		     cout<<"\n\t!ERROR! as number of colums of 1st matrix are not equal to number of rows of 2nd matrix!\n ENTER AGAIN\n\n";
     			cout<<"\t* Enter number of columns for 1st matrix [A] = "; cin>>c1;
     			/* input validation */
    			 while(c1<0||c1>100||cin.fail())//input validation if char is entered 
    		      	{
         	 		cin.clear();
         	 		cin.ignore(100,'\n');  
         	 		cout<<"\n\tERROR! Enter again.\n";
         	 		cout<<"\t* Enter number of columns for 1st matrix [A] = "; cin>>c1;//taking again
          		}
     			cout<<"\t* Enter number of rows for 2nd matrix [B]    = "; cin>>r2;
     			/* input validation */
     			while(r2<0||r2>100||cin.fail())//input validation if char is entered 
         		{
         			cin.clear();
         			cin.ignore(100,'\n');  
         			cout<<"\n\tERROR! Enter again.\n";
         			cout<<"\t* Enter number of rows for 2nd matrix [B]    = "; cin>>r2;//taking again
         		}
     		}
		/*input for 1st matrix [A]*/       
		cout<<"\n\t1st MATRIX [A]\n\n";
		for(int i=0; i<r1 ;i++)
 		{
   			for(int j=0; j<c1; j++)
     			{
     			cout<<"\tElement A"<<"["<<i+1<<"]["<<j+1<<"]"<<" = ";//taking input from user
     			cin>>m1[i][j];
     				while(cin.fail())//input validation if char is entered 
        			{
         				cin.clear();
         				cin.ignore(100,'\n');  
         				cout<<"\n\tERROR! Enter again.\n";
         				cout<<"\tElement A"<<"["<<i+1<<"]["<<j+1<<"]"<<" = ";//taking again
         				cin>>m1[i][j];
         			}
     			}
   		}
		/*input for 2nd matrix [B]*/   
		cout<<"\n\t2nd MATRIX [B]\n\n";     
		for(int i=0; i<r2 ;i++)
 	  	{
   			for(int j=0; j<c2; j++)
     			{
     				cout<<"\tElement B"<<"["<<i+1<<"]["<<j+1<<"]"<<" = ";//taking again
     				cin>>m2[i][j];
     					while(cin.fail())//input validation if char is entered 
        		 		{
         					cin.clear();
         					cin.ignore(100,'\n');  
         					cout<<"\n\tERROR! Enter again.\n";
         					cout<<"\tElement B"<<"["<<i+1<<"]["<<j+1<<"]"<<" = ";//taking again
         					cin>>m2[i][j];
         				}     
     			}
   		}
		/*initiallizing product as per matrix multiplication rules*/   
		for(int i=0; i<r1 ;i++)
  	 	{
   			for(int j=0; j<c2 ;j++)
      			{
      				product[i][j]=0;//initializing product entries with zero
      			}
   		} 
		/* applying logic for product of both */     
		for(int i=0; i<r1 ;i++)
   		{
   			for(int j=0; j<c2 ;j++)
     	 		{
      				for(int k=0; k<c1; k++)
         			{
         				product[i][j]+=m1[i][k]*m2[k][j];//it will take product of both
         			}
      			}
   		}    
		/* display product*/
		cout<<"\n\tPRODUCT OF MATRICES [A][B]\n\n";    
		for(int i=0; i<r1 ;i++)
   		{
   			for(int j=0; j<c2; j++)
     			{
      				cout<<"\t"<<product[i][j];//it will display product of both
      				if(j==c2-1)
      				cout<<endl;
     			}
   		} 
   	cout<<endl;	
	}
