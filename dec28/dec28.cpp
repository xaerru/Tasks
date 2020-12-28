#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <string>

template<typename T>
std::ostream& operator <<(std::ostream& out, std::vector<T> v) {
    out << "{";
    for (int i = 0; i < v.size() - 1; ++i) {
        out << v[i] << ", ";
    }
    out << v[v.size() - 1] << "}";
    return out;
}

std::vector<int> quadSequence(std::vector<int> arr) {
    std::vector<int> r,f;
    for(int x=0;x<arr.size()-1;x++) {
        r.push_back(arr[x+1]-arr[x]);
    }
    int d = r[1]-r[0];
    for(int x=0;x<arr.size();x++) {
        f.push_back(arr[arr.size()-1]+r[r.size()-1]+d);
        arr[arr.size()-1]+=r[r.size()-1]+d*(x+2);
    }
    return f;
}

int area(std::vector<int> a, std::vector<int> b, std::vector<int> c) {
    return abs((a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1])) / 2.0);
}

std::string withinTriangle(std::vector<int> a, std::vector<int> b, std::vector<int> c, std::vector<int> d) {
    return area(a,b,c)==area(b,c,d)+area(a,c,d)+area(a,b,d)?"true":"false";
}

int main() {
    std::cout << quadSequence(std::vector<int>{48, 65, 84}) << "\n";
    std::cout << quadSequence(std::vector<int>{0, 1, 6, 15, 28}) << "\n";
    std::cout << withinTriangle(std::vector<int>{1,4}, std::vector<int>{5,6}, std::vector<int>{6,1}, std::vector<int>{4,5}) << "\n";
    std::cout << withinTriangle(std::vector<int>{1,4}, std::vector<int>{5,6}, std::vector<int>{6,1}, std::vector<int>{3,2}) << "\n";
    return 0;
}
