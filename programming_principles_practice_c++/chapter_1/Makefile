OUTDIR			:= output
SRCDIR			:= src

src_files		:= $(wildcard ${SRCDIR}/*.cpp)
header_files	:= $(wildcard ${SRCDIR}/*.h)
asm_files		:= $(patsubst ${SRCDIR}/%.cpp,${OUTDIR}/%.s,$(wildcard ${SRCDIR}/*.cpp))
obj_files		:= $(patsubst ${SRCDIR}/%.cpp,${OUTDIR}/%.o,$(wildcard ${SRCDIR}/*.cpp))
bin_file		:= ${OUTDIR}/run


.PHONY: all clean

all: ${bin_file}

${asm_files}: ${src_files} ${header_files} | ${OUTDIR}
	g++ -S $< -o $@

${obj_files}: ${asm_files}
	g++ -c $< -o $@

${bin_file}: ${obj_files}
	g++ $^ -o $@

${OUTDIR}:
	mkdir -p $@

clean:
	-rm -rf ${OUTDIR}

