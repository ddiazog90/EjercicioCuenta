#include "logic_acount.h"

logic_acount::logic_acount():ac(new acountDAO()) {}

QQueue<string> logic_acount::getData(){
    QQueue<string>data;
    acount a(ac->getAcountAll());
    data.enqueue(to_string(a.getAcount()));
    data.enqueue(to_string(a.getMoney()));
    return data;
}
bool logic_acount::setData(string&ac,string&m){
    long ac_=stol(ac);
    float m_=stof(m);
    acountDAO adao(new acount(ac_,m_));
    adao.createFile();
    return true;
}
