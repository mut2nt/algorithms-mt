/* --TMS.h--  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
char* curr_state, next_state;
char read_s, write_s, direction;
} Transition;

typedef struct {
LD* K, F;
char* s0;
LD* delta; //aici tipul de data al listei este Transition
} DTM;

