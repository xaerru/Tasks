#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>

#define sep std::cout << "-----" << std::endl;

template<typename T>
std::ostream& operator <<(std::ostream& out, std::vector<T> a) {
    out << "\"";
    for (int i=0;i<a.size()-1;i++) out << a[i] << " ";
    out << a[a.size()-1] << "\"";
    return out;
}

char averageChar(std::string s, int i=0, int t=0) {
    if(s.size()==i) return floor(t/s.size());
    t+=s[i];
    return averageChar(s,i+1,t);
}

std::string space(std::string s, std::string r="", int i=0) {
    if(s.size()==i) return r;
    if(isupper(s[i])&&i!=0){
        r+=" ";
        r+=tolower(s[i]);
    } else r+=s[i];
    return space(s,r,i+1);
}

bool compareAverageChar(std::string a, std::string b) {
    return averageChar(a)>averageChar(b);
}

std::vector<std::string> sort(std::string a) {
    std::istringstream iss(a);
    std::vector<std::string> r((std::istream_iterator<std::string>(iss)),
                                 std::istream_iterator<std::string>());
    std::sort(r.begin(),r.end(),compareAverageChar);
    reverse(r.begin(),r.end());
    return r;
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
    std::cout << sort("Hello Yes aaaa");
    return 0;
}
