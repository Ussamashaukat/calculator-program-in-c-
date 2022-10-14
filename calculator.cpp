#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	float a,b,e,d,result;
	char opt,start,s,clear ,c,jump;
	cout<<"welcome to calculator"<<endl;
	cout<< "Enter S to Start the Program\n";cin>>s; 
	if ( s== 's'|| s=='S')
	{
			cout<< "Enter L for Logical Operations: \n";
			cout<< "Enter A for Arthimatic Operations\n";
			cout<< "Enter I for increment or Decrement\n";
			cout<<"Enter K for comparison operator\n";
			cout<<"Enter Z for assignment operator\n";
			cin>> c;
			if ( c == 'k'|| c== 'K')
			{
			cout<<"enter your first opertor: "<<endl;
			cin>>a;
			cout<<"enter your operand(<,>,=):\n";
			cin>>opt;
			cout<<"enter your second operator:\n";
			cin>>b;	
				if ( opt == '<')
				{
					result= a<b;
					if (result == 1)
					{
						cout<< "A is smaller then B\n";
					}
					else cout<< "A is  not smaller then B\n";
				}
				else if (opt == '>')
				{
				result=a>b;
				if (result==1)
				{
					cout<<"A is greater then B\n";
				}	
				else cout<<"A is not greater then B\n";	
				}
				else if (opt=='=')
				{
					result=a=b;
					if (result==1)
					{
						cout<<"A is equal to B\n";
					}
					else cout<<"A is not equal to B\n";
				}
				
			}
			else if ( c== 'a'|| c== 'A')
			{
			cout<<"enter your first operator\n";
			cin>>a;
			cout<<"enter your operand(+,-,/,*):\n";
			cin>>opt;
			cout<<"enter your second operator:\n";
			cin>>b;
			if (opt=='+') result=a+b;
			else if (opt=='-') result=a-b;
			else if (opt=='*') result=a*b;
			else if (opt=='/') result=a/b;
			cout<<"result is: "<<result<<endl;	
			}
			else if ( c == 'i' || c=='I')
			{
				cout<<"enter your operator value: "<<endl;
				cin>>a;
				cout<<"enter your operand: "<<endl;
				cin>>opt;
				if (opt == '-')
				{
					cout<<"result is: "<<a-1<<endl;
				}
				else if( opt == '+')
				{
					cout<<"result is: "<<a+1<<endl;
				}
			}
			else if (c == 'l' || c=='L')
			{
				cout<<"enter your operator value: "<<endl;
				cin>>a;
				cout<<"enter your second operator value: "<<endl;
				cin>>b;
				cout<<"enter your third operator value: "<<endl;
				cin>>e;
				cout<<"enter your fourth operator value: "<<endl;
				cin>>d;
				cout<<"enter your operand: "<<endl;
				cin>>opt;
				if(!(a==0))

     cout<<"a is not zero"<<endl;

  else

    cout<<"a is zero"<<endl; 
   if((a>b)&&(d<e))

        cout<<"Logical AND is true"<<endl;

  else

       cout<<"Logical AND is false"<<endl;

 

  if((a<d)||(b<e))

     cout<<"Logical OR is true"<<endl;

 else

     cout<<"Logical OR is false"<<endl;

			}
	else if(c=='z'||c=='Z')
	{
		cout<<"enter your operator value: "<<endl;
				cin>>a;
				cout<<"enter your second operator value: "<<endl;
				cin>>b;
				cout<<"enter your third operator value: "<<endl;
				cin>>e;
				cout<<"enter your fourth operator value: "<<endl;
				cin>>d;
				cout<<"enter your operand: "<<endl;
				cin>>opt;
	if(a==b)

     cout<<"a is equal to b"<<endl;

  else

    cout<<"a is not equal to b"<<endl;

 

  if(e!=d)

     cout<<"c is not equal to d"<<endl;

  else

    cout<<"c is equal to d"<<endl;

 

  if((a+b) <= (e+d))
  

      cout<<" (a+b) less than/equal to (c+d)"<<endl;
      else
      cout<<"(a+b) not less then/equal to (c+d)"<<endl;
	   if((a-b)>=(d-e))

     cout<<"(a-b) greater than/equal to (d-c)"<<endl;
     else
     cout<<"(a-b) not greater then/equal to (d-c)"<<endl;
	 }
	
}
	
    cout<<"Calculator Closed\n";
		return 0;
}

