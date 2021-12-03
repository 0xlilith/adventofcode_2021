#include <iostream>
#include <fstream>

int main(void) {
	std :: ifstream file("input.txt");
	int num=0, depth=0, horizontal=0;
	std :: string arr[2000];
	while (! file.eof()) {
		file >> arr[num];
		num++;
	}
	file.close();
	for(int i=0;i<num;i+=2) {
		if (arr[i].compare("forward") == 0)
			horizontal += stoi(arr[i+1]);
		else if (arr[i].compare("down") == 0)
			depth += stoi(arr[i+1]);
		else if (arr[i].compare("up") == 0)
			depth -= stoi(arr[i+1]);
	}
	std :: cout << horizontal * depth ;
}
