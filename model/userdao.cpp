#include "userdao.h"

userDAO::userDAO() {
    createFileUser();
}
bool userDAO::createFileUser(){
    archivo.open(path,ios::out);
    if(archivo.is_open()){
        archivo<<u.infoUser()<<endl;
        archivo.close();
        return true;
    }
    return false;
}
QList<user> userDAO::getUser(){
    QList<user>us;
    archivo.open(path,ios::in);
    if(archivo.is_open()){
        string linea;
        while(getline(archivo,linea)){
            vector<string>userLine=split(linea,':');
            user u(userLine[0],userLine[1]);
            us.append(u);
        }
        archivo.close();
    }
    return us;
}
vector<string> userDAO::split(const string&texto,char del){
    vector<string> tokens;
    stringstream ss(texto);
    string item;
    while(getline(ss,item,del)){
        tokens.push_back(item);
    }
    return tokens;
}
