#include<iostream>

using namespace std;

class park {
	
	private:
		int capacity;
		int tktprice;
		int tktnumber;
		int total;
	
	public:
		park();
		park(int tktn, int price, int csty);
		void setcap(int c);
		void setprice();
		void setnumber(int n);
		void settot(int t);
		int getcap();
		int getprice();
		int getnumber();
		int gettot();
		void PersonINPark(int person);
		void LeftPerson(int Lperson);
		void Isfull();
		void printinfo();
		
		~park();
		
};

		park :: park(){
			//Default constructor
		}
		park :: park(int tktn, int price, int csty){
			tktprice = price;
			capacity = csty;
			tktnumber = tktn;
			total = tktprice*tktnumber;
		}
		void park :: setcap(int c){
			capacity = c;
		}
		void park :: setprice(){
			tktprice = 20;
		}
		void park :: setnumber(int n){
			tktnumber = n;
		}
		void park :: settot(int t){
			total = t;
		}
		int park :: getcap(){
			return capacity;
		}
		int park :: getprice(){
			return tktprice;
		}
		int park :: getnumber(){
			return tktnumber;
		}
		int park :: gettot(){
			total = tktprice*tktnumber;
			return total;
		}
		void park :: PersonINPark(int person){
			tktnumber += person;
		}
		void park :: LeftPerson(int Lperson){
			tktnumber -= Lperson; 
		}
		void park :: Isfull(){
					if(tktnumber > capacity)
						cout<<" \n Capacity is Full."<<endl;
		}
		
		void park:: printinfo(){
			if(tktnumber <= capacity){
				cout<<" Total Persons : "<<tktnumber<<endl;
				cout<<" Total Capacity: "<<capacity<<endl;
				cout<<" Ticket Price  : "<<tktprice<<endl;
				cout<<" Total Amount  : "<<total<<endl;
			}
			else{
				Isfull();
			}	
		
		}
				
	park :: ~park(){
			// destructor
		}





int main(){
	park per1;
	//park per1();
	//park per1(10,20,20);
	//per1.printinfo();
	//park per2(30,30, 20);
	//per2.printinfo();
	//park per1();
	per1.setcap(20);
	per1.setnumber(10);
	per1.setprice();
	per1.settot(1);
	per1.Isfull();
	per1.PersonINPark(4);
	per1.LeftPerson(2);
	if(per1.getnumber() > per1.getcap()){
		per1.Isfull();
	}
	else{
	cout<<"Total Capacity: "<<per1.getcap()<<endl;
	cout<<"Total Person: "<<per1.getnumber()<<endl;
	cout<<"Total Price: "<<per1.getprice()<<endl;
	cout<<"Total Amount: "<<per1.gettot()<<endl;
	}
	
	per1.printinfo();
	return 0;
}
