#include <stdio.h>

#include "mm-client.h"

using namespace std;

// This is the name that the driver will refer to your bot as.
const char* BOT_NAME = "CowSun";

// Return whether setup was successful, bot dies if 0.
int client_setup(int *argc, char ***argv)
{
  return 1;
}

void game_setup_cow (const struct player_data farmer) {

}

void game_setup_farmer (const struct player_data cow) {

}

// This function is called when the game begins.
void game_setup(const struct player_data* players)
{
  if (SELF.id == 0) { // cow
    game_setup_cow (players[1]);
  }
  else { // farmer
    game_setup_farmer(players[0]);
  }
}

void turn_start_cow(unsigned int roundnum, const struct player_data farmer) {

}

void turn_start_farmer (unsigned int roundnum, const struct player_data cow) {

}

// When this function is called, your move is about to start. You can make decisions here if you would like.
void turn_start(unsigned int roundnum, const struct player_data* players)
{
  if (SELF.id == 0) { // cow
    turn_start_cow (roundnum, players[1]);
  }
  else { //farmer
    turn_end_cow (roundnum, cow[1]);
  }
}

void player_turn_cow (struct player_unit* unit, const struct player_data farmer) {

}

void player_turn_farmer(struct player_unit* unit, const struct player_data cow) {
  
}

// A unit (id + coordinates) is provided. Update its row/col before exiting.
// row/col are zero indexed and range from 0 to BOARDSIZE
void player_turn(struct player_unit* unit, const struct player_data* players)
{
	// if cowbot, unit->id = 0 for real cow, unit->id = 1 for decoy cow (if active)

	// unit->row
	// unit->col
  if (SELF.id == 0) { // cow
    player_turn_cow (unit, players[1]);
  }
  else { // farmer
    player_turn_farmer (unit, players[0]);
  }
}

// This function is called at the end of the game, as a courtesy.
void game_end()
{

}

