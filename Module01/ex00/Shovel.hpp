#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include <iostream>
# include <string>
# include "Tool.hpp"

class Shovel : public Tool
{
	

	public:

		Shovel();
		Shovel( Shovel const & src );
		~Shovel();

		Shovel &		operator=( Shovel const & rhs );
		void use() override;

	private:

};

std::ostream &			operator<<( std::ostream & o, Shovel const & i );

#endif /* ********************************************************** SHOVEL_H */