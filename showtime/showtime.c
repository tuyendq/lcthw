/* A simple use of stat. From plural sight course */
/* No error checking */

#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	struct stat sb; /* The stat buffer */
	
	stat("foo", &sb);

	printf("last accessed: %s", ctime(&sb.st_atime));
	printf("last modified: %s", ctime(&sb.st_mtime));
	printf("last changed: %s", ctime(&sb.st_ctime));

	return 0;
}
