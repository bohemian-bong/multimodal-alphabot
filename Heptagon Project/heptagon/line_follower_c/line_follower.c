/* --- Generated the 2/4/2024 at 3:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__pid_reset(Line_follower__pid_mem* self) {
  self->v_3 = true;
  self->v = true;
}

void Line_follower__pid_step(int sen0, int sen1, int sen2, int sen3,
                             int sen4, Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self) {
  
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_2;
  int error;
  int i;
  int p;
  int d;
  int temp;
  int pid;
  if (self->v_3) {
    v_5 = 0;
  } else {
    v_5 = self->v_4;
  };
  error = (sen1-sen3);
  d = (error-v_5);
  v_9 = (d/Line_follower__kd);
  v_2 = (self->v_1+error);
  if (self->v) {
    i = 0;
  } else {
    i = v_2;
  };
  v_7 = (i/Line_follower__ki);
  p = error;
  v_6 = (p/Line_follower__kp);
  v_8 = (v_6+v_7);
  temp = (v_8+v_9);
  v_10 = (temp<0);
  if (v_10) {
    pid = -10;
  } else {
    pid = 10;
  };
  v_14 = (30+pid);
  v_13 = (pid==0);
  if (v_13) {
    _out->v_r = 50;
  } else {
    _out->v_r = v_14;
  };
  v_12 = (30-pid);
  v_11 = (pid==0);
  if (v_11) {
    _out->v_l = 50;
  } else {
    _out->v_l = v_12;
  };
  self->v_4 = error;
  self->v_3 = false;
  self->v_1 = i;
  self->v = false;;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  Line_follower__pid_reset(&self->pid_9);
  Line_follower__pid_reset(&self->pid_8);
  Line_follower__pid_reset(&self->pid_7);
  Line_follower__pid_reset(&self->pid_6);
  Line_follower__pid_reset(&self->pid_5);
  self->v_306 = false;
  self->v_300 = Line_follower__St_Idle;
  self->v_244 = 0;
  self->v_243 = 0;
  self->v_242 = 0;
  self->v_241 = false;
  self->v_149 = Line_follower__St_1_Idle;
  self->pnr_2 = false;
  self->ck = Line_follower__St_2_White;
  self->v_229 = true;
  self->v_200 = true;
  self->v_182 = true;
  self->v_174 = true;
  self->v_166 = true;
  self->v_159 = true;
  self->v_151 = true;
}

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int ir_left, int ir_right, int sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__pid_out Line_follower__pid_out_st;
  
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v;
  int r_2_St_2_Black;
  Line_follower__st_2 s_2_St_2_Black;
  int r_2_St_2_White;
  Line_follower__st_2 s_2_St_2_White;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_88;
  Line_follower__st_1 v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_97;
  Line_follower__st_1 v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_119;
  Line_follower__st_1 v_118;
  int v_117;
  Line_follower__st_1 v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_148;
  Line_follower__st_1 v_147;
  int v_146;
  Line_follower__st_1 v_145;
  int v_144;
  Line_follower__st_1 v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int r_1_St_1_Parked;
  Line_follower__st_1 s_1_St_1_Parked;
  int r_1_St_1_Backleft;
  Line_follower__st_1 s_1_St_1_Backleft;
  int r_1_St_1_Backright;
  Line_follower__st_1 s_1_St_1_Backright;
  int r_1_St_1_Parkingrestart;
  Line_follower__st_1 s_1_St_1_Parkingrestart;
  int r_1_St_1_Parkright;
  Line_follower__st_1 s_1_St_1_Parkright;
  int r_1_St_1_Parkleft;
  Line_follower__st_1 s_1_St_1_Parkleft;
  int r_1_St_1_Parkingcheck;
  Line_follower__st_1 s_1_St_1_Parkingcheck;
  int r_1_St_1_Parkingstart;
  Line_follower__st_1 s_1_St_1_Parkingstart;
  int r_1_St_1_Parkingpid;
  Line_follower__st_1 s_1_St_1_Parkingpid;
  int r_1_St_1_Parkingleft;
  Line_follower__st_1 s_1_St_1_Parkingleft;
  int r_1_St_1_Boxpid;
  Line_follower__st_1 s_1_St_1_Boxpid;
  int r_1_St_1_Boxturnright;
  Line_follower__st_1 s_1_St_1_Boxturnright;
  int r_1_St_1_Boxturnleft;
  Line_follower__st_1 s_1_St_1_Boxturnleft;
  int r_1_St_1_Box;
  Line_follower__st_1 s_1_St_1_Box;
  int r_1_St_1_Stop;
  Line_follower__st_1 s_1_St_1_Stop;
  int r_1_St_1_Turnright;
  Line_follower__st_1 s_1_St_1_Turnright;
  int r_1_St_1_Turnleft;
  Line_follower__st_1 s_1_St_1_Turnleft;
  int r_1_St_1_Pid;
  Line_follower__st_1 s_1_St_1_Pid;
  int r_1_St_1_Idle;
  Line_follower__st_1 s_1_St_1_Idle;
  Line_follower__st_1 ck_4;
  int v_157;
  int v_155;
  int v_153;
  int v_152;
  int v_150;
  int time_6;
  int v_165;
  int v_163;
  int v_161;
  int v_160;
  int v_158;
  int time_5;
  int v_172;
  int v_170;
  int v_168;
  int v_167;
  int time_4;
  int v_180;
  int v_178;
  int v_176;
  int v_175;
  int v_173;
  int time_3;
  int v_188;
  int v_186;
  int v_184;
  int v_183;
  int v_181;
  int time_2;
  int v_194;
  Line_follower__st_1 v_193;
  int v_192;
  Line_follower__st_1 v_191;
  int v_190;
  int v_189;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_204;
  int v_202;
  int v_201;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int r_3;
  int time_1;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int r_4;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int r_5;
  int v_227;
  Line_follower__st_1 v_226;
  int v_225;
  Line_follower__st_1 v_224;
  int v_223;
  int v_222;
  int v_235;
  int v_233;
  int v_231;
  int v_230;
  int v_228;
  int time;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int r_6;
  int nr_1_St_1_Parked;
  Line_follower__st_1 ns_1_St_1_Parked;
  int bound_right_St_1_Parked;
  int bound_left_St_1_Parked;
  int count_St_1_Parked;
  int dir_St_2_Black_St_1_Parked;
  int v_r_St_2_Black_St_1_Parked;
  int v_l_St_2_Black_St_1_Parked;
  int nr_1_St_1_Backleft;
  Line_follower__st_1 ns_1_St_1_Backleft;
  int bound_right_St_1_Backleft;
  int bound_left_St_1_Backleft;
  int count_St_1_Backleft;
  int dir_St_2_Black_St_1_Backleft;
  int v_r_St_2_Black_St_1_Backleft;
  int v_l_St_2_Black_St_1_Backleft;
  int nr_1_St_1_Backright;
  Line_follower__st_1 ns_1_St_1_Backright;
  int bound_right_St_1_Backright;
  int bound_left_St_1_Backright;
  int count_St_1_Backright;
  int dir_St_2_Black_St_1_Backright;
  int v_r_St_2_Black_St_1_Backright;
  int v_l_St_2_Black_St_1_Backright;
  int nr_1_St_1_Parkingrestart;
  Line_follower__st_1 ns_1_St_1_Parkingrestart;
  int bound_right_St_1_Parkingrestart;
  int bound_left_St_1_Parkingrestart;
  int count_St_1_Parkingrestart;
  int dir_St_2_Black_St_1_Parkingrestart;
  int v_r_St_2_Black_St_1_Parkingrestart;
  int v_l_St_2_Black_St_1_Parkingrestart;
  int nr_1_St_1_Parkright;
  Line_follower__st_1 ns_1_St_1_Parkright;
  int bound_right_St_1_Parkright;
  int bound_left_St_1_Parkright;
  int count_St_1_Parkright;
  int dir_St_2_Black_St_1_Parkright;
  int v_r_St_2_Black_St_1_Parkright;
  int v_l_St_2_Black_St_1_Parkright;
  int nr_1_St_1_Parkleft;
  Line_follower__st_1 ns_1_St_1_Parkleft;
  int bound_right_St_1_Parkleft;
  int bound_left_St_1_Parkleft;
  int count_St_1_Parkleft;
  int dir_St_2_Black_St_1_Parkleft;
  int v_r_St_2_Black_St_1_Parkleft;
  int v_l_St_2_Black_St_1_Parkleft;
  int nr_1_St_1_Parkingcheck;
  Line_follower__st_1 ns_1_St_1_Parkingcheck;
  int bound_right_St_1_Parkingcheck;
  int bound_left_St_1_Parkingcheck;
  int count_St_1_Parkingcheck;
  int dir_St_2_Black_St_1_Parkingcheck;
  int v_r_St_2_Black_St_1_Parkingcheck;
  int v_l_St_2_Black_St_1_Parkingcheck;
  int nr_1_St_1_Parkingstart;
  Line_follower__st_1 ns_1_St_1_Parkingstart;
  int bound_right_St_1_Parkingstart;
  int bound_left_St_1_Parkingstart;
  int count_St_1_Parkingstart;
  int dir_St_2_Black_St_1_Parkingstart;
  int v_r_St_2_Black_St_1_Parkingstart;
  int v_l_St_2_Black_St_1_Parkingstart;
  int nr_1_St_1_Parkingpid;
  Line_follower__st_1 ns_1_St_1_Parkingpid;
  int bound_right_St_1_Parkingpid;
  int bound_left_St_1_Parkingpid;
  int count_St_1_Parkingpid;
  int dir_St_2_Black_St_1_Parkingpid;
  int v_r_St_2_Black_St_1_Parkingpid;
  int v_l_St_2_Black_St_1_Parkingpid;
  int nr_1_St_1_Parkingleft;
  Line_follower__st_1 ns_1_St_1_Parkingleft;
  int bound_right_St_1_Parkingleft;
  int bound_left_St_1_Parkingleft;
  int count_St_1_Parkingleft;
  int dir_St_2_Black_St_1_Parkingleft;
  int v_r_St_2_Black_St_1_Parkingleft;
  int v_l_St_2_Black_St_1_Parkingleft;
  int nr_1_St_1_Boxpid;
  Line_follower__st_1 ns_1_St_1_Boxpid;
  int bound_right_St_1_Boxpid;
  int bound_left_St_1_Boxpid;
  int count_St_1_Boxpid;
  int dir_St_2_Black_St_1_Boxpid;
  int v_r_St_2_Black_St_1_Boxpid;
  int v_l_St_2_Black_St_1_Boxpid;
  int nr_1_St_1_Boxturnright;
  Line_follower__st_1 ns_1_St_1_Boxturnright;
  int bound_right_St_1_Boxturnright;
  int bound_left_St_1_Boxturnright;
  int count_St_1_Boxturnright;
  int dir_St_2_Black_St_1_Boxturnright;
  int v_r_St_2_Black_St_1_Boxturnright;
  int v_l_St_2_Black_St_1_Boxturnright;
  int nr_1_St_1_Boxturnleft;
  Line_follower__st_1 ns_1_St_1_Boxturnleft;
  int bound_right_St_1_Boxturnleft;
  int bound_left_St_1_Boxturnleft;
  int count_St_1_Boxturnleft;
  int dir_St_2_Black_St_1_Boxturnleft;
  int v_r_St_2_Black_St_1_Boxturnleft;
  int v_l_St_2_Black_St_1_Boxturnleft;
  int nr_1_St_1_Box;
  Line_follower__st_1 ns_1_St_1_Box;
  int bound_right_St_1_Box;
  int bound_left_St_1_Box;
  int count_St_1_Box;
  int dir_St_2_Black_St_1_Box;
  int v_r_St_2_Black_St_1_Box;
  int v_l_St_2_Black_St_1_Box;
  int nr_1_St_1_Stop;
  Line_follower__st_1 ns_1_St_1_Stop;
  int bound_right_St_1_Stop;
  int bound_left_St_1_Stop;
  int count_St_1_Stop;
  int dir_St_2_Black_St_1_Stop;
  int v_r_St_2_Black_St_1_Stop;
  int v_l_St_2_Black_St_1_Stop;
  int nr_1_St_1_Turnright;
  Line_follower__st_1 ns_1_St_1_Turnright;
  int bound_right_St_1_Turnright;
  int bound_left_St_1_Turnright;
  int count_St_1_Turnright;
  int dir_St_2_Black_St_1_Turnright;
  int v_r_St_2_Black_St_1_Turnright;
  int v_l_St_2_Black_St_1_Turnright;
  int nr_1_St_1_Turnleft;
  Line_follower__st_1 ns_1_St_1_Turnleft;
  int bound_right_St_1_Turnleft;
  int bound_left_St_1_Turnleft;
  int count_St_1_Turnleft;
  int dir_St_2_Black_St_1_Turnleft;
  int v_r_St_2_Black_St_1_Turnleft;
  int v_l_St_2_Black_St_1_Turnleft;
  int nr_1_St_1_Pid;
  Line_follower__st_1 ns_1_St_1_Pid;
  int bound_right_St_1_Pid;
  int bound_left_St_1_Pid;
  int count_St_1_Pid;
  int dir_St_2_Black_St_1_Pid;
  int v_r_St_2_Black_St_1_Pid;
  int v_l_St_2_Black_St_1_Pid;
  int nr_1_St_1_Idle;
  Line_follower__st_1 ns_1_St_1_Idle;
  int bound_right_St_1_Idle;
  int bound_left_St_1_Idle;
  int count_St_1_Idle;
  int dir_St_2_Black_St_1_Idle;
  int v_r_St_2_Black_St_1_Idle;
  int v_l_St_2_Black_St_1_Idle;
  Line_follower__st_1 ck_5;
  Line_follower__st_1 s_1;
  Line_follower__st_1 ns_1;
  int r_1;
  int nr_1;
  int pnr_1;
  int bound_right_1;
  int bound_left_1;
  int count_1;
  int count;
  int bound_left;
  int bound_right;
  int v_262;
  Line_follower__st v_261;
  int v_260;
  Line_follower__st v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_271;
  Line_follower__st v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_280;
  Line_follower__st v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_286;
  Line_follower__st v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_299;
  Line_follower__st v_298;
  int v_297;
  Line_follower__st v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int r_St_Stop;
  Line_follower__st s_St_Stop;
  int r_St_Turnright;
  Line_follower__st s_St_Turnright;
  int r_St_Turnleft;
  Line_follower__st s_St_Turnleft;
  int r_St_Pid;
  Line_follower__st s_St_Pid;
  int r_St_Idle;
  Line_follower__st s_St_Idle;
  Line_follower__st ck_2;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int r_7;
  int nr_St_Stop;
  Line_follower__st ns_St_Stop;
  int dir_St_2_White_St_Stop;
  int v_r_St_2_White_St_Stop;
  int v_l_St_2_White_St_Stop;
  int nr_St_Turnright;
  Line_follower__st ns_St_Turnright;
  int dir_St_2_White_St_Turnright;
  int v_r_St_2_White_St_Turnright;
  int v_l_St_2_White_St_Turnright;
  int nr_St_Turnleft;
  Line_follower__st ns_St_Turnleft;
  int dir_St_2_White_St_Turnleft;
  int v_r_St_2_White_St_Turnleft;
  int v_l_St_2_White_St_Turnleft;
  int nr_St_Pid;
  Line_follower__st ns_St_Pid;
  int dir_St_2_White_St_Pid;
  int v_r_St_2_White_St_Pid;
  int v_l_St_2_White_St_Pid;
  int nr_St_Idle;
  Line_follower__st ns_St_Idle;
  int dir_St_2_White_St_Idle;
  int v_r_St_2_White_St_Idle;
  int v_l_St_2_White_St_Idle;
  Line_follower__st ck_3;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  Line_follower__st s;
  Line_follower__st ns;
  int r;
  int nr;
  int pnr;
  int nr_2_St_2_Black;
  Line_follower__st_2 ns_2_St_2_Black;
  int sen_St_2_Black[5];
  int dir_St_2_Black;
  int v_r_St_2_Black;
  int v_l_St_2_Black;
  int nr_2_St_2_White;
  Line_follower__st_2 ns_2_St_2_White;
  int sen_St_2_White[5];
  int dir_St_2_White;
  int v_r_St_2_White;
  int v_l_St_2_White;
  Line_follower__st_2 ck_1;
  Line_follower__st_2 s_2;
  Line_follower__st_2 ns_2;
  int r_2;
  int nr_2;
  int sen[5];
  switch (self->ck) {
    case Line_follower__St_2_White:
      v_17 = (sen2<600);
      v_15 = (sen4>600);
      v = (sen0>600);
      v_16 = (v&&v_15);
      v_18 = (v_16&&v_17);
      if (v_18) {
        r_2_St_2_White = true;
        s_2_St_2_White = Line_follower__St_2_Black;
      } else {
        r_2_St_2_White = self->pnr_2;
        s_2_St_2_White = Line_follower__St_2_White;
      };
      s_2 = s_2_St_2_White;
      r_2 = r_2_St_2_White;
      break;
    case Line_follower__St_2_Black:
      r_2_St_2_Black = self->pnr_2;
      s_2_St_2_Black = Line_follower__St_2_Black;
      s_2 = s_2_St_2_Black;
      r_2 = r_2_St_2_Black;
      break;
    default:
      break;
  };
  ck_1 = s_2;
  switch (ck_1) {
    case Line_follower__St_2_White:
      if (r_2) {
        pnr = false;
        ck_2 = Line_follower__St_Idle;
      } else {
        pnr = self->v_306;
        ck_2 = self->v_300;
      };
      v_249 = (1023-sen4);
      v_248 = (1023-sen3);
      v_247 = (1023-sen2);
      v_246 = (1023-sen1);
      v_245 = (1023-sen0);
      nr_2_St_2_White = false;
      ns_2_St_2_White = Line_follower__St_2_White;
      ns_2 = ns_2_St_2_White;
      nr_2 = nr_2_St_2_White;
      sen_St_2_White[0] = v_245;
      sen_St_2_White[1] = v_246;
      sen_St_2_White[2] = v_247;
      sen_St_2_White[3] = v_248;
      sen_St_2_White[4] = v_249;
      {
        int _3;
        for (_3 = 0; _3 < 5; ++_3) {
          sen[_3] = sen_St_2_White[_3];
        }
      };
      switch (ck_2) {
        case Line_follower__St_Idle:
          v_294 = sen[4];
          v_295 = (v_294<500);
          if (v_295) {
            v_297 = true;
            v_296 = Line_follower__St_Turnright;
          } else {
            v_297 = pnr;
            v_296 = Line_follower__St_Idle;
          };
          v_292 = sen[0];
          v_293 = (v_292<500);
          if (v_293) {
            v_299 = true;
            v_298 = Line_follower__St_Turnleft;
          } else {
            v_299 = v_297;
            v_298 = v_296;
          };
          v_289 = sen[3];
          v_290 = (v_289<500);
          v_287 = sen[1];
          v_288 = (v_287<500);
          v_291 = (v_288||v_290);
          if (v_291) {
            r_St_Idle = true;
            s_St_Idle = Line_follower__St_Pid;
          } else {
            r_St_Idle = v_299;
            s_St_Idle = v_298;
          };
          s = s_St_Idle;
          r = r_St_Idle;
          break;
        case Line_follower__St_Pid:
          v_283 = sen[4];
          v_284 = (v_283<500);
          if (v_284) {
            v_286 = true;
            v_285 = Line_follower__St_Turnright;
          } else {
            v_286 = pnr;
            v_285 = Line_follower__St_Pid;
          };
          v_281 = sen[0];
          v_282 = (v_281<500);
          if (v_282) {
            r_St_Pid = true;
            s_St_Pid = Line_follower__St_Turnleft;
          } else {
            r_St_Pid = v_286;
            s_St_Pid = v_285;
          };
          s = s_St_Pid;
          r = r_St_Pid;
          break;
        case Line_follower__St_Turnleft:
          v_277 = sen[4];
          v_278 = (v_277<500);
          if (v_278) {
            v_280 = true;
            v_279 = Line_follower__St_Turnright;
          } else {
            v_280 = pnr;
            v_279 = Line_follower__St_Turnleft;
          };
          v_274 = sen[3];
          v_275 = (v_274<500);
          v_272 = sen[1];
          v_273 = (v_272<500);
          v_276 = (v_273||v_275);
          if (v_276) {
            r_St_Turnleft = true;
            s_St_Turnleft = Line_follower__St_Pid;
          } else {
            r_St_Turnleft = v_280;
            s_St_Turnleft = v_279;
          };
          s = s_St_Turnleft;
          r = r_St_Turnleft;
          break;
        case Line_follower__St_Turnright:
          v_268 = sen[0];
          v_269 = (v_268<500);
          if (v_269) {
            v_271 = true;
            v_270 = Line_follower__St_Turnleft;
          } else {
            v_271 = pnr;
            v_270 = Line_follower__St_Turnright;
          };
          v_265 = sen[3];
          v_266 = (v_265<500);
          v_263 = sen[1];
          v_264 = (v_263<500);
          v_267 = (v_264||v_266);
          if (v_267) {
            r_St_Turnright = true;
            s_St_Turnright = Line_follower__St_Pid;
          } else {
            r_St_Turnright = v_271;
            s_St_Turnright = v_270;
          };
          s = s_St_Turnright;
          r = r_St_Turnright;
          break;
        case Line_follower__St_Stop:
          v_257 = sen[4];
          v_258 = (v_257<500);
          if (v_258) {
            v_260 = true;
            v_259 = Line_follower__St_Turnright;
          } else {
            v_260 = pnr;
            v_259 = Line_follower__St_Stop;
          };
          v_255 = sen[0];
          v_256 = (v_255<500);
          if (v_256) {
            v_262 = true;
            v_261 = Line_follower__St_Turnleft;
          } else {
            v_262 = v_260;
            v_261 = v_259;
          };
          v_252 = sen[3];
          v_253 = (v_252<500);
          v_250 = sen[1];
          v_251 = (v_250<500);
          v_254 = (v_251||v_253);
          if (v_254) {
            r_St_Stop = true;
            s_St_Stop = Line_follower__St_Pid;
          } else {
            r_St_Stop = v_262;
            s_St_Stop = v_261;
          };
          s = s_St_Stop;
          r = r_St_Stop;
          break;
        default:
          break;
      };
      ck_3 = s;
      switch (ck_3) {
        case Line_follower__St_Idle:
          v_r_St_2_White_St_Idle = 50;
          v_l_St_2_White_St_Idle = 50;
          dir_St_2_White_St_Idle = 1;
          nr_St_Idle = false;
          ns_St_Idle = Line_follower__St_Idle;
          v_l_St_2_White = v_l_St_2_White_St_Idle;
          v_r_St_2_White = v_r_St_2_White_St_Idle;
          dir_St_2_White = dir_St_2_White_St_Idle;
          ns = ns_St_Idle;
          nr = nr_St_Idle;
          break;
        case Line_follower__St_Pid:
          v_305 = sen[4];
          v_304 = sen[3];
          v_303 = sen[2];
          v_302 = sen[1];
          v_301 = sen[0];
          dir_St_2_White_St_Pid = 2;
          nr_St_Pid = false;
          ns_St_Pid = Line_follower__St_Pid;
          r_7 = (r_2||r);
          if (r_7) {
            Line_follower__pid_reset(&self->pid_9);
          };
          Line_follower__pid_step(v_301, v_302, v_303, v_304, v_305,
                                  &Line_follower__pid_out_st, &self->pid_9);
          v_l_St_2_White_St_Pid = Line_follower__pid_out_st.v_l;
          v_r_St_2_White_St_Pid = Line_follower__pid_out_st.v_r;
          v_l_St_2_White = v_l_St_2_White_St_Pid;
          v_r_St_2_White = v_r_St_2_White_St_Pid;
          dir_St_2_White = dir_St_2_White_St_Pid;
          ns = ns_St_Pid;
          nr = nr_St_Pid;
          break;
        case Line_follower__St_Turnleft:
          v_r_St_2_White_St_Turnleft = 90;
          v_l_St_2_White_St_Turnleft = 90;
          dir_St_2_White_St_Turnleft = 3;
          nr_St_Turnleft = false;
          ns_St_Turnleft = Line_follower__St_Turnleft;
          v_l_St_2_White = v_l_St_2_White_St_Turnleft;
          v_r_St_2_White = v_r_St_2_White_St_Turnleft;
          dir_St_2_White = dir_St_2_White_St_Turnleft;
          ns = ns_St_Turnleft;
          nr = nr_St_Turnleft;
          break;
        case Line_follower__St_Turnright:
          v_r_St_2_White_St_Turnright = 90;
          v_l_St_2_White_St_Turnright = 90;
          dir_St_2_White_St_Turnright = 4;
          nr_St_Turnright = false;
          ns_St_Turnright = Line_follower__St_Turnright;
          v_l_St_2_White = v_l_St_2_White_St_Turnright;
          v_r_St_2_White = v_r_St_2_White_St_Turnright;
          dir_St_2_White = dir_St_2_White_St_Turnright;
          ns = ns_St_Turnright;
          nr = nr_St_Turnright;
          break;
        case Line_follower__St_Stop:
          v_r_St_2_White_St_Stop = 0;
          v_l_St_2_White_St_Stop = 0;
          dir_St_2_White_St_Stop = 0;
          nr_St_Stop = false;
          ns_St_Stop = Line_follower__St_Stop;
          v_l_St_2_White = v_l_St_2_White_St_Stop;
          v_r_St_2_White = v_r_St_2_White_St_Stop;
          dir_St_2_White = dir_St_2_White_St_Stop;
          ns = ns_St_Stop;
          nr = nr_St_Stop;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_2_White;
      _out->v_r = v_r_St_2_White;
      _out->dir = dir_St_2_White;
      self->v_306 = nr;
      self->v_300 = ns;
      break;
    case Line_follower__St_2_Black:
      if (r_2) {
        bound_right_1 = 0;
        bound_left_1 = 0;
        count_1 = 0;
        pnr_1 = false;
        ck_4 = Line_follower__St_1_Idle;
      } else {
        bound_right_1 = self->v_244;
        bound_left_1 = self->v_243;
        count_1 = self->v_242;
        pnr_1 = self->v_241;
        ck_4 = self->v_149;
      };
      nr_2_St_2_Black = false;
      ns_2_St_2_Black = Line_follower__St_2_Black;
      ns_2 = ns_2_St_2_Black;
      nr_2 = nr_2_St_2_Black;
      switch (ck_4) {
        case Line_follower__St_1_Stop:
          r_1_St_1_Stop = pnr_1;
          s_1_St_1_Stop = Line_follower__St_1_Stop;
          break;
        case Line_follower__St_1_Box:
          r_1_St_1_Box = pnr_1;
          s_1_St_1_Box = Line_follower__St_1_Box;
          break;
        case Line_follower__St_1_Parkingstart:
          r_1_St_1_Parkingstart = pnr_1;
          s_1_St_1_Parkingstart = Line_follower__St_1_Parkingstart;
          break;
        case Line_follower__St_1_Parkingcheck:
          r_1_St_1_Parkingcheck = pnr_1;
          s_1_St_1_Parkingcheck = Line_follower__St_1_Parkingcheck;
          break;
        case Line_follower__St_1_Parkleft:
          r_1_St_1_Parkleft = pnr_1;
          s_1_St_1_Parkleft = Line_follower__St_1_Parkleft;
          break;
        case Line_follower__St_1_Parkright:
          r_1_St_1_Parkright = pnr_1;
          s_1_St_1_Parkright = Line_follower__St_1_Parkright;
          break;
        case Line_follower__St_1_Parkingrestart:
          r_1_St_1_Parkingrestart = pnr_1;
          s_1_St_1_Parkingrestart = Line_follower__St_1_Parkingrestart;
          break;
        case Line_follower__St_1_Backright:
          r_1_St_1_Backright = pnr_1;
          s_1_St_1_Backright = Line_follower__St_1_Backright;
          break;
        case Line_follower__St_1_Backleft:
          r_1_St_1_Backleft = pnr_1;
          s_1_St_1_Backleft = Line_follower__St_1_Backleft;
          break;
        case Line_follower__St_1_Parked:
          r_1_St_1_Parked = pnr_1;
          s_1_St_1_Parked = Line_follower__St_1_Parked;
          break;
        default:
          break;
      };
      sen_St_2_Black[0] = sen0;
      sen_St_2_Black[1] = sen1;
      sen_St_2_Black[2] = sen2;
      sen_St_2_Black[3] = sen3;
      sen_St_2_Black[4] = sen4;
      {
        int _4;
        for (_4 = 0; _4 < 5; ++_4) {
          sen[_4] = sen_St_2_Black[_4];
        }
      };
      switch (ck_4) {
        case Line_follower__St_1_Idle:
          v_141 = sen[4];
          v_142 = (v_141<500);
          if (v_142) {
            v_144 = true;
            v_143 = Line_follower__St_1_Turnright;
          } else {
            v_144 = pnr_1;
            v_143 = Line_follower__St_1_Idle;
          };
          v_139 = sen[0];
          v_140 = (v_139<500);
          if (v_140) {
            v_146 = true;
            v_145 = Line_follower__St_1_Turnleft;
          } else {
            v_146 = v_144;
            v_145 = v_143;
          };
          v_136 = sen[3];
          v_137 = (v_136<500);
          v_134 = sen[1];
          v_135 = (v_134<500);
          v_138 = (v_135||v_137);
          if (v_138) {
            v_148 = true;
            v_147 = Line_follower__St_1_Pid;
          } else {
            v_148 = v_146;
            v_147 = v_145;
          };
          v_131 = sen[4];
          v_132 = (v_131<600);
          v_128 = sen[0];
          v_129 = (v_128<600);
          v_125 = sen[3];
          v_126 = (v_125<600);
          v_122 = sen[2];
          v_123 = (v_122<600);
          v_120 = sen[1];
          v_121 = (v_120<600);
          v_124 = (v_121&&v_123);
          v_127 = (v_124&&v_126);
          v_130 = (v_127&&v_129);
          v_133 = (v_130&&v_132);
          if (v_133) {
            r_1_St_1_Idle = true;
            s_1_St_1_Idle = Line_follower__St_1_Box;
          } else {
            r_1_St_1_Idle = v_148;
            s_1_St_1_Idle = v_147;
          };
          s_1 = s_1_St_1_Idle;
          r_1 = r_1_St_1_Idle;
          break;
        case Line_follower__St_1_Pid:
          v_114 = sen[4];
          v_115 = (v_114<500);
          if (v_115) {
            v_117 = true;
            v_116 = Line_follower__St_1_Turnright;
          } else {
            v_117 = pnr_1;
            v_116 = Line_follower__St_1_Pid;
          };
          v_112 = sen[0];
          v_113 = (v_112<500);
          if (v_113) {
            v_119 = true;
            v_118 = Line_follower__St_1_Turnleft;
          } else {
            v_119 = v_117;
            v_118 = v_116;
          };
          v_109 = sen[4];
          v_110 = (v_109<600);
          v_106 = sen[0];
          v_107 = (v_106<600);
          v_103 = sen[3];
          v_104 = (v_103<600);
          v_100 = sen[2];
          v_101 = (v_100<600);
          v_98 = sen[1];
          v_99 = (v_98<600);
          v_102 = (v_99&&v_101);
          v_105 = (v_102&&v_104);
          v_108 = (v_105&&v_107);
          v_111 = (v_108&&v_110);
          if (v_111) {
            r_1_St_1_Pid = true;
            s_1_St_1_Pid = Line_follower__St_1_Box;
          } else {
            r_1_St_1_Pid = v_119;
            s_1_St_1_Pid = v_118;
          };
          s_1 = s_1_St_1_Pid;
          r_1 = r_1_St_1_Pid;
          break;
        case Line_follower__St_1_Turnleft:
          v_94 = sen[4];
          v_95 = (v_94<500);
          if (v_95) {
            v_97 = true;
            v_96 = Line_follower__St_1_Turnright;
          } else {
            v_97 = pnr_1;
            v_96 = Line_follower__St_1_Turnleft;
          };
          v_91 = sen[3];
          v_92 = (v_91<500);
          v_89 = sen[1];
          v_90 = (v_89<500);
          v_93 = (v_90||v_92);
          if (v_93) {
            r_1_St_1_Turnleft = true;
            s_1_St_1_Turnleft = Line_follower__St_1_Pid;
          } else {
            r_1_St_1_Turnleft = v_97;
            s_1_St_1_Turnleft = v_96;
          };
          s_1 = s_1_St_1_Turnleft;
          r_1 = r_1_St_1_Turnleft;
          break;
        case Line_follower__St_1_Turnright:
          v_85 = sen[0];
          v_86 = (v_85<500);
          if (v_86) {
            v_88 = true;
            v_87 = Line_follower__St_1_Turnleft;
          } else {
            v_88 = pnr_1;
            v_87 = Line_follower__St_1_Turnright;
          };
          v_82 = sen[3];
          v_83 = (v_82<500);
          v_80 = sen[1];
          v_81 = (v_80<500);
          v_84 = (v_81||v_83);
          if (v_84) {
            r_1_St_1_Turnright = true;
            s_1_St_1_Turnright = Line_follower__St_1_Pid;
          } else {
            r_1_St_1_Turnright = v_88;
            s_1_St_1_Turnright = v_87;
          };
          s_1 = s_1_St_1_Turnright;
          r_1 = r_1_St_1_Turnright;
          break;
        case Line_follower__St_1_Boxturnleft:
          v_75 = sen[4];
          v_76 = (v_75<600);
          v_73 = sen[0];
          v_74 = (v_73<600);
          v_77 = (v_74||v_76);
          v_70 = sen[3];
          v_71 = (v_70<600);
          v_67 = sen[2];
          v_68 = (v_67<600);
          v_65 = sen[1];
          v_66 = (v_65<600);
          v_69 = (v_66&&v_68);
          v_72 = (v_69&&v_71);
          v_78 = (v_72&&v_77);
          v_79 = !(v_78);
          if (v_79) {
            r_1_St_1_Boxturnleft = true;
            s_1_St_1_Boxturnleft = Line_follower__St_1_Boxpid;
          } else {
            r_1_St_1_Boxturnleft = pnr_1;
            s_1_St_1_Boxturnleft = Line_follower__St_1_Boxturnleft;
          };
          s_1 = s_1_St_1_Boxturnleft;
          r_1 = r_1_St_1_Boxturnleft;
          break;
        case Line_follower__St_1_Boxturnright:
          v_60 = sen[4];
          v_61 = (v_60<600);
          v_58 = sen[0];
          v_59 = (v_58<600);
          v_62 = (v_59||v_61);
          v_55 = sen[3];
          v_56 = (v_55<600);
          v_52 = sen[2];
          v_53 = (v_52<600);
          v_50 = sen[1];
          v_51 = (v_50<600);
          v_54 = (v_51&&v_53);
          v_57 = (v_54&&v_56);
          v_63 = (v_57&&v_62);
          v_64 = !(v_63);
          if (v_64) {
            r_1_St_1_Boxturnright = true;
            s_1_St_1_Boxturnright = Line_follower__St_1_Boxpid;
          } else {
            r_1_St_1_Boxturnright = pnr_1;
            s_1_St_1_Boxturnright = Line_follower__St_1_Boxturnright;
          };
          s_1 = s_1_St_1_Boxturnright;
          r_1 = r_1_St_1_Boxturnright;
          break;
        case Line_follower__St_1_Boxpid:
          v_47 = sen[2];
          v_48 = (v_47<600);
          v_44 = sen[4];
          v_45 = (v_44>600);
          v_42 = sen[0];
          v_43 = (v_42>600);
          v_46 = (v_43&&v_45);
          v_49 = (v_46&&v_48);
          if (v_49) {
            r_1_St_1_Boxpid = true;
            s_1_St_1_Boxpid = Line_follower__St_1_Pid;
          } else {
            r_1_St_1_Boxpid = pnr_1;
            s_1_St_1_Boxpid = Line_follower__St_1_Boxpid;
          };
          s_1 = s_1_St_1_Boxpid;
          r_1 = r_1_St_1_Boxpid;
          break;
        case Line_follower__St_1_Parkingleft:
          v_37 = sen[4];
          v_38 = (v_37<600);
          v_35 = sen[0];
          v_36 = (v_35<600);
          v_39 = (v_36||v_38);
          v_32 = sen[3];
          v_33 = (v_32<600);
          v_29 = sen[2];
          v_30 = (v_29<600);
          v_27 = sen[1];
          v_28 = (v_27<600);
          v_31 = (v_28&&v_30);
          v_34 = (v_31&&v_33);
          v_40 = (v_34&&v_39);
          v_41 = !(v_40);
          if (v_41) {
            r_1_St_1_Parkingleft = true;
            s_1_St_1_Parkingleft = Line_follower__St_1_Parkingpid;
          } else {
            r_1_St_1_Parkingleft = pnr_1;
            s_1_St_1_Parkingleft = Line_follower__St_1_Parkingleft;
          };
          s_1 = s_1_St_1_Parkingleft;
          r_1 = r_1_St_1_Parkingleft;
          break;
        case Line_follower__St_1_Parkingpid:
          v_24 = sen[3];
          v_25 = (v_24<600);
          v_21 = sen[2];
          v_22 = (v_21<600);
          v_19 = sen[1];
          v_20 = (v_19<600);
          v_23 = (v_20&&v_22);
          v_26 = (v_23&&v_25);
          if (v_26) {
            r_1_St_1_Parkingpid = true;
            s_1_St_1_Parkingpid = Line_follower__St_1_Stop;
          } else {
            r_1_St_1_Parkingpid = pnr_1;
            s_1_St_1_Parkingpid = Line_follower__St_1_Parkingpid;
          };
          s_1 = s_1_St_1_Parkingpid;
          r_1 = r_1_St_1_Parkingpid;
          break;
        case Line_follower__St_1_Parked:
          s_1 = s_1_St_1_Parked;
          r_1 = r_1_St_1_Parked;
          break;
        case Line_follower__St_1_Backleft:
          s_1 = s_1_St_1_Backleft;
          r_1 = r_1_St_1_Backleft;
          break;
        case Line_follower__St_1_Backright:
          s_1 = s_1_St_1_Backright;
          r_1 = r_1_St_1_Backright;
          break;
        case Line_follower__St_1_Parkingrestart:
          s_1 = s_1_St_1_Parkingrestart;
          r_1 = r_1_St_1_Parkingrestart;
          break;
        case Line_follower__St_1_Parkright:
          s_1 = s_1_St_1_Parkright;
          r_1 = r_1_St_1_Parkright;
          break;
        case Line_follower__St_1_Parkleft:
          s_1 = s_1_St_1_Parkleft;
          r_1 = r_1_St_1_Parkleft;
          break;
        case Line_follower__St_1_Parkingcheck:
          s_1 = s_1_St_1_Parkingcheck;
          r_1 = r_1_St_1_Parkingcheck;
          break;
        case Line_follower__St_1_Parkingstart:
          s_1 = s_1_St_1_Parkingstart;
          r_1 = r_1_St_1_Parkingstart;
          break;
        case Line_follower__St_1_Box:
          s_1 = s_1_St_1_Box;
          r_1 = r_1_St_1_Box;
          break;
        case Line_follower__St_1_Stop:
          s_1 = s_1_St_1_Stop;
          r_1 = r_1_St_1_Stop;
          break;
        default:
          break;
      };
      ck_5 = s_1;
      switch (ck_5) {
        case Line_follower__St_1_Idle:
          bound_right_St_1_Idle = bound_right_1;
          bound_left_St_1_Idle = bound_left_1;
          count_St_1_Idle = count_1;
          v_r_St_2_Black_St_1_Idle = 50;
          v_l_St_2_Black_St_1_Idle = 50;
          dir_St_2_Black_St_1_Idle = 1;
          nr_1_St_1_Idle = false;
          ns_1_St_1_Idle = Line_follower__St_1_Idle;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Idle;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Idle;
          dir_St_2_Black = dir_St_2_Black_St_1_Idle;
          count = count_St_1_Idle;
          bound_left = bound_left_St_1_Idle;
          bound_right = bound_right_St_1_Idle;
          ns_1 = ns_1_St_1_Idle;
          nr_1 = nr_1_St_1_Idle;
          break;
        case Line_follower__St_1_Pid:
          bound_right_St_1_Pid = bound_right_1;
          bound_left_St_1_Pid = bound_left_1;
          count_St_1_Pid = count_1;
          v_240 = sen[4];
          v_239 = sen[3];
          v_238 = sen[2];
          v_237 = sen[1];
          v_236 = sen[0];
          dir_St_2_Black_St_1_Pid = 2;
          nr_1_St_1_Pid = false;
          ns_1_St_1_Pid = Line_follower__St_1_Pid;
          r_6 = (r_2||r_1);
          if (r_6) {
            Line_follower__pid_reset(&self->pid_8);
          };
          Line_follower__pid_step(v_236, v_237, v_238, v_239, v_240,
                                  &Line_follower__pid_out_st, &self->pid_8);
          v_l_St_2_Black_St_1_Pid = Line_follower__pid_out_st.v_l;
          v_r_St_2_Black_St_1_Pid = Line_follower__pid_out_st.v_r;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Pid;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Pid;
          dir_St_2_Black = dir_St_2_Black_St_1_Pid;
          count = count_St_1_Pid;
          bound_left = bound_left_St_1_Pid;
          bound_right = bound_right_St_1_Pid;
          ns_1 = ns_1_St_1_Pid;
          nr_1 = nr_1_St_1_Pid;
          break;
        case Line_follower__St_1_Turnleft:
          bound_right_St_1_Turnleft = bound_right_1;
          bound_left_St_1_Turnleft = bound_left_1;
          count_St_1_Turnleft = count_1;
          v_r_St_2_Black_St_1_Turnleft = 90;
          v_l_St_2_Black_St_1_Turnleft = 90;
          dir_St_2_Black_St_1_Turnleft = 3;
          nr_1_St_1_Turnleft = false;
          ns_1_St_1_Turnleft = Line_follower__St_1_Turnleft;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Turnleft;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Turnleft;
          dir_St_2_Black = dir_St_2_Black_St_1_Turnleft;
          count = count_St_1_Turnleft;
          bound_left = bound_left_St_1_Turnleft;
          bound_right = bound_right_St_1_Turnleft;
          ns_1 = ns_1_St_1_Turnleft;
          nr_1 = nr_1_St_1_Turnleft;
          break;
        case Line_follower__St_1_Turnright:
          bound_right_St_1_Turnright = bound_right_1;
          bound_left_St_1_Turnright = bound_left_1;
          count_St_1_Turnright = count_1;
          v_r_St_2_Black_St_1_Turnright = 90;
          v_l_St_2_Black_St_1_Turnright = 90;
          dir_St_2_Black_St_1_Turnright = 4;
          nr_1_St_1_Turnright = false;
          ns_1_St_1_Turnright = Line_follower__St_1_Turnright;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Turnright;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Turnright;
          dir_St_2_Black = dir_St_2_Black_St_1_Turnright;
          count = count_St_1_Turnright;
          bound_left = bound_left_St_1_Turnright;
          bound_right = bound_right_St_1_Turnright;
          ns_1 = ns_1_St_1_Turnright;
          nr_1 = nr_1_St_1_Turnright;
          break;
        case Line_follower__St_1_Stop:
          bound_right_St_1_Stop = bound_right_1;
          bound_left_St_1_Stop = bound_left_1;
          count_St_1_Stop = count_1;
          v_r_St_2_Black_St_1_Stop = 0;
          v_l_St_2_Black_St_1_Stop = 0;
          dir_St_2_Black_St_1_Stop = 0;
          v_233 = (self->v_232-1);
          if (sec) {
            v_235 = v_233;
          } else {
            v_235 = self->v_234;
          };
          v_230 = (r_2||r_1);
          if (self->v_229) {
            v_231 = true;
          } else {
            v_231 = v_230;
          };
          if (v_231) {
            time = 2;
          } else {
            time = v_235;
          };
          v_228 = (time==0);
          if (v_228) {
            nr_1_St_1_Stop = true;
            ns_1_St_1_Stop = Line_follower__St_1_Parkingstart;
          } else {
            nr_1_St_1_Stop = false;
            ns_1_St_1_Stop = Line_follower__St_1_Stop;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Stop;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Stop;
          dir_St_2_Black = dir_St_2_Black_St_1_Stop;
          count = count_St_1_Stop;
          bound_left = bound_left_St_1_Stop;
          bound_right = bound_right_St_1_Stop;
          ns_1 = ns_1_St_1_Stop;
          nr_1 = nr_1_St_1_Stop;
          break;
        case Line_follower__St_1_Box:
          bound_right_St_1_Box = bound_right_1;
          bound_left_St_1_Box = bound_left_1;
          count_St_1_Box = (count_1+1);
          v_r_St_2_Black_St_1_Box = 0;
          v_l_St_2_Black_St_1_Box = 0;
          dir_St_2_Black_St_1_Box = 0;
          if (true) {
            v_225 = true;
          } else {
            v_225 = false;
          };
          if (true) {
            v_224 = Line_follower__St_1_Boxturnleft;
          } else {
            v_224 = Line_follower__St_1_Box;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Box;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Box;
          dir_St_2_Black = dir_St_2_Black_St_1_Box;
          count = count_St_1_Box;
          v_223 = (count==4);
          if (v_223) {
            v_227 = true;
            v_226 = Line_follower__St_1_Parkingleft;
          } else {
            v_227 = v_225;
            v_226 = v_224;
          };
          v_222 = (count==2);
          if (v_222) {
            nr_1_St_1_Box = true;
            ns_1_St_1_Box = Line_follower__St_1_Boxturnright;
          } else {
            nr_1_St_1_Box = v_227;
            ns_1_St_1_Box = v_226;
          };
          bound_left = bound_left_St_1_Box;
          bound_right = bound_right_St_1_Box;
          ns_1 = ns_1_St_1_Box;
          nr_1 = nr_1_St_1_Box;
          break;
        case Line_follower__St_1_Boxturnleft:
          bound_right_St_1_Boxturnleft = bound_right_1;
          bound_left_St_1_Boxturnleft = bound_left_1;
          count_St_1_Boxturnleft = count_1;
          v_r_St_2_Black_St_1_Boxturnleft = 100;
          v_l_St_2_Black_St_1_Boxturnleft = 100;
          dir_St_2_Black_St_1_Boxturnleft = 3;
          nr_1_St_1_Boxturnleft = false;
          ns_1_St_1_Boxturnleft = Line_follower__St_1_Boxturnleft;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Boxturnleft;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Boxturnleft;
          dir_St_2_Black = dir_St_2_Black_St_1_Boxturnleft;
          count = count_St_1_Boxturnleft;
          bound_left = bound_left_St_1_Boxturnleft;
          bound_right = bound_right_St_1_Boxturnleft;
          ns_1 = ns_1_St_1_Boxturnleft;
          nr_1 = nr_1_St_1_Boxturnleft;
          break;
        case Line_follower__St_1_Boxturnright:
          bound_right_St_1_Boxturnright = bound_right_1;
          bound_left_St_1_Boxturnright = bound_left_1;
          count_St_1_Boxturnright = count_1;
          v_r_St_2_Black_St_1_Boxturnright = 100;
          v_l_St_2_Black_St_1_Boxturnright = 100;
          dir_St_2_Black_St_1_Boxturnright = 4;
          nr_1_St_1_Boxturnright = false;
          ns_1_St_1_Boxturnright = Line_follower__St_1_Boxturnright;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Boxturnright;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Boxturnright;
          dir_St_2_Black = dir_St_2_Black_St_1_Boxturnright;
          count = count_St_1_Boxturnright;
          bound_left = bound_left_St_1_Boxturnright;
          bound_right = bound_right_St_1_Boxturnright;
          ns_1 = ns_1_St_1_Boxturnright;
          nr_1 = nr_1_St_1_Boxturnright;
          break;
        case Line_follower__St_1_Boxpid:
          bound_right_St_1_Boxpid = bound_right_1;
          bound_left_St_1_Boxpid = bound_left_1;
          count_St_1_Boxpid = count_1;
          v_221 = sen[4];
          v_220 = sen[3];
          v_219 = sen[2];
          v_218 = sen[1];
          v_217 = sen[0];
          dir_St_2_Black_St_1_Boxpid = 2;
          nr_1_St_1_Boxpid = false;
          ns_1_St_1_Boxpid = Line_follower__St_1_Boxpid;
          r_5 = (r_2||r_1);
          if (r_5) {
            Line_follower__pid_reset(&self->pid_7);
          };
          Line_follower__pid_step(v_217, v_218, v_219, v_220, v_221,
                                  &Line_follower__pid_out_st, &self->pid_7);
          v_l_St_2_Black_St_1_Boxpid = Line_follower__pid_out_st.v_l;
          v_r_St_2_Black_St_1_Boxpid = Line_follower__pid_out_st.v_r;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Boxpid;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Boxpid;
          dir_St_2_Black = dir_St_2_Black_St_1_Boxpid;
          count = count_St_1_Boxpid;
          bound_left = bound_left_St_1_Boxpid;
          bound_right = bound_right_St_1_Boxpid;
          ns_1 = ns_1_St_1_Boxpid;
          nr_1 = nr_1_St_1_Boxpid;
          break;
        case Line_follower__St_1_Parkingleft:
          bound_right_St_1_Parkingleft = bound_right_1;
          bound_left_St_1_Parkingleft = bound_left_1;
          count_St_1_Parkingleft = count_1;
          v_r_St_2_Black_St_1_Parkingleft = 100;
          v_l_St_2_Black_St_1_Parkingleft = 100;
          dir_St_2_Black_St_1_Parkingleft = 3;
          nr_1_St_1_Parkingleft = false;
          ns_1_St_1_Parkingleft = Line_follower__St_1_Parkingleft;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parkingleft;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parkingleft;
          dir_St_2_Black = dir_St_2_Black_St_1_Parkingleft;
          count = count_St_1_Parkingleft;
          bound_left = bound_left_St_1_Parkingleft;
          bound_right = bound_right_St_1_Parkingleft;
          ns_1 = ns_1_St_1_Parkingleft;
          nr_1 = nr_1_St_1_Parkingleft;
          break;
        case Line_follower__St_1_Parkingpid:
          bound_right_St_1_Parkingpid = bound_right_1;
          bound_left_St_1_Parkingpid = bound_left_1;
          count_St_1_Parkingpid = count_1;
          v_216 = sen[4];
          v_215 = sen[3];
          v_214 = sen[2];
          v_213 = sen[1];
          v_212 = sen[0];
          dir_St_2_Black_St_1_Parkingpid = 2;
          nr_1_St_1_Parkingpid = false;
          ns_1_St_1_Parkingpid = Line_follower__St_1_Parkingpid;
          r_4 = (r_2||r_1);
          if (r_4) {
            Line_follower__pid_reset(&self->pid_6);
          };
          Line_follower__pid_step(v_212, v_213, v_214, v_215, v_216,
                                  &Line_follower__pid_out_st, &self->pid_6);
          v_l_St_2_Black_St_1_Parkingpid = Line_follower__pid_out_st.v_l;
          v_r_St_2_Black_St_1_Parkingpid = Line_follower__pid_out_st.v_r;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parkingpid;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parkingpid;
          dir_St_2_Black = dir_St_2_Black_St_1_Parkingpid;
          count = count_St_1_Parkingpid;
          bound_left = bound_left_St_1_Parkingpid;
          bound_right = bound_right_St_1_Parkingpid;
          ns_1 = ns_1_St_1_Parkingpid;
          nr_1 = nr_1_St_1_Parkingpid;
          break;
        case Line_follower__St_1_Parkingstart:
          count_St_1_Parkingstart = count_1;
          v_211 = sen[4];
          v_210 = sen[3];
          v_209 = sen[2];
          v_208 = sen[1];
          v_207 = sen[0];
          v_204 = (self->v_203-1);
          if (sec) {
            v_206 = v_204;
          } else {
            v_206 = self->v_205;
          };
          v_201 = (r_2||r_1);
          if (self->v_200) {
            v_202 = true;
          } else {
            v_202 = v_201;
          };
          if (v_202) {
            time_1 = 7;
          } else {
            time_1 = v_206;
          };
          v_198 = (ir_right==0);
          if (v_198) {
            v_199 = 1;
          } else {
            v_199 = 0;
          };
          bound_right_St_1_Parkingstart = (bound_right_1+v_199);
          v_196 = (ir_left==0);
          if (v_196) {
            v_197 = 1;
          } else {
            v_197 = 0;
          };
          bound_left_St_1_Parkingstart = (bound_left_1+v_197);
          dir_St_2_Black_St_1_Parkingstart = 2;
          v_195 = (time_1==0);
          if (v_195) {
            nr_1_St_1_Parkingstart = true;
            ns_1_St_1_Parkingstart = Line_follower__St_1_Parkingcheck;
          } else {
            nr_1_St_1_Parkingstart = false;
            ns_1_St_1_Parkingstart = Line_follower__St_1_Parkingstart;
          };
          r_3 = (r_2||r_1);
          if (r_3) {
            Line_follower__pid_reset(&self->pid_5);
          };
          Line_follower__pid_step(v_207, v_208, v_209, v_210, v_211,
                                  &Line_follower__pid_out_st, &self->pid_5);
          v_l_St_2_Black_St_1_Parkingstart = Line_follower__pid_out_st.v_l;
          v_r_St_2_Black_St_1_Parkingstart = Line_follower__pid_out_st.v_r;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parkingstart;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parkingstart;
          dir_St_2_Black = dir_St_2_Black_St_1_Parkingstart;
          count = count_St_1_Parkingstart;
          bound_left = bound_left_St_1_Parkingstart;
          bound_right = bound_right_St_1_Parkingstart;
          ns_1 = ns_1_St_1_Parkingstart;
          nr_1 = nr_1_St_1_Parkingstart;
          break;
        case Line_follower__St_1_Parkingcheck:
          bound_right_St_1_Parkingcheck = bound_right_1;
          bound_left_St_1_Parkingcheck = bound_left_1;
          count_St_1_Parkingcheck = count_1;
          dir_St_2_Black_St_1_Parkingcheck = 0;
          v_r_St_2_Black_St_1_Parkingcheck = 0;
          v_l_St_2_Black_St_1_Parkingcheck = 0;
          if (true) {
            v_192 = true;
          } else {
            v_192 = false;
          };
          if (true) {
            v_191 = Line_follower__St_1_Parkingrestart;
          } else {
            v_191 = Line_follower__St_1_Parkingcheck;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parkingcheck;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parkingcheck;
          dir_St_2_Black = dir_St_2_Black_St_1_Parkingcheck;
          count = count_St_1_Parkingcheck;
          bound_left = bound_left_St_1_Parkingcheck;
          v_189 = (bound_left==0);
          bound_right = bound_right_St_1_Parkingcheck;
          v_190 = (bound_right==0);
          if (v_190) {
            v_194 = true;
          } else {
            v_194 = v_192;
          };
          if (v_189) {
            nr_1_St_1_Parkingcheck = true;
          } else {
            nr_1_St_1_Parkingcheck = v_194;
          };
          if (v_190) {
            v_193 = Line_follower__St_1_Parkright;
          } else {
            v_193 = v_191;
          };
          if (v_189) {
            ns_1_St_1_Parkingcheck = Line_follower__St_1_Parkleft;
          } else {
            ns_1_St_1_Parkingcheck = v_193;
          };
          ns_1 = ns_1_St_1_Parkingcheck;
          nr_1 = nr_1_St_1_Parkingcheck;
          break;
        case Line_follower__St_1_Parkleft:
          bound_right_St_1_Parkleft = bound_right_1;
          bound_left_St_1_Parkleft = bound_left_1;
          count_St_1_Parkleft = count_1;
          v_186 = (self->v_185-1);
          if (sec) {
            v_188 = v_186;
          } else {
            v_188 = self->v_187;
          };
          v_183 = (r_2||r_1);
          if (self->v_182) {
            v_184 = true;
          } else {
            v_184 = v_183;
          };
          if (v_184) {
            time_2 = 2;
          } else {
            time_2 = v_188;
          };
          dir_St_2_Black_St_1_Parkleft = 0;
          v_r_St_2_Black_St_1_Parkleft = 0;
          v_l_St_2_Black_St_1_Parkleft = 0;
          v_181 = (time_2==0);
          if (v_181) {
            nr_1_St_1_Parkleft = true;
            ns_1_St_1_Parkleft = Line_follower__St_1_Backleft;
          } else {
            nr_1_St_1_Parkleft = false;
            ns_1_St_1_Parkleft = Line_follower__St_1_Parkleft;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parkleft;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parkleft;
          dir_St_2_Black = dir_St_2_Black_St_1_Parkleft;
          count = count_St_1_Parkleft;
          bound_left = bound_left_St_1_Parkleft;
          bound_right = bound_right_St_1_Parkleft;
          ns_1 = ns_1_St_1_Parkleft;
          nr_1 = nr_1_St_1_Parkleft;
          break;
        case Line_follower__St_1_Parkright:
          bound_right_St_1_Parkright = bound_right_1;
          bound_left_St_1_Parkright = bound_left_1;
          count_St_1_Parkright = count_1;
          v_178 = (self->v_177-1);
          if (sec) {
            v_180 = v_178;
          } else {
            v_180 = self->v_179;
          };
          v_175 = (r_2||r_1);
          if (self->v_174) {
            v_176 = true;
          } else {
            v_176 = v_175;
          };
          if (v_176) {
            time_3 = 2;
          } else {
            time_3 = v_180;
          };
          dir_St_2_Black_St_1_Parkright = 0;
          v_r_St_2_Black_St_1_Parkright = 0;
          v_l_St_2_Black_St_1_Parkright = 0;
          v_173 = (time_3==0);
          if (v_173) {
            nr_1_St_1_Parkright = true;
            ns_1_St_1_Parkright = Line_follower__St_1_Backright;
          } else {
            nr_1_St_1_Parkright = false;
            ns_1_St_1_Parkright = Line_follower__St_1_Parkright;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parkright;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parkright;
          dir_St_2_Black = dir_St_2_Black_St_1_Parkright;
          count = count_St_1_Parkright;
          bound_left = bound_left_St_1_Parkright;
          bound_right = bound_right_St_1_Parkright;
          ns_1 = ns_1_St_1_Parkright;
          nr_1 = nr_1_St_1_Parkright;
          break;
        case Line_follower__St_1_Parkingrestart:
          count_St_1_Parkingrestart = count_1;
          dir_St_2_Black_St_1_Parkingrestart = 0;
          v_r_St_2_Black_St_1_Parkingrestart = 0;
          v_l_St_2_Black_St_1_Parkingrestart = 0;
          bound_right_St_1_Parkingrestart = 0;
          bound_left_St_1_Parkingrestart = 0;
          v_170 = (self->v_169-1);
          if (sec) {
            v_172 = v_170;
          } else {
            v_172 = self->v_171;
          };
          v_167 = (r_2||r_1);
          if (self->v_166) {
            v_168 = true;
          } else {
            v_168 = v_167;
          };
          if (v_168) {
            time_4 = 2;
          } else {
            time_4 = v_172;
          };
          if (true) {
            nr_1_St_1_Parkingrestart = true;
          } else {
            nr_1_St_1_Parkingrestart = false;
          };
          if (true) {
            ns_1_St_1_Parkingrestart = Line_follower__St_1_Parkingstart;
          } else {
            ns_1_St_1_Parkingrestart = Line_follower__St_1_Parkingrestart;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parkingrestart;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parkingrestart;
          dir_St_2_Black = dir_St_2_Black_St_1_Parkingrestart;
          count = count_St_1_Parkingrestart;
          bound_left = bound_left_St_1_Parkingrestart;
          bound_right = bound_right_St_1_Parkingrestart;
          ns_1 = ns_1_St_1_Parkingrestart;
          nr_1 = nr_1_St_1_Parkingrestart;
          break;
        case Line_follower__St_1_Backright:
          bound_right_St_1_Backright = bound_right_1;
          bound_left_St_1_Backright = bound_left_1;
          count_St_1_Backright = count_1;
          v_163 = (self->v_162-1);
          if (sec) {
            v_165 = v_163;
          } else {
            v_165 = self->v_164;
          };
          v_160 = (r_2||r_1);
          if (self->v_159) {
            v_161 = true;
          } else {
            v_161 = v_160;
          };
          if (v_161) {
            time_5 = 2;
          } else {
            time_5 = v_165;
          };
          dir_St_2_Black_St_1_Backright = 5;
          v_r_St_2_Black_St_1_Backright = 63;
          v_l_St_2_Black_St_1_Backright = 40;
          v_158 = (time_5==0);
          if (v_158) {
            nr_1_St_1_Backright = true;
            ns_1_St_1_Backright = Line_follower__St_1_Parked;
          } else {
            nr_1_St_1_Backright = false;
            ns_1_St_1_Backright = Line_follower__St_1_Backright;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Backright;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Backright;
          dir_St_2_Black = dir_St_2_Black_St_1_Backright;
          count = count_St_1_Backright;
          bound_left = bound_left_St_1_Backright;
          bound_right = bound_right_St_1_Backright;
          ns_1 = ns_1_St_1_Backright;
          nr_1 = nr_1_St_1_Backright;
          break;
        case Line_follower__St_1_Backleft:
          bound_right_St_1_Backleft = bound_right_1;
          bound_left_St_1_Backleft = bound_left_1;
          count_St_1_Backleft = count_1;
          v_155 = (self->v_154-1);
          if (sec) {
            v_157 = v_155;
          } else {
            v_157 = self->v_156;
          };
          v_152 = (r_2||r_1);
          if (self->v_151) {
            v_153 = true;
          } else {
            v_153 = v_152;
          };
          if (v_153) {
            time_6 = 2;
          } else {
            time_6 = v_157;
          };
          dir_St_2_Black_St_1_Backleft = 6;
          v_r_St_2_Black_St_1_Backleft = 40;
          v_l_St_2_Black_St_1_Backleft = 63;
          v_150 = (time_6==0);
          if (v_150) {
            nr_1_St_1_Backleft = true;
            ns_1_St_1_Backleft = Line_follower__St_1_Parked;
          } else {
            nr_1_St_1_Backleft = false;
            ns_1_St_1_Backleft = Line_follower__St_1_Backleft;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_Backleft;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Backleft;
          dir_St_2_Black = dir_St_2_Black_St_1_Backleft;
          count = count_St_1_Backleft;
          bound_left = bound_left_St_1_Backleft;
          bound_right = bound_right_St_1_Backleft;
          ns_1 = ns_1_St_1_Backleft;
          nr_1 = nr_1_St_1_Backleft;
          break;
        case Line_follower__St_1_Parked:
          bound_right_St_1_Parked = bound_right_1;
          bound_left_St_1_Parked = bound_left_1;
          count_St_1_Parked = count_1;
          dir_St_2_Black_St_1_Parked = 0;
          v_r_St_2_Black_St_1_Parked = 0;
          v_l_St_2_Black_St_1_Parked = 0;
          nr_1_St_1_Parked = false;
          ns_1_St_1_Parked = Line_follower__St_1_Parked;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parked;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parked;
          dir_St_2_Black = dir_St_2_Black_St_1_Parked;
          count = count_St_1_Parked;
          bound_left = bound_left_St_1_Parked;
          bound_right = bound_right_St_1_Parked;
          ns_1 = ns_1_St_1_Parked;
          nr_1 = nr_1_St_1_Parked;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_2_Black;
      _out->v_r = v_r_St_2_Black;
      _out->dir = dir_St_2_Black;
      self->v_244 = bound_right;
      self->v_243 = bound_left;
      self->v_242 = count;
      self->v_241 = nr_1;
      self->v_149 = ns_1;
      break;
    default:
      break;
  };
  self->pnr_2 = nr_2;
  self->ck = ns_2;
  switch (ck_1) {
    case Line_follower__St_2_Black:
      switch (ck_5) {
        case Line_follower__St_1_Stop:
          self->v_234 = time;
          self->v_232 = time;
          self->v_229 = false;
          break;
        case Line_follower__St_1_Parkingstart:
          self->v_205 = time_1;
          self->v_203 = time_1;
          self->v_200 = false;
          break;
        case Line_follower__St_1_Parkleft:
          self->v_187 = time_2;
          self->v_185 = time_2;
          self->v_182 = false;
          break;
        case Line_follower__St_1_Parkright:
          self->v_179 = time_3;
          self->v_177 = time_3;
          self->v_174 = false;
          break;
        case Line_follower__St_1_Parkingrestart:
          self->v_171 = time_4;
          self->v_169 = time_4;
          self->v_166 = false;
          break;
        case Line_follower__St_1_Backright:
          self->v_164 = time_5;
          self->v_162 = time_5;
          self->v_159 = false;
          break;
        case Line_follower__St_1_Backleft:
          self->v_156 = time_6;
          self->v_154 = time_6;
          self->v_151 = false;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };;
}

