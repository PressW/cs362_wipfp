#ifndef _DOMINION_HELPERS_H
#define _DOMINION_HELPERS_H

#include "dominion.h"

int drawCard(int player, struct gameState *state);
int updateCoins(int player, struct gameState *state, int bonus);
int discardCard(int handPos, int currentPlayer, struct gameState *state, 
		int trashFlag);
int gainCard(int supplyPos, struct gameState *state, int toFlag, int player);
int getCost(int cardNumber);
int cardEffect(int card, int choice1, int choice2, int choice3, 
	       struct gameState *state, int handPos, int *bonus);
	       
//Custom defined functions for the 5 cards
int gardenEffect();
int smithyEffect(struct gameState *state, int handPos);
int stewardEffect(struct gameState *state, int handPos, int choice2, int choice3);
int embargoEffect(struct gameState *state, int choice1, int handPos);
int outpostEffect(struct gameState *state, int handPos);

#endif
