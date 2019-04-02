#include <ncurses.h>
#include <cstdio>

int main()
{
  // data type initial
  WINDOW *mainwin, *winbox, *hint, *ans;
  MEVENT event;
  int hintx,hinty, winboxx, winboxy, ansx, ansy;
  int winboxwidth, winboxheight;
  int hintwidth, hintheight;
  int answidth, ansheight;
  int input;

  // initial main window
  mainwin = initscr();

  // Window Box
  getmaxyx(mainwin, winboxy, winboxx);
  winboxwidth = 37;
  winboxheight = 3;
  winboxy = (winboxy - winboxheight) / 2;
  winboxx = (winboxx - winboxwidth) / 2;

  // hint box
  getmaxyx(mainwin, hinty, hintx);
  hintwidth = 26;
  hintheight = 3;
  hinty = 0;
  hintx = 0;

  //ans box
  getmaxyx(mainwin, ansy, ansx);
  answidth = 26;
  ansheight = 3;
  ansy = ((ansy - ansheight) / 2) + winboxheight;
  ansx = (ansx - answidth) / 2;

  // Setting
  raw();
  cbreak();
  noecho();
  curs_set(0);
  keypad(mainwin, true);
  nodelay(mainwin, true);
  mousemask(ALL_MOUSE_EVENTS, NULL);

  // Code && Logic
  winbox = subwin(mainwin, winboxheight, winboxwidth, winboxy, winboxx);
  hint = subwin(mainwin, hintheight, hintwidth, hinty, hintx);
  ans = subwin(mainwin, ansheight, answidth, ansy, ansx);
  do {
    wclear(ans);
    mvwaddstr(hint, 1, 2, "Click Anywhere to Exit");
    box(hint, 0, 0);
    mvwaddstr(winbox, 1, 2, "Press any key to get the keycode");
    box(winbox, 0, 0);
    nodelay(mainwin, false);
    input = getch();
    if ((input) && (input != KEY_MOUSE)) {
      mvwprintw(ans, 1, 2, "Keycode of %c = %d", input, input);
      box(ans, 0, 0);
    } else if (input == KEY_MOUSE ) {
      if (getmouse(&event) == OK) {
	if (event.bstate & BUTTON1_CLICKED) {
	  goto exit;
	}
      }
    }
    wrefresh(mainwin);
    wrefresh(hint);
    wrefresh(winbox);
    wrefresh(ans);
  } while (1);

  //free memory
 exit:
  delwin(ans);
  delwin(hint);
  delwin(winbox);
  delwin(mainwin);
  endwin();
  return 0;
}
