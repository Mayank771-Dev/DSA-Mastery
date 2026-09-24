class Solution:
    def firstUniqChar(self, s: str) -> int:
        seen = {}

        for i in range(len(s)):
            if s[i] in seen:
                seen[s[i]] = -1
            else:
                seen[s[i]] = i

        for key in seen:
            if seen[key] != -1:
                return seen[key]

        return -1