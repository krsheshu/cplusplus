OUTDIR			:= output
SRCDIR			:= src
LIBDIR			:= ${OUTDIR}/lib
ASMDIR			:= ${OUTDIR}/asm

src_files		:= $(wildcard ${SRCDIR}/*.cpp)
header_files	:= $(wildcard ${SRCDIR}/*.h)
asm_files		:= $(patsubst ${SRCDIR}/%.cpp,${ASMDIR}/%.s,$(wildcard ${SRCDIR}/*.cpp))
obj_files		:= $(patsubst ${SRCDIR}/%.cpp,${LIBDIR}/%.o,$(wildcard ${SRCDIR}/*.cpp))
bin_files		:= $(patsubst ${SRCDIR}/%.cpp,${OUTDIR}/%,$(wildcard ${SRCDIR}/*.cpp))


COMPILE_OPTIONS:= --std=c++11 -Wall -Wextra -Werror -g

.PHONY: all clean

all: ${asm_files} ${obj_files} ${bin_files}

${ASMDIR}/%.s: ${SRCDIR}/%.cpp ${header_files} | ${ASMDIR}
	c++ ${COMPILE_OPTIONS} -S $< -o $@

${LIBDIR}/%.o: ${ASMDIR}/%.s | ${LIBDIR}
	c++ ${COMPILE_OPTIONS} -c $< -o $@

${OUTDIR}/%: ${LIBDIR}/%.o | ${OUTDIR}
	c++ ${COMPILE_OPTIONS} $< -o $@

${OUTDIR}:
	mkdir -p $@

${LIBDIR}:
	mkdir -p $@

${ASMDIR}:
	mkdir -p $@

clean:
	-rm -rf ${OUTDIR}
