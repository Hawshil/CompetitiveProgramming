#include <iostream>
#include <vector>
#include <algorithm>

class TreeNode {
    private:
        int data;     // value
        std::vector<TreeNode*> children;   // dynamic child list

    public:
        // constructors
        TreeNode() : data(0) {}
        TreeNode(int value) : data(value) {} 

        // same child pointers
        TreeNode(const TreeNode& other) = delete;
        TreeNode& operator=(const TreeNode& other) = delete;

        // Getter data
        int getData() const {
            return data;
        }

        // setter
        void setData(int value) {
            data = value;
        }

        // add child N-ary tree
        void addChild(TreeNode* child){
            children.push_back(child);
        }

        // getter children
        std::vector<TreeNode*>& getChildren() {
            return children;
        }

        // remove child
        void removeChild(TreeNode* child){
            children.erase(
                std::remove(children.begin(), children.end(), child), children.end()
            );
        }
};

class Tree {
    private:
        TreeNode* root;

        void deleteSubtree(TreeNode* node) {
            // base case
            if(node == nullptr){
                return;
            }

            // delete children, then the node
            for(TreeNode* child : node->getChildren()){
                deleteSubtree(child);
            }
            delete node;
        }

    public: 
        // Constructor
        Tree() {
            root = nullptr;
        }

        Tree(TreeNode* rootNode){
            root = rootNode;
        }

        // copy
        Tree(const Tree& other) = delete;
        Tree& operator=(const Tree& other) = delete;

        // destrucor
        ~Tree() { // write deleteSubtree
            deleteSubtree(root);
        }

        bool isEmpty() const {
            return root == nullptr;
        }

        // setter
        void setRoot(TreeNode* node){
            root = node;
        }

        // getter
        TreeNode* getRoot() {
            return root;
        }

        bool insert(int parentValue, int childValue){
            // first inserted node (edge case)
            if(root == nullptr){
                root = new TreeNode(childValue);
                return true;
            }

            // find parent to attach child
            TreeNode* parent = searchNode(root, parentValue);
            
            // parent not found
            if(parent == nullptr){
                return false;
            }

            TreeNode* child = new TreeNode(childValue);
            parent->addChild(child);

            return true;
        }

        TreeNode* searchNode(TreeNode* node, int value) {
            // base case: not found
            if(node == nullptr){
                return nullptr;
            }

            // base case: found
            if(node->getData() == value){
                return node;
            }

            // dfs
            for(TreeNode* child : node->getChildren()){
                TreeNode* found = searchNode(child, value);

                if(found != nullptr){
                    return found;
                }
            }

            return nullptr;
        }
};