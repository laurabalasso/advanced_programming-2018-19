EXE = main
CXX = c++
LIBSRC = source/hello.cc
LIBOBJ = $(LIBSRC:.cc=.o)
CXXFLAGS = -I include -std=c++11
LFLAGS = -lhello -L shar_lib -Wl,-rpath,shar_lib

all: $(EXE)

install: shar_lib/libhello.so

$(EXE): shar_lib/libhello.so main.cc
	$(CXX) main.cc -o $@ $(CXXFLAGS) $(LFLAGS)


shar_lib/libhello.so: $(LIBOBJ)
	mkdir shar_lib
	$(CXX) -shared -o $@ $^


%.o:%.cc
	$(CXX) -fpic -o $@ -c $< -I include

source/hello.o: include/hello.h

clean:
	@rm -rf *~ */*~ shar_lib main.o source/*.o

.PHONY: clean all install
