#include<iostream>
#include<string>
#include<fstream>
#include<time.h>
//#include<cstring>
using namespace std;
void displaymenu();
void displaymenu();
float featurecancel(float d, float fuel);


class Name
{
	char* fname;
	char* lname;
public:

	void settername2(char* a, char* b)
	{
		fname = new char;
		lname = new char;
		char* x;
		char* y;
		x = new char;
		y = new char;
		x = a;
		y = b;
		fname = x;
		lname = y;
	}
	Name()
	{
		fname = new char;
		lname = new char;
		*fname = '\0';
		*lname = '\0';
	}

	Name(char* a, char* b)
	{
		fname = new char;
		lname = new char;
		*fname = *a;
		*lname = *b;
	}

	char* getterf()
	{
		return fname;
	}

	char* getterl()
	{
		return lname;
	}

	void setter(char f, char l)
	{
		*fname = f;
		*lname = l;

	}

	Name(const Name& obj2)
	{
		fname = new char;
		lname = new char;
		*fname = *obj2.fname;
		*lname = *obj2.lname;

	}

	friend ostream& operator << (ostream, const Name&);


	//~Name()
	//{
	//	delete[] fname;                      //destructor not working... giving unknown error
	//	delete[] lname;
	//}

	void display()
	{
		cout << fname << " ";
		cout << lname;

	}

	void nameinput()                           //name
	{
		cout << "Enter first name: ";
		cin >> fname;
		cout << "Enter last name: ";
		cin >> lname;
	}

	void deletename()
	{
		*fname = '\0';
		*lname = '\0';
	}



};

ostream& operator<<(ostream out, const Name& obj)
{
	out << *obj.fname;
	cout << endl;
	out << *obj.lname;
	return out;
}


class Date
{
	int day;
	int month;
	int year;
public:

	void setterdate2(int a, int b, int c)
	{
		day = a;
		month = b;
		year = c;
	}

	Date()
	{
		day = 0;
		month = 0;
		year = 0;
	}

	Date(int a, int b, int c)
	{
		day = a;
		month = b;
		year = c;
	}

	int getday()
	{
		return day;
	}

	int getmonth()
	{
		return month;
	}

	int getyear()
	{
		return year;
	}

	void setter(int x, int y, int z)
	{
		day = x;
		month = y;
		year = z;
	}
	void dateinput()
	{
		cout << "Enter day: ";
		cin >> day;
		cout << "Enter month: ";
		cin >> month;
		cout << "Enter year: ";
		cin >> year;
	}

	void display()
	{
		cout << day << "/" << month << "/" << year;
	}

	void deletedate()
	{
		day = 0;
		month = 0;
		year = 0;
	}
	friend ostream& operator <<(ostream, const Date&);
};

ostream& operator <<(ostream out, const Date& obj)
{
	out << obj.day << "/" << obj.month << "/" << obj.year;
	return out;
}

class Time
{
	int hour;
	int min;
	int sec;
public:
	Time()
	{
		hour = 0;
		min = 0;
		sec = 0;
	}

	Time(int a, int b, int c)
	{
		hour = a;
		min = b;
		sec = c;
	}

	int getterhour()
	{
		return hour;
	}

	int getmin()
	{
		return min;
	}

	int getsec()
	{
		return sec;
	}

	void setter(int x, int y, int z)
	{
		hour = x;
		min = y;
		sec = z;
	}

	friend ostream& operator<<(ostream&, const Time&);

	void display()
	{
		cout << hour << ":" << min << ":" << sec;
	}

	void inputtime()
	{
		cout << "Enter hour: ";
		cin >> hour;
		cout << "Enter min: ";
		cin >> min;
		cout << "Enter seconds: ";
		cin >> sec;
	}
};

ostream& operator<<(ostream& out, const Time& obj)
{
	out << obj.hour << ":" << obj.min << ":" << obj.sec;
	return out;
}

class Service
{
	char* source;
	char* destination;
	float distance;
	Date bookingdate;
	Time bookingtime;
	int status;
	float fuelrate;

	int pointer;


	int serid;
	int cusid;
	int driid;
	int vechid;
	bool checkcancel;
public:
	float getdistance()
	{
		return distance;
	}
	char* getsource()
	{
		return source;
	}
	char* getdestination()
	{
		return destination;
	}
	int gethour()
	{
		return bookingtime.getterhour();
	}
	int getmin()
	{
		return bookingtime.getmin();
	}
	int getsec()
	{
		return bookingtime.getsec();
	}

	void setdistance(int x)
	{
		distance = x;

	}

	void setdate(int x, int y, int z)
	{
		bookingdate.setter(x, y, z);
	}

	void settime(int x, int y, int z)
	{
		bookingtime.setter(x, y, z);
	}
	void setstatus()
	{
		checkcancel = true;
	}

	bool returncheck()
	{
		return checkcancel;
	}

	int getserid()
	{
		return serid;
	}

	void setserid(int x)
	{
		serid = x;
	}

	void setstatus(int x)
	{
		status = x;
	}



	float returndis()
	{
		return distance;
	}

	float returnfuel()
	{
		return fuelrate;
	}

	Service()
	{
		source = new char;
		destination = new char;
		distance = 0;
		status = 0;
		fuelrate = 62.39;
		cusid = NULL;
		driid = NULL;
		vechid = NULL;
		serid = 0;
		pointer = NULL;
		checkcancel = false;
	}

	Service(char s, char d, float dis, Date da, Time t, bool st, float f, int x, int y, int z)
	{
		source = new char;
		destination = new char;
		*source = s;
		*destination = d;
		distance = dis;
		bookingdate = da;
		bookingtime = t;
		status = st;
		fuelrate = f;
		cusid = x;
		driid = y;
		vechid = z;

	}

	int getcusid()
	{
		return cusid;
	}

	int getdriid()
	{
		return driid;
	}

	int getvehid()
	{
		return vechid;
	}

	void display()
	{
		cout << "The source is: " << source << endl;
		cout << "The destination is: " << destination << endl;
		cout << "The distance is: " << distance << endl;
		cout << "The date is: ";
		bookingdate.display();
		cout << endl;
		cout << "The time is: ";
		bookingtime.display();
		cout << endl;
		cout << "The status is: " << status << endl;
		cout << "The fuel rate is: " << fuelrate;
		cout << endl;
		cout << "Customer id is: " << cusid << endl;
		cout << "Driver id is: " << driid << endl;
		cout << "Vehicle id is: " << vechid << endl;
		cout << "The service id is: " << serid;
		//cout<<"The service id is: "<<serid[pointer];




	}

	void display2(int x)
	{
		cout << "The source is: " << source << endl;
		cout << "The destination is: " << destination << endl;
		cout << "The distance is: " << distance << endl;
		cout << "The date is: ";
		bookingdate.display();
		cout << endl;
		cout << "The time is: ";
		bookingtime.display();
		cout << endl;
		cout << "The status is: " << status << endl;
		cout << "The fuel rate is: " << fuelrate;
		cout << endl;
		cout << "Customer id is: " << cusid << endl;
		cout << "Driver id is: " << driid << endl;
		cout << "Vehicle id is: " << vechid << endl;
		cout << "The service id is: " << serid;




	}



	void setcusid(int x)
	{
		cusid = x;
	}

	void setvehid(int y)
	{
		vechid = y;
	}

	void setdriid(int z)
	{
		driid = z;
	}

	void setsource(char* x)
	{
		x = new char;
		source = x;

	}

	void setdesti(char* x)
	{
		x = new char;
		destination = x;
	}


	void serviceinput()
	{
		cout << "Enter source: ";
		cin >> source;
		cout << "Enter destination: ";
		cin >> destination;
		cout << "Enter distance: ";
		cin >> distance;
		bookingdate.dateinput();
		bookingtime.inputtime();
		cout << "Enter status, Press 1 for free, 2 for booked and, 3 for cancelled : ";
		cin >> status;
		/*	cout << "Enter fuel rate: ";
			cin >> fuelrate;*/
		cout << "Enter dri id: ";
		cin >> driid;
		cout << "Enter vehicle id: ";
		cin >> vechid;
		srand(time(0));
		int y;
		y = rand();
		serid = y;
		//cout<<endl<<y<<endl;

	/*	srand(time(0));
		for(int i=0;i<30;i++)
		{
			if(serid[i]==NULL)
			{
				serid[i]=rand();
				pointer=i;
				break;
			}
		}*/
		/*	cout << "Enter customer id: ";
			cin >> cusid;*/



	}

	void serviceinput2(int x)
	{
		cout << "Enter source: ";
		cin >> source;
		cout << "Enter destination: ";
		cin >> destination;
		cout << "Enter distance: ";
		cin >> distance;
		bookingdate.dateinput();
		bookingtime.inputtime();
		cout << "Enter status, Press 1 for free, 2 for booked and, 3 for cancelled : ";
		cin >> status;
		srand(time(0));
		int y;
		y = rand();
		serid = y;
		//cout<<endl<<y<<endl;

		/*int y=0;
		//cout<<endl<<y<<endl;
		srand(time(0));
		y=rand();
		//cout<<endl<<y<<endl;
		cout<<endl<<x<<endl;
		serid=y;*/


	}


	~Service()
	{
		delete[] source;
		delete[] destination;
	}


};

class Ride :public Service
{
	int noofpass;
	char* ridetype;
	float driverrank;
	float vehrank;

public:
	Ride()
	{
		ridetype = new char;
		*ridetype = '\0';
		noofpass = 0;
		driverrank = 0;
		vehrank = 0;

	}

	Ride(int a, char* b, float c, float d)
	{
		noofpass = a;
		*ridetype = *b;
		driverrank = c;
		vehrank = d;

	}

