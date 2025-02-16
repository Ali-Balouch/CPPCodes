#include<iostream>
using namespace std;

class Date {
	
	private:
		int day;
		int month;
		int year;
		
	public:
		
		Date();
		void setday(int d);
		void setmonth(int m);
		void setyear(int y);
		int getday();
		int getmonth();
		int getyear();
		bool LeapYear(Date obj1);
		int SubstractDate (Date a, Date b);
		~Date();
};

	Date ::	Date(){
		//Default constructor
	}
	void Date :: setday(int d){
		day = d;
	}
	void Date :: setmonth(int m){
		month = m;
	}
	void Date :: setyear(int y){
		year = y;
	}
	int Date ::	getday(){
		return day;
	}
	int Date ::	getmonth(){
		return month;
	}
	int Date ::	getyear(){
		return year;
	}
	bool Date :: LeapYear(Date obj1){
		if( (obj1.year%4==0) && (obj1.year%400==0) || (obj1.year%100 !=0) ){
			return 1;
		}
		else
		return 0;
	}
	int Date ::	SubstractDate (Date a, Date b){
		day = a.day - b.day;
		month = a.month - b.month;
		year = a.year - b.year;
//		cout<<" Day = "<<day<<" Month = "<<month<<" Year = "<<year<<endl;
		return 0;
	}
	Date :: ~Date(){
	
	}

int main(){
	
	Date obj1;
	obj1.setday(7);
	obj1.setmonth(11);
	obj1.setyear(2023);
	cout<<"\n Object One"<<endl;
	cout<<" Day =  "<<obj1.getday()<<endl;
	cout<<" Month =  "<<obj1.getmonth()<<endl;
	cout<<" Year =  "<<obj1.getyear()<<endl;
	cout<<" Leap year or not : "<<obj1.LeapYear(obj1)<<endl;
	
	Date obj2;
	obj2.setday(5);
	obj2.setmonth(2);
	obj2.setyear(2020);
	
	cout<<"\n Object Two"<<endl;
	cout<<" Day =  "<<obj2.getday()<<endl;
	cout<<" Month =  "<<obj2.getmonth()<<endl;
	cout<<" Year =  "<<obj2.getyear()<<endl;
	
	cout<<"\n After Subtraction "<<endl;
	obj1.SubstractDate(obj1, obj2);
	cout<<" Day =  "<<obj1.getday()<<endl;
	cout<<" Month =  "<<obj1.getmonth()<<endl;
	cout<<" Year =  "<<obj1.getyear()<<endl;
	
	
	return 0;
}
