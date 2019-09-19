#include<iostream>
using namespace std;
struct Stack
{
	char a[10];
	int top,max;
};
main()
{
	struct Stack s;
	int n;
	s.top=-1;
	s.max=9;
	while(1)
	{
		cout<<"press 1 for push\n";
		cout<<"press 2 for pop\n";
		cout<<"press 3 for display\n";
		cout<<"press 4 to exit\n";
		cout<<"enter your choice\n";
		cin>>n;
		switch(n)
		{
			case 1:
				{
				if(s.top==s.max)
				{
					cout<<"overflow";
					break;
				}
				fflush(stdin);
				    s.top=s.top+1;
					cout<<"enter the info part:-";
					cin>>s.a[s.top];
					break;
				}
				case 2:
					{
						if(s.top==-1)
						{
							cout<<"underflow";
							break;
						}
						cout<<s.a[s.top]<<" is deleted\n";
						s.top=s.top-1;
						break;
					}
					case 3:
						{
							int i;
							for(i=s.top;i>=0;i--)
							{
								cout<<s.a[i]<<" "<<"\n";
							}
							break;
						}
						case 4:
							{
								exit(0);
							}
		}
	}
}
