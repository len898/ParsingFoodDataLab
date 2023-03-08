#include <iostream>
#include <fstream>
#include <string>

void parseData(std::string inputString);

int main() {
	std::string textFile;
	std::ifstream inPutStream;

	std::cin >> textFile;
	inPutStream.open(textFile);

	if (inPutStream.is_open()) {
		while (inPutStream.good()) {
			std::string temp;
			std::getline(inPutStream, temp);
			parseData(temp);
		}
	}
	else {
		std::cout << "Not";
	}
	inPutStream.close();
}

void parseData(std::string inputString) {
	//std::cout << stringCopy << std::endl;
	 //if (stringCopy.find("not available") == std::string::npos && stringCopy.find("available") != std::string::npos) {
	std::size_t foundFirst = inputString.find('\t');
	std::string category = inputString.substr(0, foundFirst);
	//std::cout << category << std::endl;

	std::size_t foundSecond = inputString.find('\t', foundFirst + 1);
	std::string name = inputString.substr(foundFirst + 1, foundSecond - foundFirst - 1);
	//std::cout << name << std::endl;

	std::size_t foundThird = inputString.find('\t', foundSecond + 1);
	std::string description = inputString.substr(foundSecond + 1, foundThird - foundSecond - 1);

	std::size_t foundFourth = inputString.find('\t', foundThird + 1);
	std::string availability = inputString.substr(foundThird + 1, foundFourth - foundThird - 1);

	if (availability == "Available") {
		std::cout << name << " (" << category << ") -- " << description << std::endl;
	}

	//}

}