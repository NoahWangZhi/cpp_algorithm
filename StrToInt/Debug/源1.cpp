#include <iostream>
using namespace std;


int StrToInt(char *string) {
	int number;
	while (*string != 0)
	{
		number = number * 10 + *string - '0';
		string++;
	}
	return number;
}

int main() {
	char *string = "Hello World!"
		cout << StrToInt(string) << endl;
	return 0;
}