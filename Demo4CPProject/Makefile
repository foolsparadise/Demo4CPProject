# //
# //  
# //  Demo4CPProject
# //
# //  Created by foolsparadise on 2018/7/17.
# //  Copyright © 2018 github.com/foolsparadise All rights reserved.
# //

CROSS=/opt/buildroot-gcc999/usr/bin/mipsel-linux-
CC         = $(CROSS)c++
CC         = g++
CFLAGS = -Wl

# AR         = $(CROSS)ar
# LD         = $(CROSS)ld
# NM         = $(CROSS)nm
# RANLIB     = $(CROSS)ranlib
STRIPTOOL  = $(CROSS)strip
INSTALL    = install
LN         = ln
RM         = rm -f

OBJS_FILES = Demo4CPProject_main.o Demo.o

Demo4CPProject: $(OBJS_FILES)
	$(CC) -Wall -o Demo4CPProject $(OBJS_FILES) $(LDFLAGS)
	# $(STRIPTOOL) --remove-section=.note --remove-section=.comment Demo4CPProject


# $(OBJS_FILES): %.o : %.c #%.cpp 
$(OBJS_FILES): %.o : %.cpp
	$(CC) -c $< -o $@
	

clean:
	$(RM) *.[o] Demo4CPProject

