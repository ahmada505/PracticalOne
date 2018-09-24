// Abstract.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Factory.h"
#include "CharacterFactory.h"
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	Factory* factory = new CharacterFactory;
	vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}

}
