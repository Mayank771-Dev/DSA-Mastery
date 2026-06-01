class Solution {
public:
    vector<int> seg;

    void update(int idx, int val, int node, int l, int r) {
        if (l == r) {
            seg[node] = val;
            return;
        }

        int mid = (l + r) / 2;

        if (idx <= mid) {
            update(idx, val, 2 * node, l, mid);
        } else {
            update(idx, val, 2 * node + 1, mid + 1, r);
        }

        seg[node] = max(seg[2 * node], seg[2 * node + 1]);
    }

    int query(int ql, int qr, int node, int l, int r) {
        if (qr < l || r < ql) return 0;

        if (ql <= l && r <= qr) {
            return seg[node];
        }

        int mid = (l + r) / 2;

        return max(
            query(ql, qr, 2 * node, l, mid),
            query(ql, qr, 2 * node + 1, mid + 1, r)
        );
    }

    vector<bool> getResults(vector<vector<int>>& queries) {
        int maxCoord = 0;

        for (auto &q : queries) {
            maxCoord = max(maxCoord, q[1]);
        }

        maxCoord += 1;

        seg.resize(4 * (maxCoord + 1), 0);

        set<int> obstacles;
        obstacles.insert(0);
        obstacles.insert(maxCoord);

        vector<bool> result;

        for (auto &q : queries) {
            if (q[0] == 1) {
                int x = q[1];

                auto rightIt = obstacles.upper_bound(x);
                int right = *rightIt;
                int left = *prev(rightIt);

                obstacles.insert(x);

                update(x, x - left, 1, 0, maxCoord);
                update(right, right - x, 1, 0, maxCoord);
            }
            else {
                int x = q[1];
                int size = q[2];

                auto rightIt = obstacles.upper_bound(x);
                int left = *prev(rightIt);

                int bestGapBeforeX = query(0, left, 1, 0, maxCoord);
                int finalGap = x - left;

                result.push_back(max(bestGapBeforeX, finalGap) >= size);
            }
        }

        return result;
    }
};