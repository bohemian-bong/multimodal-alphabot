/* --- Generated the 2/4/2024 at 3:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__pid_mem {
  int v_4;
  int v_3;
  int v_1;
  int v;
} Line_follower__pid_mem;

typedef struct Line_follower__pid_out {
  int v_l;
  int v_r;
} Line_follower__pid_out;

void Line_follower__pid_reset(Line_follower__pid_mem* self);

void Line_follower__pid_step(int sen0, int sen1, int sen2, int sen3,
                             int sen4, Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st_2 ck;
  Line_follower__st_1 v_149;
  int v_156;
  int v_154;
  int v_151;
  int v_164;
  int v_162;
  int v_159;
  int v_171;
  int v_169;
  int v_166;
  int v_179;
  int v_177;
  int v_174;
  int v_187;
  int v_185;
  int v_182;
  int v_205;
  int v_203;
  int v_200;
  int v_234;
  int v_232;
  int v_229;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  Line_follower__st v_300;
  int v_306;
  int pnr_2;
  Line_follower__pid_mem pid_5;
  Line_follower__pid_mem pid_6;
  Line_follower__pid_mem pid_7;
  Line_follower__pid_mem pid_8;
  Line_follower__pid_mem pid_9;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int dir;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int ir_left, int ir_right, int sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
