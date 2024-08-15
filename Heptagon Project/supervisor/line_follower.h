/* --- Generated the 2/4/2024 at 3:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__pid_mem {
  long v_4;
  long v_3;
  long v_1;
  long v;
} Line_follower__pid_mem;

typedef struct Line_follower__pid_out {
  long v_l;
  long v_r;
} Line_follower__pid_out;

void Line_follower__pid_reset(Line_follower__pid_mem* self);

void Line_follower__pid_step(long sen0, long sen1, long sen2, long sen3,
                             long sen4, Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st_2 ck;
  Line_follower__st_1 v_149;
  long v_156;
  long v_154;
  long v_151;
  long v_164;
  long v_162;
  long v_159;
  long v_171;
  long v_169;
  long v_166;
  long v_179;
  long v_177;
  long v_174;
  long v_187;
  long v_185;
  long v_182;
  long v_205;
  long v_203;
  long v_200;
  long v_234;
  long v_232;
  long v_229;
  long v_244;
  long v_243;
  long v_242;
  long v_241;
  Line_follower__st v_300;
  long v_306;
  long pnr_2;
  Line_follower__pid_mem pid_5;
  Line_follower__pid_mem pid_6;
  Line_follower__pid_mem pid_7;
  Line_follower__pid_mem pid_8;
  Line_follower__pid_mem pid_9;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  long v_l;
  long v_r;
  long dir;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long ir_left, long ir_right, long sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
