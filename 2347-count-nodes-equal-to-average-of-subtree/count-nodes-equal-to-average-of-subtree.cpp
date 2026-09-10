class Solution {
    using int2=pair<int, int>;
public:
    int count=0;
    int2 postOrder(TreeNode* node){
        if (node==NULL) return {0, 0};
        auto [sumL, iL]=postOrder(node->left);
        auto [sumR, iR]=postOrder(node->right);
        int sum=node->val, i=1;
        sum+=(sumL+sumR);
        i+=(iL+iR);
        if (sum/i==node->val) count++;
        return {sum, i};
    }

    int averageOfSubtree(TreeNode* root) {
        postOrder(root);
        return count;
    }
};