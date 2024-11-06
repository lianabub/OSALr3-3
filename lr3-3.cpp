#include <iostream>
#include <math.h>
using namespace std;
int main()
{ 
	setlocale(LC_ALL, "ru");
	int n;
	cout << "введите количество коров";
	cin >> n;
	if (n < 100)
	{
		if (n != 11 and n % 10 == 1)
		{
			cout << "на лугу пасется" << n << "корова";
		}
		else if ((n % 10 == 2 and n != 12) || (n % 10 == 3 and n != 13) || (n % 10 == 4 and n != 14))
		{
			cout << "на лугу пасется" << n << "коровы";
		}
		else
		{
			cout << "на лугу пасется" << n << "коров";
		}
	}
	else
	{
		cout << "слишком много коров";

	}
}

