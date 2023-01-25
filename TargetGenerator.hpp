#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include  <vector>

class TargetGenerator{

	private:
		TargetGenerator(const TargetGenerator &orig);
		TargetGenerator &operator=(const TargetGenerator &orig);
		std::vector<ATarget *> objectives;
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);

};

#endif
