echo "static int idx = 0; int rand() { int list[6] = {8, 8, 7, 9 ,23 , 74};idx++; return (list[idx]); }" > /root/injector.c
gcc /root/injector.c -c -fPIC && gcc injector.o -shared -o /root/library.so
export LD_PRELOAD=/root/library.so
