#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
	map< string, map<string, string> > database;
	
	vector<string> names = {"Worm", "Cat", "Dog", "Hamster" };
	vector<string> type = {"annelid", "mammal", "mammal", "mammal" };
	vector<string> tailPresence = {"n", "y", "y", "n" };
	
	for (int i=0; i<names.size(); ++i) {
		map<string, string> data;
		data["type"] = type[i];
		data["tailPresence"] = tailPresence[i];
		database[names[i]] = data;
	}
	
	for (auto item : database) {
		cout << item.first << " : ";
		for (auto data : item.second ) {
			cout << data.first << "=" << data.second << " ";
		}
		cout << endl;
	}
	
	cout << "---" << endl;
	
	cout << "Search for what type of animal?" << endl;
	cout << "Annelid (A)" << endl;
	cout << "Insect (I)" << endl;
	cout << "Mammal (M)" << endl;
	
	string userType;
	
	cin >> userType;
	cout << endl;
	
	cout << "You have selected: ";
	
	if (userType == "A") {
		cout << "Annelid" << endl;
	} else if (userType == "I") {
		cout << "Insect" << endl;
	} else if (userType == "M") {
		cout << "Mammal" << endl;
	} else {
		cout << "No type selected." << endl;
		return 0;
	}
	
	cout << "---" << endl;
	
	cout << "Search for an animal with a tail or without a tail?" << endl;
	cout << "With tail (1)" << endl;
	cout << "Without tail (2)" << endl;
	
	string userTail;
	
	cin >> userTail;
	cout << endl;
	
	cout << "You have selected: ";
	
	if (userTail == "1") {
		cout << "With a tail" << endl;
	} else if (userTail == "2") {
		cout << "Without a tail" << endl;
	} else {
		cout << "Not specified." << endl;
		return 0;
	}
	
	
	
	return 0;
}
