
typedef volatile short* phww;
typedef volatile int* phwl;

#define vposr (*(phwl)0xdff004)
#define color0 (*(phww)0xdff180)
#define potgor (*(phww)0xdff016)


static void waitline(int);

void Blink(short col1, short col2, int delay) {
  int count = 0;

  while ((potgor & 1<<10) == 0) {
    waitline(0);    color0 = col1;
    waitline(150);  color0 = col2;

    if (++count == delay) {
      count = col1;
      col1 = col2;
      col2 = count;
      count = 0;
    }
  }
}


static void waitline(int line) {
  int v;
  do  v = vposr>>8 & 0x1ff;  while (v != line);
}
