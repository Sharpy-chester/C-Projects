#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

// This program gives the file size of a given file

int main()
{
	streampos begin, end;
	ifstream inFile("example.txt", ios::binary);

	if (!inFile)
	{
		cerr << "File could not be opened";
		std::exit(1);
	}
	begin = inFile.tellg();
	inFile.seekg(0, ios::end);
	end = inFile.tellg();
	inFile.close();

	cout << "size is: " << (end - begin) << "bytes.\n";

	cin.get();
	return 0;
}