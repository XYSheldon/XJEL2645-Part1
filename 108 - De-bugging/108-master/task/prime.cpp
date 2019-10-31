#include<iostream>
#include<cmath>
bool isprime(long num)
{
    long k=(long)sqrt( (double) num );
    for(long i=2;i<=k;i++)
            if(num%i==0)
                return 0;
    return 1;
}
int main()
{
    long n=0;
    std::cout<< "Input N as the range of calculation(2~N):";
    std::cin >> n;
    for (long i=2 ;i<=n ;i++)
    {
        if (isprime(i)) std::cout<<i<<" is prime\n";
        else std::cout<<i<<" is not prime\n";
    }
}