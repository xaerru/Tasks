#include <iostream>

float dis(int p, int d) {
	return p-(p*(d/100.0));
}

int dp(int a) {
    int s = 0;
    while(a>0){s += (a%10)*(a%10);a /= 10;}
    return s;
}

std::string isHappyNumber(int n) {
    if(n==1)
        return "true";
    if(n==4)
        return "false";
    return isHappyNumber(dp(n));
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout << dis(1500, 50) << "\n";
    std::cout << dis(89, 20) << "\n";
    std::cout << dis(100, 75) << "\n";
    std::cout << isHappyNumber(19) << "\n";
    std::cout << isHappyNumber(7) << "\n";
    std::cout << isHappyNumber(32) << "\n";
    std::cout << isHappyNumber(145) << "\n";
    std::cout << isHappyNumber(4) << "\n";
    std::cout << isHappyNumber(89) << "\n";
    std::cout << isHappyNumber(20) << "\n";
    return 0;
}

