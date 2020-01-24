#include<iostream>
#include<string.h>
using namespace std;

int permutation(int n, int r)
{
	if(r>1)
	{
		return n*permutation(n-1,r-1);
	}
	else if(r==1)
	{
		return n;
	}
}

int combination(int n, int r)
{
	if(r>1)
	{
		return n*combination(n-1,r-1)/r;
	}
	else if(r==1)
	{
		return n;
	}
	return 0;
}

int main()
{
	int num;
	int count;
	int choice;
	cout << "MENU:";
	cout << "\n1.Permutation.";
	cout << "\n2.Combination.";
	cout << "\n\nEnter your choice(1 or 2):";
	cin >> choice;
	cout << "\nEnter the number:";
	cin >> num;
	cout << "\nEnter the value of r:";
	cin >> count;
	try
	{
		if(num<0||count<0)
		{
			throw "\nINVALID ARGUMENTS";
		}
	}
	catch(char *string)
	{
		cout << string;
	}
	if(choice==1)
	{
		cout << "The permutation of the number is " << permutation(num,count);
	}
	else if(choice==2)
	{
		cout << "The combination of the number is " << combination(num,count);
	}
	else
	{
		cout << "!!!WRONG CHOICE!!!";
		exit(100);
	}
	return 0;
}
