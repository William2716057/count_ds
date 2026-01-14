#include <iostream>
#include <string>
#include <cctype>

int count_char(const std::string& text, char target) {
	int count = 0;
	for (char c : text) {
		if (c == target) {
			++count;
		}
	}
	return count;
}


int main()
{
	std::string text;
	std::cout << "Enter text: ";
	std::getline(std::cin, text);

	int count = count_char(text, 'd');
	std::cout << "Found " << count << "occurrances of d";
}
