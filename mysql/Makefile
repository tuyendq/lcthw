CFLAGS=-Wall    -g
CFLAGS+=$(shell mysql_config --cflags)
LDLIBS+=$(shell mysql_config --libs)
all:	test_mysql
clean:
		rm -f test_mysql
