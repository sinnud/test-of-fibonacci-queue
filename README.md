# C++ with database

## ubuntu

user@deepin:~/lib$ sudo apt list --installed | grep postgre

WARNING: apt does not have a stable CLI interface. Use with caution in scripts.

postgresql-11/未知,now 11.9-0+deb10u1+rebuild amd64 [已安装，自动]
postgresql-client-11/未知,now 11.9-0+deb10u1+rebuild amd64 [已安装，自动]
postgresql-client-common/未知,未知,now 200+deb10u4+rebuild all [已安装，自动]
postgresql-client/未知,未知,now 11+200+deb10u4+rebuild all [已安装]
postgresql-common/未知,未知,now 200+deb10u4+rebuild all [已安装，自动]
user@deepin:~/lib$ sudo apt list --installed | grep libpq

WARNING: apt does not have a stable CLI interface. Use with caution in scripts.

libpq-dev/未知,now 11.9-0+deb10u1+rebuild amd64 [已安装]
libpq5/未知,now 11.9-0+deb10u1+rebuild amd64 [已安装，自动]

Refer CMakeLists.txt and src/main.cpp
