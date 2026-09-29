class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL)
            return NULL;

        unordered_map<Node*, Node*> mp;
        queue<Node*> q;

        mp[node] = new Node(node->val);
        q.push(node);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();

            for (Node* nei : curr->neighbors) {
                if (mp.find(nei) == mp.end()) {
                    mp[nei] = new Node(nei->val);
                    q.push(nei);
                }

                mp[curr]->neighbors.push_back(mp[nei]);
            }
        }

        return mp[node];
    }
};