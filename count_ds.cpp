#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string text = "Hdafgsdfgsdfgsdfgsdf";
    int count = 0;

    for (char c : text) {
        if (std::tolower(static_cast<unsigned char>(c)) == 'd') {
            count++;
        }
    }

    std::cout << count << " d found in string" << std::endl;

    return 0;
}
