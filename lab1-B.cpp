#include<iostream>
using namespace std;

int main()
{
int n,m;
std::cout<<"Please enter a number:";

cin>>n;

while(n!=1)
{
	if ((n%2)==1)
	{
	n=n*3+1;
	std::cout<<n<<endl;
	}
	else if ((n%2)==0)
	{
	n=n/2;
	std::cout<<n<<endl;
	}
}

return 0;
}
