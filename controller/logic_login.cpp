#include "logic_login.h"

logic_login::logic_login():udao(new userDAO()) {}
bool logic_login::validateUser(string&u,string&p){
    QList<user>users=udao->getUser();
    foreach (const user&u_,users) {
        if(u_.getUser()==u&&u_.getPSW()==p){
            return true;
        }
    }
    return false;
}
