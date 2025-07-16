#ifndef LOGIC_LOGIN_H
#define LOGIC_LOGIN_H
#include <model/userdao.h>

class logic_login
{
private:
    userDAO *udao;
public:
    logic_login();
    bool validateUser(string&,string&);
};

#endif // LOGIC_LOGIN_H
