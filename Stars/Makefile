
#***********************************************************************
#	Make file for Stars
#	Written by: MG
#***********************************************************************

# @@@ How to use:
# make       -> compile the IOC stubs and generate build
# make clean -> remove the library file and all object files (.o)
# make all   -> clean and compile
#***********************************************************************

# @@@ How to adapt:
#
# No changes-New source files can be added directly in src and/or gen folder
# Update SRC_DIR, iff new folders are created in project
# Compilation and linking options can be changed accordingly
#***********************************************************************


# compilation options and flags
CC     := g++
CFLAGS := -O2 -g -W -Wall -Wno-unused-parameter -Wbad-function-cast -fPIC

# linking options and flags
LD      := g++
#LCD     := gcc
LDFLAGS := -shared

# Source Directories and Build generation directory
SRC_DIR   := src lib
BUILD_DIR := build

# Parser variables for include and source files
LIB       := $(foreach sdir,$(SRC_DIR),$(wildcard $(sdir)/*.c))
SRC       := $(foreach sdir,$(SRC_DIR),$(wildcard $(sdir)/*.cpp))
OBJ1       := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(LIB))
OBJ       := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC))

INCLUDES  := $(addprefix -I,$(SRC_DIR))

# Avoid Path errors for includes: If not found, ask Make to check in SRC_DIR
vpath %.cpp $(SRC_DIR)

# Define make-goals and operate in for-each (See last line)
define make-goal
$1/%.o: %.c
	$(CC) $(INCLUDES) -c $$< -o $$@

$1/%.o: %.cpp
	$(CC) $(INCLUDES) -c $$< -o $$@
endef

.PHONY: all checkdirs clean

all: checkdirs build/stars

# Generate only executable "stars" in build
build/stars: $(OBJ1) $(OBJ)
	$(LD) $^ -o "$@"

# Check for build directory existance, if not- create one!
checkdirs: $(BUILD_DIR)

$(BUILD_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILD_DIR)

$(foreach bdir,$(BUILD_DIR),$(eval $(call make-goal,$(bdir))))
