#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *createNode(int num)
{
    TreeNode *temp = new TreeNode();
    temp->val = num;
    temp->left = temp->right = NULL;
    return temp;
}
TreeNode *genTree(int arr[], TreeNode *root, int i, int n)
{
    if (i < n)
    {
        TreeNode *temp = createNode(arr[i]);
        root = temp;
        root->left = genTree(arr, temp->left, 2 * i + 1, n);
        root->right = genTree(arr, temp->right, 2 * i + 2, n);
    }
    return root;
}

void inorder(TreeNode *root)
{
    cout << root->val << "\n";

    if (root->left)
    {
        inorder(root->left);
    }
    if (root->right)
    {
        inorder(root->right);
    }
}

int findLongestBranch(TreeNode *root, int count)
{
    int t1 = count, t2 = count;
    if (root->left)
    {
        t1 = findLongestBranch(root->left, count + 1);
    }
    if (root->right)
    {
        t2 = findLongestBranch(root->right, count + 1);
    }
    if (t1 > t2)
    {
        return t1;
    }
    return t2;
}

int sumAtMaxDepth(TreeNode *root, int level, int sum, int maxLevel)
{
    if (root == NULL)
    {
        return;
    }
    if (level > maxLevel)
    {
        sum = root->val;
    }
    else if (level == maxLevel)
    {
        sum += root->val;
    }
    sum = sumAtMaxDepth(root->left, level + 1, sum);
    sum = sumAtMaxDepth(root->right, level + 1, sum);
    return sum;
}
int deepestLeavesSum(TreeNode *root)
{
    queue<TreeNode*> q;
    q.push(root);
    int ans = 0, qlen;
    TreeNode *temp;
    while (q.size() > 0)
    {
        ans = 0;
        qlen = q.size();
        for (int i = 0; i < qlen; i++)
        {
            temp = q.front();
            q.pop();
            ans+= temp->val;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right)
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, -1, 6, 7, -1, -1, -1, -1, 8};
    TreeNode *head = genTree(arr, head, 0, 13);
    // inorder(head);
    cout << findLongestBranch(head, 1);
    return 0;
}