#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "Player.h"
#include "player_sub.h"
#include "Items.h"
#include "item_sub.h"
#include "Enemies.h"
using namespace std;

//player selection done right
Player Selected;

//create the starting items
Stick stick;
RedPotion red_potion;
Bucket bucket;

//generate the dungeon key
Key TotallyNotBossKey;

//generating all items
Sword sword;
Probe probe;
Halberd halberd;
Scimitar scimitar;
CanLid can_lid;
Helmet helmet;
ChainMail chain_mail;
PlateMail plate_mail;
Mythril mythril;
MedKit med_kit;
Apple apple;
Banana banana;
PlateMail instantShip;
FaceDestroyer face_destroyer;

//Generate Enemies, up to three duplicates of each enemy type have been generated
Goblin Goblin1;
Hobgoblin HobbyGobby1;
Squirrel Squirrel1;
Bandit Bandit1;
Robot Durlec1;
Spider SpideyBoi1;

Goblin goblin;
Squirrel squirrel;
Bandit bandit;
Hobgoblin hobgoblin;
Pirate pirate;
Robot robot;
Cannon cannon;
Spider spider;
GoblinBoss goblin_boss;
SpiderBoss spider_boss;
Shopkeeper shopkeeper;