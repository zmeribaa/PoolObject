#ifndef TOOL_HPP
# define TOOL_HPP

# include <iostream>
# include <string>

class Tool
{

	public:
		int numberOfUses;

		Tool();
		Tool( Tool const & src );
		virtual ~Tool();

		Tool &		operator=( Tool const & rhs );
		virtual void use() = 0;

	private:

};

std::ostream &			operator<<( std::ostream & o, Tool const & i );

#endif /* ************************************************************ TOOL_H */