#pragma once
#include "../common/shogi.h"
#include <map>

const double INFTY = 10000;

// 深さは原則偶数にすること
const int MAX_DEPTH = 10;

inline std::map<Piece, int> PIECE_VALUE_MAP = {
    {PAWN, 1}, {SILVER, 5},   {GOLD, 6},       {BISHOP, 8}, {ROOK, 10},
    {KING, 0}, {PRO_PAWN, 4}, {PRO_SILVER, 6}, {HORSE, 11}, {DRAGON, 12},
};
