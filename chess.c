

//Assuming all images are loaded

//Globals
const unsigned int TOTAL_OF_EACH_PEICE[] = {2, 2, 2, 1, 1, 8};
const int SYMETRICAL_PIECE[] = {1, 1, 1, 0, 0, 0};
const unsigned int BOARD_SIZE = 8;

/* Table for management:
0 - blank
1 - rook
2 - knight
3 - bishop
4 - queen
5 - king
6 - pawn
*/

typedef struct game {
    unsigned char* tiles[BOARD_SIZE][BOARD_SIZE];
    char* active_pieces[sizeof(char)];

    unsigned char current_turn;

} game;

game* start_game() {
    game* return_game;

    unsigned char current_piece_index = 0;
    unsigned char active_piece_index = 1;
    unsigned int current_col = 0;
    unsigned int current_row = 0;
    
    for(int i = 0; i < TOTAL_OF_EACH_PEICE[current_piece_index]; i++) {
        
        return_game->active_pieces[active_piece_index];
        return_game->active_pieces[active_piece_index * -1];
        active_piece_index++;

        if (SYMETRICAL_PIECE[current_piece_index]) {

        } else {
            return_game->tiles[current_row][current_col] = current_piece_index + 1;
            return_game->tiles[BOARD_SIZE - 1 - current_row][BOARD_SIZE - 1 - current_col] = current_piece_index + 1;
        }
        current_col++;

        if (current_col == BOARD_SIZE) {
            current_col = 0;
            current_row++;
        }
    }

    return return_game;
}