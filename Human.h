#ifndef __HUMAN_H__
#define __HUMAN_H__
#include <string>
#include <iostream>

namespace norisample{
    class Human{
        protected:
            std::string name;
            std::string RyouikiTenkaiWazaName;
        public:
            void SetRyouikiTenkaiWazaName(std::string wazaName);
            virtual void ShowProfile() = 0;
            virtual void RyouikiTenkai() = 0;
    };
};

#endif