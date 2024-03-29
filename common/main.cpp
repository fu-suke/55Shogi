#include "../common/bitboard.h"
#include "../common/zobrist.h"
#include "usi.h"

int main(int argc, char **argv) {
    Bitboards::init();
    Zobrist::init();
    USI usi = USI();
    usi.loop();

    return 0;
}