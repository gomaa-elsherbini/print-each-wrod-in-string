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
		if (str[i] == ' ')
			str[i] = '\n';

		/*cout << str[i];
		if (str[i] == ' ')
			cout << "\n";
			continue;*/
	}
	cout << str;
}



int main()
{
	string str = readString();
	//Mohammad Abu-Hadhoud Programming Advices

	printEachWord(str);



	system("pause>0");
	return main();

}