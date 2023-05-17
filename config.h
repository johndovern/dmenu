/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int exact = 0;       /* -e  option; if 1, dmenu only matches exactly */
static int instant = 0;
static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 960; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "monospace:size=12", "IPAGothic:pixelsize=16:antialias=true:autohint=true",
    "Source Han Sans JP:pixelsize=16:antialias=true:autohint=true",
    "M+ 1c:pixelsize=16:antialias=true:autohint=true",
    "JoyPixels:pixelsize=14:antialias=true:autohint=true"};
static const unsigned int bgalpha = OPAQUE;
static const unsigned int fgalpha = OPAQUE;
static const unsigned int bdalpha = OPAQUE;
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][3] = {
                    /*     fg         bg        bd       */
    [SchemeNorm]    = {"#eeeeee", "#212121", "#009688"},
    [SchemeSel]     = {"#eeeeee", "#f44336", "#009688"},
    [SchemeOut]     = {"#212121", "#f44336", "#009688"},
    [SchemeCursor]  = {"#eeeeee", "#212121", "#009688"},
};
static const unsigned int alphas[SchemeLast][3] = {
    /*		fgalpha		bgalphga	*/
    [SchemeNorm] = {fgalpha, bgalpha, bdalpha},
    [SchemeSel]  = {fgalpha, bgalpha, bdalpha},
    [SchemeOut]  = {fgalpha, bgalpha, bdalpha},
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

/*
 * -vi option; if nonzero, vi mode is always enabled and can be
 * accessed with the global_esc keysym + mod mask
 */
static unsigned int vi_mode = 1;
static unsigned int start_mode = 1;			/* mode to use when -vi is passed. 0 = insert mode, 1 = normal mode */
static Key global_esc = { XK_n, Mod1Mask };	/* escape key when vi mode is not enabled explicitly */
static Key quit_keys[] = {
	/* keysym	modifier */
	{ XK_q,		0 }
};
