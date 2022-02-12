# 数据结构/C
### 约瑟夫环

- 描述

         编号是1，2，……,n的n个人按照顺时针方向围坐一圈，每个人只有一个密码（正整数）。一开始任选一个正整数作为报数上限值m,从第一个仍开始顺时针方向自1开始顺序报数，报到m时停止报数。报m的人出列，将他的密码作为新的m值，从他在顺时针方向的下一个人开始重新从1报数，如此下去，直到所有人全部出列为止。设计一个程序来求出出列顺序。

- 基本要求

        利用单线性表的顺序和链式两种存储结构模拟此过程，按照出列的顺序输出各个人的编号。其中要求顺序表的删除不移动数据元素。

- 测试数据

        m的初值为20，n=7 ,7个人的密码依次为3，1，7，2，4，7，4
