#ifndef HAMMER_HPP
# define HAMMER_HPP

# include <iostream>
# include <string>
# include "Tool.hpp"

class Hammer : public Tool
{

	public:

		Hammer();
		Hammer( Hammer const & src );
		~Hammer();

		Hammer &		operator=( Hammer const & rhs );
		void use();

	private:

};

std::ostream &			operator<<( std::ostream & o, Hammer const & i );

#endif /* ********************************************************** HAMMER_H */