#include <iostream>
using namespace std;
int main()
{
	char filename[100];
	cout << "Enter file to rename or move." << endl;
	cin.getline(filename, 100);

	string fstr = filename;
	
	char destination[100];
	cout << "Enter file destination." << endl;
	cin.getline(destination, 100);

	string dstr = destination;
	
	string str = "mv " + fstr + " " + dstr;

	const char *command = str.c_str();

	cout << "Moving " << fstr << " to " << dstr << "..." << endl;
	system(command);

	return 0;
}
