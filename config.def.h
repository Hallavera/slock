/* user and group to drop privileges to */
static const char *user  = "net9";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
  [INIT] = "black",       /* after initialization */
  [INPUT] = "#005577",    /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
  { "INIT",       STRING,  &colorname[INIT] },
  { "INPUT",       STRING,  &colorname[INPUT] },
  { "FAILED",       STRING,  &colorname[FAILED] },
};


/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;


/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 3;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "shutdown now";

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
/* grid width and height for right center alignment */
static const int logow = 11;
static const int logoh = 13;

static XRectangle rectangles[4] = {
	/* x    y       w       h */
	{ 1,    0,      1,      12 },
	{ 8,    0,      1,      12 },
	{ 2,    0,      6,      1 },
	{ 2,    11,     6,      1 },
};

/*Enable blur*/
//#define BLUR
/*Set blur radius*/
//static const int blurRadius=5;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=15;
