#include <bits/stdc++.h>
using namespace std;

//node definition 
struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;

    }
};

// inorder traversal recursive
void inorder(struct node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

// inorder traversal iterative
vector<int> inorderTraversal(struct node* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        stack<struct node*>s;
        struct node*node = root;
        while(1){
            if(node!=NULL){
                s.push(node);
                node = node->left;
            }
            else{
                if(s.empty()) break;
                ans.push_back(s.top()->data);
                node = s.top()->right;
                s.pop();
            }
        }

    return ans;
}

// preorder recursive
void preorder(struct node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//preorder iterative
vector<int> preorderTraversal(struct node* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        stack<struct node*>s;
        s.push(root);

        while(!s.empty()){
            struct node* temp = s.top();
            s.pop();
            ans.push_back(temp->data);
            if(temp->right) s.push(temp->right);
            if(temp->left) s.push(temp->left);
        }
        return ans;
    }


//post order recursive
void postorder(struct node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


//post order iterative using only one stack
void postorder_iterative_1_stack(struct node* root){
    vector<int>ans;
    if(root == NULL){
        return;
    }

    struct node* curr = root;
    stack<struct node*>st;

    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }

        else{
            struct node * temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                ans.push_back(temp->data);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->data);
                }
            }
            else{
                curr = temp;
            }
        }

    }

    for(auto i:ans){
        cout<<i<<" ";
    }
}


//post order iterative using two stack
    vector<int> postorderTraversal(struct node* root) {
        vector<int>ans;
       if(root == NULL) return ans; 
       stack<struct node*>s1;
       stack<struct node*>s2;
       s1.push(root);

       while(!s1.empty()){
            struct node*temp = s1.top();
            s1.pop();
            s2.push(temp);
            if(temp->left) s1.push(temp->left);
            if(temp->right) s1.push(temp->right);
       }

       while(!s2.empty()){
        ans.push_back(s2.top()->data);
        s2.pop();
       }
       return ans;
    }



//level order iterative 
void levelOrder(struct node* root){
    if(root == NULL){
        return;
    }
    vector<vector<int>>ans;
    queue<struct node*>q;
    q.push(root);

    while(!q.empty()){
        vector<int>level;
        int size = q.size();
        for(int i=0; i<size; i++){
            struct node * temp = q.front();
            q.pop();
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<"level"<<i+1<<" : ";
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}


// preorder , inorder , postorder all in one iteration
void all_traveral(struct node* root){
    vector<int>inorder;
    vector<int>preorder;
    vector<int>postorder;
    stack<pair<struct node* , int>>st;
    st.push({root,1});

    while(!st.empty()){
        pair<struct node* , int> p = st.top();
        st.pop();
        if(p.second == 1){
            preorder.push_back(p.first->data);
            p.second++;
            st.push(p);
             if(p.first->left){
                st.push({p.first->left,1});
             }
        }
        else if(p.second == 2){
            inorder.push_back(p.first->data);
            p.second++;
            st.push(p);
            if(p.first->right){
                st.push({p.first->right,1});
             }
        }
        else if(p.second == 3){
            postorder.push_back(p.first->data);
        }

    }

    cout<<"preorder traversal : ";
    for(auto i:preorder){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"inorder traversal : ";
    for(auto i:inorder){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"postorder traversal : ";
    for(auto i:postorder){
        cout<<i<<" ";
    }
    cout<<endl;

}





int main()
{   
    struct node* root = new node(5);
    root->left = new node(8);
    root->right = new node(9);
    root->left->left  = new node(10);
    root->left->right = new node(11);

    cout<<"inorder traversal : "; inorder(root); cout<<"\n";
    cout<<"preorder traversal : "; preorder(root); cout<<"\n";
    cout<<"postorder traversal : "; postorder(root); cout<<"\n";
    cout<<"postorder traversal iterative : "; postorder_iterative_1_stack(root); cout<<"\n";
    all_traveral(root);
    
    levelOrder(root);

    
    return 0;
}
