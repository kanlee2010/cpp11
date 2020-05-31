#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void stream_test(void)
{
	int t;
	std::cin.setf(std::ios_base::hex, std::ios_base::basefield);
	std::cout << "Input hex num: ";
	std::cin >> std::hex >> t;
	if (std::cin.fail()) {
		std::cout << "Incorrect Input" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
	} else {
		std::cout << "Hex input was: " << std::hex << t << std::endl;
	}

	std::cout << "Input two words: ";
	std::string s;
	std::cin >> s;
	char peek = std::cin.rdbuf()->snextc();
	if (std::cin.fail()) std::cout << "Failed";
	std::cout << "두 번째 단어 맨 앞글자 : " << peek << std::endl; //W
	std::cin >> s;
	std::cout << "다시 읽으면 : " << s << std::endl; //World

	std::ifstream in("Text.txt", std::ios::binary);
	if (!in.is_open()) {
		std::cout << "There is no file" << std::endl;
	}
	in >> s;
	std::cout << "Text.txt:" << s << std::endl;

	in.seekg(0, std::ios::end);
	int size = in.tellg();
	in.seekg(0, std::ios::beg);
	in >> s;
	std::cout << "Size: " << std::dec << size << " - Read again: " << s << std::endl;

	std::string str;
	str.resize(size);
	in.getline(&str[0], size);
	std::cout << "getline: " << str << std::endl;

	char buf[100];
	in.seekg(0, std::ios::beg);
	while (in) { // eofbit is not triggered at reading the last byte of the file
		in.getline(buf, 100);
		std::cout << buf << std::endl;
	}

	std::istringstream ss("123");
	int x;
	ss >> x;
	std::cout << "입력 받은 데이터 :: " << x << std::endl;
}