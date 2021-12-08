

void printRow(const Node *p, const int height, int depth)
{
        vector<int> vec;
        getLine(p, depth, vec);
        cout << setw((height - depth)*2); // scale setw with depth
        bool toggle = true; // start with left
        if (vec.size() > 1) {
                for (int v : vec) {
                        if (v != placeholder) {
                                if (toggle)
                                        cout << "/" << "   ";
                                else
                                        cout << "\\" << "   ";
                        }
                        toggle = !toggle;
                }
                cout << endl;
                cout << setw((height - depth)*2);
        }
        for (int v : vec) {
                if (v != placeholder)
                        cout << v << "   ";
        }
        cout << endl;
}

void getLine(const Node *root, int depth, vector<int>& vals)
{
        if (depth <= 0 && root != nullptr) {
                vals.push_back(root->val);
                return;
        }
        if (root->left != nullptr)
                getLine(root->left, depth-1, vals);
        else if (depth-1 <= 0)
                vals.push_back(placeholder);
        if (root->right != nullptr)
                getLine(root->right, depth-1, vals);
        else if (depth-1 <= 0)
                vals.push_back(placeholder);
}
public static void prettyPrint(BTNode node) {
        // get height first
        int height = heightRecursive(node);

        // perform  level order traversal
        Queue<BTNode> queue = new LinkedList<BTNode>();

        int level = 0;
        final int SPACE = 6;
        int nodePrintLocation = 0;

        // special node for pushing when a node has no left or right child (assumption, say this node is a node with value Integer.MIN_VALUE)
        BTNode special = new BTNode(Integer.MIN_VALUE);

        queue.add(node);
        queue.add(null);    // end of level 0
        while(! queue.isEmpty()) {
            node = queue.remove();

            if (node == null) {
                if (!queue.isEmpty()) {
                    queue.add(null);
                }

                // start of new level
                System.out.println();
                level++;
            } else {
                nodePrintLocation = ((int) Math.pow(2, height - level)) * SPACE;

                System.out.print(getPrintLine(node, nodePrintLocation));

                if (level < height) {
                    // only go till last level
                    queue.add((node.left != null) ? node.left : special);
                    queue.add((node.right != null) ? node.right : special);
                }
            }
        }       
    }
    public void prettyPrint() {
        System.out.println("\nBinary tree (pretty print):");
        prettyPrint(root);
    }
    private static String getPrintLine(BTNode node, int spaces) {
        StringBuilder sb = new StringBuilder();

        if (node.data == Integer.MIN_VALUE) {
            // for child nodes, print spaces
            for (int i = 0; i < 2 * spaces; i++) {
                sb.append(" ");
            }

            return sb.toString();
        }

        int i = 0;
        int to = spaces/2;

        for (; i < to; i++) {
            sb.append(' ');
        }
        to += spaces/2;
        char ch = ' ';
        if (node.left != null) {
            ch = '_';
        }
        for (; i < to; i++) {
            sb.append(ch);
        }

        String value = Integer.toString(node.data);
        sb.append(value);

        to += spaces/2;
        ch = ' ';
        if (node.right != null) {
            ch = '_';
        }
        for (i += value.length(); i < to; i++) {
            sb.append(ch);
        }

        to += spaces/2;
        for (; i < to; i++) {
            sb.append(' ');
        }

        return sb.toString();
    }

    private static int heightRecursive(BTNode  node) {
        if (node == null) {
            // empty tree
            return -1;
        }

        if (node.left == null && node.right == null) {
            // leaf node
            return 0;
        }

        return 1 + Math.max(heightRecursive(node.left), heightRecursive(node.right));
    }
