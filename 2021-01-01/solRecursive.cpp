#include <iostream>
#include <string>

int nthEven(int n) {
    return 2*n-2;
}

bool validateEmail(std::string s) {
    return s[0]!='@' && s.substr(s.size()-4,4)==".com";
}

std::string atbash(std::string s, std::string r="", int i=0) {
    if(s.size()==i) return r;
    if(isalpha(s[i]))
        if(islower(s[i])) r+='a'+'z'-s[i];
        else r+='A'+'Z'-s[i];
    else r+=s[i];
    return atbash(s,r,i+1);
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
