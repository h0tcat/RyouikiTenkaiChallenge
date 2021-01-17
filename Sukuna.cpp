#include "Sukuna.h"

norisample::Sukuna::Sukuna(std::string name){
    this->name=name;
    this->RyouikiTenkaiWazaName="伏魔御厨子";
}

void norisample::Sukuna::RyouikiTenkai(){
    std::cout << "[ 領域展開! ]" << std::endl;
    std::cout << this->RyouikiTenkaiWazaName << "\n" << std::endl;
}

void norisample::Sukuna::ShowProfile(){
    std::cout << this->name << std::endl;
}