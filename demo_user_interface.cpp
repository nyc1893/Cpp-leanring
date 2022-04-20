#include <iostream>
using namespace std;

int main()
{
	while(1)
	{
		cout<<"0.Quit"<<endl;
		cout<<"1.Play the Orignal Song"<<endl;
		cout<<"2.Play the Song with Echo"<<endl;

		int choice;
		cin>>choice;
		cout<<"Your choice is "<<choice<<endl;
		switch(choice)
		{
			case 0:
				cout<<"I am out"<<endl;
				return 0;
			case 1:
				cout<<"Playing the Orignal"<<endl;
				break;
			case 2:
				cout<<"Playing the Echo"<<endl;
				break;
		}
	}
}
