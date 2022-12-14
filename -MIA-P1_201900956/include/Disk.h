//
// Created by rivaldo on 7/09/22.
//

#ifndef _MIA_P1_201900956_DISK_H
#define _MIA_P1_201900956_DISK_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <sys/stat.h>
#include "StructD.h"

using namespace std;

typedef struct AuxBRM{
    long int inicio;
    long int final;
    char tip;
    string particion;
}AuxBRM;


class Disk {
public:
    Disk();
    void mkdisk(string size, string ajuste, string unit, string path);
    void rmdisk(string path);
    void fdisk(string size, string unit, string path, string type, string fit, string delete_, string name, string add);
    void createPrimariKey(string path, string type, string fit, int add, string name);
    void Rep(string id, string name, string path);


    vector<StructD::Partition> Partittion(StructD:: MBR mbr);
    string killComillas(string path);
    bool compare(string path, string name);
    int validName(string path, string name);
    int ExistC(char path[]);
    void CreatDir(string paht);
    void CreatC(char paht []);
    bool validPath(string path);
    bool validPath2(string path);
};
#endif //_MIA_P1_201900956_DISK_H
