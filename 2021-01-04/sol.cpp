#include <iostream>
#include <vector>

std::string check(std::vector<int> a) {
    int inc=0,dec=0;
    for(int i=0;i<a.size()-1;i++) {
        if(a[i]<a[i+1])inc++;
        else dec++;
    } if(inc==0)return "decreasing";
    else if(dec==0)return "increasing";
    else return "neither";
}

int area(std::vector<int> a, std::vector<int> b, std::vector<int> c) {
    return abs((a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1])) / 2.0);
}

std::string withinTriangle(std::vector<int> a, std::vector<int> b, std::vector<int> c, std::vector<int> d) {
    return area(a,b,c)==area(b,c,d)+area(a,c,d)+area(a,b,d)?"true":"false";
}

bool bishopHelp(std::string s) {
    return s[0]%2==s[1]%2?0:1;
}

std::string bishop(std::string a, std::string b, int moves) {
    return bishopHelp(a)==bishopHelp(b)?"true":"false";
}

int main() {
    std::cout << check(std::vector<int>{1,2,3}) << std::endl;
    std::cout << check(std::vector<int>{3,2,1}) << std::endl;
    std::cout << check(std::vector<int>{1,2,1}) << std::endl;
    std::cout << withinTriangle(std::vector<int>{1,4}, std::vector<int>{5,6}, std::vector<int>{6,1}, std::vector<int>{4,5}) << "\n";
    std::cout << withinTriangle(std::vector<int>{1,4}, std::vector<int>{5,6}, std::vector<int>{6,1}, std::vector<int>{3,2}) << "\n";
    std::cout << bishop("a1","b4",2) << std::endl;
    std::cout << bishop("a1","b5",5) << std::endl;
    std::cout << bishop("f1","f1",0) << std::endl;
}
