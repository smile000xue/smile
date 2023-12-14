#include <iostream>

/*int main()
{
	int age;
	std::string name;
	std::cout << "Enter your age:";
	std::cin >> age;

	std::cout << "Enter your name:";
	std::cin >> name;
	
	std::cout << "Your name is " << name << " and your age is " << age << std::endl;

	return 0;

}*/

/*using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	cout << a % b << "\n";


	return 0;
}*/

/*using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x > 0)
	{
		if (y > 0)
		{
			cout << "1";
		}
		else
		{
			cout << "4";
		}
	}
	else
	{
		if (y > 0)
		{
			cout << "2";
		}
		else
		{
			cout << "3";
		}
	}

	return 0;
}*/

using namespace std;

int main()
{
	int n;
	cin >> n;
	int i;
	for (i = 1; i <= n; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			cout << "*";
		}
		for (j = 0; j < n-i; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}

	return 0;
}