#include "user.h"

user::user():usuario("admin"),psw("1234"){}
user::user(string&u,string&p):usuario(u),psw(p){}
string user::getUser()const{
    return usuario;
}
string user::getPSW()const{
    return psw;
}
string user::infoUser()const{
    return usuario+":"+psw;
}
