#include <iostream>
using namespace std;

class type
{
public:
	type()
	{
		cout<<"type"<<endl;
	}
	~type()
	{
		cout<<"~type"<<endl;
	}
private:
	int x_;
};

void main ()
{
	type x;
	cout<<"hello"<<endl;
}