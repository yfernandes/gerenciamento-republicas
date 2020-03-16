# set compiler and compile options
EXEC = republicator
CXX = g++             # use the GNU C++ compiler
OPTS = -O2 -Wall -g   # use some optimization, report all warnings and enable debugging -Werror -Wextra
CFLAGS = $(OPTS) -std=c++11    # add compile flags
LDFLAGS =             # specify link flags here

# set a list of directories
INCDIR =./include
OBJDIR = ./obj
BINDIR = ./bin
SRCDIR = ./src

# set the include folder where the .h files reside
CFLAGS += -I$(INCDIR) -I$(SRCDIR)

# add here the source files for the compilation
SOURCES = main.cpp membros.cpp republica.cpp contas.cpp tarefas.cpp faxina.cpp

# create the obj variable by substituting the extension of the sources
# and adding a path
_OBJ = $(SOURCES:.cpp=.o)
OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))

all: $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC): $(OBJ)
	$(CXX) -o $(BINDIR)/$(EXEC) $(OBJ) $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) -c -o $@ $< $(CFLAGS)

clean:
	rm -vf $(BINDIR)/$(EXEC) $(OBJ)

run: 
	$(BINDIR)/$(EXEC)
