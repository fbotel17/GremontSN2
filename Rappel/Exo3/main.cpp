#include <iostream>

using namespace std;

int main(int argc, char ** agrv)
{
    int tabint[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *tabptr = tabint;
    for(int i=0; i<15; i += 2){
        cout<<*(tabptr+i)<< "; ";
    }
    return 0;
}
