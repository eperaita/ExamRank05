#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include  <iostream>

class Warlock{

	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(const Warlock &orig);
		const Warlock &operator=(const Warlock &orig);

	public:
		Warlock(const std::string &n, const std::string &t);
		~Warlock();

		const std::string &getName() const ;
		const std::string &getTitle() const;
		void setTitle( const std::string &t);

		void introduce() const;



};


#endif
