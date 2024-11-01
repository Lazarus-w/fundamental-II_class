#include <iostream>
using namespace std;
#include <string>

/*int main() {
    const int max=80;
    char str[max] ;

    std::cout << "Enter a line of text: ";
    std::cin.getline( str, max);

    std::cout << "You entered: " << str << std::endl;

    return 0;
}*/

//get(variablename,size,"deliminter")

int main() {
    const int max=80;
    char str[max] ;

    std::cout << "Enter a line of text: ";
    std::cin.get( str, max, '$');

    std::cout << "You entered: " << str << std::endl;

    return 0;
}