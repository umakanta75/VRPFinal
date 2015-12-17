/*
 * Criteria_test.h
 *
 *  Created on: 28 Nov 2015
 *      Author: lubiedak
 */

#include "../model/Criteria.h"

bool CriteriaSerialization_TEST(bool silentMode) {
	Criteria cr = Criteria(1, 2, 3);
	std::string expectedCR = "class=Criteria"
			",maxCapacity=1,maxDistance=2,maxNodes=3"
			",minCapacity=0,minDistance=0,minNodes=0";

	if (!silentMode) {
		std::cout << expectedCR << std::endl;
		std::cout << cr.toString() << std::endl;
	}
	return 0 == expectedCR.compare(cr.toString());
}

bool CycleSerialization_TEST(bool silentMode) {
	return true;
}

bool NodeSerialization_TEST(bool silentMode) {
	return true;
}


bool SolutionSerialization_TEST(bool silentMode) {
	return true;
}

bool ProblemSerialization_TEST(bool silentMode) {
	return true;
}
