/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef LIFEINDICATORS_H
#define LIFEINDICATORS_H

#include <iostream>

typedef unsigned short ushort;


void updateLifeIndicatorPlayer1(ushort* lifeIndicatorP1, ushort damage)
{
	for (ushort i = 0; i < 10; i++) {
		if (*(lifeIndicatorP1 + i) != 0 && damage > 0) {
			*(lifeIndicatorP1 + i) = 0;
			damage--;
		}
	}
	
}


void updateLifeIndicatorPlayer2(ushort* lifeIndicatorP2, ushort damage)
{
	for (ushort i = 10 - 1 ; i >= 0; i--) {
		if (*(lifeIndicatorP2 + i) != 0 && damage > 0) {
			*(lifeIndicatorP2 + i) = 0;
			damage--;
		}
	}
}

#endif