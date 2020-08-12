#include "prime.h"
/**
* prime function checks whether the given no has two factors or not
* if it has two factors the given no is prime else not prime
*/
int prime(int n)
{
    int i,count=0;       ///<count is initially set to zero
    for(i=1; i<=n; i++)
    {
        if(n%i==0)       ///<checks if a no is factor or not
        {
            count++;
        }
    }
    if(count==2)         ///<if count is two then it is prime else not
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
