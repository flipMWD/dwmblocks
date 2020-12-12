//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/         /*Interval*/ /*Signal*/
	{ "",       "cmusplayer",       5,           0},
	{ "",       "cpuusage",         5,           0},
	{ "",       "cpufan",           5,           0},
	{ "",       "memused",          5,           0},
	{ "",       "bandwidth",        1,           0},
	{ "",       "pavolume",         5,           10},
	{ "",       "kblayout",         5,           12},
	{ "",       "dateclock",        5,           0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 4;
