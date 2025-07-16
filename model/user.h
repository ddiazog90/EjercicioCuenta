#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;
class user
{
private:
    string usuario,psw;
public:
    user();
    user(string&,string&);
    string getUser()const;
    string getPSW()const;
    string infoUser()const;
};

#endif // USER_H
