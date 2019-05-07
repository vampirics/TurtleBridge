#include "BaseState.h"

#include "../images/Images.h"
#include "../utils/Utils.h"
#include "../utils/Enums.h"

void BaseState::renderScore(StateMachine & machine, bool renderHealth, int16_t health) {
  	
  auto & gameStats = machine.getContext().gameStats;
  auto & arduboy = machine.getContext().arduboy;

  SpritesB::drawExternalMask(52, 0, Images::Scoreboard, Images::Scoreboard_Mask, 0, 0);

  if (!renderHealth) {

    uint8_t digits[4] = {};
    extractDigits(digits, gameStats.score);

    for (uint8_t j = 4; j > 0; --j) {

      SpritesB::drawSelfMasked(75 - (j*5), 3, Images::Scoreboard_Numbers, digits[j - 1]);

    }

  }
  else {

    for (uint8_t i = 0; i < health; i = i + 2) {
      
      arduboy.drawFastVLine(94 + i, 3, 8);

    }

  }

}


void BaseState::renderCommonScenery(StateMachine & machine) {

  auto & gameStats = machine.getContext().gameStats;
	auto & arduboy = machine.getContext().arduboy;

  SpritesB::drawOverwrite(0, 0, Images::SkyBackground, 0);
  SpritesB::drawExternalMask(0, 15, Images::Ground_Left, Images::Ground_Left_Mask, 0, 0);
  SpritesB::drawExternalMask(117, 15, Images::Ground_Right, Images::Ground_Right_Mask, 0, 0);

  SpritesB::drawExternalMask(12, 48, Images::Seaweed, Images::Seaweed_Mask, this->seaweed ? 1 : 0, 0);
  SpritesB::drawExternalMask(112, 48, Images::Seaweed, Images::Seaweed_Mask, this->seaweed ? 1 : 0, 0);
  SpritesB::drawExternalMask(64, 54, Images::Seaweed, Images::Seaweed_Mask, this->seaweed ? 1 : 0, 0);

  SpritesB::drawExternalMask(11, 48, Images::Ground_Bottom, Images::Ground_Bottom_Mask, 0, 0);

  if (arduboy.everyXFrames(32)) {

    this->seaweed = !this->seaweed;

  }

}


bool BaseState::getPaused() {

  return this->paused;

}

void BaseState::setPaused(bool value) {
  
  this->paused = value;

}

void BaseState::handleCommonButtons(StateMachine & machine) {

	auto & arduboy = machine.getContext().arduboy;
  auto & gameStats = machine.getContext().gameStats;
  auto justPressed = arduboy.justPressedButtons();

  if (gameStats.gameOver) {

    if (justPressed & A_BUTTON) {
      machine.changeState(GameStateType::HighScoreScreen, GameStateType::None); 
    }

  }
  else {

    if (justPressed & B_BUTTON) {
      this->paused = !this->paused; 
    }

  }

}

void BaseState::renderGameOverOrPause(StateMachine & machine) {

  auto & gameStats = machine.getContext().gameStats;


  // Game Over?

  if (gameStats.gameOver) {

    SpritesB::drawExternalMask(32, 20, Images::GameOver, Images::GameOver_Mask, 0, 0); 

  }

  // Pause?

  if (this->paused) {

    SpritesB::drawExternalMask(39, 20, Images::Pause, Images::Pause_Mask, 0, 0); 

  }

}