#include "interface.h"
#include "arrayBST.h"
#include "arrayBST.cpp"

int main()
{
    BSTusingArray a;
    a.add(10,50);
    a.add(4,51);
    a.add(20,52);
    a.add(2,53);
    a.add(6,54);
    a.add(15,55);
    cout<<"the maximum key is"<<a.max()<<endl;
    cout<<"the minimum key is"<<a.min()<<endl;
    a.exists(6);
    a.remove(15);
    a.remove(10);
    a.DisplayArray();


    return 0;

}

