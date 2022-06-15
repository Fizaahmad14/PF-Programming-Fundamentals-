/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 7*/
#include <iostream>
using namespace std;
	void menu()	//making function of menu
	{
		cout<<"\n\t*WELCOME TO MINI CALCULATOR PROGRAM*\n\n";	//displaying menu
		cout<<"\t ______________________________\n";			
		cout<<"\t|    FUNCTIONS     | OPERATORS |\n";
		cout<<"\t|__________________|___________|\n";
		cout<<"\t|    DIVISION      |     /     |\n";
		cout<<"\t|  MULTIPLICATION  |     *     |\n";
		cout<<"\t|    ADDITION      |     +     |\n";
		cout<<"\t|   SUBTRACTION    |     -     |\n";
		cout<<"\t|    REMAINDER     |     %     |\n";
		cout<<"\t|     ABSOLUTE     |     ~     |\n";
		cout<<"\t|__________________|___________|\n";
	}
	int Multiplication(int a,int b)		//stating Multplication function's prototype
	{
  		if(a>0 && b>0)				//it will check if a>0 and b>0
   		 {
        		int c=--b;			//it will initialize c with decrement by 1 in b
        		int d=a;			//it will assign a to d
        		for(int i=0; i<c; i++)		//it will continue until i<c
        		{
           		 	for(int i=0; i<d; i++)//this nested loop will increment in a till i<d
            			{
            				a++;		//increment by 1 in a
		            	}
       		}
    		return a;				//it will return a
    		}
    		else if(a<0 && b>0)			//it will check if a<0 and b>0 
    		{
    			int c=--b;			//it will initialize c with decrement by 1 in b
    			int d=a;			//it will assign a to d
    			for(int i=0; i<c; i++)		//it will continue until i<c
       		{
            			for(int i=0; i>d; i--)//this nested loop will decrement in a till i>d
            			{
              				a--;		//decrement by 1 in a
			        }
        		}
   		return a;				//it will return a
    		}
    		else if(a>0 && b<0)			//it will check if a>0 and b<0 
    		{
    			int c=b;			//it will initialize c with b
    			int d=--a;			//it will initialize d with decrement by 1 in a
   			for(int i=0; i<d; i++)		//it will continue until i<d
        		{
            			for(int i=0; i>c; i--)//this nested loop will decrement in b until i>c
            			{
                			 b--;		//decrement by 1 in b
		   	        }
        		}
   			return b;			//it will return b
   	 		}
    		else if(a<0 && b<0)			//it will check if a<0 and b<0
    		{
    			for(int i=0; i>a; i++)		//it will continue until i>a
   			{
        			a++;a++;		//this will change a the negative value into positive value
    			}
    			int d=a;			//it will initialize d with a;
   			for(int i=0; i>b; i++)		//it will continue until i>b
    			{
        			b++;b++;		//this will change b the negative value into positive value
    			}
    			int c=--b;			//it will initialize c with decrement by 1 in b
		  	for(int i=0; i<c; i++)		//it will continue until i<c
       		{
            			for(int i=0; i<d; i++)//this nested loop will increment in a until i<d
            			{
            				a++;		//increment by 1 in a
				}
       		}
   			return a;			//it will return a 
    			}
    	return 0;				
	}
	int Addition(int a,int b)			//stating Addition function's prototype			
	{
		if((a>=0 && b>=0)||(a<=0 && b>=0))	//it will check if (a>=0 && b>=0)||(a<=0 && b>=0)
    		{
       	 	for(int i=0; i<b; i++)		//it will continue until i<b
        		{
            			a++;			//increment by 1 in a
        		}
    		return a;				//it will return a 
    		}
    		else if(a>=0 && b<=0)			//it will check if (a>=0 && b<=0)	
    		{
      			 for(int i=0; i<a; i++)	//it will continue until i<a
       		 {
          			b++; 			//increment by 1 in b 
        		 }
      		return b;
   	 	}
    		else if( a==b && (a<=0 && b<=0))	//it will check if a==b && (a<=0 && b<=0)
    		{
      			for(int i=0; i>a; i++)		//it will continue until i>a
    			{		
        			a++;a++;		//this will change a the negative value into positive value
    			}
      			for(int i=0; i>b; i++)		//it will continue until i>b
    			{
        			b++;b++;		//this will change b the negative value into positive value
    			}
    			for(int i=0; i<b; i++)		//it will continue until i<b
        		{
            			a++;			//increment by 1 in a
        		}
        		int c=a;
        		for(int i=0; i<a; i++)		//it will continue until i<a
    			{		
        			c--;c--;		//this will change c the positive value into negative value
    			}
    		return c;				//it will return c
    		}
    		else if(a<=0 && b<=0)			//it will check if (a<=0 && b<=0)
    		{
          		for(int i=0; i>a; i++)		//it will continue until i>a
    			{
       			 a++;a++;		//this will change a the negative value into positive value
    			}
      			for(int i=0; i>b; i++)		//it will continue until i>b
    			{
        			b++;b++;		//this will change b the negative value into positive value
    			}
        		for(int i=0; i<b; i++)		//it will continue until i<b
        		{
            			a++;			//increment by 1 in a			
        		}
        		int c=a;
        		for(int i=0; i<a; i++)		//it will continue until i<a
        		{
          			c--;c--;		//this will change c the positive value into negative value
        		}
    		return c;				//it will return c
    		}
	return 0;
	}
	int Division(int a, int b)			//stating Divison function's prototype
	{
		int no = 1;				//declaring and initializing variables
		if(b==0)				//it will check if b=0	
		{
			return no;			//it will return 0
		}
		else if(a>0 && b>0)			//it will check if (a>0 && b>0)
		{
			int c=0;			//initializing and declaring variables
			while(a>=b)
			{
				for(int i=0; i<b; i++)	//it will continue until i<b	
				{
					a--;		//decrement by 1 in a
				}
				c++;			//it will increment in c by 1 		
			}
		return c;				//it will return c	
		}
		else if(a>0 && b<0)			//it will check if (a>0 && b<0)
		{
			for(int i=0; i>b; i++)		//it will continue until i>b
    			{
        			b++;b++;		//this will change b the negative value into positive value
        			
    			}
    			int c=0;
			while(a>=b)
			{
				for(int i=0; i<b; i++)	//it will continue until i<b
				{
					a--;		//decrement by 1 in a
				}
				c++;			//it will return c		
			}
			int d=c;			//it will assign c to d
        		for(int i=0; i<c; i++)		//it will continue until i<c
        		{
          			d--;d--;		//this will change d the positive value into negativee value		
        		}
    		return d;				//this will return d 	
		}
		else if(a<0 && b>0)			//it will check if (a<0 && b>0)
		{
			for(int i=0; i>a; i++)		//it will continue until i>a
    			{
        			a++;a++;		//this will change a the negative value into positive value
        			
    			}
    			int c=0;			//initialize and declare c
			while(a>=b)			//it will continue till a>=b
			{
				for(int i=0; i<b; i++)	//it will continue until i<b
				{
					a--;		//decrement by 1 in a
				}
				c++;			//increment by 1 in c	
			}
			int d=c;			//it will assign c to d
        		for(int i=0; i<c; i++)		//it will continue until i<c
        		{
          			d--;d--;		//this will change d the positive value into negative value
        		}
    		return d;	
		}
		else if(a<0 && b<0)			//it will check if (a<0 && b<0)
		{
			for(int i=0; i>a; i++)		//it will continue until i>a
    			{
        			a++;a++;		//this will change a the negative value into positive value		
    			}
    			for(int i=0; i>b; i++)		//it will continue until i>b
    			{
        			b++;b++;		//this will change b the negative value into positive value
    			}
    			int c=0;
			while(a>=b)
			{
				for(int i=0; i<b; i++)//it will continue until i>a
				{
					a--;		//decrement by 1 in a
				}
				c++;			//increment by 1 in c		
			}
    		return c;	
		}
	return 0;	
	}
	int Subtraction(int a, int b=0)		//stating Subtraction function's prototype
	{
		if((a>=0 && b>=0)||(a<=0 && b>=0))	//it will check if (a>=0 && b>=0)||(a<=0 && b>=0)
		{
			for(int i=0; i<b; i++)
			{
				a--;			//decrement by 1 in a
			}
		return a;	
		}
		else if(a>=0 && b<=0)			//it will check if (a>=0 && b<=0)
		{
		for(int i=0; i>b; i++)			//it will continue until i>b
    			{
        			b++;b++;
    			}
    		for(int i=0; i<b; i++)			//it will continue until i<b
			{
				a++;			//increment by 1 in a
			}
		return a;		
		}
		else if(a<=0 && b<=0)			//it will check if(a<=0 && b<=0)
    		{
    			for(int i=0; i>b; i++)		//it will continue until i>b
    			{		
      				b++;b++;
    			}
   			for(int i=0; i<b; i++)		//it will continue until i<b
        		{
            			a++;			//increment by 1 in a
        		}
       	return a;		
		}		
	return 0;	
	}
	int Remainder(int a, int b=1)			//stating Remainder function's prototype
	{
		if(a>0 && b>0)				//it will check if(a>0 && b>0)
		{
			int c=0;
			int d=a;
			while(a>=b)
			{
				for(int i=0; i<b; i++)	//it will continue until i<b
				{
					a--;		//decrement by 1 in a
				}
				c++;			//increment by 1 in c
			}
			for(int i=0; i<b; i++)		//it will continue until i<b
			{
			        for(int i=0; i<c; i++)//it will continue until i<c
			        {
			            d--;		//decrement by 1 in d
			        }
			}
		return d;    
		}
	return 0;	
	}
	int Absolute(int c=1)				//stating Remainder function's prototype	
	{
		if(c>0)				//it will check if (c>0)
		{
			return c; 
		}
		else if(c<0)				//it will check if(c<0)
		{
			for(int i=0; i>c; i++)		//it will continue until i>c
    			{		
      				c++;c++;		//this will change b the negative value into positive value
    			}
    		return c;		
		}
	return 0;	
	}		
	
