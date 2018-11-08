#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <array>

class levelMaker {

private:
	std::array<std::array<char, 30>, 22> level1 = {
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','D','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','O','W','W','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','W','O','O','O','O','O','O','D','O','O','O','W','W','W','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X',
		'X','W','W','W','W','W','W','W','W','W','W','O','W','W','O','O','O','O','O','O','O','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','W','W','W','W','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','W','S','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','W','W','O','W','X','X','X','X','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','W','W','W','W','W','W','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','W','W','O','O','O','O','O','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','W','W','W','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','O','W','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','W','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','O','W','W','W','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','1',
	};
	std::array<std::array<char, 30>, 22> level2 = {
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','W','W','W','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','O','O','W','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','O','W','W','W','W','O','W','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','D','O','O','W','X','W','W','O','S','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','W','W','W','W','O','W','W','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','W','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','W','W','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','O','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','W','W','W','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','2',
	};
	std::array<std::array<char, 30>, 22> level3 = {
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','w','W','W','W','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','W','O','O','D','O','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','W','W','W','W','W','O','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','W','O','W','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','W','O','O','O','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','W','W','W','W','O','W','X','X','X','X','W','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','W','S','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','O','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','W','W','W','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','3',
	};
public:
	std::array<std::array<char, 30>, 22> getLevel(int levelNumber)
	{
		if (levelNumber == 1)
		{
			return level1;
		}
		if (levelNumber == 2)
		{
			return level2;
		}
		if (levelNumber == 3)
		{
			return level3;
		}
		return level1;
	}
};