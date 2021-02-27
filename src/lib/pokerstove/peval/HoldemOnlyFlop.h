/**
 * Copyright (c) 2012 Andrew Prock. All rights reserved.
 * $Id: Holdem.h 2649 2012-06-30 04:53:24Z prock $
 */
#ifndef PEVAL_HOLDEMONLYFLOP_H_
#define PEVAL_HOLDEMONLYFLOP_H_

namespace pokerstove
{

// Facts about holdem.
const unsigned int PREFLOP_ONLY_FLOP = 0;
const unsigned int FLOP_ONLY_FLOP = 1;
const unsigned int TURN_ONLY_FLOP = 2;
const unsigned int RIVER_ONLY_FLOP = 3;
const unsigned int BOARD_SIZE_ONLY_FLOP = 3;
const unsigned int NUM_FLOP_CARDS_ONLY_FLOP = 1;
const unsigned int NUM_TURN_CARDS_ONLY_FLOP = 2;
const unsigned int NUM_RIVER_CARDS_ONLY_FLOP = 3;
const unsigned int NUM_HOLDEM_POCKET_ONLY_FLOP = 2;
const unsigned int NUM_HOLDEM_ROUNDS_ONLY_FLOP = 4;
}  // namespace pokerstove

#endif  // PEVAL_HOLDEMONLYFLOP_H_
