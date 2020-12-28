#include <stdio.h>

float dis(int p, int d) {
	return p-(p*(d/100.0));
}

int dp(int a) {
    int s = 0;
    while(a>0){s += (a%10)*(a%10);a /= 10;}
    return s;
}

const char* isHappyNumber(int n) {
    if(n==1)return "true";
    if(n==4)return "false";
    return isHappyNumber(dp(n));
}

int main() {
    printf("%.1f\n",dis(1500, 50));
    printf("%.1f\n",dis(89, 20));
    printf("%.1f\n",dis(100,75));
    printf("%s\n",isHappyNumber(19));
    printf("%s\n",isHappyNumber(7));
    printf("%s\n",isHappyNumber(32));
    printf("%s\n",isHappyNumber(145));
    printf("%s\n",isHappyNumber(4));
    printf("%s\n",isHappyNumber(89));
    printf("%s\n",isHappyNumber(20));
    return 0;
}
