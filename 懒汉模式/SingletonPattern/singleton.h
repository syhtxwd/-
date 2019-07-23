// singleton.h
#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <mutex>
using namespace std;

// 单例 - 懒汉式/饿汉式公用
class Singleton
{
public:
    static Singleton* GetInstance();

private:
    Singleton() {}  // 构造函数（被保护）

private:
    static Singleton *m_pSingleton;  // 指向单例对象的指针
    static mutex m_mutex;  // 锁
};

#endif // SINGLETON_H