	~Ride()
	{
		delete[] ridetype;
	}


};

class Delivery :public Service
{
	float goodsweight;
	char* goodstype;
public:
	Delivery()
	{
		goodstype = new char;
		*goodstype = '\0';
		goodsweight = 0;

	}

	Delivery(float a, char* b)
	{
		goodstype = new char;
		goodsweight = a;
		goodstype = b;
	}

	~Delivery()
	{
		delete[] goodstype;
	}


};


class Person
{
	Name pname;
	Date DOB;
	int age;
	int nid;
public:

	void settername(char* a, char* b)
	{
		char* x;
		char* y;
		x = new char;
		y = new char;
		x = a;
		y = b;


		pname.settername2(x, y);
	}

	void setterdate(int x, int y, int z)
	{
		DOB.setterdate2(x, y, z);
	}

	void setterage(int x)
	{
		age = x;
	}

	void setternid(int x)
	{
		nid = x;
	}
	Person()
	{
		age = 0;
		nid = 0;
	}

	Person(Name a, Date b, int c, int d)
	{
		pname = a;
		DOB = b;
		age = c;
		nid = d;
	}

	char* getternamef()
	{
		return pname.getterf();
	}

	char* getternamel()
	{
		return pname.getterl();
	}

	Date getterdate()
	{
		return DOB;
	}

	int getterage() {
		return age;
	}

	int getternid()
	{
		return nid;
	}

	void setter(Name a, Date b, int c, int d)
	{
		pname = a;
		DOB = b;
		age = c;
		nid = d;

	}

	Person(const Person& obj)
	{
		pname = obj.pname;
		DOB = obj.DOB;
		age = obj.age;
		nid = obj.nid;
	}

	void personinput()
	{
		pname.nameinput();
		cout << endl;
		DOB.dateinput();
		cout << endl;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter nid: ";
		cin >> nid;

	}
	void persondisplay()
	{
		cout << "The name is: ";
		pname.display();
		cout << endl;
		cout << "The date is: ";
		DOB.display();
		cout << endl;
		cout << "The age is: ";
		cout << age;
		cout << endl << "The nid is: ";
		cout << nid;

	}

	void deleteperson()
	{
		age = 0;
		nid = 0;
		pname.deletename();
		DOB.deletedate();

	}

	int getday()
	{
		return DOB.getday();
	}

	int getmonth()
	{
		return DOB.getmonth();
	}

	int getyear()
	{
		return DOB.getyear();
	}

	ostream& operator <<(ostream&);

};

ostream& Person::operator<<(ostream& out)
{
	cout << "The name is: ";
	pname.display();
	cout << endl;
	cout << "The date is: ";
	DOB.display();
	cout << endl;
	cout << "The age is: ";
	out << age;
	cout << endl << "The nid is: ";
	out << nid;
	return out;
}

class Customer :public Person
{
	int cid;
	Service* bookinghistory;
	int tempo;//service should be a double pointer
	int noofpass;  //for ride only
	//char* ridetype;
	float driverrank; //for ride only
	float vehrank;//for eide only
public:

	float getdistance(int x)
	{
		return bookinghistory[x].getdistance();
	}
	char* getsource(int x)
	{
		return bookinghistory[x].getsource();
	}
	char* getdestination(int x)
	{
		return bookinghistory[x].getdestination();
	}
	int gethour(int x)
	{
		return bookinghistory[x].gethour();
	}
	int getmin(int x)
	{
		return bookinghistory[x].getmin();
	}
	int getsec(int x)
	{
		return bookinghistory[x].getsec();
	}

	int getdriid(int index)
	{
		return bookinghistory[index].getdriid();
	}
	int getvechid(int x)
	{
		return  bookinghistory[x].getvehid();
	}
	bool getstatus(int x)
	{
		return bookinghistory[x].returncheck();
	}

	void setcancelstatus(int x)
	{
		bookinghistory[x].setstatus();
	}

	int getserid(int x)
	{
		return bookinghistory[x].getserid();
	}





	int getserid2(int x)
	{
		if (bookinghistory[x].getcusid() != 0)
		{
			//  cout<<endl;
			  //bookinghistory[x].display();
		  //	cout<<endl;
			return bookinghistory[x].getserid();
		}

	}

	Customer()
	{
		cid = NULL;
		bookinghistory = new Service[30];
		tempo = 0;
		//ridetype = new char;
		driverrank = 0;
		vehrank = 0;
		noofpass = 0;
		//	bookinghistory[0] = new Service;

	}

	float returndistance(int in)
	{
		float x;
		x = bookinghistory[in].returndis();
		return x;
	}

	float returnfuelrate(int in)
	{
		float x;
		x = bookinghistory[in].returnfuel();
		return x;
	}



	void setstatusbooking(int serid)
	{

		for (int i = 0; i < 30; i++)
		{
			int x = bookinghistory[i].getserid();
			if (x == serid)
			{
				bookinghistory[i].setstatus(3);

			}
		}
		//bookinghistory[n].setstatus(3);

	}

	void setstatusbooking2(int serid)
	{
		bookinghistory[serid].setstatus(1);
		/*for(int i=0;i<30;i++)
		{
			int x=bookinghistory[i].getserid();
			if(x==serid)
			{
				bookinghistory[i].setstatus(1);

			}
		}*/
		//bookinghistory[n].setstatus(3);

	}

	void ridecusinput()
	{

		personinput();
		cout << endl;
		cout << "Enter customer id: ";
		cin >> cid;
		cout << "Enter driver rank: ";
		cin >> driverrank;
		cout << "Enter vehicle rank: ";
		cin >> vehrank;
		cout << "Enter no of passangers: ";
		cin >> noofpass;
		int opt;
		cout << "Enter booking history ? Enter 1 for yes and 2 for no: ";
		cin >> opt;

		while (opt == 1)
		{
			for (int i = 0; i < 30; i++)
			{
				if (bookinghistory[i].getcusid() == NULL)
				{
					bookinghistory[i].setcusid(cid);
					//bookinghistory[i].setserid();
					bookinghistory[i].serviceinput();

				}
			}

			cout << "Enter booking history ? Enter 1 for yes and 2 for no: ";
			cin >> opt;
			if (opt == 2)
			{
				break;
			}
		}
	}
	void ridecusoutput()
	{
		persondisplay();
		cout << endl;
		cout << "cid is: ";
		cout << cid;
		cout << endl;
		cout << "The no of passanger are: ";
		cout << noofpass << endl;
		cout << "The driver ranking is: " << driverrank << endl;
		cout << "The vehicle rank is: " << vehrank << endl;
		cout << "Booking history: ";
		/*int p=0;
		for (int i = 0; i < 30; i++)
		{
			if (bookinghistory[i].getdriid() != NULL)
			{
				bookinghistory[i].display();
				p++;
			}
		}*/

		//if (p == 0)
		//{
		//	cout << "NO BOOKING HISTORY" << endl;
		//}
	}

	void setride(int a, int b, int c, int index1)
	{
		int temp = 0;
		for (int i = 0; i < 30; i++)
		{
			if (bookinghistory[i].getcusid() == NULL)
			{
				bookinghistory[i].setdriid(a);
				bookinghistory[i].setvehid(b);
				bookinghistory[i].setcusid(c);
				//bookinghistory[i].setserid();

				temp = i;
				tempo = i;
				break;
			}

		}
		cout << endl;
		bookinghistory[temp].serviceinput2(temp);



	}

	Service* servicereturn()
	{
		return bookinghistory;
	}

	void setcusid(int x)
	{
		cid = x;
	}

	/* void setser( int cusid)
	 {
		 for(int i=0;i<30;i++)
		 {
			 if(bookinghistory[i].getcusid()==cusid)
			 {
				 bookinghistory[i].setserid();
			 }

		 }
	 }*/





	 //Customer(int a, Service* x,int y)   //add one more pointer
	 //{
	 //	cid = a;
	 //	bookinghistory = new Service[30];
	 //	tempo = y;
	 //	//bookinghistory[0] = new Service;
	 //}

	~Customer()
	{
		delete[] bookinghistory;
	}

	/*Customer(const Customer& obj)
	{
		cid = obj.cid;
		bookinghistory = obj.bookinghistory;
	}*/


	void cusinput()
	{
		personinput();
		cout << endl;
		cout << "Enter customer id: ";
		cin >> cid;
		int opt;
		cout << "Enter booking history ? Enter 1 for yes and 2 for no: ";
		cin >> opt;
		int pindex = 0;
		while (opt == 1)
		{
			bookinghistory[pindex].setcusid(cid);
			bookinghistory[pindex].serviceinput();
			pindex++;
			cout << "Enter booking history ? Enter 1 for yes and 2 for no: ";
			cin >> opt;
			if (opt == 2)
			{
				break;
			}
		}

	}

	void cusoutput()
	{

		persondisplay();
		cout << endl;
		cout << "cid is: ";
		cout << cid;
		cout << endl;
		cout << "Booking history: ";
		/*int p=0;
		for (int i = 0; i < 30; i++)
		{
			if (bookinghistory[i].getdriid() != NULL)
			{
				bookinghistory[i].display();
				p++;
			}
		}*/

		//if (p == 0)
		//{
		//	cout << "NO BOOKING HISTORY" << endl;
		//}

	}

	int getid()
	{
		return cid;
	}

	void historydisplay()
	{
		int p = 0;
		int x = 0;
		for (int i = 0; i < 30; i++)
		{
			if (bookinghistory[i].getdriid() != NULL)
			{
				bookinghistory[i].display2(x);
				cout << endl;
				p++;
				x++;
			}
		}


		if (p == 0)
		{
			cout << "NO BOOKING HISTORY" << endl;
		}

	}


