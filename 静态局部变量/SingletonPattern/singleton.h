// singleton.h
#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

using namespace std;

// 单例
class Singleton
{
public:
    static Singleton& GetInstance()
    {
        static Singleton instance;
        return instance;
    }

    void doSomething()
    {
        cout << "Do something" << endl;
    }

private:
    Singleton() {}  // 构造函数（被保护）
    Singleton(Singleton const &);  // 无需实现
    Singleton& operator = (const Singleton &);  // 无需实现
};

#endif // SINGLETON_H
