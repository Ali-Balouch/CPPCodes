#include <iostream>
using namespace std;

// Helping Function to print Spaces
void spaces(int n)
{
	if (n<0)
	{
		return;
	}
	else
	{
		cout<<" ";
		spaces(n-1);
	}
}

//Helping function to print astetriks (*)
void asterik(int star,char ch)
{
	if(star<=0)
	{
		return;
	}
	else
	{
		cout<<ch;
		asterik(star-1,ch);
	}
}

//The main printing function that calls the above two helping functions

void Pattern1(char ch,int lines, int start)
{
	if (lines<0)
	{
			return;
	}
	else
	{
    //First 4 lines make the upper half of the pattern
		spaces(lines-1);
		asterik(start,ch);
		cout<<endl;
		Pattern1(ch,lines-1,start+1);
    //next three lines make the lower half of the pattern
    //backtracking concept will be used here.
		spaces(lines);
		asterik(start-1,ch);
		cout<<endl;
	}

}


int main() {

	int lines,start;
	char ch='*';
	lines=5;
	start=1;
	Pattern1(ch,lines,start);

  return 0;
}
