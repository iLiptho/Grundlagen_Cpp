#include "timer.hpp"
#include <iostream>

// TODO: Definition of constructor and destructor of the ScopeTimer.

ScopeTimer::ScopeTimer() {
	startTime = (int)std::clock();

}
ScopeTimer::~ScopeTimer() {

	std::cout << (int)std::clock() - startTime << std::endl;

}