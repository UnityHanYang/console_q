#include <iostream>
#include "IMap.h"
#include "NumberMove.h"
#include "SequenceCompare.h"

void main()
{
	NormalMap* nmS = new NormalMap;
	nmS->CreateMap();

	while (true)
	{
		nmS->PrintMap();
		NumberMove* nrm = new NumberMove;
		nrm->PlayerInPut();
		delete nrm;
		SequenceCompare* sc = new SequenceCompare;
		if (sc->GameResult())
		{
			nmS->PrintMap();
			delete sc;
			break;
		}
		delete sc;
		system("cls");
	}
	delete nmS;
}