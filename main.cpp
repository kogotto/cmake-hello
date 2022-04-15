#include <ncurses.h>

int main() {
    initscr();

    printw("Hi");
    refresh();
    getch();

    endwin();
}
