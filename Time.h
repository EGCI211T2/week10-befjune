class Time{
private:
	int m,h,s;
public:
	void set_time(int=0,int=0,int=0);
	void display();
	Time subtract(Time);
	void get_time();
	Time operator-(Time);
};

void Time::set_time(int a,int b, int c){
	if(a>24||a<0) h=0; else h=a;
	if(b>59||b<0) m=0; else m=b;
	if(c>59||c<0) s=0; else s=c;
}

void Time::get_time(){
	std::cout<<"Input Time(h m s)";
	std::cin>>h>>m>>s;
	std::cout<<endl;
	set_time(h,m,s);
}

void Time::display(){
	std::cout<<setfill('0')<<setw(2)<<h;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<m;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<s<<endl;
}

Time Time::subtract (Time t1){
	Time t3;// t3=t2-t1
	/*calculate time*/
	t3.s=s-t1.s;
	t3.s=this->s-t1.s;


	if(t3.s<0){
		t3.s = t3.s+60;
		m = m-1;
	}

	t3.m=m-t1.m;
	if(t3.m<0){
		t3.m = t3.m + 60;
		h = h-1;
	}

	t3.h=h-t1.h;
	if(t3.h<0){
		t3.h = 24+t3.h;
	}
	return t3;
}

/*void getTime(Time &t);
struct Time subtract (Time t2, Time t1);
void display(Time &t);*/

//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

/*void getTime(struct Time &t){
	std::cout<<"Input Time(h m s)";
	std::cin>>t.h>>t.m>>t.s;
	std::cout<<endl;
}*/



//week 10 work
/*struct Time{
	int m,h,s;
};

/*void getTime(Time &t);
struct Time subtract (Time t2, Time t1);
void display(Time &t);*/

//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

/*void getTime(struct Time &t){
	std::cout<<"Input Time(h m s)";
	std::cin>>t.h>>t.m>>t.s;
	std::cout<<endl;
}

struct Time subtract (struct Time &t2, struct Time &t1){
	struct Time t3;// t3=t2-t1
	/*calculate time
	t3.s=t2.s-t1.s;

	if(t3.s<0){
		t3.s = t3.s+60;
		t2.m = t2.m-1;
	}

	t3.m=t2.m-t1.m;
	if(t3.m<0){
		t3.m = t3.m + 60;
		t2.h = t2.h-1;
	}

	t3.h=t2.h-t1.h;
	if(t3.h<0){
		t3.h = 24+t3.h;
	}
	return t3;
}

void display(struct Time &t3){
	std::cout<<setfill('0')<<setw(2)<<t3.h;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<t3.m;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<t3.s<<endl;
}*/