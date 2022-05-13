# WIP Build Scientific Word on Linux

On Ubuntu 20.04:

```
mkdir -p ~/src
cd ~/src
git clone https://github.com/ScientificWord/mozilla.git
git checkout csh-master
source princetools/linux/setup
autoconf2.13
make -f client.mk build
```

(Currently failing)
