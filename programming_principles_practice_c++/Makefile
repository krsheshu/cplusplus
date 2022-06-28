SHELL := /bin/bash

.PHONY: all clean

all:

	( for dir in  */; do cd $${dir} && make all && cd -; done )


clean:

	( for dir in  */; do cd $${dir} && make clean && cd - ; done )
