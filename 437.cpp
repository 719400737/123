int path(TreeNode *root,int sum){//1��������и��ڵ�ĺ�Ϊsum
        int res;
        if(root==NULL)
            return 0;
        int l=path(root->left,sum-root->val);
        int r=path(root->right,sum-root->val);
        res=l+r+(root->val==sum);
        return res;
    }
    int pathSum(TreeNode* root, int sum) {
        //int res;
        if(root==NULL)
            return 0;
        int l=pathSum(root->left,sum);//�������ڵ��Ϊsum
        int r=pathSum(root->right,sum);
        return l+r+path(root,sum);
    }
    ������������������1�ֲ�˼����ֻ�����и��ڵ�ĺ�Ϊsum�������
	����2��ȫ��˼���� 
