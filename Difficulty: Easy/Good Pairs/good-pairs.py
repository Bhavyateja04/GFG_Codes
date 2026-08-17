class Solution:
    def solve(self, arr: list[int]) -> int:
        # code here
        freq = {}
        for ele in arr:
            freq[ele] = freq.get(ele, 0) + 1
        arr = sorted(list(set(arr)))
        res = 0
        freq_sum = 0
        prev = arr[0]
        for ele in arr[1:]:
            res += freq[ele] * (freq_sum + freq[prev])
            freq_sum += freq[prev]
            prev = ele

        return res