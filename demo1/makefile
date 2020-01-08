#通过VPATH告知文件搜寻路径是告知的make，这利于它隐式推导时的文件搜索，
#而不是告知的gcc，所以还是得通过-I指定gcc预编译时头文件搜索路径
VPATH = ./Func:./MyPrint
OBJS = Func1.o MyPrintln.o main.o
CINCLUDES = -I./Func -I./MyPrint
CFLAGS = -Wall
TARGET = demo1
$(TARGET):$(OBJS)
	gcc $(CFLAGS) $^ -o $@ $(CINCLUDES)
#隐私推到这里.o名字需要和.c相同
Func1.o: Func1.h
#	gcc -C Func1.c -o func.o
MyPrintln.o:MyPrintln.h
#	gcc -C MyPrintln.c -o myprintln.o
#$(TARGET):$(OBJS)
#	gcc $(CFLAGS) $^ -o $@ $(CINCLUDES)
.PHONY:
clean:
	rm -f $(OBJS) $(TARGET)
