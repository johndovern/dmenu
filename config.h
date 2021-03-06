/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "monospace:pixelsize=12",
  "IPAGothic:pixelsize=18:antialias=true:autohint=true",
  "Source Han Sans JP:pixelsize=18:antialias=true:autohint=true",
  "M+ 1c:pixelsize=18:antialias=true:autohint=true",
  "JoyPixels:pixelsize=14:antialias=true:autohint=true"
};
static const unsigned int bgalpha = OPAQUE;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#eeeeee", "#212121" },
	[SchemeSel] = { "#eeeeee", "#f44336" },
	[SchemeOut] = { "#212121", "#f44336" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

