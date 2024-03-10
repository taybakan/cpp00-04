#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(void);
        void    setName(std::string name);
        void    announce(void);
        ~Zombie(void);
};
