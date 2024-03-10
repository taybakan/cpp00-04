#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

    public:

        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        virtual ~MateriaSource(void);

        MateriaSource & operator=(MateriaSource const &rhs);
		
        virtual void learnMateria(AMateria* materia);
        virtual AMateria* createMateria(std::string const & type);

		void	initCopy(AMateria **materiaCopy);

    private:

        AMateria   *_materiaCopy[4];
};

#endif