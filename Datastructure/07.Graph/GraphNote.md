**图的定义** <br>
图G由顶点集V和边集E组成，记为G=(V,E),其中V(G)表示图G中顶点的有限非空集； E(G)表示图G中顶点之间的关系(边)集合。若V={v1,v2,...,vn},则用|V|表示图G 中顶点的个数，也称图G的阶，E={(u,v)|u∈V，v∈V}，用|E|表示图G中边的条数。<br>
注意：线性表可以是空表，树可以是空树，但图不可以是空图，即V一定是非空集。

其他概念<br>
1、无向图、有向图<br>
2、简单图(简单无向图、简单有向图)、多重图(多重无向图、多重有向图)
简单图：①不存在重复边；②不存在顶点到自身的边。
多重图：图G中某两个结点之间的边数多于一条，又允许顶点通过同一条边和自己关联，则G为多重图。<br>
3、顶点的度、入度、出度<br>
对于无向图：顶点v的度是指依附于该顶点的边的条数，记为TD(v)。<br>
对于有向图：入度是以顶点v为终点的有向边的数目，记为ID(v)；出度是以顶点v为起点的有向边的数目，记为OD(v)。 顶点v的度等于其入度和出度之和，即TD(v)=ID(v)+OD(v)。<br>
4、连通图、强连通图<br>
若图G中任意两个顶点都是连通的，则称图G为连通图，否则称为非连通图。<br>
若图中任何一对顶点都是强连通的，则称此图为强连通图。<br>
重点：对于n个顶点的无向图G，若G是连通图，则最少有n-1条边；若G是非连通图，则最多可能有Cn-1^2条边。<br>
对于n个顶点的有向图G，若G是强连通图，则最少有n条边。<br>
5、连通分量 <br>
无向图中的极大连通子图(子图必须连通，且包含尽可能多的顶点和边)称为连通分量。<br>
6、强连通分量<br>
有向图中的极大强连通子图(子图必须强连通，同时保留尽可能多的边)称为有向图的强连通分量。<br>
7、生成树<br>
连通图(无向)的生成树是包含图中全部顶点(边尽可能的少，但要保持连通)的一个极小连通子图。<br>
8、生成森林<br>
9、边的权、带权图/网<br>
带权路径长度：一条路径上所有边的权值之和。<br>
10、几种特殊形态的图<br>
无向完全图：无向图中任意两个顶点之间都存在边<br>
有向完全图：有向图中任意两个顶点之间都存在方向相反的两条弧<br>
稀疏图：边数很少的图称为稀疏图 ,反之称为稠密图<br>
树：不存在回路，且连通的无向图。 <br>
森林、有向树<br>