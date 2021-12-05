#if !(defined myLib1) || !(defined myLib2)

#ifdef myLib2
#define myLib1
#endif

int f(int, int);
void circle(int);

#define myLib2
#endif