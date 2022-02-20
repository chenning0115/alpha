#pragma once

#include <iostream>
#include <vector>
#include "solution.h" 
#include "utils.h"

struct TreeNode {
    int val = 0;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) {
        this->val = x;
        this->left = left;
        this->right = right;
    }
};

class BinaryTreeSolution : public BaseSolution {
public:
    BinaryTreeSolution(){};

    void solve() {
        TreeNode left(1, nullptr, nullptr);
        TreeNode right(3, nullptr, nullptr);
        TreeNode root(2, &left, &right);
        auto res = inorderTraversal(&root);
        print_vector(res);
    }

    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> res;
        if(root == nullptr) {
            return res;
        }
        // start visit
        if (root->left != nullptr) {
            auto left_res = inorderTraversal(root->left);
            push_back_all(res, left_res);
        }
        res.push_back(root->val);
        if (root->right != nullptr) {
            auto right_res = inorderTraversal(root->right);
            push_back_all(res, right_res);
        }
        return res;
    }

private:
    void push_back_all(std::vector<int>& des_vec, std::vector<int>& src_vec) {
        if (src_vec.size() == 0) {
            return;
        }
        for (auto& val : src_vec) {
            des_vec.push_back(val);
        }
        return;
    }

};

