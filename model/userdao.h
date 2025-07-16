#ifndef USERDAO_H
#define USERDAO_H
#include <model/user.h>
#include <fstream>
#include <QList>
#include <sstream>
class userDAO
{
private:
    user u;
    fstream archivo;
    string path="user.txt";
public:
    userDAO();
    userDAO(user&);
    bool createFileUser();//Crear el archivo con el user por defecto
    QList<user> getUser();//leer el archivo
    vector<string> split(const string&,char);//Separar los elementos por el char que se defina

};

#endif // USERDAO_H
