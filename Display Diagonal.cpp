#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){


	int D2[2][2] = {0};
	srand(time(0));
	
	for(int i=0; i<2; i++){
			for(int j=0;j<2; j++){
				D2[i][j] =1 +  rand()%5;
			}
		}
		
	for(int i=0; i<2; i++){
			for(int j=0;j<2; j++){
				cout<<D2[i][j]<<" ";
			}
		cout<<endl;
	}
	cout<<"------------------";
	int ad=1, bc=1, det =0;	
	for(int i=0; i<2; i++){
			for(int j=0;j<2; j++){
				if(i==j){
					ad *= D2[i][j]; 
				}
				else{
					bc *= D2[i][j];
				}
			}
		cout<<endl;
		}	
		cout<<"----------------"<<endl;
		det = ad -bc;
		cout<<det<<" "<<endl;
	return 0;	
}
