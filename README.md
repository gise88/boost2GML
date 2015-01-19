boost2GML
============

Lightened version of boostgraph2GML project done for "Sistemi Di Simulazione" exam.


Install [Boost Graph Library (BGL)](http://www.boost.org/)
--------


``` bash
wget http://sourceforge.net/projects/boost/files/boost/1.55.0/boost_1_55_0.tar.gz/download -O boost_1_55_0.tar.gz

tar -zxvf boost_1_55_0.tar.gz

cd boost_1_55_0

./bootstrap.sh

./b2 --show-libraries

sudo ./b2 --with-math --with-regex --with-graph install
```


Compile boost2GML
--------

#### Just do:
``` bash
make
```


Example
--------

#### Create a GraphML file with 100 nodes:

``` bash
./boost2gml 100 2.0 1000 > myGraphMLFile.xml
```


