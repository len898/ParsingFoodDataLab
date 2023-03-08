#include <iostream>
#include <fstream>
#include <string>

void parseData(std::string inputString);

int main() {
	std::ifstream inPutStream;
	inPutStream.open("food.txt");

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
	std::cout << inputString << std::endl;

}