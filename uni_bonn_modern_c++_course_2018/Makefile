SHELL := /bin/bash

.PHONY: all clean

all:

	( for dir in  */; do make -C $${dir} all; done )


clean:

	( for dir in  */; do make -C  $${dir} clean ; done )
