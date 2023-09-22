#include <iostream>

using namespace std;



void echange(int * nombre1, int* nombre2)
{
    int temp = *nombre1;
    *nombre1 = *nombre2;
    *nombre2= temp;
}

int main()
{
    int a = 5;
    int b = 2;
    cout<<a <<" "<<b<<endl;
    echange(&a, &b);
    cout<<a <<" "<<b<<endl;

    return 0;
}

