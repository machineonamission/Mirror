#pragma once
// sort of "library" to make cpp more pythonian/easier
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;
int bad = -0; // what to return if bad
//pythonian
void print(string input) { // prints string
	cout << input << endl;
}

string input(string text) { // similair to python's input(), returns inputted string
	print(text); // might want to use cout so there is no endl
	string toReturn;
	getline(cin, toReturn);
	return toReturn;
}

int to_int(string input) { // convert string to int, to_string is part of standard library so not needed
	int number;
	istringstream iss(input);
	iss >> number;
	if (iss.fail()) {
		number = bad; // default return value if something goes wrong
	}
	return number;
}

// replaces all occurances of [string tobereplaced] in [string text] with [string toreplace]
string replace(string text, string tobereplaced, string toreplace) {
	int index;
	index = text.find(tobereplaced);

	while (index != -1) {
		text.replace(index, toreplace.length(), toreplace);
		index = text.find(tobereplaced);
	}
	return text;
}
//file
void filewrite(string file, string data) { // write files, FULL DIRECTORY MUST BE SPECIFIED. "test.txt" won't work. "C:/test.txt" would.
	ofstream fileStream;
	fileStream.open(file, ios::out);
	if (fileStream.is_open())
	{
		fileStream << data;
		fileStream.close();
	}
}

string fileread(string file) { // reads file
	ifstream fileStream;
	fileStream.open(file); //open the input file
	stringstream strStream;
	strStream << fileStream.rdbuf(); //read the file
	string str = strStream.str();
	return str;
}
//math
int randint(int begin, int end) { // random integer from int begin to int end (not including end)
	if (end > begin) {
		int range = end - begin;
		return rand() % range + begin;
	}
	else {
		return bad;
	}

}
//visuals
vector<vector<int>> spritesheet(int x, int y, int size) { // returns vector (size x*y) of vectors (size 2). coord list for making rects from spritesheet. 
	vector<vector<int>> toreturn;
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) { // i=x j=y
			vector<int> tmp = { j*size, i*size };
			cout << tmp[0] << "," << tmp[1] << endl;
			toreturn.push_back(tmp);
		}
	}
	return toreturn;

}
