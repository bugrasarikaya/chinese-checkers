#include<allegro5/allegro.h>
#include<allegro5/allegro_primitives.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<math.h>
double peg[121][5];
double cx_1, cx_2;
double cy_1, cy_2;
double r, half_gap;
double cx_base, cy_base;
int i, j, k;
int record_j;
int count_k = 0;
int count_j = 0;
double r = 20, half_gap = 5;
int mem_color_peg_r, mem_color_peg_g, mem_color_peg_b;
int long_shift = 0;
int mem_k[666];
int mem_j[666];
void function_inner_entry(int i, double cx, double cy) {
	peg[i][0] = cx;
	peg[i][1] = cy;
	peg[i][2] = 255;
	peg[i][3] = 255;
	peg[i][4] = 255;
}
void function_base_in(double cx, double cy) {
	cx_base = cx;
	cy_base = cy;
}
void function_base_out_1() {
	cx_1 = cx_base;
	cy_1 = cy_base;
}
void function_base_out_2() {
	cx_2 = cx_base;
	cy_2 = cy_base;
}
void function_bottom_left(double cx, double cy) {
	cx_1 = cx - (r + half_gap);
	cy_1 = cy + sqrt(3)*(r + half_gap);
}
void function_bottom_right(double cx, double cy) {
	cx_2 = cx + (r + half_gap);
	cy_2 = cy + sqrt(3)*(r + half_gap);
}
void function_right_1(double cx) {
	cx_1 = cx + 2 * (r + half_gap);
}
void function_right_2(double cx) {
	cx_2 = cx + 2 * (r + half_gap);
}
void function_entry_top_1() {
	for (i = 0; i <= 110; i++) {
		if (i == 0) {
			cx_1 = 400;
			cy_1 = 40;
			function_inner_entry(i, cx_1, cy_1);
		}
		else if (i >= 1 && i <= 2) {
			if (i == 1) {
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 3 && i <= 5) {
			if (i == 3) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);

			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 6 && i <= 9) {
			if (i == 6) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 14 && i <= 18) {
			if (i == 14) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 26 && i <= 31) {
			if (i == 26) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 37 && i <= 43) {
			if (i == 37) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 47 && i <= 54) {
			if (i == 47) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 56 && i <= 64) {
			if (i == 56) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 65 && i <= 74) {
			if (i == 65) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 75 && i <= 85) {
			if (i == 75) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 86 && i <= 97) {
			if (i == 86) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_base_in(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
		else if (i >= 98 && i <= 110) {
			if (i == 98) {
				function_base_out_1();
				function_bottom_left(cx_1, cy_1);
				function_inner_entry(i, cx_1, cy_1);
			}
			else {
				function_right_1(cx_1);
				function_inner_entry(i, cx_1, cy_1);
			}
		}
	}
}
void function_entry_top_2() {
	for (i = 10; i <= 120; i++) {
		if (i == 10) {
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 11 && i <= 22) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 23) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 24 && i <= 34) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 35) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 36 && i <= 45) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 46) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 47 && i <= 55) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 56) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 57 && i <= 64) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 66) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 67 && i <= 73) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 77) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 78 && i <= 83) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 89) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 90 && i <= 94) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 102) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 103 && i <= 106) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 111) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 112 && i <= 114) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 115) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i >= 116 && i <= 117) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 118) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_base_in(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 119) {
			function_right_2(cx_2);
			function_inner_entry(i, cx_2, cy_2);
		}
		else if (i == 120) {
			function_base_out_2();
			function_bottom_right(cx_2, cy_2);
			function_inner_entry(i, cx_2, cy_2);
		}
	}
}
void establish_starting_board(void) {
	for (int i = 0; i <= 9; i++) {
		peg[i][2] = 0;
		peg[i][3] = 0;
		peg[i][4] = 255;
	}
	for (i = 10; i <= 110; i++) {
		peg[i][2] = 255;
		peg[i][3] = 255;
		peg[i][4] = 255;
	}
	for (i = 111; i <= 120; i++) {
		peg[i][2] = 255;
		peg[i][3] = 0;
		peg[i][4] = 0;
	}
}
void set_board(void) {
	for (int i = 0; i <= 255; i++) {
		al_draw_filled_circle(peg[i][0], peg[i][1], r, al_map_rgb(peg[i][2], peg[i][3], peg[i][4]));
	}
}
void mem_color_peg_in(int i) {
	mem_color_peg_r = peg[i][2];
	mem_color_peg_g = peg[i][3];
	mem_color_peg_b = peg[i][4];
}
void mem_color_peg_out(int i) {
	peg[i][2] = mem_color_peg_r;
	peg[i][3] = mem_color_peg_g;
	peg[i][4] = mem_color_peg_b;
}
void peg_red(int mem_selected_peg) {
	peg[mem_selected_peg][2] = 255;
	peg[mem_selected_peg][3] = 0;
	peg[mem_selected_peg][4] = 0;
}
void peg_green(int i) {
	peg[i][2] = 0;
	peg[i][3] = 255;
	peg[i][4] = 0;
}
void peg_blue(int mem_selected_peg) {
	peg[mem_selected_peg][2] = 0;
	peg[mem_selected_peg][3] = 0;
	peg[mem_selected_peg][4] = 255;
}
void peg_white(int mem_selected_peg) {
	peg[mem_selected_peg][2] = 255;
	peg[mem_selected_peg][3] = 255;
	peg[mem_selected_peg][4] = 255;
}
void meg_color_peg_666(void) {
	mem_color_peg_r = 666;
	mem_color_peg_g = 666;
	mem_color_peg_b = 666;
}
void function_mem_k(void) {
	for (int a = 0; a <= 665; a++) {
		mem_k[a] = 666;
	}
}
void function_mem_j(void) {
	for (int a = 0; a <= 665; a++) {
		mem_j[a] = 666;
	}
}
void clear(void) {
	function_mem_k();
	function_mem_j();
	count_k = 0;
	count_j = 0;
	record_j = 0;
}
void record() {
	record_j = 0;
	for (int b = 0; b <= count_j; b++) {
		if (j == *(mem_j + b)) {
			record_j = 1;
		}
		else if (j != *(mem_j + b)) {
			if (record_j == 0) record_j = 0;
		}
	}
}
void function_long_shift(int i, int mem_selected_peg) {
	for (j = 0; j <= 120; j++) {
		if ((peg[j][2] == 255 && peg[j][3] == 0 && peg[j][4] == 0) || (peg[j][2] == 0 && peg[j][3] == 0 && peg[j][4] == 255)) {
			record();
			if (!record_j) {
				if (peg[mem_selected_peg][0] == peg[j][0] + (r + half_gap) && peg[mem_selected_peg][1] == peg[j][1] + sqrt(3) * (r + half_gap)) {
					//nortwest
					if (peg[i][0] + (r + half_gap) == peg[j][0] && peg[i][1] + sqrt(3) * (r + half_gap) == peg[j][1]) {
						long_shift = 1;
						clear();
						return;
					}
					else {
						for (k = 0; k <= 120; k++) {
							if (peg[k][0] + (r + half_gap) == peg[j][0] && peg[k][1] + sqrt(3) * (r + half_gap) == peg[j][1]) {
								if (peg[k][2] == 255 && peg[k][3] == 255 && peg[k][4] == 255) {
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									count_k++;
									count_j++;
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									function_long_shift(i, k);
									if (long_shift == 1) return;
									mem_j[count_j] = 666;
									count_k--;
									count_j--;
									k = mem_k[count_k];
									j = mem_j[count_j];
								}
							}
						}
					}
				}
				else if (peg[j][0] == peg[mem_selected_peg][0] + (r + half_gap) && peg[j][1] + sqrt(3) * (r + half_gap) == peg[mem_selected_peg][1]) {
					//northeast
					if (peg[i][0] == peg[j][0] + (r + half_gap) && peg[i][1] + sqrt(3) * (r + half_gap) == peg[j][1]) {
						long_shift = 1;
						clear();
						return;
					}
					else {
						for (k = 0; k <= 120; k++) {
							if (peg[k][0] == peg[j][0] + (r + half_gap) && peg[k][1] + sqrt(3) * (r + half_gap) == peg[j][1]) {
								if (peg[k][2] == 255 && peg[k][3] == 255 && peg[k][4] == 255) {
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									count_k++;
									count_j++;
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									function_long_shift(i, k);
									if (long_shift == 1) return;
									mem_j[count_j] = 666;
									count_k--;
									count_j--;
									k = mem_k[count_k];
									j = mem_j[count_j];
								}
							}
						}
					}
				}
				else if (peg[mem_selected_peg][0] == peg[j][0] + 2 * (r + half_gap) && peg[mem_selected_peg][1] == peg[j][1]) {
					//west
					if (peg[i][0] + 2 * (r + half_gap) == peg[j][0] && peg[i][1] == peg[j][1]) {
						long_shift = 1;
						clear();
						return;
					}
					else {
						for (k = 0; k <= 120; k++) {
							if (peg[k][0] + 2 * (r + half_gap) == peg[j][0] && peg[k][1] == peg[j][1]) {
								if (peg[k][2] == 255 && peg[k][3] == 255 && peg[k][4] == 255) {
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									count_k++;
									count_j++;
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									function_long_shift(i, k);
									if (long_shift == 1) return;
									mem_j[count_j] = 666;
									count_k--;
									count_j--;
									k = mem_k[count_k];
									j = mem_j[count_j];
								}
							}
						}
					}
				}
				else if (peg[j][0] == peg[mem_selected_peg][0] + 2 * (r + half_gap) && peg[j][1] == peg[mem_selected_peg][1]) {
					//east
					if (peg[i][0] == peg[j][0] + 2 * (r + half_gap) && peg[i][1] == peg[j][1]) {
						long_shift = 1;
						clear();
						return;
					}
					else {
						for (k = 0; k <= 120; k++) {
							if (peg[k][0] == peg[j][0] + 2 * (r + half_gap) && peg[k][1] == peg[j][1]) {
								if (peg[k][2] == 255 && peg[k][3] == 255 && peg[k][4] == 255) {
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									count_k++;
									count_j++;
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									function_long_shift(i, k);
									if (long_shift == 1) return;
									mem_j[count_j] = 666;
									count_k--;
									count_j--;
									k = mem_k[count_k];
									j = mem_j[count_j];
								}
							}
						}
					}
				}
				else if (peg[mem_selected_peg][0] == peg[j][0] + (r + half_gap) && peg[mem_selected_peg][1] + sqrt(3) * (r + half_gap) == peg[j][1]) {
					//southwest
					if (peg[i][0] + (r + half_gap) == peg[j][0] && peg[i][1] == peg[j][1] + sqrt(3)*(r + half_gap)) {
						long_shift = 1;
						clear();
						return;
					}
					else {
						for (k = 0; k <= 120; k++) {
							if (peg[k][0] + (r + half_gap) == peg[j][0] && peg[k][1] == peg[j][1] + sqrt(3) * (r + half_gap)) {
								if (peg[k][2] == 255 && peg[k][3] == 255 && peg[k][4] == 255) {
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									count_k++;
									count_j++;
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									function_long_shift(i, k);
									if (long_shift == 1) return;
									mem_j[count_j] = 666;
									count_k--;
									count_j--;
									k = mem_k[count_k];
									j = mem_j[count_j];
								}
							}
						}
					}
				}
				else if (peg[j][0] == peg[mem_selected_peg][0] + (r + half_gap) && peg[j][1] == peg[mem_selected_peg][1] + sqrt(3) * (r + half_gap)) {
					//southeast
					if (peg[i][0] == peg[j][0] + (r + half_gap) && peg[i][1] == peg[j][1] + sqrt(3) * (r + half_gap)) {
						long_shift = 1;
						clear();
						return;
					}
					else {
						for (k = 0; k <= 120; k++) {
							if (peg[k][0] == peg[j][0] + (r + half_gap) && peg[k][1] == peg[j][1] + sqrt(3) * (r + half_gap)) {
								if (peg[k][2] == 255 && peg[k][3] == 255 && peg[k][4] == 255) {
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									count_k++;
									count_j++;
									mem_k[count_k] = k;
									mem_j[count_j] = j;
									function_long_shift(i, k);
									if (long_shift == 1) return;
									mem_j[count_j] = 666;
									count_k--;
									count_j--;
									k = mem_k[count_k];
									j = mem_j[count_j];
								}
							}
						}
					}
				}
			}
		}
	}
}
int main() {
	double pos_x, pos_y;
	int selected_peg, mem_selected_peg, player_color_r, player_color_g, player_color_b;
	int mem = 0;
	int player = 1;
	int win = 0;
	player_color_r = player_color_g = player_color_b = 666;
	mem_color_peg_r = mem_color_peg_g = mem_color_peg_b = 666;
	mem_selected_peg = 666;
	function_mem_k();
	function_mem_j();
	function_entry_top_1();
	cx_2 = peg[14][0] - 8 * (r + half_gap);
	cy_2 = peg[14][1];
	function_entry_top_2();
	al_init();
	al_init_primitives_addon();
	al_init_font_addon();
	al_init_ttf_addon();
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_EVENT ev;
	ALLEGRO_FONT *font = al_load_font("PressStart2P.ttf", 50, 0);
	al_install_mouse();
	display = al_create_display(800, peg[120][1] + 40);
	event_queue = al_create_event_queue();
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_mouse_event_source());
	establish_starting_board();
	set_board();
	al_flip_display();
	while (1) {
		if (win != 1) {
			set_board();
			al_flip_display();
		}
		al_wait_for_event(event_queue, &ev);
		if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			break;
		}
		if (ev.type == ALLEGRO_EVENT_MOUSE_AXES) {
			pos_x = ev.mouse.x;
			pos_y = ev.mouse.y;
		}
		if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
			for (i = 0; i <= 120; i++) {
				if (pos_x + r >= peg[i][0] && pos_x <= peg[i][0] + r && pos_y + r >= peg[i][1] && pos_y <= peg[i][1] + r) {
					selected_peg = i;
					if (ev.mouse.button & 1) {
						if (player == 1) { player_color_r = 255; player_color_g = 0; player_color_b = 0; }
						else if (player == 2) { player_color_r = 0; player_color_g = 0; player_color_b = 255; }
						if (peg[i][2] == player_color_r && peg[i][3] == player_color_g && peg[i][4] == player_color_b) {
							if (mem != 1)mem_selected_peg = selected_peg;
							mem_color_peg_in(i);
							peg_green(i);
							mem = 1;
							if (selected_peg != mem_selected_peg) {
								if (player == 1) peg_red(mem_selected_peg);
								else if (player == 2) peg_blue(mem_selected_peg);
								mem_selected_peg = selected_peg;
							}
						}
						else if (peg[i][2] == 255 && peg[i][3] == 255 && peg[i][4] == 255 && mem_color_peg_r != 666) {
							if (peg[mem_selected_peg][0] == peg[i][0] + (r + half_gap) && peg[mem_selected_peg][1] == peg[i][1] + sqrt(3)*(r + half_gap)) {
								//northwest
								mem_color_peg_out(i);
								peg_white(mem_selected_peg);
								mem = 0;
								meg_color_peg_666();
								if (player == 1) player = 2;
								else if (player == 2) player = 1;
							}
							else if (peg[i][0] == peg[mem_selected_peg][0] + (r + half_gap) && peg[i][1] + sqrt(3)*(r + half_gap) == peg[mem_selected_peg][1]) {
								//northeast
								mem_color_peg_out(i);
								peg_white(mem_selected_peg);
								mem = 0;
								meg_color_peg_666();
								if (player == 1) player = 2;
								else if (player == 2) player = 1;
							}
							else if (peg[mem_selected_peg][0] == peg[i][0] + 2 * (r + half_gap) && peg[mem_selected_peg][1] == peg[i][1]) {
								//west
								mem_color_peg_out(i);
								peg_white(mem_selected_peg);
								mem = 0;
								meg_color_peg_666();
								if (player == 1) player = 2;
								else if (player == 2) player = 1;
							}
							else if (peg[i][0] == peg[mem_selected_peg][0] + 2 * (r + half_gap) && peg[i][1] == peg[mem_selected_peg][1]) {
								//east
								mem_color_peg_out(i);
								peg_white(mem_selected_peg);
								mem = 0;
								meg_color_peg_666();
								if (player == 1) player = 2;
								else if (player == 2) player = 1;
							}
							else if (peg[mem_selected_peg][0] == peg[i][0] + (r + half_gap) && peg[mem_selected_peg][1] + sqrt(3) * (r + half_gap) == peg[i][1]) {
								//southwest
								mem_color_peg_out(i);
								peg_white(mem_selected_peg);
								mem = 0;
								meg_color_peg_666();
								if (player == 1) player = 2;
								else if (player == 2) player = 1;
							}
							else if (peg[i][0] == peg[mem_selected_peg][0] + (r + half_gap) && peg[i][1] == peg[mem_selected_peg][1] + sqrt(3) * (r + half_gap)) {
								//southeast
								mem_color_peg_out(i);
								peg_white(mem_selected_peg);
								mem = 0;
								meg_color_peg_666();
								if (player == 1) player = 2;
								else if (player == 2) player = 1;
							}
							else {
								function_long_shift(i, mem_selected_peg);
								if (long_shift == 1) {
									mem_color_peg_out(i);
									peg_white(mem_selected_peg);
									mem = 0;
									meg_color_peg_666();
									long_shift = 0;
									if (player == 1) player = 2;
									else if (player == 2) player = 1;
								}
								else clear();
							}
						}
					}
				}
			}
		}
		if (peg[0][2] == 255 && peg[0][3] == 0 && peg[0][4] == 0) {
			if (peg[1][2] == 255 && peg[1][3] == 0 && peg[1][4] == 0) {
				if (peg[2][2] == 255 && peg[2][3] == 0 && peg[2][4] == 0) {
					if (peg[3][2] == 255 && peg[3][3] == 0 && peg[3][4] == 0) {
						if (peg[4][2] == 255 && peg[4][3] == 0 && peg[4][4] == 0) {
							if (peg[5][2] == 255 && peg[5][3] == 0 && peg[5][4] == 0) {
								if (peg[6][2] == 255 && peg[6][3] == 0 && peg[6][4] == 0) {
									if (peg[7][2] == 255 && peg[7][3] == 0 && peg[7][4] == 0) {
										if (peg[8][2] == 255 && peg[8][3] == 0 && peg[8][4] == 0) {
											if (peg[9][2] == 255 && peg[9][3] == 0 && peg[9][4] == 0) {
												al_clear_to_color(al_map_rgb(0, 0, 0));
												al_draw_text(font, al_map_rgb(255, 0, 0), 400, (peg[120][1] + 40) / 2, ALLEGRO_ALIGN_CENTRE, "RED WINS");
												al_flip_display();
												win = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (peg[111][2] == 0 && peg[111][3] == 0 && peg[111][4] == 255) {
			if (peg[112][2] == 0 && peg[112][3] == 0 && peg[112][4] == 255) {
				if (peg[113][2] == 0 && peg[113][3] == 0 && peg[113][4] == 255) {
					if (peg[114][2] == 0 && peg[114][3] == 0 && peg[114][4] == 255) {
						if (peg[115][2] == 0 && peg[115][3] == 0 && peg[115][4] == 255) {
							if (peg[116][2] == 0 && peg[116][3] == 0 && peg[116][4] == 255) {
								if (peg[117][2] == 0 && peg[117][3] == 0 && peg[117][4] == 255) {
									if (peg[118][2] == 0 && peg[118][3] == 0 && peg[118][4] == 255) {
										if (peg[119][2] == 0 && peg[119][3] == 0 && peg[119][4] == 255) {
											if (peg[120][2] == 0 && peg[120][3] == 0 && peg[120][4] == 255) {
												al_clear_to_color(al_map_rgb(0, 0, 0));
												al_draw_text(font, al_map_rgb(0, 0, 255), 400, (peg[120][1] + 40) / 2, ALLEGRO_ALIGN_CENTRE, "BLUE WINS");
												al_flip_display();
												win = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	al_destroy_font(font);
	al_destroy_display(display);
	al_uninstall_mouse();
	al_destroy_event_queue(event_queue);
	return 0;
}
