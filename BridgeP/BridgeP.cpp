// BridgeP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "DrawAPI.h"
#include "DrawImpl.h"
#include "Character.h"
#include "Player.h"


using namespace std;


int main(void)
{
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();
	cin.get();
}

