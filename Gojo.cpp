#include "Gojo.h"

norisample::Gojo::Gojo(std::string name){
    this->name=name;
    this->RyouikiTenkaiWazaName="無量空処";
}

void norisample::Gojo::RyouikiTenkai(){
    std::cout << "[ 領域展開! ]" << std::endl;
    std::cout << this->RyouikiTenkaiWazaName << "\n" << std::endl;
}

void norisample::Gojo::ShowProfile(){
    std::cout << this->name << std::endl;
}