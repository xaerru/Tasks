#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int textSum(std::string s, int i=0) {
    if(s.size()==i) return s[i];
    else return textSum(s, i + 1) + tolower(s[i]) - 96;
}

bool prime(int n, int i=2) {
    if(n<=2) return n==2;
    if(n%i==0) return 0;
    if(i*i>n) return 1;
    return prime(n,i+1);
}

std::vector<int> makePrimeArray(int n,int t,std::vector<int> a={}) {
    if(n!=0) {
        if(prime(n)) a.push_back(n);
        return makePrimeArray(n-1,t,a);
    }
    a.erase(std::remove(a.begin(), a.end(), t),a.end());
    return a;
}

int primeSum(std::vector<int> a){
    if (a.size() <= 1) return a[0];
    else {
        std::vector<int> slice(a.begin() + 1, a.begin()+a.size());
        return a[0] + primeSum(slice); 
    }
}

std::string similarPrime(int n, int t) {
    std::string tString = std::to_string(t);
    sort(tString.begin(), tString.end());
    if(n!=0)
        if(prime(n)) {
            std::string nString = std::to_string(n);
            sort(nString.begin(),nString.end());
            if(nString==tString) return nString;
        }
    return similarPrime(n-1,t);
}

int main() {
    std::cout << textSum("Hello") << std::endl;
    std::cout << textSum("Bye") << std::endl;
    std::cout << textSum("Sum") << std::endl;
    std::cout << primeSum(makePrimeArray(16,16)) << std::endl;
    std::cout << primeSum(makePrimeArray(19,19)) << std::endl;
    std::cout << primeSum(makePrimeArray(5,5)) << std::endl;
    std::cout << similarPrime(71,71) << std::endl;
    std::cout << similarPrime(32,32) << std::endl;
    std::cout << similarPrime(371,371) << std::endl;
    return 0;
}
