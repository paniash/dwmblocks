//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { "",     "smusic",        0,                  11},
    { "",     "pipevolume",    0,                  10},
    { "",     "brightness",    0,                  19},
    { "",     "battery",       20,                  9},
    { "",     "sdate",         0,                  17},  // updates through crontab
    { "",     "stime",         60,                 18}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
/* static char delim[] = "|"; */
/* static char delim[] = "❮"; */
// static char delim[] = "│";
static char delim[] = "│";
static unsigned int delimLen = 5;