	ostream& operator<<(ostream& out)
	{
		persondisplay();
		cout << endl;
		cout << "cid is: ";
		out << cid;
		//cout << "Booking history: ";
		//if (bookinghistory != 0)   // confirm
		//{
		//	bookinghistory->display();
		//}

		return out;

	}




};

class Driver :public Person
{
	int did;
	char** lisenceslist;
	int nooflisences;
	float overallranking;
	float salary;
	int experience;
	int status;
	Service** servicehistory;
	/*bool motorcar;
	bool jeep;
	bool LTV;
	bool HTV;*/

public:
	void setserid(int index)
	{
		servicehistory[index][0].getserid();
	}
	void setcusid(int x, int index)
	{
		servicehistory[index][0].setcusid(x);
	}
	void setdriid(int x, int index)
	{
		servicehistory[index][0].setdriid(x);
	}
	void setvechid(int x, int index)
	{
		servicehistory[index][0].setvehid(x);
	}
	void setsource(char* x, int index)
	{
		servicehistory[index][0].setsource(x);

	}
	void setdesti(char* x, int index)
	{
		servicehistory[index][0].setdesti(x);
	}
	void setdistance(int x, int index)
	{
		servicehistory[index][0];
	}
	void setdate(int a, int b, int c, int index)
	{
		servicehistory[index][0].setdate(a, b, c);
	}

	void settime(int a, int b, int c, int index)
	{
		servicehistory[index][0].settime(a, b, c);
	}



	void setdid(int x)
	{
		did = x;

	}

	int getnooflisenses()
	{
		return nooflisences;
	}

	char getlisenselist(int x)
	{
		return lisenceslist[x][0];
	}

	float getsalary()
	{
		return salary;
	}

	int getexp()
	{
		return experience;
	}




	void setnoolisences(int x)
	{
		nooflisences = x;
	}

	void setlicencelist(char* x)

	{
		cout << nooflisences << endl;
		delete[] lisenceslist;
		lisenceslist = new char* [nooflisences];
		for (int i = 0; i < nooflisences; i++)
		{
			lisenceslist[i] = new char[50];
		}
		for (int i = 0; i < (nooflisences / 2); i++)
		{
			int j;
			for (j = 0; j < strlen(x); j++)
				lisenceslist[i][j] = x[j];
			lisenceslist[i][j] = '\0';

		}

	}

	void drihis(int di)
	{
		cout << "The driver id is: " << did << endl;
		cout << "The no of lisences is/are: " << nooflisences << endl;
		cout << "The lisence list is: " << endl;
		for (int i = 0; i < nooflisences; i++)
		{
			cout << lisenceslist[i][0];
			cout << endl;
		}
		cout << "The overall ranking is: " << overallranking << endl;
		cout << "The salary is: " << salary << endl;
		cout << "The experience is: " << experience << endl;
		cout << "The status is: " << status << endl;
		cout << "The service history is: " << endl;
		servicehistory[di][0].display();
	}
	void setoverallrank(float x)
	{
		overallranking = x;
	}
	void setsalary(float x)
	{
		salary = x;
	}
	void setexp(int x)
	{
		experience = x;
	}
	void setstatus(int x)
	{
		status = x;
	}


	Driver()
	{
		did = NULL;
		lisenceslist = new  char*;
		lisenceslist[0] = new char;
		//lisenceslist[0][0] = '\0';
		//lisenceslist = new char;
		//*lisenceslist = '\0';
		overallranking = 0;
		salary = 0;
		experience = 0;
		status = 0;
		servicehistory = new Service * [30];
		for (int i = 0; i < 30; i++)
		{
			servicehistory[i] = new Service;
		}

		nooflisences = 0;



	}

	void driverinput()
	{
		personinput();
		cout << endl;
		cout << "Enter driver id: ";
		cin >> did;
		cout << "Enter no of licenses: ";
		cin >> nooflisences;
		cout << "Enter overall ranking: ";
		cin >> overallranking;
		//lisenceslist = new  char*;
		//lisenceslist[0] = new char[nooflisences];
		////	lisenceslist = new char[nooflisences];
		cout << "Enter licence list: ";
		delete[] lisenceslist;
		lisenceslist = new char* [nooflisences];
		for (int i = 0; i < nooflisences; i++)
		{
			lisenceslist[i] = new char;
		}
		for (int i = 0; i < nooflisences; i++)
		{
			cin >> lisenceslist[i];
		}


		/*	cout << "Enter overall ranking: ";
			cin >> overallranking;*/                 // do we need to input overall ranking??
		cout << "Enter salary: ";
		cin >> salary;
		cout << "Enter experience: ";
		cin >> experience;
		cout << "Enter status, Enter 1 if free, Enter 2 if booked, and Enter 3 if cancelled: ";
		cin >> status;
		int o;
		cout << "Enter service history? Enter 1 for yes and 2 for no: ";
		cin >> o;
		if (o == 1)
		{
			for (int i = 0; i < 30; i++)
			{
				servicehistory[i][0].serviceinput();
				int o2;
				cout << "To continue input press 1, to stop press 2: ";
				cin >> o2;
				if (o2 != 1)
				{
					break;
				}
			}

		}



	}

	void driverdisplay()
	{
		persondisplay();
		cout << "Driver's id is: " << did << endl;
		cout << "The number of licences are: " << nooflisences << endl;
		//delete[] lisenceslist;

		cout << "The licence list is: " << endl;
		for (int i = 0; i < nooflisences; i++)
		{
			cout << lisenceslist[i];
			cout << endl;
		}
		cout << "The overall ranking is: " << overallranking << endl;
		cout << "The salary is: " << salary << endl;
		cout << "The experience is: " << experience << endl;
		if (status == 1)
		{
			cout << "The status is: free";
			cout << endl;
		}
		if (status == 2)
		{
			cout << "The status is: booked";
			cout << endl;
		}
		if (status == 3)
		{
			cout << "The status is: cancelled";
			cout << endl;
		}

		//int p = servicehistory[0][0].getcusid();
		/*if (servicehistory[0][0].getcusid()==NULL)
		{
			cout << "NO SERVICE HISTORY";
			cout << endl;
		}
		else
		{
			for (int i = 0; i < 30; i++)
			{
				servicehistory[i][0].display();
			}
		}*/
		cout << endl;
		for (int i = 0; i < 30; i++)
		{
			if (servicehistory[i][0].getcusid() != NULL)
			{
				if (i == 0)
				{
					cout << "Service history: " << endl;
				}
				servicehistory[i][0].display();
				cout << endl;
			}
		}
	}

	int getid()
	{
		return did;
	}

	void deleteinfo()
	{

		deleteperson();
		did = 0;
		lisenceslist = new  char*;
		lisenceslist[0] = new char;
		lisenceslist[0][0] = '\0';
		//lisenceslist = new char;
		//*lisenceslist = '\0';
		overallranking = 0;
		salary = 0;
		experience = 0;
		status = 0;
		servicehistory = new Service*;
		servicehistory[0] = new Service;
		nooflisences = 0;

	}

	float getrank()
	{
		return overallranking;
	}

	char* getdrinamef()
	{
		char* f;
		f = new char;
		f = getternamef();
		return f;
	}

	char* getdrinamel()
	{
		char* l;
		l = new char;
		l = getternamel();
		return l;
	}

	void display2()
	{
		cout << endl;
		cout << "The driver is: " << endl;
		persondisplay();
		cout << endl;
		cout << "The driver id is: " << did;

	}

	int getstatus()
	{
		return status;
	}


	//void setservice(Service *x)
	//{
	//	x = new Service[30];

	//	for (int i = 0; i < 30; i++)
	//	{
	//		servicehistory[i] = x[i];
	//	}
	//}
};

class Feature
{
	int fid;
	char* description;
	//int aircondi;
	//int comfortlvl;
	float cost;
public:
	Feature()
	{
		description = new char;
		fid = 0;
		description[0] = '\0';
		cost = 0;
		//aircondi = 0;
		//comfortlvl = 0;
	}

	Feature(int a, char* b, float c/*, int d, float e*/)
	{
		description = new char;
		fid = a;
		*description = *b;
		cost = c;
		//aircondi = d;
		//comfortlvl = e;


	}

	~Feature()
	{
		delete[] description;
	}

	void input()
	{
		cout << "Enter feature id: ";
		cin >> fid;
		cout << "Enter description: ";
		cin >> description;
		cout << "Enter cost: ";
		cin >> cost;

		/*cout << "Does vehicle have air conditioning? Enter 1 for yes and 2 for no: ";
		cin >> aircondi;
		cout << "Enter the comfort level of the vehicle: ";
		cin >> comfortlvl;*/
	}

	void display()
	{
		cout << "Feature id is: " << fid << endl;
		cout << "Description: " << *description;
		cout << endl;
		cout << "The cost is: " << cost << endl;
		/*if (aircondi == 1)
		{
			cout << "Yes there is airconditioning ";
			cout << endl;
		}
		else
		{
			cout << "No air conditioning ";
			cout << endl;
		}
		cout << "Comfort level is: " << comfortlvl;
		cout << endl;*/

	}
};


class Vehsmall
{
	int bike;
	int scooter;
	int car;
	int rickshaw;
	bool status;
public:
	Vehsmall()
	{
		bike = 0;
		scooter = 0;
		car = 0;
		rickshaw = 0;
		status = false;
	}
	int getbike()
	{
		return bike;
	}
	int getscooter()
	{
		return scooter;
	}
	int getcar()
	{
		return car;
	}
	int getrickshaw()
	{
		return rickshaw;
	}

