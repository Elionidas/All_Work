#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <array>
#include "interactionMap.h"
#include "passingGrid.h"
#include "scene.h"
#include "intro.h"

int mapCounter = 1;
void shop();
void fightMinion1();
//std::string dialog= " ";

std::array<std::array<char, 30>, 22> checkEncounter(std::array<std::array<char, 30>, 22>encounterMap, int x, int y, char lastDir)
{
	if (encounterMap[x][y] == 'C')
	{
		std::vector<char> nextScene;
		nextScene = passGrid(encounterMap, x, y, lastDir);
		color_green();
		scene(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7]);
		Sleep(120);
		system("cls");
		color_yellow();
		scene(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7]);
		Sleep(120);
		system("cls");
		color_green();
		scene(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7]);
		Sleep(120);
		colorReset();
		fightMinion1();
		system("cls");
		map(nextScene[0], nextScene[1], nextScene[2], nextScene[3], nextScene[4], nextScene[5], nextScene[6], nextScene[7], dialog, " ", lastDir);
		//std::cout << "COMBAT!!!";
		encounterMap[x][y] = 'O';
	}

	if (encounterMap[x][y] == 'S')
	{
		shop();
	}

	if (encounterMap[x][y] == '?')
	{
		mapCounter++;
		std::vector<char> nextScene;
		nextScene = passGrid(encounterMap, x, y, lastDir);
		interactionMaker testEncounter;
		std::array<std::array<char, 30>, 22>encounterMap = testEncounter.getLevel(mapCounter);
		//std::cout << "Next Level!!!";
		increaseMapCounter();
		//std::cout << encounterMap[3][5];
		return encounterMap;
	}

	return encounterMap;
}