#include <exec\exec.h>
#include <proto\exec.h>

VOID AbortIO(struct IORequest *request)
{
	char t = 0;
	t = 10 % 3;
}