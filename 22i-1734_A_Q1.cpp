/*  
Name == Muazam Ali
Roll No. 22I-1734
Section: CYB(A)
Assignment # 01

*/

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

//------------------------ FUNCTION'S PROTOTYPE ---------------------------------------//

//---------------------- Initializer 4D array function --------------------
int**** INIT(int****A4, int X, int Y, int Z, int T=3);

//---------------------- Print Reward Location ----------------------------
void print_reward_locations(int**** A4, int T, int X);

//---------------------- Play Game Function -------------------------------
void play_game(int****A4, int T, int X);

//-------------------------------------------------------------------------------------//


//------------------------------------------- Main Function ----------------------------//

int main(){



//-------------------------------- Declaration of 4D array ----------------------------

    int ****D4 = 0;
    const int T = 3;
    int X=0;
    
//-------------------------------------------------------------------------------------

        
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_--_-_--_--_-_--_"<<endl;
char ch=0;
do{
	
	cout<<"\n Do you want to play Game (y/n) : ";
	cin>>ch;
	switch(ch){
		case 'y':
		case 'Y':
			cout<<"\n Enter a Dimention of 3D plane: ";
    		cin>>X;
    		while(X<3){
    		cout<<"\n Its 3D space so Enter 3 or greater than 3."<<endl;
    		cin>>X;
			}
    		D4 = INIT(D4, X, X, X, T);
			print_reward_locations(D4, T, X); 
			play_game(D4, T, X);
			break;
		case 'n':
		case 'N':
			return 0;
		default:
			while(ch!='y' || ch!='Y' || ch!='n' || ch!='N'){
				cout<<"\n Enter valid input: ";
				cin>>ch;
			}
		cout<<"\n Do you want to play again: ";
		cin>>ch;
	}
	
}while(ch == 'n');
    
   

	

   
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_--_-_--_--_-_--_"<<endl;    
    return 0;
}



//--------------------------- INITIALIZE FUNCTION ---------------------------------------------//
int**** INIT(int****A4, int X, int Y, int Z, int T){
    
    int reward = 1;
    srand(time(0));
    
    
//------------------------------- Allocation of memory ------------------    

    A4 = new int***[T];
   
    for(int i=0;i<X; i++)
		{
        *(A4 + i) = new int**[X];
        for(int j=0; j<Y; j++)
        	{
            *(*(A4 + i) + j) = new int*[Y];
            for(int k=0; k<Z; k++)
            	{
            *(*(*(A4 + i) + j) + k) = new int[Z];
            }
        }
    }
    
    int loop =0;
    loop = ( (X*Y*Z*T) * 0.40 ) + 6 ;
    
    
//--------------------------- Initializing values -------------------------
		for(int t=0; t<T; t++)
    		{
    		for(int i=0;i<X; i++)
        		{
        		for(int j=0; j<Y; j++)
            		{
					for(int k=0; k<Z; k++)
						{
							*(*(*(*(A4+t)+i)+j)+k) = 0;
						}
					}
				}
			}

//----------------------------------------Assigning rewards ----------------
		for(int t=0; t<T; t++)
    		{
    		for(int i=0;i<X; i++)
        		{
        		for(int j=0; j<Y; j++)
            		{
            		for(int k=0; k<Z; k++)
                		{ 
                    		while(loop > 0)
                    			{
                    				t = rand()%T;
                    				i = rand()%X;
                    				j = rand()%Y;
									k = rand()%Z;
                        			*(*(*(*(A4+t)+i)+j)+k) = reward;
                    			loop--;
                    			}
            			}
        			}
    			}
			}
    
    
    	return A4;    
	}

//------------------------------------- Reward Function ----------------------------------------------//

	void print_reward_locations(int**** A4, int T, int X){
	
		int Y=X;
		int Z=Y;
		int n=1;
		
		for(int t=0; t<T; t++)
    		{
    		for(int i=0;i<X; i++)
        		{
        		for(int j=0; j<Y; j++)
            		{
					for(int k=0; k<Z; k++)
						{
							if( (*(*(*(*(A4+t)+i)+j)+k)) == 1 )
							{
								cout<<"\n Reward_"<<n<<":"<<"("<<i<<","<<j<<","<<k<<")";
							
							switch(t){
								
								case 0:
									cout<<"PAST"<<endl;
								break;
								case 1:
									cout<<"PRESENT"<<endl;
								break;
								case 2:
									cout<<"FUTURE"<<endl;
								break;
								
								default:
									cout<<"OMG its Running Default"<<endl;
								}
						n++;
						}
					}
				}
			}
		}
	
	}//-------ending function brace

//--__----____---------___________---------______---_----_-_------_-_-_--_-___----_-----//

	void play_game(int****A4, int T, int X)
		{
			int Y = X;
			int Z = Y;
			int move =0;
			int x=0,y=0,z=0,t1=0;
			float score =0;
			float dist = 0;

			cout<<"\n How many move do you want: "<<endl;
			cin>>move;
			
			while(move > 0){
				cout<<" Enter index values (x,y,z,t): ( ";
				cin>>x;cout<<", ";
				cin>>y;cout<<", ";
				cin>>z;cout<<", ";
				cin>>t1;cout<<" )"<<endl;
					while(x > X || y > Y || z > Z || t1 > T){
						cout<<"Re-Enter index values (x,y,z,t): ";
						cin>>x>>y>>z>>t1;
					}
				int n=1;
				
			for(int t=0; t<T; t++)
    			{ 
    			for(int i=0;i<X; i++)
        			{
        			for(int j=0; j<Y; j++)
            			{
						for(int k=0; k<Z; k++)
							{
								if((*(*(*(*(A4+t)+i)+j)+k)) == 1){
									dist = sqrt( pow((i-x), 2) + pow((j-y), 2) + pow((k-z), 2) + pow((t-t1), 2) );
									cout<<"Reward_"<<n<<": Distance is "<<static_cast<int>(dist)<<endl;
									n++;
								if(x==i && y==j && z==k && t==T){
									score += 1;
									*(*(*(*(A4+t)+i)+j)+k) = 0;
								}
								else if(x==i && y==j && z==k && t!=T){
									score += 0.5;	
								}
								else
									score += 0;
								
								}
							}
						}
					}
				}
			cout<<"\n Your Total Score is : "<<score<<endl;	
			move--;
		
		}//-------- while ending
								
}//---------Ending function	 
//---------------------------------------------------------------------------------------//
