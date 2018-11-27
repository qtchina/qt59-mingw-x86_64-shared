GENCCODE_ASSEMBLY_TYPE=-a gcc-mingw64
SO=dll
SOBJ=dll
A=a
LIBPREFIX=
LIB_EXT_ORDER=56.dll
COMPILE=x86_64-w64-mingw32.shared-gcc   -DHAVE_DLOPEN=0 -DU_HAVE_ATOMIC=1 -DU_HAVE_MMAP=0  -DU_ATTRIBUTE_DEPRECATED= -DU_USING_ICU_NAMESPACE=0 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads  -c
LIBFLAGS=-I/opt/mxe/usr/x86_64-w64-mingw32.shared/include -DPIC 
GENLIB=x86_64-w64-mingw32.shared-gcc -DU_USING_ICU_NAMESPACE=0 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads   -shared -Wl,-Bsymbolic -Wl,--enable-auto-import -Wl,--out-implib=./liball.dll.a
LDICUDTFLAGS=
LD_SONAME=
RPATH_FLAGS=
BIR_LDFLAGS=
AR=x86_64-w64-mingw32.shared-ar
ARFLAGS=r
RANLIB=x86_64-w64-mingw32.shared-ranlib
INSTALL_CMD=/usr/bin/install -c
