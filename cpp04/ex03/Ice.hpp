#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:

    Ice(void);
	Ice(Ice const &src);
    virtual ~Ice(void);

    Ice & operator=(Ice const &rhs);

    std::string const & getType() const;
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:

    std::string _type;

};

#endif