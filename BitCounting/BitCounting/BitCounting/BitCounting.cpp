// BitCounting.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned long long n = 73074939670;
	unsigned long long mod = 0, bin = 0;
	string str = "";
	while (n)
	{
		mod = n % 2;
		n /= 2;
		bin = 10 * bin + mod;
		str += to_string(mod);
	}
	//string binString = to_string(bin);
	cout << str<< endl;
	int countBit = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1')
			countBit++;
	}
    std::cout << countBit;
}
