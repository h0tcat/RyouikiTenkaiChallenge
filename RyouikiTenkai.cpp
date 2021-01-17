#include <iostream>

#include "Human.h"
#include "Sukuna.h"
#include "Gojo.h"
int main(void){
    
    norisample::Sukuna ryoumenSukuna("両面宿儺");
    norisample::Gojo gojoSatoru("五条 悟");
    
    norisample::Human* jujutsuShi[2];
    jujutsuShi[0]=&gojoSatoru;
    jujutsuShi[1]=&ryoumenSukuna;
    for(norisample::Human* human : jujutsuShi){
        human->ShowProfile();
        human->RyouikiTenkai();
    }
}