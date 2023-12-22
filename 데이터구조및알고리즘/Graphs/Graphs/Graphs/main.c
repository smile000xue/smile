#include<stdio.h>
#include<malloc.h>

#define Maxvertex 11

typedef struct arcnode;
typedef struct vnode;
typedef struct vertex;
void InitGraph(GraphP g2);
void CreateGraph(GraphP g2);

int main()
{
	/*Graph g1;
	InitGraph(&g1);*/

	Graph g2;
	InitGraph(&g2);
	
	/*CreateGraph(&g2);*/

	return 0;
}

//typedef struct graph
//{
//	int vertex[Maxvertex];
//	char edge[Maxvertex][Maxvertex];
//	int vertexnum,arcnum;
//}Graph,*GraphP;
//
//void InitGraph(GraphP g1)
//{
//	g1->arcnum = 0;
//	g1->vertexnum = 0;
//	int i = 0;
//	for (i = 0; i < Maxvertex; i++)
//	{
//		g1->vertex[i] = 0;
//		int j = 0;
//		for (j = 0; j < Maxvertex; j++)
//		{
//			g1->edge[i][j] = 0;
//		}
//	}
//}

typedef struct arcnode {
	int data;
	struct vertex* next;
}ArcNode;
typedef struct vnode {
	int data;
	ArcNode* first;
}Vnode, Adjlist[Maxvertex];
typedef struct vertex
{
	int vertexnum, arcnum;
	Adjlist vertex;
}Graph, * GraphP;
void InitGraph(GraphP g2)
{
	g2->arcnum = 0;
	g2->vertexnum = 0;
	int i = 0;
	for (i = 0; i < Maxvertex; i++)
	{
		((g2->vertex) + i)->data = 0;
		((g2->vertex) + i)->first = NULL;
	}
}

//void CreateGraph(GraphP g2)
//{
//	GraphP p1=(GraphP )
//	g2->vertexnum = 11;
//	g2->arcnum = 13;
//	g2->vertex->data = 1;
//	g2->vertex->first=
//
//
//}