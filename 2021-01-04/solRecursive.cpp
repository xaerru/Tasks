#include <iostream>
#include <vector>

#define sep std::cout << "-----" << std::endl

std::string check(std::vector<int> a, int i=0, int inc=0, int dec=0) {
    if(a.size()==i+1)
        if(inc == 0) return "decreasing";
        else if(dec == 0) return "increasing";
        else return "neither";
    if(a[i]<a[i+1]) inc++;
    if(a[i]>a[i+1]) dec++;
    return check(a, i+1, inc, dec);
}

int area(std::vector<std::vector<int>> a) {
    return abs((a[0][0] * (a[1][1] - a[2][1]) + a[1][0] * (a[2][1] - a[0][1]) + a[2][0] * (a[0][1] - a[1][1])) / 2.0);
}

bool withinTriangle(std::vector<std::vector<int>> tri, std::vector<int> t) {
    return area(tri)==
         area(std::vector<std::vector<int>>{tri[0],tri[1],t})
        +area(std::vector<std::vector<int>>{tri[1],tri[2],t})
        +area(std::vector<std::vector<int>>{tri[2],tri[0],t})?1:0;
}

bool checkColor(std::string s) {
    return s[0]%2==s[1]%2?0:1;
}

bool bishop(std::string a, std::string b, int moves) {
    return checkColor(a)==checkColor(b)?1:0;
}

int main() {
    std::cout << check(std::vector<int>{1,2,3}) << std::endl;
    std::cout << check(std::vector<int>{3,2,1}) << std::endl;
    std::cout << check(std::vector<int>{1,2,1}) << std::endl;
    sep;
    std::cout << std::boolalpha << withinTriangle(std::vector<std::vector<int>>{{1,4},{5,6},{6,1}}, std::vector<int>{4,5}) << std::endl;
    std::cout << std::boolalpha << withinTriangle(std::vector<std::vector<int>>{{1,4},{5,6},{6,1}}, std::vector<int>{3,2}) << std::endl;
    sep;
    std::cout << std::boolalpha << bishop("a1","b4",2) << std::endl;
    std::cout << std::boolalpha << bishop("a1","b5",5) << std::endl;
    std::cout << std::boolalpha << bishop("f1","f1",0) << std::endl;
    return 0;
}
