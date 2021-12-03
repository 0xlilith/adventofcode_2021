#include <iostream>
#include <fstream>

int main(void) {
	std :: ifstream file("input.txt");
	int line, large=0, count=0;
	while( file >> line ) {
		if ( line > large ) {
			count++;
		}
		large = line;
	}
	std :: cout << count-1;
	file.close();
}
