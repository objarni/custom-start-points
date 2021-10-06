

test_cases = [
    (0, 0, "Love-All", 'player1', 'player2'),
    (1, 1, "Fifteen-All", 'player1', 'player2'),
    (2, 2, "Thirty-All", 'player1', 'player2'),
    (3, 3, "Deuce", 'player1', 'player2'),
    (4, 4, "Deuce", 'player1', 'player2'),

    (1, 0, "Fifteen-Love", 'player1', 'player2'),
    (0, 1, "Love-Fifteen", 'player1', 'player2'),
    (2, 0, "Thirty-Love", 'player1', 'player2'),
    (0, 2, "Love-Thirty", 'player1', 'player2'),
    (3, 0, "Forty-Love", 'player1', 'player2'),
    (0, 3, "Love-Forty", 'player1', 'player2'),
    (4, 0, "Win for player1", 'player1', 'player2'),
    (0, 4, "Win for player2", 'player1', 'player2'),

    (2, 1, "Thirty-Fifteen", 'player1', 'player2'),
    (1, 2, "Fifteen-Thirty", 'player1', 'player2'),
    (3, 1, "Forty-Fifteen", 'player1', 'player2'),
    (1, 3, "Fifteen-Forty", 'player1', 'player2'),
    (4, 1, "Win for player1", 'player1', 'player2'),
    (1, 4, "Win for player2", 'player1', 'player2'),

    (3, 2, "Forty-Thirty", 'player1', 'player2'),
    (2, 3, "Thirty-Forty", 'player1', 'player2'),
    (4, 2, "Win for player1", 'player1', 'player2'),
    (2, 4, "Win for player2", 'player1', 'player2'),

    (4, 3, "Advantage player1", 'player1', 'player2'),
    (3, 4, "Advantage player2", 'player1', 'player2'),
    (5, 4, "Advantage player1", 'player1', 'player2'),
    (4, 5, "Advantage player2", 'player1', 'player2'),
    (15, 14, "Advantage player1", 'player1', 'player2'),
    (14, 15, "Advantage player2", 'player1', 'player2'),

    (6, 4, 'Win for player1', 'player1', 'player2'),
    (4, 6, 'Win for player2', 'player1', 'player2'),
    (16, 14, 'Win for player1', 'player1', 'player2'),
    (14, 16, 'Win for player2', 'player1', 'player2'),

]

template = """\
Ensure(tennis, {testName}) {{ 
    struct TennisGame* game = TennisGame_Create("{player1Name}", "{player2Name}");
    setScoreTo(game, {p1Score}, {p2Score});
    assert_string_equal("{expectedResult}", TennisGame_GetScore(game));
    free(game);
}}"""

if __name__ == "__main__":
    for case in test_cases:
        p1Points, p2Points, expectedScore, p1Name, p2Name = case
        testName = expectedScore.replace(" ", "_")
        testName = testName.replace("-", "_")
        testName = f"{testName}_{p1Points}_{p2Points}"
        c = template.format(testName=testName, player1Name=p1Name, player2Name=p2Name, p1Score=p1Points, p2Score=p2Points, expectedResult=expectedScore)
        print(c)
        print()
