#ifndef ACOUNT_H
#define ACOUNT_H
#include <iostream>
using namespace std;
class acount
{
private:
    long ac;
    float money;
public:
    acount();
    acount(long&,float&);
    long getAcount()const;
    float getMoney()const;
    void setMoney(float&);
    string infoAcount()const;
};

#endif // ACOUNT_H
