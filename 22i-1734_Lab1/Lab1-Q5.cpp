#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;


void GamePattern(char D2[][30]){
	
	for (int i=0; i<30; i++){
		for (int j=0; j<30; j++){
			i = rand()%30;
			j = rand()%30;
			if(i/2 != 0){
				D2[i][j] = '*';
			}
			cout<<D2[i][j]<<" ";
		}
	cout<<endl;
	}
}

int check(char D2[][30], int r, int c){
	int n=0;
	
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			if(i == 0 && j==0)
				continue;
			int r1 = r + i;
			int c1 = c + j;
			if((r1 >= 1) && (r1 < 30) && (c1 >= 1) && (c1 < 30))
				if(D2[r1][c1] == '*'){
					++n;
				} 
			
		}
	}
	return n;
}


void UpdateGame(char D2[][30]){
	char D3[30][30] = {0};
	for(int i=0;i<30; i++){
		for(int j=0; j<30; j++){
			int CurrentNeighbors = check(D2, i, j);
			if(D2[i][j] == '*'){
				if((CurrentNeighbors == 2) || (CurrentNeighbors == 3)){
					D3[i][j] = '*';
				}
				else
					D3[i][j] = ' ';
				}
			else if(CurrentNeighbors == 3){
				D3[i][j] = '*'; 
 			}
 			else
 		    	D3[i][j] = ' ';	
		}
	}
	
	for(int i=0;i<30; i++){
		for(int j=0; j<30; j++){
			D2[i][j] = D3[i][j];
		}
		
	}
}


int main(){
	
	srand(time(0));
	
	const int R = 30;
	const int C = 30;
	char Game[R][C] = {0};
	
	
	GamePattern(Game);
	
//----------------- In Below function i have take the idea from chatGpt after doing many tries.--//
	UpdateGame(Game);
	
	
	
	return 0;
	
}


//---------------------------------------------------------------------------------------//
