package main
 
import (
    "fmt"
)

func dis(p float32, d float32) float32 {
    return p-(p*(d/100.0));
}

func dp(a int) int {
    s := 0;
    for(a>0){s += (a%10)*(a%10);a /= 10;}
    return s;
}

func isHappyNumber(n int) string {
    if n==1{
        return "true";
    }
    if n==4 {
        return "false";
    }
    return isHappyNumber(dp(n));
}

func main() {
	fmt.Println(dis(1500, 50));
	fmt.Println(dis(89, 20));
	fmt.Println(dis(100, 75));
    fmt.Println(isHappyNumber(19));
    fmt.Println(isHappyNumber(7));
    fmt.Println(isHappyNumber(32));
    fmt.Println(isHappyNumber(145));
    fmt.Println(isHappyNumber(4));
    fmt.Println(isHappyNumber(89));
    fmt.Println(isHappyNumber(20));
}

