/*
 * Solution.cpp
 *
 *  Created on: 28 Nov 2015
 *      Author: lubiedak
 */

#include "Solution.h"

Solution::Solution(CyclesSet& cs, const std::vector<Cycle>& cycles) {
	demand = 0;
	for (uint16_t i = 0; i < cs.size; ++i) {
		optimizedCycles.push_back(cycles[cs.cycles[i]]);
		demand += cycles[cs.cycles[i]].getDemand();
	}
	distance = cs.distance;
}

Solution::~Solution() {
	// TODO Auto-generated destructor stub
}

std::string Solution::serialize() {
	std::stringstream oss;
	oss << std::string("class=Solution");
	oss << delimiter << "distance" << mapDelimiter << distance;
	oss << delimiter << "demand" << mapDelimiter << demand<< std::endl;
	int i = 0;
	for (auto c : optimizedCycles) {
		oss << "Cycle " << i++ << ": " << c.toString() << std::endl;
	}
	return oss.str();
}

bool Solution::deserialize(std::string allocator) {
	return true;
}

std::string Solution::toString() {
	return serialize();
}
