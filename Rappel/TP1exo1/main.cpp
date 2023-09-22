#include <iostream>
#include "functions.h"

using namespace std;



int main()
{
    int a = 5;
    int b = 2;
    cout<<a <<" "<<b<<endl;
    echange(&a, &b);
    cout<<a <<" "<<b<<endl;

    return 0;
}

