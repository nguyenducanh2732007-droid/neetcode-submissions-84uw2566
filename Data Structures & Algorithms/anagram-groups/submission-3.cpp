class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Tối ưu 1: Dùng string làm Key để lưu mảng đếm (nhanh hơn dùng map của map)
        unordered_map<string, vector<string>> anagramMap;
        
        // Tối ưu 2: Dự đoán trước kích thước để tránh hash map phải resize nhiều lần
        anagramMap.reserve(strs.size());

        for (const string& s : strs) {
            // Tối ưu 3: Dùng mảng cố định 26 phần tử (Fixed-size array) thay vì vector
            // char count[26] = {0} cực kỳ nhanh vì nằm trên Stack
            string key(26, 0); 
            for (char c : s) {
                key[c - 'a']++;
            }

            // Tối ưu 4: Dùng emplace_back hoặc push_back với tham chiếu
            anagramMap[key].push_back(s);
        }

        vector<vector<string>> results;
        results.reserve(anagramMap.size()); // Tối ưu 5: Reserve bộ nhớ cho kết quả

        for (auto& pair : anagramMap) {
            // Tối ưu 6: Dùng std::move để chuyển dữ liệu thay vì copy
            results.push_back(std::move(pair.second));
        }

        return results;
    }
};