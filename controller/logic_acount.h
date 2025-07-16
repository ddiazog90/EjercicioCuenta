#ifndef LOGIC_ACOUNT_H
#define LOGIC_ACOUNT_H
#include <model/acountdao.h>
#include <QQueue>
class logic_acount
{
private:
    acountDAO *ac;
public:
    logic_acount();

    QQueue<string> getData();
    bool setData(string&,string&);
};

#endif // LOGIC_ACOUNT_H
