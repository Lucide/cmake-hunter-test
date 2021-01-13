#include "zlib.h"
#include <stdlib.h>
#include <stdio.h>

int zOpenCloseTest(FILE *const plainFile) {
	gzFile file = gzdopen(fileno(plainFile), "rb");
	if(file == NULL) {
		goto error;
	}
	if(gzclose_r(file) != Z_OK) {
		goto error;
	}
	return 0;
	error:
	// gzdopen does not close fd if it fails
	fclose(plainFile);
	return -1;
}

int main() {
	FILE *const file = fopen("test.xp", "rb");
	if(file == NULL) {
		return -1;
	}
	if(zOpenCloseTest(file) < 0) {
		return -2;
	}
	return 0;
}
