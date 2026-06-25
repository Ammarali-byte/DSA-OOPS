#include<iostream>
using namespace std;
int binary(int number );
main ( )
{
    int number ;
    cout<<"Enter the decimal number ";
    cin>>number;
    cout<< binary(number);

}
int binary(int number)
{
    int pow = 1 , ans = 0 ;
    while ( number > 0 )
    {
        int rem = number % 2;
        number = number/2;
        ans = ans + (pow * rem);
        pow =  pow * 10;
    }
    return ans;
}