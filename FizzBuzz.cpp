#include<iostream>
using namespace std;
int main() {
	int j = 1;//Intitializing the counter j from 1 
	for (j; j <= 50; j++)//Looping from 1 to 50 with an increment of 1 
	{
		if ((j % 3) == 0 && (j % 5) != 0)
			cout << "Fizz" << endl;
		else if (j % 5 == 0 && (j % 3) != 0)
			cout << "Buzz" << endl;
		else if ((j % 3) == 0 && (j % 5) == 0)
			cout << "Fizz and Buzz" << endl;
		if (j % 7 == 0 && (j % 5) != 0 && (j % 3) != 0)
			cout << "Wolf" << endl;
		else if ((j % 7 == 0) && (j % 3) == 0 && (j % 5) == 0)
			cout << "Fizz , Buzz and wolf " << endl;
	}
}