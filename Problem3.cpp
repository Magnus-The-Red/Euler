#include<iostream>

using namespace std;


int is_prime(int n)
{
	if (n <= 1)
	{
		return false;
	}
	else if (n <= 3)
	{
		return true;
	}
	else if ((n % 2 == 0)||(n % 3 == 0))
	{
		return false;
	}
	int i = 5;
	while ((i*i) <= n)
	{
		if ((n % i == 0)||(n % (i+2) == 0))
		{
			return false;
		}
		i = i + 6;
	}
	return true;
}


int main ()
{
	int test_number = 1;
	while (test_number <= 1000)
	{
		if (is_prime(test_number) == true)
		{
			cout << test_number << endl;
		}
		test_number++;
	}
}

