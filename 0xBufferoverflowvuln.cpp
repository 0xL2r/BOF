/*

# Buffer Overflow Exploit By L0r .

*/

#include <iostream>
#include <string>

int main()
{
    char username[10];
    std::cout << "Please Enter your love for a tits with a words or numbers : ";
    std::cin >> username;
    std::cout << "This is your love : " << username;
    std::cin.get();
    std::cin.get();
}