	void ridesmallinput()
	{
		int opt;
		cout << "Select Vehicle: " << endl;
		cout << "Enter 1 for bike " << endl;
		cout << "Enter 2 for scooter " << endl;
		cout << "Enter 3 for car " << endl;
		cout << "Enter 4 for rickshaw " << endl;
		cin >> opt;
		if (opt == 1)
		{
			bike = 1;
			status = true;
		}
		if (opt == 2)
		{
			scooter = 1;
			status = true;
		}
		if (opt == 3)
		{
			car = 1;
			status = true;
		}
		if (opt == 4)
		{
			rickshaw = 1;
			status = true;
		}

	}

	bool getstatus()
	{
		return status;
	}

	void setvehsmall(int x)
	{
		if (x == 1)
		{
			bike = 1;
			setstatus();
		}
		if (x == 2)
		{
			scooter = 1;
			setstatus();
		}
		if (x == 3)
		{
			car = 1;
			setstatus();
		}
		if (x == 4)
		{
			rickshaw = 1;
			setstatus();
		}
	}
	void setstatus()
	{
		status = true;
	}
};

class Vehbig
{
	int van;
	int bus;
	int apv;
	int campervans;
	int caravan;
	bool status;
public:
	Vehbig()
	{
		van = 0;
		bus = 0;
		apv = 0;
		campervans = 0;
		caravan = 0;
		status = false;
	}

	int getvan()
	{
		return van;
	}
	void setvehbig(int x)
	{
		if (x == 1)
		{
			van = 1;
			setstatus();
		}
		if (x == 2)
		{
			bus = 1;
			setstatus();
		}
		if (x == 3)
		{
			apv = 1;
			setstatus();
		}
		if (x == 4)
		{
			campervans = 1;
			setstatus();
		}
		if (x == 5)
		{
			caravan = 1;
			setstatus();
		}
	}
	void setstatus()
	{
		status = true;
	}
	int getbus()
	{
		return bus;
	}
	int getapv()
	{
		return apv;
	}
	int getcampervans()
	{
		return campervans;
	}

	int getcaravan()
	{
		return caravan;
	}
	void setbiginput()
	{
		int opt;
		cout << "For van enter 1 " << endl;
		cout << "For bus enter 2 " << endl;
		cout << "For apv enter 3 " << endl;
		cout << "For campervans enter 4 " << endl;
		cout << "For car-van enter 5 " << endl;
		cin >> opt;
		if (opt == 1)
		{
			van = 1;
			status = true;
		}
		if (opt == 2)
		{
			bus = 1;
			status = true;
		}
		if (opt == 3)
		{
			apv = 1;
			status = true;
		}
		if (opt == 4)
		{
			campervans = 1;
			status = true;
		}
		if (opt == 5)
		{
			caravan = 1;
			status = true;
		}

	}

	bool getstatus()
	{
		return status;
	}
};

class Transmall
{
	int shahzor;
	int mazda;
	bool status;

public:
	Transmall()
	{
		shahzor = 0;
		mazda = 0;
		status = false;
	}
	int getshahzor()
	{
		return shahzor;
	}
	int getmazda()
	{
		return mazda;
	}


	void transmallinput()
	{
		int opt;
		cout << "Select Vehicle: ";
		cout << endl;
		cout << "Enter 1 for shazor " << endl;
		cout << "Enter 2 for mazda titan " << endl;
		cin >> opt;
		if (opt == 1)
		{
			shahzor = 1;
			status = true;
		}
		if (opt == 2)
		{
			mazda = 1;
			status = true;
		}

	}
	bool getstatus()
	{
		return status;
	}
	void settransmall(int x)
	{
		if (x == 1)
		{
			shahzor = 1;
			setstatus();
		}
		if (x == 2)
		{
			mazda = 1;
			setstatus();
		}


	}
	void setstatus()
	{
		status = true;
	}
};

class Tranbig
{
	int trucks;
	int tractor;
	int ctrans;
	int TankerTruck;
	bool status;

public:
	Tranbig()
	{
		trucks = 0;
		tractor = 0;
		ctrans = 0;
		TankerTruck = 0;
		status = false;
	}

	int gettruck()
	{
		return trucks;
	}
	int gettractor()
	{
		return tractor;
	}
	int getctrans()
	{
		return ctrans;
	}
	int gettankertruck()
	{
		return TankerTruck;
	}


	void tranbiginput()
	{
		int opt;
		cout << "Select Vehicle: ";
		cout << endl;
		cout << "Enter 1 for trucks " << endl;
		cout << "Enter 2 for tractor " << endl;
		cout << "Enter 3 for car transporter " << endl;
		cout << "Enter 4 for Tanker Truck " << endl;
		cin >> opt;
		if (opt == 1)
		{
			trucks = 1;
			status = true;
		}
		if (opt == 2)
		{
			tractor = 1;
			status = true;
		}
		if (opt == 3)
		{
			ctrans = 1;
			status = true;
		}
		if (opt == 4)
		{
			TankerTruck = 1;
			status = true;
		}


	}

	bool getstatus()
	{
		return status;
	}
	void settranbig(int x)
	{
		if (x == 1)
		{
			trucks = 1;
			setstatus();
		}
		if (x == 2)
		{
			tractor = 1;
			setstatus();
		}
		if (x == 3)
		{
			ctrans = 1;
			setstatus();
		}
		if (x == 4)
		{
			TankerTruck = 1;
			setstatus();
		}
	}
	void setstatus()
	{
		status = true;
	}
};


class Vehicle
{
	int vid;
	int regno;
	float avgmil;
	char* licencetype;
	bool status;
	char* fueltype;
	float overallranking;
	Date manudate;
	Feature* list;
	Vehsmall x;
	Vehbig y;
	Transmall a;
	Tranbig b;
	Service** servicehis;      //service 
public:

	int getregno()
	{
		return regno;
	}

	float getavg()
	{
		return avgmil;
	}
	char* getlisencetype()
	{
		return licencetype;
	}

	int getstatus()
	{
		if (status == true)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}

	char* returnfueltype()
	{
		return fueltype;
	}
	float returnrank()
	{
		return overallranking;
	}
	int returnday()
	{
		return manudate.getday();
	}
	int getmonth()
	{
		return manudate.getmonth();
	}
	int getyear()
	{
		return manudate.getyear();
	}
	bool getvehsmalls()
	{
		return x.getstatus();
	}
	bool getvehbigs()
	{
		return y.getstatus();
	}
	bool transmalls()
	{
		return a.getstatus();
	}
	bool tranbigs()
	{
		return b.getstatus();
	}


	void setvid(int x)
	{
		vid = x;

	}
	void setregno(int x)
	{
		regno = x;
	}
	void setavg(float x)
	{
		avgmil = x;
	}
	void setlicencetype(char* x)
	{
		x = new char;
		licencetype = new char;
		licencetype = x;

	}
	void setstatus(int x)
	{
		if (x == 1)
		{
			status = false;
		}
		else {
			status = true;
		}

	}
	void setfueltype(char* x)
	{
		x = new char;
		fueltype = new char;
		fueltype = x;

	}
	void setrank(float x)
	{
		overallranking = x;
	}
	void setdate(int x, int y, int z)
	{
		manudate.setter(x, y, z);
	}
	void setvehsmall(int a)
	{
		x.setvehsmall(a);

	}
	void setvehbig(int a)
	{
		y.setvehbig(a);
	}
	void settransmall(int x)
	{
		a.settransmall(x);
	}
	void settransbig(int x)
	{
		b.settranbig(x);
	}
	Vehicle()
	{
		vid = NULL;
		regno = 0;
		avgmil = 0;
		licencetype = new char;
		*licencetype = '\0';
		status = false;
		fueltype = new char;
		*fueltype = '\0';
		overallranking = 0;
		list = new Feature;
		servicehis = new Service * [30];
		for (int i = 0; i < 30; i++)
		{
			servicehis[i] = new Service;
		}


	}

	void input()
	{
		cout << "Enter Vehicle id: ";
		cin >> vid;
		int type;
		cout << "Enter vehicle type " << endl;
		cout << "Enter 1 for rides or 2 for transportation: ";
		cin >> type;
		if (type == 1)
		{
			int ridetype;
			cout << "Enter ride type: ";
			cout << endl;
			cout << "Enter 1 for Small Vehicle (intercity) or 2 for Big Vehicle (long travel) :";
			cin >> ridetype;
			if (ridetype == 1)
			{
				x.ridesmallinput();
			}

			if (ridetype == 2)
			{
				y.setbiginput();
			}
		}

		if (type == 2)
		{
			int transtype;
			cout << "Enter Transportation type " << endl;
			cout << "Enter 1 for light vehicles (intercity) or 2 for heavy vehicles (long distance) : ";
			cin >> transtype;
			if (transtype == 1)
			{
				a.transmallinput();


			}

			if (transtype == 2)
			{
				b.tranbiginput();
			}

		}

		cout << "Enter registration no: ";
		cin >> regno;
		cout << "Enter Manufacturing Date: ";
		manudate.dateinput();
		/*cout << "Enter Vehicle Features: ";
		list->input();*/
		cout << "Enter average milage: ";
		cin >> avgmil;
		cout << "Enter licence type: ";
		cin >> licencetype;
		cout << "Enter status " << endl;
		int opt;
		cout << "if booked enter one else enter 2: ";
		cin >> opt;
		if (opt == 1)
		{
			status = true;
		}
		else
		{
			status = false;
		}
		cout << "Enter fuel type: ";
		cin >> fueltype;
		cout << "Overall Ranking: ";
		cin >> overallranking;
		//list[0].input();
		int s;
		cout << "Enter service his? Enter 1 for yes or 2 for no: ";
		cin >> s;
		if (s == 1)
		{
			for (int i = 0; i < 30; i++)
			{
				int f;
				servicehis[i][0].serviceinput();
				cout << "press 1 to enter another history: ";
				cin >> f;
				if (f != 1)
				{
					break;
				}
			}
		}







	}

