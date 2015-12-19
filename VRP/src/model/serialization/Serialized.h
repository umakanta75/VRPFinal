/*
 * Serialized.h
 *
 *  Created on: 29 Nov 2015
 *      Author: lubiedak
 */

#ifndef MODEL_SERIALIZATION_SERIALIZED_H_
#define MODEL_SERIALIZATION_SERIALIZED_H_

#include <map>
#include <sstream>
#include <string>
#include <vector>

class Serialized {

public:
	Serialized(){}
	Serialized(const Serialized& s) {}
	virtual ~Serialized() {
	}

	virtual std::string serialize() = 0;
	virtual bool deserialize(std::string) = 0;

	std::map<std::string, std::string> parse(std::string str) {
		std::map<std::string, std::string> tag_map;

		for (const std::string& tag : split(str, delimiter)) {
			auto key_val = split(tag, '=');
			tag_map.insert(std::make_pair(key_val[0], key_val[1]));
		}
		return tag_map;
	}

	const char mapDelimiter = '=';
	const char delimiter = ',';

private:

	std::vector<std::string> split(std::string str, char del) {
		std::vector<std::string> vect;

		std::istringstream ss(str);
		std::string token;

		while (std::getline(ss, token, del)) {
			vect.push_back(token);
		}
		return vect;
	}
};

#endif /* MODEL_SERIALIZATION_SERIALIZED_H_ */
