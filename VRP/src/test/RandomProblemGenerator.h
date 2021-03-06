/*
 * RandomProblemGenerator.h
 *
 *  Created on: 22 Jan 2016
 *      Author: lubiedak
 */

#ifndef TEST_RANDOMPROBLEMGENERATOR_H_
#define TEST_RANDOMPROBLEMGENERATOR_H_

#include <cstdint>

#include "../model/Criteria.h"
#include "../model/Problem.h"
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

struct ProblemGenParams {
  uint16_t nodes;
  uint16_t maxX;
  uint16_t maxY;
  uint16_t minDemand;
  uint16_t maxDemand;
};

std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);

std::vector<std::string> split(const std::string &s, char delim);

ProblemGenParams initFromFile(std::string fileName);

class RandomProblemGenerator {
public:
  RandomProblemGenerator(ProblemGenParams& params, Criteria& criteria);
  virtual ~RandomProblemGenerator();

  Problem generate();
  void save(std::string dir, std::string fileName);

private:
  Problem problem;
  ProblemGenParams params;
  Criteria criteria;
};

#endif /* TEST_RANDOMPROBLEMGENERATOR_H_ */
