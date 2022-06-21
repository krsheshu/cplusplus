OUTDIR			:= output
SRCDIR			:= src
LIBDIR			:= ${OUTDIR}/lib
ASMDIR			:= ${OUTDIR}/asm

src_files		:= $(wildcard ${SRCDIR}/*.cpp)
header_files	:= $(wildcard ${SRCDIR}/*.h)
asm_files		:= $(patsubst ${SRCDIR}/%.cpp,${ASMDIR}/%.s,$(wildcard ${SRCDIR}/*.cpp))
obj_files		:= $(patsubst ${SRCDIR}/%.cpp,${LIBDIR}/%.o,$(wildcard ${SRCDIR}/*.cpp))
bin_files		:= $(patsubst ${SRCDIR}/%.cpp,${OUTDIR}/%,$(wildcard ${SRCDIR}/*.cpp))


.PHONY: all clean

all: ${asm_files} ${obj_files} ${bin_files}

${ASMDIR}/%.s: ${SRCDIR}/%.cpp ${header_files} | ${ASMDIR}
	g++ -S $< -o $@

${LIBDIR}/%.o: ${ASMDIR}/%.s | ${LIBDIR}
	g++ -c $< -o $@

${OUTDIR}/%: ${LIBDIR}/%.o | ${OUTDIR}

	g++ $< -o $@

${OUTDIR}:
	mkdir -p $@

${LIBDIR}:
	mkdir -p $@

${ASMDIR}:
	mkdir -p $@

clean:
	-rm -rf ${OUTDIR}

