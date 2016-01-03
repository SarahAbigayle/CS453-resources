
#ifndef __NODE_H
#define __NODE_H

#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "Job.h"

typedef struct node Node;
typedef struct node * NodePtr;

struct node {
    JobPtr data;
    NodePtr next;
    NodePtr prev;
};

NodePtr createNode (JobPtr data);
void freeNode(NodePtr node);
JobPtr getData(NodePtr node);

int getDataSize();
void checkpointNode(NodePtr node, FILE *fout);
NodePtr restoreNode (FILE *fin);


#endif /* __NODE_H */
