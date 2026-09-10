#include <iostream>
using namespace std;
#define size 5
int c,ch;
template<class type>
class stack
{
	static int count_TOP;
	type STACK[size];
	public:
	stack(){count_TOP=-1;}
	void reset(){count_TOP=-1;}
	void push();
	void pop();
	void display();
};
template<class type>
int stack<type>::count_TOP=0;

	template<class type>
void stack<type>::push()
{
	if(count_TOP>=size-1)
	{cout<<"STACK OVERFLOWN"<<endl; return;}
	cout<<"Enter data to push:"<<endl;
	cin>>STACK[++count_TOP];
}

	template<class type>
void stack<type>::pop()
{
	if(count_TOP<=-1)
	{
		cout<<"STACK IS UNDERFLOWN"<<endl;return;
	}
	cout<<"deleted:"<<STACK[count_TOP--];
	cout<<endl;
}

	template<class type>
void stack<type>::display()
{
	if(count_TOP<=-1)
	{cout<<"STACK UNDERFLOWN"<<endl;return;}
	cout<<endl;
	cout<<"Stack data is:"<<endl;
	for(int i=count_TOP;i>=0;i--)
		cout<<STACK[i]<<endl;
	cout<<endl;
}
int main()
{
	stack<int>oi;
	stack<char>oc;
	stack<float>of;
	stack<double>od;
	stack<string>os;
	int a[5]={0};
	int option,option1;
l:
	cout<<"             MAIN MEMU"<<endl;
	cout<<"1.INT 2.CHAR 3.FLOAT 4.DOUBLE 5.STRING 6.EXIT"<<endl;
	cin>>option;
	if(a[option]==1)
	{
		cout<<"Enter your choice:"<<endl;
		cout<<"1.continue old stack   2.new stack"<<endl;
		cin>>ch;
		if(ch==2)
		{
			switch(option)
			{
				case 1:oi.reset();break;
				case 2:oc.reset();break;
				case 3:of.reset();break;
				case 4:od.reset();break;
				case 5:os.reset();break;
			}
		}
	}
	a[option]=1;
	switch(option)
	{
		case 1:if (ch==1)
		       {
			       ch=0;
			       cout<<"--Continue with your old stack--"<<endl;
		       }
		       else cout<<"stack application is ready to use"<<endl;break;
		case 2:if (ch==1)
		       {
			       ch=0;
			       cout<<"--Continue with your old stack--"<<endl;
		       }
		       else
			       cout<<"stack application is ready to use"<<endl;break;
		case 3:if(ch==1)
		       {
			       ch=0;
			       cout<<"--Continue with your old stack--"<<endl;
		       }
		       else
			       cout<<"float stack application is ready to use"<<endl;break;
		case 4:if(ch==1)
		       {
			       ch=0;
			       cout<<"--Continue with your old stack--"<<endl;
		       }
		       else 
			       cout<<"stack application is ready to use"<<endl;break;
		case 5:if(ch==1)
		       {
			       ch=0;
			       cout<<"--Continue with your old stack--"<<endl;
		       }
		       else
			       cout<<"string stack application is ready to use"<<endl;break;
		case 6:exit(0);
		default:cout<<"Invalid option entered"<<endl;goto l;
	}
	while(1)
	{
		cout<<"SUB MENU"<<endl;
		cout<<"1.PUSH 2.POP 3.DISPLAY 4.MAIN MENU"<<endl;
		cin>>option1;
		if(option1==4)
			goto l;
		switch(option1)
		{
			case 1: c=0;
				switch(option)
				{
					case 1:oi.push();break;
					case 2:oc.push();break;
					case 3:of.push();break;
					case 4:od.push();break;
					case 5:os.push();break;
				}
				break;
			case 2: c=0;
				switch(option)
				{
					case 1:oi.pop();break;
					case 2:oc.pop();break;
					case 3:of.pop();break;
					case 4:od.pop();break;
					case 5:os.pop();break;
				}
				break;

			case 3:c=0;
			       switch(option)
			       {
				       case 1:oi.display();break;
				       case 2:oc.display();break;
				       case 3:of.display();break;
				       case 4:od.display();break;
				       case 5:os.display();break;
			       }
			       break;
			default:c++;
				switch(c){
					case 1:cout<<"Please read the options carefully"<<endl;break;
					case 2:cout<<"Last chance,Please take care"<<endl;break;
					case 3:cout<<"Thanks for using our application.Please read the manual and come back properly"<<endl;return 0;
				}
		}
	}
}






