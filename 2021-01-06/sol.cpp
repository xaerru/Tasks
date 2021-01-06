#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#define sep std::cout << "-----" << std::endl;

char averageChar(std::string s) {
    int sum = 0;
    for(char x:s) {
        sum+=x;
    }
    return floor(sum/s.size());
}

std::string space(std::string s) {
    std::string r;
    for(char x:s) {
        if(isupper(x)&&x!=s[0]) {
            r+=" ";
            r+=tolower(x);
        }
        else r+=x;
    }
    return r;
}

bool help(std::string a, std::string b) {
    return averageChar(a)>averageChar(b);
}

std::string sort(std::string s) {
    s+=" ";
    std::vector<std::string> a;
    std::string r;
    for(auto x:s) {
        if(x==' ') {
            a.push_back(r);
            r="";
        }
        else r+=x;
    }
    std::sort(a.begin(),a.end(),help);
    reverse(a.begin(),a.end());
    std::string f;
    for(auto x:a) {
        f+=x;
        f+=' ';
    }
    return f;
}

int main() {
    std::cout << averageChar("Hello") << std::endl;
    std::cout << averageChar("Yes") << std::endl;
    std::cout << averageChar("aaaa") << std::endl;
    sep;
    std::cout << space("HelloWorld!") << std::endl;
    std::cout << space("HowAreYou?") << std::endl;
    std::cout << space("Example") << std::endl;
    std::cout << space("Simple,Right?") << std::endl;
    sep;
    std::cout << sort("Hello Yes aaaa") << std::endl;
    return 0;
}
