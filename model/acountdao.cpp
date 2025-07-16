#include "acountdao.h"

acountDAO::acountDAO():a(new acount()) {
    createFile();
}
acountDAO::acountDAO(acount*ac):a(ac){};
void acountDAO::createFile(){
    archivo.open("acount.txt",ios::out);
    if(archivo.is_open()){
        archivo<<a->infoAcount()<<endl;
        archivo.close();
    }
}
vector<string> acountDAO::split(const string&texto,char del){
    vector<string>tokens;
    stringstream ss(texto);
    string item;
    while(getline(ss,item,del)){
        tokens.push_back(item);
    }
    return tokens;
}
acount acountDAO::getAcountAll(){
    vector<string>acounts;
    archivo.open("acount.txt",ios::in);
    if(archivo.is_open()){
        string linea;
        while(getline(archivo,linea)){
            acounts=split(linea,':');
        }
        archivo.close();
    }
    long ac=stol(acounts[0]);
    float money=stof(acounts[1]);
    acount a(ac,money);
    return a;
}