int main()
{
    menu();		//calling menu function 
    char opr;		//declaring variables
    int a, b, c;
    cout<<"\n\t* Simply press an operator to perform calculations\n";	
    cout<<"\t--> Operator = ";cin>>opr;	//asking user to enter operator
   	 if(opr=='~')				//asking for one input if operator is '~'  
    	{
		cout<<"\n\t* Input number to perform Calculation\n";
		cout<<"\t--> Number = ";cin>>c;   	//asking to enter number 
    	}
    	else if(opr=='/'||opr=='*'||opr=='+'||opr=='-'||opr=='%')//it will take two inputs if condition is true
    	{
    		cout<<"\n\t* Input numbers to perform Calculation\n";	
    		cout<<"\t--> 1. Number  = ";cin>>a;	//asking to enter numbers 
    		cout<<"\t--> 2. Number  = ";cin>>b;	
    	}
    	else
    	cout<<"\n\tINVALID OPERATOR\n\n";	//display error if input is invalid 
    	
    cout<<"\n\t* Result\n";	
    switch(opr)
    {
    	case '*': cout<<"\t--> Multiplication ("<<a<<" * "<<b<<") = "<<Multiplication(a,b)<<endl;//displaying multiplication
    	break;
    	
    	case '+': cout<<"\t--> Addition ("<<a<<" + "<<b<<") = "<<Addition(a,b)<<endl;//displaying addition
    	break;
    	
    	case '-': cout<<"\t--> Subtraction ("<<a<<" - "<<b<<") = "<<Subtraction(a,b)<<endl;//displaying Subtraction
    	break;
    	
    	case '~': cout<<"\t--> Absolute |"<<c<<"| = "<<Absolute(c)<<endl;//displaying Absolute
    	break;
    	
    	case '/':      if(b==0)//If denom is zero then displaying error
  			cout<<"\t-->Division ("<<a<<" / "<<b<<") = error"<<endl;
    			else	//displaying division
   			cout<<"\t--> Division ("<<a<<" / "<<b<<") = "<<Division(a,b)<<endl;
    	break;
    	
    	case '%':	if(a<0 || b<0)//If a if less than or b is less than zero  then displaying error
    			cout<<"\t-->Remainder ("<<a<<" % "<<b<<") = error"<<endl;
    			else
    		  	cout<<"\t--> Remainder ("<<a<<" % "<<b<<") = "<<Remainder(a,b)<<endl;
    	break;
    	
    	 
    
    }
    cout<<endl;

    return 0;
}
