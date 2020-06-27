//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { "",       "music",        0,                   11},
    /* { "",       arch_update",     1800,                   8}, */
    { " ",       "volume",        0,                   10},
    /* { "",       weather",       1800,                   5}, */
    { "",       "brightness",     0,                     9},
    { "",     "nmail",         180,                      12},
    /* { "",     "torrent",         20,                      7}, */
    /* { "",       "news",          180,                     6}, */
    { " ",       "cpu",          10,                     13},
    /* { "",       "nettraf",       5,                     16}, */ 
    { "",       "memory",          10,                     14},
    /* { "",     "internet",         5,                      4}, */
    { " ",       "battery",       20,                     9},
    { "",     "ddate",         300,                      17},
    { "",     "dtime",         60,                      18}
};

//sets delimiter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
