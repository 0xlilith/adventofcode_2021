#include <iostream>
#include <fstream>

int main(void) {
	std :: ifstream file("input.txt");
	std :: string gamma = "", epsilon = "";
	int num=0, o=0, z=0;
	int bitsize=0;
	std :: string arr[2000];
	while (! file.eof()) {
		file >> arr[num];
		num++;
	}
	file.close();
	while(bitsize < 12) {
		for (int i=0; i<num-1; i++) {
			if (arr[i].at(bitsize) == '0')
				z++;
			else if (arr[i].at(bitsize) == '1')
				o++;
		}
		if (z > o) {
			gamma += '0';
			epsilon += '1';
		} 
		else {
			gamma += '1';
			epsilon += '0';
		}
		z=0;o=0;
		bitsize++;
	}
	std :: cout << "gamma : " << gamma <<"\nepsilion : " << epsilon << "\n";
	unsigned long long gamma_dec = std::bitset<64>(gamma).to_ullong();
	unsigned long long epsilon_dec = std::bitset<64>(epsilon).to_ullong();
	std :: cout << "gamma decimal : " << gamma_dec <<"\nepsilion decimal : " << epsilon_dec << "\n";
	std :: cout << "product : " << gamma_dec * epsilon_dec;
}
