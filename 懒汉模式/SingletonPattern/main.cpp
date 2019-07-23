#include <QCoreApplication>
#include "singleton.h"
int main(int argc, char *argv[])
{
    Singleton * pSingleton = Singleton::GetInstance();


    return 0;
}