	void display()
	{
		cout << endl;
		cout << "The vehicle id is: " << vid << endl;
		if (x.getstatus() == true)
		{

			if (x.getbike() == 1)
			{
				cout << "The vehicle is a bike ";
			}

			if (x.getscooter() == 1)
			{
				cout << "The vehicle is a scooter ";
			}

			if (x.getcar() == 1)
			{
				cout << "The vehicle is a car ";
			}

			if (x.getrickshaw() == 1)
			{
				cout << "The vehicle is a rickshaw ";
			}
			cout << endl;
		}
		if (y.getstatus() == true)
		{
			if (y.getvan() == 1)
			{
				cout << "The vehicle is a van ";
			}
			if (y.getbus() == 1)
			{
				cout << "The vehicle is a bus ";
			}
			if (y.getapv() == 1)
			{
				cout << "The vehicle is a apv";
			}
			if (y.getcampervans() == 1)
			{
				cout << "The vehicle is a campervan";
			}
			if (y.getcaravan() == 1)
			{
				cout << "The vehicle is a cara-van ";
			}

		}
		if (a.getstatus() == true)
		{
			if (a.getshahzor() == 1)
			{
				cout << "The vehicle is a shahzor ";
			}
			if (a.getmazda() == 1)
			{
				cout << "The vehicle is a mazda ";
			}
		}
		if (b.getstatus() == true)
		{
			if (b.gettruck() == 1)
			{
				cout << "The vehicle is a truck ";
			}
			if (b.gettractor() == 1)
			{
				cout << "The vehicle is a tractor trailer ";
			}
			if (b.getctrans() == 1)
			{
				cout << "The vehicle is a car transporter ";
			}
			if (b.gettankertruck() == 1)
			{
				cout << "The vehicle is a tanker truck ";
			}
		}
		cout << "The registration no is: " << regno << endl;
		cout << "The manufacturing date is: ";
		manudate.display();
		cout << endl;
		cout << "The average milage is: " << avgmil << endl;
		if (status == true)
		{
			cout << "The status is: booked " << endl;
		}
		else
		{
			cout << "The status is: Free " << endl;
		}
		cout << "The fuel type is: " << fueltype << endl;
		cout << "The overall ranking is: " << overallranking << endl;
		//list[0].display();
		cout << endl;
		cout << "The service history is: ";
		cout << endl;
		for (int i = 0; i < 30; i++)
		{
			if (servicehis[i][0].getvehid() != NULL)
			{
				servicehis[i][0].display();
				cout << endl;
			}
		}

	}

	int getid()
	{
		return vid;
	}

	void removeveh()
	{
		vid = NULL;
		regno = 0;
		avgmil = 0;
		licencetype = new char;
		*licencetype = '\0';
		status = false;
		fueltype = new char;
		*fueltype = '\0';
		overallranking = 0;
		list = new Feature;
		list = 0;
	}

	bool statuschecksmallveh()
	{
		return x.getstatus();
	}

	bool statuscheckbigveh()
	{
		return y.getstatus();
	}
	bool statuschecksmalltran()
	{
		return a.getstatus();
	}
	bool statuscheckbigtran()
	{
		return b.getstatus();
	}

	int getbike()
	{
		return x.getbike();
	}
	int getscooter()
	{
		return x.getscooter();
	}
	int getcar()
	{
		return x.getcar();
	}
	int getrickshaw()
	{
		return x.getrickshaw();
	}

	int getvan()
	{
		return y.getvan();
	}

	int getbus()
	{
		return y.getbus();
	}
	int getapv()
	{
		return y.getapv();
	}
	int getcampervans()
	{
		return y.getcampervans();
	}

	int getcaravan()
	{
		return y.getcaravan();
	}

	int getshahzor()
	{
		return a.getshahzor();
	}
	int getmazda()
	{
		return a.getmazda();
	}

	int gettruck()
	{
		return b.gettruck();
	}
	int gettractor()
	{
		return b.gettractor();
	}
	int getctrans()
	{
		return b.getctrans();
	}
	int gettankertruck()
	{
		return b.gettankertruck();
	}
};

//class pending:public Service
//{
//	int **cid;
//public:
//	pending()
//	{
//		cid = new int*[30];
//		for (int i = 0; i < 30; i++)
//		{
//			cid[i][0]= new int;
//		}
//
//	}
//
//
//};


float feature(float d, float fuel)
{
	float cost;
	cost = d * (fuel * 3.9);
	return cost;


}

float featurecancel(float d, float fuel)
{
	float cost;
	cost = d * (fuel * 3.9);
	cost = cost + (0.5 * cost);
	return cost;
}



void displaymenu()
{

	cout << "Enter -1 to exit" << endl;
	cout << "Enter 1 to add a customer" << endl;
	cout << "Enter 2 to add a driver" << endl;
	cout << "Enter 3 to remove a driver: " << endl;
	cout << "Enter 4 to add a vehicle: " << endl;
	cout << "Enter 5 to remove a vehicle: " << endl;
	cout << "Enter 6 to display all customers: " << endl;
	cout << "Enter 7 to display all drivers: " << endl;
	cout << "Enter 8 to display complete list of vehicles: " << endl;
	cout << "Enter 9 to print complete history of a driver: " << endl;
	cout << "Enter 10 to display complete history of a customer: " << endl;
	cout << "Enter 12 to display drivers with ranking above 4.5: " << endl;
	cout << "Enter 15 to book a ride: " << endl;
	cout << "Enter 16 to cancel a ride: " << endl;
	cout << "Enter 17 to complete a service: " << endl;


}


void mainmenu()
{
	cout << "Welcome" << endl;
	cout << "Enter -1 to exit" << endl;
	cout << "Enter 1 to add a customer" << endl;
	cout << "Enter 2 to add a driver" << endl;
	cout << "Enter 3 to remove a driver: " << endl;
	cout << "Enter 4 to add a vehicle: " << endl;
	cout << "Enter 5 to remove a vehicle: " << endl;
	cout << "Enter 6 to display all customers: " << endl;
	cout << "Enter 7 to display all drivers: " << endl;
	cout << "Enter 8 to display complete list of vehicles: " << endl;
	cout << "Enter 9 to print complete history of a driver: " << endl;
	cout << "Enter 10 to display complete history of a customer: " << endl;
	cout << "Enter 12 to display drivers with ranking above 4.5: " << endl;
	cout << "Enter 15 to book a ride: " << endl;
	cout << "Enter 16 to cancel a ride: " << endl;
	cout << "Enter 17 to complete a service: " << endl;

}


class TMS :public Vehsmall
{
	Customer** cus;
	Driver** drivers;
	Vehicle** veh;


public:

