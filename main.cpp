#include <iostream>
#include <cmath>

using namespace std;

void ex_1()
{
    unsigned int number;
    cout << "Number? ";
    cout << endl;
    if(number<=78 && number>=56)
        cout<<"you win";
    else
        cout << "you lose";

}

void ex_2()
{
    //int number;
    for(int i=8, number; i<=23; i++){
        cout<<"Number? ";
        cin >> number;
        cout<< endl;
    }
}

void ex_6(){
    unsigned long n, sum;
    sum=0;
    cout<<"Number? ";
    cin >>n;
    cout <<endl <<"sum of cubes: ";
    for(unsigned long i=5; i<=n; i++){
        sum+=pow(i,3);
    }
    cout << sum << endl;
}

int main()
{
ex_6();

}

