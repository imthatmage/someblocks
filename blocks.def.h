//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "$HOME/someblocks/scripts/nettraf",	5, 0},
	{"", "$HOME/someblocks/scripts/internet",	30, 0},
	{"", "$HOME/someblocks/scripts/weather",	60, 0},
	{"", "$HOME/someblocks/scripts/volume", 0, 2},
	{"", "$HOME/someblocks/scripts/brightness", 0, 3},
	{"", "$HOME/someblocks/scripts/temp", 5, 0},
	{" ", "$HOME/someblocks/scripts/ram",	15, 0},
	{" ", "$HOME/someblocks/scripts/disk",	60, 0},
	{"", "$HOME/someblocks/scripts/bat", 30, 0},
	{"", "$HOME/someblocks/scripts/date", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
