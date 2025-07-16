#include "acountdao.h"

acountDAO::acountDAO():a(new acount()) {
    createFile();
}
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
