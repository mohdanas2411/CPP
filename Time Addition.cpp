#include<iostream>
using namespace std;
class Time{
	int minutes,hours;
	void display(){
			cout<<"Total Time is "<<hours<<" hours "<<minutes<<" minutes";
		}
	public:
	
		void sum(Time o1,Time o2){
			Time o3;
			o3.minutes = (o1.minutes+o2.minutes)%60;
			o3.hours = o1.hours+o2.hours+((o1.minutes+o2.minutes)/60);
			o3.display();
		}
		void getTime();
		
};
	void Time::getTime(){
			cout<<"Enter the time in Hours and Minute format : ";
			cin>>hours>>minutes;
		}
int main(){
	Time obj1,obj2,obj3;
	obj1.getTime();
	obj2.getTime();
	obj3.sum(obj1,obj2);
	return 0;
}

