// BitCounting.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned long long n = 73074939670;
	unsigned long long mod = 0, bin = 0;
	while (n)
	{
		mod = n % 2;
		n /= 2;
		bin = 10 * bin + mod;
	}
	string binString = to_string(bin);
	cout << bin<< endl;
	int countBit = 0;
	for (int i = 0; i < binString.length(); i++)
	{
		if (binString[i] == '1')
			countBit++;
	}
    std::cout << countBit;
}
