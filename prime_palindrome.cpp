#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
if (n<2){
    return false ;}
if (n==2) {
    return true;}
if (n%2==0) {
    return false;}
int y=1;
int m;
for (int j=3;j<=sqrt(n);j=j+2) {
m=n%j;
y*=m;
}
if (y!=0) {	
     return true;}
else {
     return false;}
}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
int original=n;
int reversed=0;
while (n>0) {
       int digit=n%10;
       reversed=reversed*10 + digit;
       n/=10;
}
if (original==reversed) {
     return true;}
return false;
}

bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
if (isPrime(n)==true && isPalindrome(n)==true) {
     return true;}
return false;   
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
