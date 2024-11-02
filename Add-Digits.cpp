#include<iostream> 
using namespace std;

int addDigits(int num) {
    int sum=0;
    while(num/10!=0){
        sum=sum+(num%10);
        num=num/10;
    }
    sum+=num;
    if(sum/10!=0){
        return addDigits(sum);
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << addDigits(n);
}
