#ifndef ACOUNTDAO_H
#define ACOUNTDAO_H
#include <fstream>
#include <vector>
#include <sstream>
#include <model/acount.h>
class acountDAO
{
private:
    acount *a;
    fstream archivo;
public:
    acountDAO();
    acountDAO(acount*);
    void createFile();
    acount getAcountAll();
    vector<string>split(const string&,char);
};

#endif // ACOUNTDAO_H
