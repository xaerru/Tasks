#include <iostream>
#include <string>
#include <regex>

int nthEven(int n) {
    return 2*n-2;
}

bool validateEmail(std::string s) {
    return regex_match(s,std::regex("^.+@.+\\..+$"));
}

std::string atbash(std::string s) {
    std::string r;
    for(char x:s) {
        if(isalpha(x))
            if(islower(x))
                r+=219-x;
            else
                r+=155-x;
        else
            r+=x;
    }
    return r;
}

int main() {
    std::cout << nthEven(1) << std::endl;
    std::cout << nthEven(2) << std::endl;
    std::cout << nthEven(100) << std::endl;
    std::cout << std::boolalpha << validateEmail("@gmail.com") << std::endl;
    std::cout << std::boolalpha << validateEmail("hello.gmail@com") << std::endl;
    std::cout << std::boolalpha << validateEmail("gmail") << std::endl;
    std::cout << std::boolalpha << validateEmail("hello@gmail") << std::endl;
    std::cout << std::boolalpha << validateEmail("hello@edabit.com") << std::endl;
    std::cout << atbash("apple") << std::endl;
    std::cout << atbash("Hello world!") << std::endl;
    std::cout << atbash("Christmas is the 25th of December") << std::endl;
    return 0;
}


