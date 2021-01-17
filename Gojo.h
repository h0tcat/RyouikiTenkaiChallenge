#ifndef __GOJO_H__
#define __GOJO_H__

#include "Human.h"

namespace norisample{
    class Gojo : public Human{
        
        protected:
            std::string name;
            std::string RyouikiTenkaiWazaName;
        public:
            Gojo(std::string name);
            void ShowProfile();
            void RyouikiTenkai();
    };
};
#endif