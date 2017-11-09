autoreconf -vfi
aclocal
autoconf
autoheader
automake --add-missing
./configure
automake
make
