#include <QCoreApplication>
#include "singleton.h"

int main(int argc, char *argv[])
{
    Singleton::GetInstance().doSomething();  // OK
    // Singleton single = Singleton::GetInstance();  // Error 不能编译通过

    getchar();

    return 0;
}
