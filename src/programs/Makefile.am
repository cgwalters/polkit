
NULL =

INCLUDES =                                              	\
	-I$(top_builddir)/src                           	\
	-I$(top_srcdir)/src                             	\
	-DPACKAGE_LIBEXEC_DIR=\""$(libexecdir)"\"       	\
	-DPACKAGE_SYSCONF_DIR=\""$(sysconfdir)"\"       	\
	-DPACKAGE_DATA_DIR=\""$(datadir)"\"             	\
	-DPACKAGE_BIN_DIR=\""$(bindir)"\"               	\
	-DPACKAGE_LOCALSTATE_DIR=\""$(localstatedir)"\" 	\
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\"         	\
	-DPACKAGE_LIB_DIR=\""$(libdir)"\"               	\
	-D_POSIX_PTHREAD_SEMANTICS                      	\
	-D_REENTRANT	                                	\
	$(NULL)

bin_PROGRAMS = polkit-1

polkit_1_SOURCES = polkit.c

polkit_1_CFLAGS =                             			\
	$(GLIB_CFLAGS)						\
	$(NULL)

polkit_1_LDADD =  	                      			\
	$(GLIB_LDADD)						\
	$(top_builddir)/src/polkit/libpolkit-gobject-1.la	\
	$(NULL)

clean-local :
	rm -f *~