	TMS()
	{

		cus = new Customer * [15];
		for (int i = 0; i < 15; i++)
		{
			cus[i] = new Customer;
		}


		drivers = new Driver * [10];
		for (int i = 0; i < 10; i++)
		{
			drivers[i] = new Driver;
		}

		veh = new Vehicle * [20];
		for (int i = 0; i < 20; i++)
		{
			veh[i] = new Vehicle;
		}

		ifstream customer;
		customer.open("custo.txt");
		if (customer)
		{
			for (int i = 0; i < 15 && !customer.eof(); i++)
			{
				//int eof;
				//eof =6;

				int j;

				int ijunk;
				int ijunk2;
				int ijunk3;
				char* cjunk;
				char* cjunk2;
				char trash;
				cjunk = new char[30];
				cjunk2 = new char[30];
				customer >> ijunk;
				cus[i][0].setcusid(ijunk);
				customer >> trash;
				customer.getline(cjunk, 30, ',');
				customer.getline(cjunk2, 30, ',');
				cus[i][0].settername(cjunk, cjunk2);
				//customer.ignore(1);
				customer >> ijunk;
				customer >> trash;
				customer >> ijunk2;
				customer >> trash;
				customer >> ijunk3;
				cus[i][0].setterdate(ijunk, ijunk2, ijunk3);
				customer >> trash;
				customer >> ijunk;
				customer >> trash;
				customer >> ijunk2;
				cus[i][0].setterage(ijunk);
				cus[i][0].setternid(ijunk2);
				//	customer >> trash;
				//6	customer >> ijunk;
					/*if (ijunk == eof)
					{
						break;
					}
					*/








			}
			customer.close();
		}
		else
		{
			cout << "Error reading customer file" << endl;
		}

		ifstream driver;
		driver.open("dri.txt");
		if (driver)
		{
			for (int i = 0; i < 10 && !driver.eof(); i++)
			{
				string temp;
				int count = i;
				int ijunk;
				int ijunk2;
				int ijunk3;
				float fjunk1;
				char* l;
				char* cjunk;
				char* cjunk2;
				char trash;
				cjunk = new char[30];
				cjunk2 = new char[30];
				driver >> ijunk;
				drivers[i][0].setdid(ijunk);
				driver >> trash;
				driver >> ijunk;
				drivers[i][0].setnoolisences(ijunk);
				driver >> trash;
				//l=new char*[ijunk];
				l = new char[50];
				/*	for(int i=0;i<ijunk;i++)
					{
						l[i]=new char[50];
					}*/
				for (int i = 0; i < ijunk; i++)
				{
					driver.getline(l, 30, ',');

					drivers[count][0].setlicencelist(l);

				}
				driver >> ijunk;
				drivers[i][0].setsalary(ijunk);
				driver >> trash;
				driver >> ijunk;
				drivers[i][0].setexp(ijunk);
				driver >> trash;
				driver >> ijunk;
				drivers[i][0].setstatus(ijunk);
				driver >> trash;
				driver.getline(cjunk, 30, ',');
				driver.getline(cjunk2, 30, ',');
				drivers[i][0].settername(cjunk, cjunk2);
				driver >> ijunk;
				driver >> trash;
				driver >> ijunk2;
				driver >> trash;
				driver >> ijunk3;
				driver >> trash;
				drivers[i][0].setterdate(ijunk, ijunk2, ijunk3);
				driver >> ijunk;
				driver >> trash;
				driver >> ijunk2;
				drivers[i][0].setterage(ijunk);
				drivers[i][0].setternid(ijunk2);
				driver >> trash;
				driver >> fjunk1;
				drivers[i][0].setoverallrank(fjunk1);



			}
			driver.close();
		}
		else {
			cout << "Error opening driver file ";
		}


		ifstream vehicles;
		vehicles.open("vehi.txt");
		if (vehicles)
		{
			for (int i = 0; i < 20 && !vehicles.eof(); i++)
			{

				char trash;
				int ijunk1;
				int ijunk2;
				int ijunk3;
				float fjunk1;
				char* cjunk1;
				cjunk1 = new char;
				vehicles >> ijunk1;
				veh[i][0].setvid(ijunk1);
				vehicles >> trash;
				vehicles >> ijunk1;
				veh[i][0].setregno(ijunk1);
				vehicles >> trash;
				vehicles >> fjunk1;
				veh[i][0].setavg(fjunk1);
				vehicles >> trash;
				vehicles.getline(cjunk1, 30, ',');
				veh[i][0].setlicencetype(cjunk1);
				vehicles >> ijunk1;
				veh[i][0].setstatus(ijunk1);
				vehicles >> trash;
				vehicles.getline(cjunk1, 30, ',');
				veh[i][0].setfueltype(cjunk1);
				vehicles >> fjunk1;
				veh[i][0].setrank(fjunk1);
				vehicles >> trash;
				vehicles >> ijunk1;
				vehicles >> trash;
				vehicles >> ijunk2;
				vehicles >> trash;
				vehicles >> ijunk3;
				vehicles >> trash;
				veh[i][0].setdate(ijunk1, ijunk2, ijunk3);
				vehicles >> ijunk1;
				vehicles >> trash;
				if (ijunk1 == 1)
				{
					vehicles >> ijunk1;
					vehicles >> trash;
					if (ijunk1 == 1)
					{
						vehicles >> ijunk2;
						veh[i][0].setvehsmall(ijunk2);
						vehicles >> trash;

					}
					if (ijunk1 == 2)
					{
						vehicles >> ijunk2;
						veh[i][0].setvehbig(ijunk2);
						vehicles >> trash;
					}

				}

				if (ijunk1 == 2)
				{
					vehicles >> ijunk1;
					vehicles >> trash;
					if (ijunk1 == 1)
					{
						vehicles >> ijunk2;
						veh[i][0].settransmall(ijunk2);
						vehicles >> trash;


					}
					if (ijunk1 == 2)
					{
						vehicles >> ijunk2;
						veh[i][0].settransbig(ijunk2);
						vehicles >> trash;

					}


				}




			}

			vehicles.close();

		}
		else {
			cout << "Error opening vehicle file ";
		}



	}

	void tmscusinput()
	{
		int temp;
		for (int i = 0; i < 15; i++)
		{
			temp = i;

			if (cus[i][0].getid() == NULL)
			{
				cus[i][0].cusinput();
				cout << endl;
				//cout << "Function working " << endl;
				//cus[i][0].cusoutput();
				break;

			}

		}

		fstream custo;
		custo.open("custo.txt", ios::out | ios::app);
		if (cus)
		{
			char trash = ',';
			int ijunk1;
			char* cjunk1;
			cjunk1 = new char[50];
			char* cjunk2;
			cjunk2 = new char[50];
			int ijunk2;
			int ijunk3;
			ijunk1 = cus[temp][0].getid();
			custo << ijunk1;
			custo << trash;
			cjunk1 = cus[temp][0].getternamef();
			cjunk2 = cus[temp][0].getternamel();
			custo << cjunk1;
			custo << trash;
			custo << cjunk2;
			custo << trash;
			ijunk1 = cus[temp][0].getday();
			ijunk2 = cus[temp][0].getmonth();
			ijunk3 = cus[temp][0].getyear();
			custo << ijunk1;
			custo << trash;
			custo << ijunk2;
			custo << trash;
			custo << ijunk3;
			custo << trash;
			ijunk1 = cus[temp][0].getterage();
			custo << ijunk1;
			custo << trash;
			ijunk1 = cus[temp][0].getternid();
			custo << ijunk1;
			custo << " \n";
			custo.close();

		}

		else
		{
			cout << "Error writing to customer file ";
		}


	}

	void tmscusinput2(int& x)
	{
		int temp;
		for (int i = 0; i < 15; i++)
		{

			if (cus[i][0].getid() == NULL)
			{
				temp = i;
				cus[i][0].ridecusinput();
				cout << endl;
				x = cus[i][0].getid();
				//cout << "Function working " << endl;
				//cus[i][0].cusoutput();
				break;

			}

		}

		fstream custo;
		custo.open("custo.txt", ios::out | ios::app);
		if (cus)
		{
			char trash = ',';
			int ijunk1;
			char* cjunk1;
			cjunk1 = new char[50];
			char* cjunk2;
			cjunk2 = new char[50];
			int ijunk2;
			int ijunk3;
			ijunk1 = cus[temp][0].getid();
			custo << ijunk1;
			custo << trash;
			cjunk1 = cus[temp][0].getternamef();
			cjunk2 = cus[temp][0].getternamel();
			custo << cjunk1;
			custo << trash;
			custo << cjunk2;
			custo << trash;
			ijunk1 = cus[temp][0].getday();
			ijunk2 = cus[temp][0].getmonth();
			ijunk3 = cus[temp][0].getyear();
			custo << ijunk1;
			custo << trash;
			custo << ijunk2;
			custo << trash;
			custo << ijunk3;
			custo << trash;
			ijunk1 = cus[temp][0].getterage();
			custo << ijunk1;
			custo << trash;
			ijunk1 = cus[temp][0].getternid();
			custo << ijunk1;
			custo << " \n";
			custo.close();

		}

		else
		{
			cout << "Error writing to customer file ";
		}


	}

	void tmsdriinput()
	{
		int temp;
		for (int i = 0; i < 10; i++)
		{
			if (drivers[i][0].getid() == NULL)
			{
				drivers[i][0].driverinput();
				drivers[i][0].driverdisplay();
				temp = i;
				break;
			}
		}
		fstream dri;
		dri.open("dri.txt", ios::out | ios::app);
		if (dri)
		{
			int ijunk;
			char cjunk[50];
			//cjunk=new char;
			char trash = ',';
			float fjunk;
			char* cjunk1;
			char* cjunk2;
			cjunk1 = new char[30];
			cjunk2 = new char[30];
			ijunk = drivers[temp][0].getid();
			dri << ijunk;
			dri << trash;
			ijunk = drivers[temp][0].getnooflisenses();
			dri << ijunk;
			dri << trash;
			for (int i = 0; i < ijunk; i++)
			{
				cjunk[0] = drivers[temp][0].getlisenselist(i);
				dri << cjunk;
				dri << trash;
			}
			fjunk = drivers[temp][0].getsalary();
			dri << fjunk;
			dri << trash;
			ijunk = drivers[temp][0].getexp();
			dri << ijunk;
			dri << trash;
			ijunk = drivers[temp][0].getstatus();
			dri << ijunk;
			dri << trash;
			cjunk1 = drivers[temp][0].getdrinamef();
			cjunk2 = drivers[temp][0].getdrinamel();
			dri << cjunk1;
			dri << trash;
			dri << cjunk2;
			dri << trash;
			ijunk = drivers[temp][0].getday();
			dri << ijunk;
			dri << trash;
			ijunk = drivers[temp][0].getmonth();
			dri << ijunk;
			dri << trash;
			ijunk = drivers[temp][0].getyear();
			dri << ijunk;
			dri << trash;
			ijunk = drivers[temp][0].getterage();
			dri << ijunk;
			dri << trash;
			ijunk = drivers[temp][0].getternid();
			dri << ijunk;
			dri << trash;
			fjunk = drivers[temp][0].getrank();
			dri << fjunk;
			dri << " \n";
			dri.close();

		}
		else
		{
			cout << "Error writing driver to file" << endl;
		}




	}

	void tmsremovedri(int driid)
	{
		for (int i = 0; i < 10; i++)
		{
			if (drivers[i][0].getid() == driid)
			{
				drivers[i][0].deleteinfo();
				drivers[i][0].driverdisplay();

			}
		}
	}

	void tmsdisplayallcus()
	{
		for (int i = 0; i < 15; i++)
		{
			if (cus[i][0].getid() != NULL)
			{
				cus[i][0].cusoutput();
			}
		}
	}

	void tmsdisplayalldri()
	{

		for (int i = 0; i < 10; i++)
		{
			if (drivers[i][0].getid() != NULL)
			{
				drivers[i][0].driverdisplay();
			}
		}
	}

	void tmscushis(int hisid)
	{
		for (int i = 0; i < 15; i++)
		{
			if (cus[i][0].getid() == hisid)
			{
				cus[i][0].historydisplay();
			}
		}
	}

