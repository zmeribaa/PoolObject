#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include <iostream>
# include <string>


class Shovel
{
	

	public:
		int numberOfUses;

		Shovel();
		Shovel( Shovel const & src );
		~Shovel();

		Shovel &		operator=( Shovel const & rhs );
		void use();

	private:

};

std::ostream &			operator<<( std::ostream & o, Shovel const & i );

#endif /* ********************************************************** SHOVEL_H */