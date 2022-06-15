/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 5*/
	#include<iostream>
	using namespace std;
	int main()
	{	
		char A,B,C,D,E;//declaring variables 
		int count=0;
		cout<<"\n\t\t  **PERMUTAIONS OF ABCDE**\n\n";//displaying statement
		
//loops 
/*Loop 1*/	for (int a=65; a<70; a++)//This loop will assign 'A' to A
		{
       		A = a;
			for (int b=65; b<70; b++)//This loop will assign 'B' to B if b!=a
/*Loop 2*/		{
            				if (b!=a)
            				{
                				B = b;
                				for (int c=65; c<70; c++)//This loop will assign 'C' to C if c!=a and c!=b 
/*Loop 3*/					{
                  					if(c!=a && c!=b)
                  					{
                                                      	C = c;
								for (int d=65; d<70; d++)//This loop will assign 'D' to D if d!=c, d!=b, d!=a 
/*Loop 4*/							{
                        						if(d!=c && d!=b && d!=a)
                        						{
                                                            			D = d;
										for (int e=65; e<70; e++)//This loop will assign 'E' to E 
/*Loop 5*/									{
											if (e!=d && e!=c && e!=b && e!=a) 
											{
												E = e;
												count++;
												//This will display all permutations of ABCDE
												cout<<"\t"<<A<<B<<C<<D<<E;
													
											}
										}
									}
								}
							}
						}
					cout<<endl;	
					}  
				}
			} 
	//displaying count of total permutations		
	cout<<"\n\t-->The total Permutations of "<<E<<D<<C<<B<<A<<" are = "<<count<<endl<<endl;		   
    return 0;
    }
