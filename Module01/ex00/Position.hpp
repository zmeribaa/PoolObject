#ifndef POSITION_HPP
# define POSITION_HPP

# include <iostream>
# include <string>

class Position
{

	public:
		int x;
		int y;
		int z;

		Position();
		Position( Position const & src );
		~Position();

		Position &		operator=( Position const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Position const & i );

#endif /* ******************************************************** POSITION_H */