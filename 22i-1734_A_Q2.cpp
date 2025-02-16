/*  
Name == Muazam Ali
Roll No. 22I-1734
Section: CYB(A)
Assignment # 01

*/

#include<iostream>
#include<cstring>
using namespace std;
//
//------------------------------- Lower to Upper -----------------------//
//
int toupper(char* ch){

while(*ch != '\0'){
    if(*ch == ' ')
        *ch++;
    else if(*ch > 64 && *ch < 91)
    	*ch++;
    else{
        *ch -= 32;
        *ch++;
      }
        }
    return 0;
}
//----------------------------------------------------------------------//

//------------------------------- Upper to Lower -----------------------//

int tolower(char* ch){
	
		while(*ch != '\0'){
			if(*ch== ' ')
				*ch++;
			else if(*ch > 97 && *ch <122)
    			*ch++;
			else{
				*ch += 32;
				*ch++;
				}
		}
	return 0;
}
//----------------------------------------------------------------------//

////--------------------------- Is Space or Escape character -------------//

int isspace (const char* ch){
	
while(*ch != '\0'){
		
	switch(*ch){
		case ' ':
		case '\r':
		case '\n':
		case '\f':
		case '\v':
		case '\t':
			return 1;
		default:
			if(*ch != '\0')
				*ch++;
			else
				return 0;		                                            
		}																	
	}
}
//----------------------------------------------------------------------//

////---------------------- Copy String1 into String2 ---------------------//

char * strncpy (char * dest, const char * src)
	{
	    char *A = &*dest;
		while(*src != '\0')
				{
					*dest = *src;
					*src++;
					*dest++;
				}
		return A;
	}
////----------------------------------------------------------------------//


//-------------------- Compare string -----------------------------------//

int strcmp (const char * cstr1, const char * cstr2){
	int str1=0, str2=0;
	while(*cstr1 != '\0'){
		str1++;
	
		while(*cstr2 != '\0'){
			str2++;
			*cstr2++;
		}
	
	*cstr1++;
	}
	if(str1 == str2)
			return 0;
		else if(str1 < str2)
			return -1;
		else if(str1 > str2)
			return 1;
	
}

//---------------------------------------------------------------------//

//-------------------------- strncat Function -------------------------//

char * strncat (char * dest, const char * src, int size){
	char *A = &*dest;
		int i=0, j=0;
		while(dest[i] != '\0'){
			i++;
		}
		for(j=0; j<size; j++ , i++){
			*(dest+i) = *(src+j);
			}
	dest[i]='\0';
	return A;
}
//------------------------------------------------------------------//

//------------------------ String finder -------------------------//

char * strstr (char * cstr1, char * cstr2){
	
	while(*cstr1 != '\0'){
			if(*cstr2 == *cstr1){
				return cstr2;
			}
			else
				*cstr1++;
	}
	if(*cstr1 == '\0')
		cout<<"\n String Not Found!"<<endl;
}


int main(){

//------------------- Array_1 initialize ----------------------
	int s1 = 0;
	cout<<"\n Enter Size of array 1: ";
	cin>>s1;
	cin.ignore();
	char *p ;
	p = new char[s1];
	for(int i=0; i<s1; i++)
	    (*(p+i))= '\0';
	for(int j=0; j<s1; j++)
	    cin.get(*(p+j));

//-------------------- Arrray_2 initialize --------------------
int s2 = 0;
cout<<"\n Enter size of array 2 : ";
cin>>s2;
cin.ignore();
	char *q ;
	q = new char[s2];
	for(int i=0; i<s2; i++)
	    (*(q+i))= '\0';
	for(int j=0; j<s2; j++)
	    cin.get(*(q+j));


//--------------------- F1 ---------------------------//	    

	//    toupper(p);
	// cout<<"Lower to Upper : "<<p<<endl;

//--------------------- F2 ---------------------------//

	//    tolower(p);
	// cout<<"Upper to lower : "<<p<<endl;

//----------------------- F3 -------------------------//

//       cout<<isspace(p);

//----------------------- F4 -------------------------//

//	q = strncpy(q, p);
//	cout<<q<<endl;

//------------------------F5--------------------------//

//	p = strncat(p, q, 5);
//    cout<<p<<endl;
    

//---------------------- F6 ---------------------------//

	p = strstr(p, q);
    cout<<p<<endl;


//----------------------- F7 ---------------------------//

delete[] p;
delete[] q;
p=0;
q=0;

	return 0;
}
