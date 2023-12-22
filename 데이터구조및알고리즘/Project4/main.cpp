//#include <stdio.h>
//#include <stdlib.h>
//
//#define HEIGHT(node) ((node==NULL) ? 0 :(((avlnode *)(node))->height))
//#define MAX(a,b) ((a)>(b)?(a):(b))
//#define LENGTH(a) ((sizeof(a))/(sizeof(a[0])))
//
//typedef int Type;
//typedef int elementType;
//typedef struct node
//{
//    elementType key;
//    struct node* left;
//    struct node* right;
//    int height;//当前结点深度
//} Node, * AVLTree, avlnode, * avltree;
//int getNode_height(avlnode* node);//获取当前结点的深度
//
//avlnode* create_node(elementType key, avlnode* left, avlnode* right);//创建结点
//
//avlnode* maximun_node(avltree tree);//求树中最大结点
//
//avlnode* minimun_node(avltree tree);//求树中最小结点
//
//avltree  avltree_insertNode(avltree tree, elementType key);//向树中插入结点
//
//static Node* delete_node(AVLTree tree, Node* z);
//Node* avltree_delete(AVLTree tree, Type key);
///*
//void pre_order_avltree(avltree tree);//前序遍历
//
//void in_order_avltree(avltree tree);//中序遍历
//
//void post_order_avltree(avltree tree);//后序遍历
//
//void print_avltree(avltree tree, elementType key, int direction);//打印树的信息
//
//avlnode* search_node(avltree tree, elementType key);//根据key 的值搜索结点*/
//int getNode_height(avlnode* node)cd
//{
//    if (node == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return ((avlnode*)(node))->height;
//    }
//    //return HEIGHT(node);  //((node==NULL) ? 0 :(((avlnode *)(node))->height))
//}
//
//avlnode* create_node(elementType key, avlnode* left, avlnode* right)
//{
//    avlnode* node = (avlnode*)malloc(sizeof(avlnode));
//    if (node == NULL)
//    {
//        printf("创建结点失败");
//        return NULL;
//    }
//    node->key = key;
//    node->left = left;
//    node->right = right;
//    node->height = 0;
//
//    return node;
//}
///*
//avlnode* maximun_node(avltree tree)
//{
//    if (tree == NULL)
//        return NULL;
//    while (tree->right)
//        tree = tree->right;
//    return tree;
//}
//
//avlnode* minimun_node(avltree tree)
//{
//    if (tree == NULL)
//        return NULL;
//    while (tree->left)
//        tree = tree->left;
//
//    return tree;
//}
//
////前序遍历
//void pre_order_avltree(avltree tree)
//{
//    if (tree)
//    {
//        printf("%d    ", tree->key);
//        pre_order_avltree(tree->left);
//        pre_order_avltree(tree->right);
//    }
//}
//
////中序遍历
//
//void in_order_avltree(avltree tree)
//{
//    if (tree)
//    {
//        in_order_avltree(tree->left);
//        printf("%d    ", tree->key);
//        in_order_avltree(tree->right);
//
//    }
//}
//
////后序遍历
//void post_order_avltree(avltree tree)
//{
//    if (tree)
//    {
//        post_order_avltree(tree->left);
//        post_order_avltree(tree->right);
//        printf("%d    ", tree->key);
//
//    }
//}
//*/
////--------------------四种旋转--------------
///*
///*LL旋转
//                               k1                                                 k2
//                             /   \                                              /   \
//                          k2      K3                                          k4    k1
//                        /   \               -------->                        /      / \
//                      k4    k5                                              k6     k5  k3
//                     /
//                   k6
//
//*/
//static avltree left_left_rotation(avltree tree)
//{
//    avlnode* k2 = tree->left;
//    tree->left = k2->right;
//    k2->right = tree;
//    //！！！！切记所有旋转操作后要重新调整树的高度
//    tree->height = MAX(getNode_height(tree->left), getNode_height(tree->right)) + 1;
//    k2->height = MAX(getNode_height(k2->left), getNode_height(k2->right)) + 1;
//    return k2;
//}
//
///*RR旋转
//                          k1                                                  k3
//                        /    \                                              /    \
//                      k2     k3                                            k1     k5
//                          /     \              -------->                 /   \      \
//                         k4     k5                                      k2     k4    k6
//                                  \
//                                   k6
//
//
//
//*/
//static avltree right_right_rotation(avltree tree)
//{
//    avlnode* k3 = tree->right;
//    tree->right = k3->left;
//    k3->left = tree;
//    tree->height = MAX(getNode_height(tree->left), getNode_height(tree->right)) + 1;
//    k3->height = MAX(getNode_height(k3->left), getNode_height(k3->right)) + 1;
//    return k3;
//}
//
///*LR旋转
//                          k1                                             k1                                                k5
//                        /   \                                          /    \                                             /    \
//                      k2     k3                                       k5     k3                                         k2     k1
//                    /    \           -------->                      /    \           --------->                       /      /   \
//                 k4      k5                                        k2      k6                                        k4      k6   k3
//                            \                                     /
//                             k6                                  k4
//      1.对k2作RR旋转
//      2.对k1作LL旋转
//*/
//static avltree left_right_rotation(avltree tree)
//{
//    tree->left = right_right_rotation(tree->left);
//    tree = left_left_rotation(tree);
//    return tree;
//}
//
///*RL旋转
//          k1                                        k1                                        k4
//        /    \                                    /    \                                    /   \
//       k2     k3                                 k2      k4                                 k1     k3
//              /    \    ---------->                    /   \    ---------->               /    \    \
//             k4    k5                                 k6    k3                          k2     k6    k5
//            /                                                \
//          k6                                                   k5
//1.对k3作LL旋转
//2.对k1作RR旋转
//*/
//static avltree right_left_rotation(avltree tree)
//{
//    tree->right = left_left_rotation(tree->right);
//    tree = right_right_rotation(tree);
//    return tree;
//}
//
///*
//    插入结点操作类似二叉树搜索树，但是avl要在插入新结点后保证树的平衡性
// */
//avltree  avltree_insertNode(avltree tree, elementType key)
//{
//    if (tree == NULL)
//    {
//        //将新的节点插入
//        avlnode* node = create_node(key, NULL, NULL);
//
//        tree = node;
//
//    }
//    else if (key < tree->key)//在左子树中插入结点
//    {
//        tree->left = avltree_insertNode(tree->left, key);//递归寻找插入节点的位置
//
//        //插入节点后可能引起二叉树的不平衡，所以要在此进行判断
//        if (getNode_height(tree->left) - getNode_height(tree->right) == 2)
//        {
//            //在这儿判断是LL还是LR
//            if (key < tree->left->key)
//            {
//                //LL旋转
//                tree = left_left_rotation(tree);
//            }
//            else
//            {
//                //LR旋转
//                tree = left_right_rotation(tree);
//            }
//        }
//    }
//    else if (key > tree->key)//在右子树中插入结点
//    {
//        tree->right = avltree_insertNode(tree->right, key);
//        if (getNode_height(tree->right) - getNode_height(tree->left) == 2)
//        {
//            //RR旋转
//            if (key > tree->right->key)
//            {
//                tree = right_right_rotation(tree);
//            }
//            else
//            {
//                //RL旋转
//                tree = right_left_rotation(tree);
//            }
//        }
//    }
//    else
//    {
//        printf("不允许插入相同值结点");
//
//    }
//    //！！！重新调整二叉树的深度
//    tree->height = MAX(getNode_height(tree->left), getNode_height(tree->right)) + 1;
//
//    return tree;
//}
//
///*
// * 打印"AVL树"
// *
// * tree       -- AVL树的节点
// * key        -- 节点的键值
// * direction  --  0，表示该节点是根节点;
// *               -1，表示该节点是它的父结点的左孩子;
// *                1，表示该节点是它的父结点的右孩子。
// */
//void print_avltree(avltree tree, elementType key, int direction)
//{
//    if (tree != NULL)
//    {
//        if (direction == 0)    // tree是根节点
//            printf("%2d is root \n", tree->key);
//        else                // tree是分支节点
//            printf("%2d is %2d's %6s child\n", tree->key, key, direction == 1 ? "right" : "left");
//
//        print_avltree(tree->left, tree->key, -1);
//        print_avltree(tree->right, tree->key, 1);
//    }
//}
//
//avlnode* search_node(avltree tree, elementType key)
//{
//    if (tree == NULL || tree->key == key)
//    {
//        return tree;
//    }
//    else if (key < tree->key)
//    {
//        return search_node(tree->left, key);
//    }
//    else
//    {
//        return search_node(tree->right, key);
//    }
//}
//
///*
// * 删除结点(z)，返回根节点
// *
// * 参数说明：
// *     ptree AVL树的根结点
// *     z 待删除的结点
// * 返回值：
// *     根节点
// */
//static Node* delete_node(AVLTree tree, Node* z)
//{
//    // 根为空 或者 没有要删除的节点，直接返回NULL。
//    if (tree == NULL || z == NULL)
//        return NULL;
//
//    if (z->key < tree->key)        // 待删除的节点在"tree的左子树"中
//    {
//        tree->left = delete_node(tree->left, z);
//        // 删除节点后，若AVL树失去平衡，则进行相应的调节。
//        if (HEIGHT(tree->right) - HEIGHT(tree->left) == 2)
//        {
//            Node* r = tree->right;
//            if (HEIGHT(r->left) > HEIGHT(r->right))
//                tree = right_left_rotation(tree);
//            else
//                tree = right_right_rotation(tree);
//        }
//    }
//    else if (z->key > tree->key)// 待删除的节点在"tree的右子树"中
//    {
//        tree->right = delete_node(tree->right, z);
//        // 删除节点后，若AVL树失去平衡，则进行相应的调节。
//        if (HEIGHT(tree->left) - HEIGHT(tree->right) == 2)
//        {
//            Node* l = tree->left;
//            if (HEIGHT(l->right) > HEIGHT(l->left))
//                tree = left_right_rotation(tree);
//            else
//                tree = left_left_rotation(tree);
//        }
//    }
//    else    // tree是对应要删除的节点。
//    {
//        // tree的左右孩子都非空
//        if ((tree->left) && (tree->right))
//        {
//            if (HEIGHT(tree->left) > HEIGHT(tree->right))
//            {
//                // 如果tree的左子树比右子树高；
//                // 则(01)找出tree的左子树中的最大节点
//                //   (02)将该最大节点的值赋值给tree。
//                //   (03)删除该最大节点。
//                // 这类似于用"tree的左子树中最大节点"做"tree"的替身；
//                // 采用这种方式的好处是：删除"tree的左子树中最大节点"之后，AVL树仍然是平衡的。
//                Node* max = maximun_node(tree->left);
//                tree->key = max->key;
//                tree->left = delete_node(tree->left, max);
//            }
//            else
//            {
//                // 如果tree的左子树不比右子树高(即它们相等，或右子树比左子树高1)
//                // 则(01)找出tree的右子树中的最小节点
//                //   (02)将该最小节点的值赋值给tree。
//                //   (03)删除该最小节点。
//                // 这类似于用"tree的右子树中最小节点"做"tree"的替身；
//                // 采用这种方式的好处是：删除"tree的右子树中最小节点"之后，AVL树仍然是平衡的。
//                Node* min = maximun_node(tree->right);
//                tree->key = min->key;
//                tree->right = delete_node(tree->right, min);
//            }
//        }
//        else
//        {
//            Node* tmp = tree;
//            tree = tree->left ? tree->left : tree->right;
//            free(tmp);
//        }
//    }
//
//    return tree;
//}
//
///*
// * 删除结点(key是节点值)，返回根节点
// *
// * 参数说明：
// *     tree AVL树的根结点
// *     key 待删除的结点的键值
// * 返回值：
// *     根节点
// */
//Node* avltree_delete(AVLTree tree, Type key)
//{
//    Node* z;
//
//    if ((z = search_node(tree, key)) != NULL)
//        tree = delete_node(tree, z);
//    return tree;
//}
//
//
//
//int main()
//{
//    avltree tree = NULL;
//    int a[] = { 7,4,2,1,3,6,5,13,11,9,8,10,12,15,14,16 };
//    //int a[]={7,4,13,12,15,11};
//    int length = LENGTH(a);
//    for (int i = 0; i < length; i++)
//    {
//        tree = avltree_insertNode(tree, a[i]);
//    }
//
//
//    int max_height = getNode_height(tree);
//    printf("树高度为：%d\n", max_height);
//    printf("前序遍历：");
//    pre_order_avltree(tree);
//
//    printf("\n");
//    printf("中序遍历：");
//    in_order_avltree(tree);
//    printf("\n");
//    printf("后序遍历：");
//    post_order_avltree(tree);
//    printf("\n");
//
//    printf("min=%d\n", minimun_node(tree)->key);
//    printf("max=%d\n", maximun_node(tree)->key);
//    print_avltree(tree, tree->key, 0);
//
//
//    printf("删除结点\n");
//    tree = avltree_delete(tree, 8);
//    print_avltree(tree, tree->key, 0);
//    printf("中序遍历：");
//    in_order_avltree(tree);
//}
//
