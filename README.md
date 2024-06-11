# binary_tree
Inorder traversal binary tree
This code returns this: Inorder traversal of the binary search: 20 30 40 50 60 70 80

Step-by-Step Explanation
Insert 50:

The tree is initially empty, so 50 becomes the root.
Insert 30:

30 is less than 50, so 30 goes to the left of 50.
Insert 20:

20 is less than 50, so go to the left.
20 is less than 30, so 20 goes to the left of 30.
Insert 40:

40 is less than 50, so go to the left.
40 is greater than 30, so 40 goes to the right of 30.
Insert 70:

70 is greater than 50, so 70 goes to the right of 50.
Insert 60:

60 is greater than 50, so go to the right.
60 is less than 70, so 60 goes to the left of 70.
Insert 80:

80 is greater than 50, so go to the right.
80 is greater than 70, so 80 goes to the right of 70.

Visualization
To visualize this tree, you can use online tools like Graphviz or draw it manually. Here is a DOT format description for use with Graphviz:
digraph BST {
    node [fontname="Arial"];
    50 -> 30;
    50 -> 70;
    30 -> 20;
    30 -> 40;
    70 -> 60;
    70 -> 80;
}
