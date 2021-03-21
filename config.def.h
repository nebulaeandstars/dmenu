/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12",
    "JoyPixels:pixelsize=12:antialias=true:autohint=true",
    "NotoColorEmoji:pixelsize=12:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#a5a5a5", "#2d2d2d" },
	[SchemeSel] = { "#2d2d2d", "#ffd8ff" },
 	[SchemeSelHighlight] = { "#a5a5a5", "#ffd8ff" },
 	[SchemeNormHighlight] = { "#ffffff", "#2d2d2d" },
	[SchemeOut] = { "#2d2d2d", "#d8ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
