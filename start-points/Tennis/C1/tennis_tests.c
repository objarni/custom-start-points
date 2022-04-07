#include <cgreen/cgreen.h>
#include "tennis.h"

Describe(tennis);
BeforeEach(tennis) {}
AfterEach(tennis) {}

static int maxScore(int a, int b)
{
    return a > b ? a : b;
}

void setScoreTo(struct TennisGame* game, int player1Score, int player2Score) {
    for (int i = 0; i < maxScore(player1Score, player2Score); i++)
    {
        if (i < player1Score)
            TennisGame_WonPoint(game, "player1");
        if (i < player2Score)
            TennisGame_WonPoint(game, "player2");
    }
}

Ensure(tennis, Love_All) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 0, 0);

    assert_string_equal(TennisGame_GetScore(game), "Love-All");
   
    free(game);
}

Ensure(tennis, Fifteen_All_1_1) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 1, 1);
    assert_string_equal(TennisGame_GetScore(game), "Fifteen-All");
    free(game);
}

Ensure(tennis, Thirty_All_2_2) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 2, 2);
    assert_string_equal(TennisGame_GetScore(game), "Thirty-All");
    free(game);
}

Ensure(tennis, Deuce_3_3) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 3, 3);
    assert_string_equal(TennisGame_GetScore(game), "Deuce");
    free(game);
}

Ensure(tennis, Deuce_4_4) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 4, 4);
    assert_string_equal(TennisGame_GetScore(game), "Deuce");
    free(game);
}

Ensure(tennis, Fifteen_Love_1_0) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 1, 0);
    assert_string_equal(TennisGame_GetScore(game), "Fifteen-Love");
    free(game);
}

Ensure(tennis, Love_Fifteen_0_1) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 0, 1);
    assert_string_equal(TennisGame_GetScore(game), "Love-Fifteen");
    free(game);
}

Ensure(tennis, Thirty_Love_2_0) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 2, 0);
    assert_string_equal(TennisGame_GetScore(game), "Thirty-Love");
    free(game);
}

Ensure(tennis, Love_Thirty_0_2) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 0, 2);
    assert_string_equal(TennisGame_GetScore(game), "Love-Thirty");
    free(game);
}

Ensure(tennis, Forty_Love_3_0) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 3, 0);
    assert_string_equal(TennisGame_GetScore(game), "Forty-Love");
    free(game);
}

Ensure(tennis, Love_Forty_0_3) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 0, 3);
    assert_string_equal(TennisGame_GetScore(game), "Love-Forty");
    free(game);
}

Ensure(tennis, Win_for_player1_4_0) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 4, 0);
    assert_string_equal(TennisGame_GetScore(game), "Win for player1");
    free(game);
}

Ensure(tennis, Win_for_player2_0_4) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 0, 4);
    assert_string_equal(TennisGame_GetScore(game), "Win for player2");
    free(game);
}

Ensure(tennis, Thirty_Fifteen_2_1) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 2, 1);
    assert_string_equal(TennisGame_GetScore(game), "Thirty-Fifteen");
    free(game);
}

Ensure(tennis, Fifteen_Thirty_1_2) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 1, 2);
    assert_string_equal(TennisGame_GetScore(game), "Fifteen-Thirty");
    free(game);
}

Ensure(tennis, Forty_Fifteen_3_1) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 3, 1);
    assert_string_equal(TennisGame_GetScore(game), "Forty-Fifteen");
    free(game);
}

Ensure(tennis, Fifteen_Forty_1_3) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 1, 3);
    assert_string_equal(TennisGame_GetScore(game), "Fifteen-Forty");
    free(game);
}

Ensure(tennis, Win_for_player1_4_1) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 4, 1);
    assert_string_equal(TennisGame_GetScore(game), "Win for player1");
    free(game);
}

Ensure(tennis, Win_for_player2_1_4) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 1, 4);
    assert_string_equal(TennisGame_GetScore(game), "Win for player2");
    free(game);
}

Ensure(tennis, Forty_Thirty_3_2) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 3, 2);
    assert_string_equal(TennisGame_GetScore(game), "Forty-Thirty");
    free(game);
}

Ensure(tennis, Thirty_Forty_2_3) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 2, 3);
    assert_string_equal(TennisGame_GetScore(game), "Thirty-Forty");
    free(game);
}

Ensure(tennis, Win_for_player1_4_2) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 4, 2);
    assert_string_equal(TennisGame_GetScore(game), "Win for player1");
    free(game);
}

Ensure(tennis, Win_for_player2_2_4) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 2, 4);
    assert_string_equal(TennisGame_GetScore(game), "Win for player2");
    free(game);
}

Ensure(tennis, Advantage_player1_4_3) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 4, 3);
    assert_string_equal(TennisGame_GetScore(game), "Advantage player1");
    free(game);
}

Ensure(tennis, Advantage_player2_3_4) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 3, 4);
    assert_string_equal(TennisGame_GetScore(game), "Advantage player2");
    free(game);
}

Ensure(tennis, Advantage_player1_5_4) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 5, 4);
    assert_string_equal(TennisGame_GetScore(game), "Advantage player1");
    free(game);
}

Ensure(tennis, Advantage_player2_4_5) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 4, 5);
    assert_string_equal(TennisGame_GetScore(game), "Advantage player2");
    free(game);
}

Ensure(tennis, Advantage_player1_15_14) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 15, 14);
    assert_string_equal(TennisGame_GetScore(game), "Advantage player1");
    free(game);
}

Ensure(tennis, Advantage_player2_14_15) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 14, 15);
    assert_string_equal(TennisGame_GetScore(game), "Advantage player2");
    free(game);
}

Ensure(tennis, Win_for_player1_6_4) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 6, 4);
    assert_string_equal(TennisGame_GetScore(game), "Win for player1");
    free(game);
}

Ensure(tennis, Win_for_player2_4_6) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 4, 6);
    assert_string_equal(TennisGame_GetScore(game), "Win for player2");
    free(game);
}

Ensure(tennis, Win_for_player1_16_14) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 16, 14);
    assert_string_equal(TennisGame_GetScore(game), "Win for player1");
    free(game);
}

Ensure(tennis, Win_for_player2_14_16) {
    struct TennisGame* game = TennisGame_Create("player1", "player2");
    setScoreTo(game, 14, 16);
    assert_string_equal(TennisGame_GetScore(game), "Win for player2");
    free(game);
}
