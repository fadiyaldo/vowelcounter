// week4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
// declaring vars
int aCount = 0;
int eCount = 0;
int iCount = 0;
int oCount = 0;
int uCount = 0;
int fCount = 0;
int mCount = 0;
int yCount = 0;
int main(int argc, char* argv[])
{
	using namespace std;
	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}
	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		std::cout << i << ":" << argv[i] << std::endl;
	}
	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cout << "Error with file name.." << std::endl;
		return 1;
	}
	
	///////////////////////
	// Work here with open file.....
	///////////////////////
	// c will represent every single character in the document
	char c;
	
		// this loop will not end until we have reached the end of the file
		while (!inFile.eof() && inFile >> c) {
			// this checks for both upper and lower case letters
			if (c == 'a' || c== 'A') {
				aCount++;
			}
			else if (c == 'e' || c== 'E') {
				eCount++;
			}
			else if (c == 'i' || c=='I') {
				iCount++;
			}
			else if (c == 'o' || c=='O') {
				oCount++;
			}
			else if (c == 'u' || c=='U') {
				uCount++;
			}
			else if (c == 'f' || c == 'F') {
				fCount++;
			}
			else if (c == 'm' || c == 'M') {
				mCount++;
			}
			else if (c == 'y' || c == 'Y') {
				yCount++;
			}

		}
	//formatting of the code and adding all the vowels together
		int allvowels = uCount + oCount + iCount + eCount + aCount;
	std::cout <<"Number of A's: .............."<<    aCount << std::endl;
	std::cout << "Number of E's: ............." <<  eCount << std::endl;
	std::cout << "Number of I's: ............."  << iCount << std::endl;
	std::cout << "Number of O's: ............."  << oCount << std::endl;
	std::cout << "Number of F's: ............." << fCount << std::endl;
	std::cout << "Number of M's: ............." << mCount << std::endl;
	std::cout << "Number of Y's: ............." << yCount << std::endl;
	std::cout << "Number vowel count: ........"  << allvowels;
	inFile.close();
	return 0;
}

