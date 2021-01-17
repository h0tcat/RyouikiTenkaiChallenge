#include <iostream>
#include <vector>
#include <algorithm>

#include "Human.h"
#include "Sukuna.h"
#include "Gojo.h"

//呪術廻戦 領域展開するサンプル
int main(void){
    
    norisample::Sukuna ryoumenSukuna("両面宿儺");
    norisample::Gojo gojoSatoru("五条 悟");
    
    std::vector<norisample::Human*> jujutsuShi={&ryoumenSukuna};
    jujutsuShi.push_back(&gojoSatoru);

    std::for_each(jujutsuShi.begin(),jujutsuShi.end(),[](norisample::Human* human){
        human->ShowProfile();
        human->RyouikiTenkai();
    });
}