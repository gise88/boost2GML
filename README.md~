boost2GML
============

Lightened version of boostgraph2GML project done for "Sistemi Di Simulazione" exam.



![Screenshot](https://raw.githubusercontent.com/gise88/boost2GML/master/screenshot/10.xml.png)
![Screenshot](https://raw.githubusercontent.com/gise88/boost2GML/master/screenshot/100.xml.png)



Install [Boost Graph Library (BGL)](http://www.boost.org/)
--------


``` bash
sudo apt-get install tklib tk-dev tcl-dev tcllib bison libbison-dev flex blt blt-dev

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



Install R to check some characteristics of Graph
--------


``` bash
sudo apt-get install r-base xsltproc docbook-xsl docbook-xml libbz2-dev libxml2 libxml2-dev
```

#### Install igraph library
``` R
sudo R
install.packages("igraph")
```

#### Check if graph is connected

``` R
R
library(igraph)
g <- read.graph("graphml_file", format="graphml")
is.connected(g, mode="strong")
degree(g)
```


#### Calculate max degree of graph

``` R
R
library(igraph)
g <- read.graph("graphml_file", format="graphml")
degree(g)
```


























