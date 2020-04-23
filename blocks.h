//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    /* { "",     "dwm_network",         5,                      4}, */
    /* { " ",       "dwm_music",        0,                   11}, */
    { "",       "dwm_volume",        1,                   10},
    { "",       "dwm_weather",       18000,                   5},
    /* { " ",       "dwm_brightness",     0,                     9}, */
    { " ",       "dwm_cpu",          10,                     13},
    { " ",       "dwm_memory",          10,                     14},
    /* { " ",       "dwm_news",          0,                     6}, */
    { " ",       "dwm_battery",       20,                     0},
    { "  ",     "dwm_date",         18000,                      0},
    /* { "  ",     "dwm_time",         60,                      0} */
    { "  ",     "dwm_time",         60,                      0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
