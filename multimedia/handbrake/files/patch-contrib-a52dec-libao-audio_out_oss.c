--- ../../work/HandBrake/contrib/a52dec/libao/audio_out_oss.c	2002-04-28 12:23:02.000000000 +0200
+++ contrib/a52dec/libao/audio_out_oss.c	2007-12-06 03:06:05.000000000 +0100
@@ -35,7 +35,7 @@
 #if defined(__OpenBSD__)
 #include <soundcard.h>
 #elif defined(__FreeBSD__)
-#include <machine/soundcard.h>
+#include <sys/soundcard.h>
 #ifndef AFMT_S16_NE
 #include <machine/endian.h>
 #if BYTE_ORDER == LITTLE_ENDIAN
