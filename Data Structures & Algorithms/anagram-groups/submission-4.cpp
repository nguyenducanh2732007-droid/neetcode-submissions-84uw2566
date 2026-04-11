#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Thay vì lưu Key là chuỗi đã sort (tốn bộ nhớ), 
        // ta dùng Map để lưu: Key (Chuỗi đã sort) -> Value (Chỉ số của nhóm trong kết quả)
        unordered_map<string, int> groupIdx;
        vector<vector<string>> results;

        // Tối ưu: Cấp phát trước để tránh resize
        results.reserve(strs.size());

        for (const string& s : strs) {
            string sorted_s = s; 
            sort(sorted_s.begin(), sorted_s.end()); // Sort tại chỗ

            // Kiểm tra xem chuỗi đã sort này có trong map chưa
            if (groupIdx.find(sorted_s) == groupIdx.end()) {
                // Nếu chưa có, tạo nhóm mới
                groupIdx[sorted_s] = results.size();
                results.push_back({s}); // Khởi tạo vector mới với phần tử đầu tiên
            } else {
                // Nếu có rồi, lấy chỉ số nhóm và đẩy vào
                results[groupIdx[sorted_s]].push_back(s);
            }
        }
        return results;
    }
};