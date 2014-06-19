#include <iostream>
#include "Aiden.h"

using namespace std;

int main()
{
    aiden::Aiden aiden;
    cout << "Hello my name is " << aiden.getName() << endl;
    cout << "My current version is " << aiden.getVersion() << endl;
    return 0;
}
