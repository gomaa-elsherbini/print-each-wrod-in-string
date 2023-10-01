#include <iostream>
#include <string>
using namespace std;




string readString()
{
	string str;
	cout << "\nEnter a string?\n";
	getline(cin, str);
	return str;
}

void printEachWord(string str)
{
	//Mohammad Abu-Hadhoud Programming Advices
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i];
		if (str[i] == ' ')
			cout << "\n";
			continue;
	}
}



int main()
{
	string str = readString();
	//Mohammad Abu-Hadhoud Programming Advices

	printEachWord(str);



	system("pause>0");
	return main();

}