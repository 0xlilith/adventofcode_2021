#include <iostream>
#include <fstream>

int main(void) {
	std :: ifstream file("input.txt");
	int large=0, count=0, num=0, sum=0, temp=0;
	int arr[2000];
	while (! file.eof()) {
		file >> arr[num];
		num++;
	}
	file.close();
	for(int i=0;i<num-3;i++)
    {
		sum = arr[i] + arr[i+1] + arr[i+2];
		if ( sum > temp ) {
			count++;
		}
		temp = sum;
	//	std :: cout << sum << " ";
    }
	std :: cout << count-1;
}