	void tmsdisplaydrirank(int drix)
	{
		char* fname;
		char* lname;
		for (int i = 0; i < 10; i++)
		{
			if (drivers[i][0].getrank() > 4.5)
			{
				drix++;
				fname = drivers[i][0].getdrinamef();
				lname = drivers[i][0].getternamel();
				cout << fname << " " << lname;
				cout << endl;
			}
		}

		if (drix == 0)
		{
			cout << "NO DRIVERS WITH RANKING ABOVE 4.5";
			cout << endl;
		}
	}

	void displaydrihistory()
	{
		int driid;
		cout << "Enter driver id: ";
		cin >> driid;
		bool check = false;
		int driindex;
		for (int i = 0; i < 10; i++)
		{
			int x = drivers[i][0].getid();
			if (x == driid)
			{
				driindex = i;
				drivers[i][0].drihis(driindex);
				check = true;
			}

		}
		if (check == false)
		{
			cout << "Error: Driver not found " << endl;
		}

	}

	void tmsvehicleadd()
	{
		int temp;
		for (int i = 0; i < 20; i++)
		{

			if (veh[i][0].getid() == NULL)
			{
				temp = i;
				veh[i][0].input();
				veh[i][0].display();
				break;
			}
		}

		ofstream v;
		v.open("vehi.txt", ios::app | ios::app);
		if (v)
		{
			char trash = ',';
			int ijunk1;
			int ijunk2;
			int ijunk3;
			float fjunk1;
			char* cjunk1;
			cjunk1 = new char;
			ijunk1 = veh[temp][0].getid();
			v << ijunk1;
			v << trash;
			ijunk1 = veh[temp][0].getregno();
			v << ijunk1;
			v << trash;
			fjunk1 = veh[temp][0].getavg();
			v << fjunk1;
			v << trash;
			cjunk1 = veh[temp][0].getlisencetype();
			v << cjunk1;
			v << trash;
			ijunk1 = veh[temp][0].getstatus();
			v << ijunk1;
			v << trash;
			if (ijunk1 == 1)
			{
				v << 1;
			}
			else
			{
				v << 2;
			}
			v << trash;
			cjunk1 = veh[temp][0].returnfueltype();
			v << cjunk1;
			v << trash;
			ijunk1 = veh[temp][0].returnrank();
			v << ijunk1;
			v << trash;
			ijunk1 = veh[temp][0].returnday();
			ijunk2 = veh[temp][0].getmonth();
			ijunk3 = veh[temp][0].getyear();
			v << ijunk1;
			v << trash;
			v << ijunk2;
			v << trash;
			v << ijunk3;
			v << trash;
			bool vs;
			bool vb;
			bool ts;
			bool tb;
			vs = veh[temp][0].getvehsmalls();
			vb = veh[temp][0].getvehbigs();
			ts = veh[temp][0].transmalls();
			tb = veh[temp][0].tranbigs();
			if (vs == true || vb == true)
			{
				v << 1;
			}
			else
			{
				v << 2;
			}

			int x;
			if (vs == true)
			{
				v << 1;
				v << trash;
				x = veh[temp][0].getbike();
				if (x == 1)
				{
					v << 1;
				}
				x = veh[temp][0].getscooter();
				if (x == 1)
				{
					v << 2;
				}
				x = veh[temp][0].getcar();
				if (x == 1)
				{
					v << 3;
				}
				x = veh[temp][0].getrickshaw();
				if (x == 1)
				{
					v << 4;
				}
				v << trash;
			}
			if (vb == true)
			{
				v << 2;
				v << trash;
				x = veh[temp][0].getvan();
				if (x == 1)
				{
					v << 1;
				}
				x = veh[temp][0].getbus();
				if (x == 1)
				{
					v << 2;
				}
				x = veh[temp][0].getapv();
				if (x == 1)
				{
					v << 3;
				}
				x = veh[temp][0].getcampervans();
				if (x == 1)
				{
					v << 4;
				}
				x = veh[temp][0].getcaravan();
				if (x == 1)
				{
					v << 5;
				}
				v << trash;
			}
			if (ts == true)
			{
				v << 1;
				v << trash;
				ts = veh[temp][0].getshahzor();
				if (ts == true)
				{
					v << 1;
				}
				ts = veh[temp][0].getmazda();
				if (x == 1)
				{
					v << 2;
				}
				v << trash;
			}
			if (tb == true)
			{
				v << 2;
				v << trash;
				x = veh[temp][0].gettruck();
				if (x == 1)
				{
					v << 1;
				}
				x = veh[temp][0].gettractor();
				if (x == 1)
				{
					v << 2;
				}
				x = veh[temp][0].getctrans();
				if (x == 1)
				{
					v << 3;
				}
				x = veh[temp][0].gettankertruck();
				if (x == 1)
				{
					v << 4;
				}
				v << trash;
			}
			v << " \n";
			v.close();
		}
		else {
			cout << "Error writing to vehicle file " << endl;

		}


	}

	void tmsvehiremove()
	{
		int id;
		cout << "Enter the vehicle id you wish to remove: ";
		cin >> id;
		int x = 0;
		for (int i = 0; i < 20; i++)
		{
			if (veh[i][0].getid() == id)
			{
				veh[i][0].removeveh();
				veh[i][0].display();
				x++;
			}
		}
		if (x == 0)
		{
			cout << "The vehicle id " << id << " does not exist ";
			cout << endl;
		}
	}

	void tmsvehdisplay()
	{
		cout << "List of Vehicles: " << endl;

		for (int i = 0; i < 20; i++)
		{
			if (veh[i][0].getid() != NULL)
			{
				if (i == 0)
				{
					cout << "RIDES: " << endl;
					cout << "Small Vehicles: " << endl;
				}

				if (veh[i][0].statuschecksmallveh() == true)
				{
					if (veh[i][0].getbike() == 1)
					{
						cout << "Bike with id " << veh[i][0].getid();
						cout << endl;
					}
					if (veh[i][0].getcar() == 1)
					{
						cout << "car with id " << veh[i][0].getid();
						cout << endl;
					}
					if (veh[i][0].getrickshaw() == 1)
					{
						cout << "rickshaw with id " << veh[i][0].getid();
						cout << endl;
					}
					if (veh[i][0].getscooter() == 1)
					{
						cout << "scooter with id " << veh[i][0].getid();
						cout << endl;
					}
				}

			}

		}

		for (int i = 0; i < 20; i++)
		{
			if (veh[i][0].statuscheckbigveh() == true)
			{
				if (i == 0)
				{
					cout << "Large vehicles: " << endl;
				}

				if (veh[i][0].getvan() == 1)
				{
					cout << "van with id " << veh[i][0].getid();
					cout << endl;
				}
				if (veh[i][0].getbus() == 1)
				{
					cout << "bus with id " << veh[i][0].getid();
					cout << endl;
				}
				if (veh[i][0].getapv() == 1)
				{
					cout << "apv with id " << veh[i][0].getid();
					cout << endl;
				}
				if (veh[i][0].getcampervans() == 1)
				{
					cout << "camper van with id " << veh[i][0].getid();
					cout << endl;
				}
				if (veh[i][0].getcaravan() == 1)
				{
					cout << "caravan with id " << veh[i][0].getid();
					cout << endl;
				}

			}

		}


		for (int i = 0; i < 20; i++)
		{
			if (i == 0)
			{
				cout << "TRANSPORTATION " << endl;
				cout << "Light vehicles: " << endl;
			}
			if (veh[i][0].statuschecksmalltran() == true)
			{



				if (veh[i][0].getshahzor() == 1)
				{
					cout << "shazor with id " << veh[i][0].getid();
					cout << endl;
				}
				if (veh[i][0].getmazda() == 1)
				{
					cout << "mazda with id " << veh[i][0].getid();
					cout << endl;
				}
			}
		}


		for (int i = 0; i < 20; i++)
		{

			if (i == 0)
			{
				cout << "Heavy Vehicles: " << endl;

			}
			if (veh[i][0].statuscheckbigtran() == true)
			{



				if (veh[i][0].gettruck() == 1)
				{
					cout << "Truck with id " << veh[i][0].getid();
					cout << endl;

				}
				if (veh[i][0].gettractor() == 1)
				{
					cout << "tractor with id " << veh[i][0].getid();
					cout << endl;

				}
				if (veh[i][0].getctrans() == 1)
				{
					cout << "car transporter with id " << veh[i][0].getid();
					cout << endl;

				}
				if (veh[i][0].gettankertruck() == 1)
				{
					cout << "Tanker truck with id " << veh[i][0].getid();
					cout << endl;

				}
			}
		}
	}

