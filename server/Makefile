

CPPFLAGS  =   -ggdb -DCORE_DUMP  -pthread -Wall
CPPFLAGS += -fno-strict-aliasing -D__STDC_FORMAT_MACROS

CPPFLAGS += -I./
CPPFLAGS += -I../include
CPPFLAGS += -I../public/socks5lib/
CPPFLAGS += -I../public/xutil/
CPPFLAGS += -I../public/netpool/

CPPFLAGS += -rdynamic -fPIC

LDFLAGS += -lpthread
#LDFLAGS += -L../public/socks5lib -lsocks5common
LDFLAGS += -L../public/netpool -lnetpool
LDFLAGS += -L../public/xutil -lxutil

SOURCES = $(wildcard ./*.cpp ../public/socks5lib/*.cpp)
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))
DEPENDS = $(patsubst %.cpp,%.d,$(SOURCES))
ASMFILE = $(patsubst %.cpp,%.s,$(SOURCES))

.PHONY: all clean

#target = libutil.so
target = socks_server
all: $(target)

$(target): $(OBJECTS)	
	g++ -o $(target)  $(OBJECTS)  $(LDFLAGS)
#	mv $(target) $(LIB_LOCATION)

clean:
	@rm -fr $(OBJECTS) $(DEPENDS) $(ASMFILE) $(target)
	@rm -fr *.d *.o *.s 
