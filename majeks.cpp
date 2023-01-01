#include <iostream>
#include <string>
#include <math.h> 
using namespace std;

void aa(int x,int y)
{
    int kiss= y*x;
}

int main()
{
    int y=12345;
    int x=56438;
    aa(y,x);
    int num = 0;
    int minimum = 0;
    int flag = 0;
    int maximum = 0;

    cin >> num;
    int A[101] = {};
    int i=0;
    while (i < num)
    {
        int a;
        cin >> a;
        if (a > maximum)
        {
            maximum = a;
        }
        
        A[a]++;
        i++;
    }
    maximum++;

    int j=0;
    while (j < maximum)
    {
        if (A[j] != 0)
        {
            minimum = A[j];
            flag = j;
            break;
        }
        j++;
    }

    int n=0;
    for(int n=0; n < maximum; n++)
    {
        switch (A[n])
        {
        case 0:
            break;
        default:
            if (minimum > A[n])
            {
                minimum = A[n];
                flag = n;
            }
        }
    }
    cout << flag;
    return 0;
}