	void tmsdriname()
	{
		float x[10];
		int temp;
		for (int i = 0; i < 10; i++)
		{
			x[i] = NULL;
		}
		for (int i = 0; i < 10; i++)
		{
			if (drivers[i][0].getid() != NULL)
			{
				x[i] = drivers[i][0].getrank();
				//drivers[i][0].display2();
			}
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = i + 1; j < 9; j++)
			{
				if (x[j] > x[i])
				{
					temp = x[i];
					x[i] = x[j];
					x[j] = temp;
				}
			}


		}
		for (int i = 0; i < 10; i++)
		{
			if (drivers[i][0].getid() != NULL)
			{
				drivers[i][0].display2();
			}

		}


	}

	void tmsreqser()
	{
		int opt;
		int id;
		int index;
		bool check = false;
		cout << "Enter customer id: ";
		cin >> id;

		for (int i = 0; i < 15; i++)
		{
			if (cus[i][0].getid() == id)
			{
				index = i;
				check = true;

			}
		}

		if (check == false)
		{
			cout << "Customer does not exist....here add one: " << endl;
			tmscusinput2(id);
			for (int i = 0; i < 15; i++)
			{
				if (cus[i][0].getid() == id)
				{
					index = i;

				}
			}
		}

		//cout << endl;
		//cout << id;
		//cout << endl;
		cout << "Enter request type" << endl;
		cout << "Enter 1 to request a ride " << endl;
		cout << "Enter 2 to request for transportation" << endl;
		cin >> opt;
		if (opt == 1)
		{
			tmsdriname();
			int driverid;
			cout << "Select a driver id to continue: ";
			cin >> driverid;
			//cus[index][0]
			cout << endl;
			int opt2;
			cout << "Enter ride type " << endl;
			cout << "Enter 1 for intercity or 2 for long distance: ";
			cin >> opt2;
			if (opt2 == 1)
			{
				cout << "List of Vehicles: " << endl;

				for (int i = 0; i < 20; i++)
				{
					if (veh[i][0].getid() != NULL)
					{

						if (veh[i][0].statuschecksmallveh() == true)
						{
							if (veh[i][0].getbike() == 1)
							{
								cout << "Bike with id " << veh[i][0].getid();
								cout << endl;
							}
							if (veh[i][0].getcar() == 1)
							{
								cout << "car with id " << veh[i][0].getid();
								cout << endl;
							}
							if (veh[i][0].getrickshaw() == 1)
							{
								cout << "rickshaw with id " << veh[i][0].getid();
								cout << endl;
							}
							if (veh[i][0].getscooter() == 1)
							{
								cout << "scooter with id " << veh[i][0].getid();
								cout << endl;
							}
						}

					}

				}

			}
			if (opt == 2)
			{
				for (int i = 0; i < 20; i++)
				{
					if (veh[i][0].statuscheckbigveh() == true)
					{
						if (i == 0)
						{
							cout << "Large vehicles: " << endl;
						}

						if (veh[i][0].getvan() == 1)
						{
							cout << "van with id " << veh[i][0].getid();
							cout << endl;
						}
						if (veh[i][0].getbus() == 1)
						{
							cout << "bus with id " << veh[i][0].getid();
							cout << endl;
						}
						if (veh[i][0].getapv() == 1)
						{
							cout << "apv with id " << veh[i][0].getid();
							cout << endl;
						}
						if (veh[i][0].getcampervans() == 1)
						{
							cout << "camper van with id " << veh[i][0].getid();
							cout << endl;
						}
						if (veh[i][0].getcaravan() == 1)
						{
							cout << "caravan with id " << veh[i][0].getid();
							cout << endl;
						}

					}

				}

			}
			cout << endl;
			int vehid;
			cout << "Enter vehicle id to continue: ";
			cin >> vehid;
			cus[index][0].setride(driverid, vehid, id, index);// history input also taken in this function
			//int d=cus[index][0].getid();
			//cus[index][0].setser(d);
			cout << endl;
			cout << "BOOKED!" << endl;
			float di;//distance
			di = cus[index][0].returndistance(index);
			float fu;//fuel
			fu = cus[index][0].returnfuelrate(index);
			float cost;
			cost = feature(di, fu);
			cout << "The cost is: " << cost;   // the cost is calculated based on distance and fuel for now
			cout << endl;
			/*	cout<<"The service id is: ";
				int ssid;
				ssid=cus[index][0].returnser(index);
				cout<<ssid;*/











				/*Service** s;
				s = new Service*[30];
				for (int i = 0; i < 30; i++)
				{
					s[i] = new Service;
				}
				for (int i = 0; i < 30; i++)
				{
					s[i] = cus[index][0].servicereturn();
				}

				for (int i = 0; i < 30; i++)
				{
					drivers[i][0].setservice(s[i]);
				}*/




		}


	}

	void cancelservice()
	{
		//cout<<endl<<"1"<<endl;
		int custoid;
		int sid;
		bool check = false;
		cout << "Enter the customer id: ";
		cin >> custoid;
		cout << "Enter the service id you would like to cancel: ";
		cin >> sid;
		int index;
		for (int i = 0; i < 15; i++)
		{
			if (cus[i][0].getid() == custoid)
			{
				index = i;
			}

		}
		int x;
		for (int j = 0; j < 30; j++)
		{


			x = cus[index][0].getserid2(j);
			if (x == sid)
			{
				if (cus[index][0].getstatus(j) == false)
				{
					cout << "SERVICE CANCELLED " << endl;
					cout << "Extra charges of 5% has been added to your cost: " << endl;
					cout << "The new cost is: ";
					float d = cus[index][0].returndistance(custoid);
					float fuel = 3.96;
					// float fuel=cus[i][0].returnfuelrate(custoid);
					float cost;
					cost = featurecancel(d, fuel);
					cout << cost;
					cout << endl;
					check = true;
					cus[index][0].setstatusbooking(sid);
					cus[index][0].setcancelstatus(j);
					break;
				}
				else
				{
					cout << endl;
					cout << "Already cancelled ";
					check = true;
				}
			}

			//cout<<endl<<"3"<<endl;


		}

		if (check == false)
		{
			cout << "Error: service id does not exist " << endl;
		}






	}

	void completeservice()
	{
		int check = 0;
		int sid;
		int cusidx;
		int sididx;
		int driid;
		int driidx;
		cout << "Enter service id: ";
		cin >> sid;
		int x = 0;
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 30; j++)
			{

				x = cus[i][0].getserid2(j);
				if (x == sid)
				{
					check = 1;
					cusidx = i;
					driid = cus[i][0].getdriid(j);
					driidx = j;
					break;

				}


			}
		}

		/*bool status=false;
		if(check==1)
		{
			status=cus[cusidx][0].getstatus(sididx);
		}*/
		bool ff = false;
		if (check == 1)
		{
			// cus[cusidx][0].setstatusbooking2(sididx);

			for (int i = 0; i < 10; i++)
			{


				for (int j = 0; j < 30; j++)
				{
					if (drivers[j][0].getid() == NULL)
					{
						cout << endl << "setting dri his " << endl;
						int x = cus[cusidx][0].getserid(driidx);
						drivers[i][0].setserid(j);
						x = cus[cusidx][0].getid();
						drivers[i][0].setcusid(x, j);
						x = cus[cusidx][0].getdriid(driidx);
						drivers[i][0].setdriid(x, j);
						x = cus[cusidx][0].getvechid(driidx);
						drivers[i][0].setvechid(x, j);
						int y;
						int z;
						x = cus[cusidx][0].getday();
						y = cus[cusidx][0].getmonth();
						z = cus[cusidx][0].getyear();
						drivers[i][0].setdate(x, y, z, j);
						x = cus[cusidx][0].gethour(driidx);
						y = cus[cusidx][0].getmin(driidx);
						z = cus[cusidx][0].getsec(driidx);
						drivers[i][0].setterdate(x, y, z);
						char* c;
						char* v;
						c = new char[50];
						v = new char[50];
						c = cus[cusidx][0].getsource(driidx);
						v = cus[cusidx][0].getdestination(driidx);
						drivers[i][0].setsource(c, j);
						drivers[i][0].setdesti(v, j);
						float f;
						f = cus[cusidx][0].getdistance(driidx);
						drivers[i][0].setdistance(f, j);
						drivers[i][0].setstatus(2);
						cout << endl << "setting successful" << endl;
						ff = true;
						break;

					}

					if (ff = true)
					{
						break;
					}



				}

				if (ff = true)
				{
					break;
				}







			}
		}

		else
		{
			cout << "Error " << endl;
		}





		/*for(int i=0;i<30;i++)
		{
			int y=cus[cusidx][0].getserid2(i);
			if(y==sid)
			{
				sididx=i;
			}

		}*/

	}
};



int main()

{

	TMS T;
	//int plus1 = 0;    // plus acts as index for new customer
	int option;
	mainmenu();
	cin >> option;



	//int plusdriver1 = 0;

	while (option != -1)
	{
		while (option == 1 && option != -1)
		{
			T.tmscusinput();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}

		}

		while (option == 2 && option != -1)
		{


			T.tmsdriinput();
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}

		}

		while (option == 3 && option != -1)
		{
			int driid1;
			cout << "Enter the driver id u want to remove: ";
			cin >> driid1;
			T.tmsremovedri(driid1);
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}


		}

		while (option == 4 && option != -1)
		{
			T.tmsvehicleadd();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}

		}

		while (option == 5 && option != -1)
		{
			T.tmsvehiremove();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}

		}

		while (option == 6 && option != -1)
		{
			T.tmsdisplayallcus();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}


		}

		while (option == 7 && option != -1)
		{

			T.tmsdisplayalldri();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}


		}

		while (option == 8 && option != -1)
		{
			T.tmsvehdisplay();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}
		}

		while (option == 9 && option != -1)
		{
			T.displaydrihistory();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}
		}

		while (option == 10 && option != -1)
		{
			int hisid1;
			cout << "Enter the customer id of whom u want to find history: ";
			cin >> hisid1;
			T.tmscushis(hisid1);
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}


		}

		int drix1 = 0; // use in opt 12

		while (option == 12 && option != -1)
		{
			T.tmsdisplaydrirank(drix1);
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}


		}

		while (option == 15 && option != -1)
		{
			T.tmsreqser();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}


		}

		while (option == 16 && option != -1)
		{
			T.cancelservice();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}



		}
		while (option == 17 && option != -1)
		{

			T.completeservice();
			cout << endl;
			displaymenu();
			cin >> option;
			if (option == -1)
			{
				break;
			}
			else
			{
				continue;
			}

		}

	}

	return 0;
}






