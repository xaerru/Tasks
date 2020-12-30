#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

const int MAX_CHAR = 26; 

int textSum(std::string s) {
    int sum=0;
    for(char x:s)sum+=tolower(x)-96;
    return sum;
}

std::vector<int> primesTillN(int n) {
    bool prime[n+1]; 
    std::memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++) { 
        if (prime[p] == true) {
            for (int i=p*p; i<=n; i += p) prime[i] = false; 
        } 
    }
    std::vector<int> primes;
    for (int p=1; p<n; p++) 
       if (prime[p]) primes.push_back(p);
    return primes;
} 

int primeSum(int n) {
    int sum=0;
    std::vector<int> primes = primesTillN(n);
    for(int x:primes)sum+=x;
    return sum;
}

int similarPrime(int n) {
    std::vector<int> primes = primesTillN(n);
    std::string s = std::to_string(n);
    sort(s.begin(),s.end());
    for(int x:primes) {
        std::string t = std::to_string(x);
        sort(t.begin(),t.end());
        if(s==t)
            return x;
    }
    return 0;
}

int main() {
    std::cout << textSum("Hello") << "\n";
    std::cout << textSum("Bye") << "\n";
    std::cout << textSum("Sum") << "\n";
    std::cout << primeSum(16) << "\n";
    std::cout << primeSum(19) << "\n";
    std::cout << primeSum(5) << "\n";
    std::cout << similarPrime(71) << "\n";
    std::cout << similarPrime(32) << "\n";
    std::cout << similarPrime(371) << "\n";
    return 0;
}
