Fri 08 Jun 2018 16:40:41 AEST 

Building a readme to help myself...
On this system : 
Linux mikeh-Dell-DM051 4.4.0-21-generic #37-Ubuntu SMP Mon Apr 18 18:33:37 UTC 2016 x86_64 x86_64 x86_64 GNU/Linux
No LSB modules are available.
Distributor ID:	LinuxMint
Description:	Linux Mint 18 Sarah
Release:	18
Codename:	sarah

Seems like I need to get 8.0.2

cabal build
Package has never been configured. Configuring with default flags. If this
fails, please run configure manually.
Resolving dependencies...
Configuring haskino-blink-0.1...
cabal: At least the following dependencies are missing:
ghc >=8.0.2, haskino >=0.6


<ol>
</li>download ghc-8.0.2-x86_64-deb8-linux.tar.xz
<li></li>cd ......
<li></li>./configure 
<li></li>make install
<li></li>sudo make install
<li></li>ghc --version
<li></li>
</ol>


then ./stackSeq



