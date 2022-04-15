#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	std::vector<int> arr;
	ofstream fbin("binary.dat", ios::binary);

	cout << "Vnos: " << endl;
	int n = 0;
	cin >> n;

	for (int i = 1; i < 10; i++) {
	arr.push_back(n*i);
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << "Multiple nr. " << i+1 << "\n" << arr[i] << endl;
	}

	fbin.write((char*)&arr, sizeof(arr)); // Writing into binary
	fbin.close();

	cout << "Done.";

	return 0;

  
}