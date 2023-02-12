/**************************************************************************
 *   main.cpp  -  This file is part of KeyCode.                           *
 *                                                                        *
 *                                                                        *
 *   KeyCode is free software: you can redistribute it and/or modify      *
 *   it under the terms of the GNU General Public License as published    *
 *   by the Free Software Foundation, either version 3 of the License,    *
 *   or (at your option) any later version.                               *
 *                                                                        *
 *   KeyCode is distributed in the hope that it will be useful,  *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty          *
 *   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.              *
 *   See the GNU General Public License for more details.                 *
 *                                                                        *
 *   You should have received a copy of the GNU General Public License    *
 *   along with this program.  If not, see http://www.gnu.org/licenses/.  *
 *                                                                        *
 **************************************************************************/

#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

void
gui();

void
cli(int *x);

int
main(int argc, char* argv[])
{
  int c, input;

  if((c = getopt(argc, argv, "v:")) != -1)
  {
    switch(c)
    {
      case 'v':
        if(optarg)
        {
	        input = *optarg;
	        cli(&input);
        }
        break;
      default:
        printf("Use -v to get char in prompt \n");
	      break;
    }
  } else
    gui();

  return 0;
}

void
gui()
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
    if ((input) && (input != KEY_MOUSE))
    {
      mvwprintw(ans, 1, 2, "Keycode of %c = %d", input, input);
      box(ans, 0, 0);
    }
    else if (input == KEY_MOUSE )
      if (getmouse(&event) == OK)
	      if (event.bstate & BUTTON1_CLICKED)
	        goto exit;
    
    wrefresh(mainwin);
    wrefresh(hint);
    wrefresh(winbox);
    wrefresh(ans);
  } while (true);

  //free memory
  exit:
  delwin(ans);
  delwin(hint);
  delwin(winbox);
  delwin(mainwin);
  endwin();
}

void
cli(int *x){
  printf("Keycode : %d \n", *x);
}
