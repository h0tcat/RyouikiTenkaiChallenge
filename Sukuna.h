#include "Human.h"

namespace norisample{
    class Sukuna : public Human{
        protected:
            std::string name;
            std::string RyouikiTenkaiWazaName;
        public:
            Sukuna(std::string name);
            void ShowProfile();
            void RyouikiTenkai();
    };
};