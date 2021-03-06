/*
 * strchr --- search a string for a character
 *
 * We supply this routine for those systems that aren't standard yet.
 */

char *
strchr (str, c)
register const char *str, c;
{
	for (; *str; str++)
		if (*str == c)
			return (char *) str;

	return NULL;
}

/*
 * strrchr --- find the last occurrence of a character in a string
 *
 * We supply this routine for those systems that aren't standard yet.
 */

char *
strrchr (str, c)
register const char *str, c;
{
	register const char *save = NULL;

	for (; *str; str++)
		if (*str == c)
			save = str;

	return (char *) save;
}
