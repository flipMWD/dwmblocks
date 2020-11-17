//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/                 /*Update Interval*/ /*Update Signal*/
	{ " ",      "",                                 0,          0},
	{ "",       "~/scripts/statusbar/cmusplayer",   5,          0},
	{ " ",     "~/scripts/statusbar/cpu_usage",    5,          0},
	{ "  ",     "~/scripts/statusbar/cpu_fan",      5,          0},
	{ "  ",     "~/scripts/statusbar/mem_used",     5,          0},
	{ "  ",     "~/scripts/statusbar/bandwidth -i ' ' -o ' '", 1, 0},
	{ "  ",     "~/scripts/statusbar/volume",       0,          10},
	{ "  ",     "~/scripts/statusbar/kb_layout",    0,          12},
	{ "  ",     "~/scripts/statusbar/date_clock",   5,          0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
