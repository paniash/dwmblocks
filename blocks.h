//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { "",       "dwm_music",        0,                   11},
    /* { "",       "dwm_arch_update",     1800,                   8}, */
    { " ",       "dwm_volume",        0,                   10},
    /* { "",       "dwm_weather",       3600,                   5}, */
    { "  ",       "dwm_brightness",     0,                     9},
    { "",     "dwm_mail",         180,                      12},
    /* { "",       "dwm_news",          180,                     6}, */
    { " ",       "dwm_cpu",          10,                     13},
    /* { "",       "dwm_nettraf",       5,                     16}, */
    { "",       "dwm_memory",          10,                     14},
    /* { "",     "dwm_internet",         5,                      4}, */
    { " ",       "dwm_battery",       20,                     0},
    { "  ",     "dwm_date",         300,                      0},
    /* { "  ",     "dwm_time",         60,                      0} */
    { "  ",     "dwm_time",         60,                      0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
