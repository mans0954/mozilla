# WIP Build Scientific Word on Linux

On Ubuntu 20.04:

```
sudo apt install zip libgtk2.0-dev libdbus-glib-1-dev libidl-dev libxt-dev libfreetype6-dev libpangox-1.0-dev autoconf2.13
mkdir -p ~/src
cd ~/src
git clone https://github.com/ScientificWord/mozilla.git
git checkout csh-master
source princetools/linux/setup
autoconf2.13
make -f client.mk build &> build.log
tail -f build.log
tail -f config.log # Detailed debug info
```

(Currently failing)

Cleanup:
```
git clean -xdf
rm -rf  ../release/
```
