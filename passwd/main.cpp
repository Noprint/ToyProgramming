#include <iostream>
#include <string>
#include "Ciphertext.h"
using namespace std;

int main(int argc, char *argv[])
{
    string str = "";
	int key;

    if (argc < 2) {
        cout << "number of parameter error!" << endl;
        return 0;
    }

	for (int i = 0; i < argc - 1; ++i) {
		if (string(argv[i]) == "-k")
			key = stoi(argv[i+1]);	
		else if (string(argv[i]) == "-f")
			str = string(argv[i+1]);
	}

	if (str == "")
		cin >> str;
	
	int sign;
	for (int i = 1; i < argc; ++i) {
		string tmp = string(argv[i]);
		if (tmp == "-e") sign = 0; // 加密
		else if (tmp == "-d") sign = 1; // 解密
	}	

	for (int i = 0; i < str.length(); i++) {
		if (sign == 0)
			cout << encryption( transInt(str[i] + key) );
		else if (sign == 1)
			cout << deciphering( transInt(str[i] - key) );
	}
	cout << endl;

    return 0;
}
