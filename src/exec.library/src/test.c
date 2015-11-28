
typedef volatile short* phww;
typedef volatile int* phwl;

#define vposr (*(phwl)0xdff004)
#define color0 (*(phww)0xdff180)
#define potgor (*(phww)0xdff016)

void test(int line)
{
	int v;
	do  v = vposr >> 8 & 0x1ff;  while (v != line);
}