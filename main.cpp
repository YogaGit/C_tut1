#include <iostream>

using namespace std;

void exchange(int&, int&);

int main()
{
    int a,b;
    a=1; b=2;
    exchange(a,b);
    cout <<"a: "<< a << "b: "<< b  << endl;
    return 0;
}
void exchange(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;


}
