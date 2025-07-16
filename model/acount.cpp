#include "acount.h"

acount::acount():ac(1000252401),money(50) {}
acount::acount(long&a,float&m):ac(a),money(m){}
long acount::getAcount()const{return ac;}
float acount::getMoney()const{return money;}
void acount::setMoney(float&m){money=m;}
string acount::infoAcount()const{
    return to_string(ac)+":"+to_string(money);
}
