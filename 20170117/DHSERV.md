# DHSERV 
## Nguyễn Minh Tùng

## Problem Statement
* Cho một đồ thị với n đỉnh và m cạnh

* Chúng ta có thể đi từ đỉnh u đến v qua đỉnh s khi mà chỉ khi có cạnh nối giữa u-s và s-v và đỉnh s đã được bật

* Ban đầu các đỉnh đều bị tắt
* Có 2 truy vấn:

 1.bật đỉnh thứ i. 

 2.tìm đường đi nhỏ nhất từ u đến v với u, v bất kì nhỏ hơn hoặc bằng n.

## Required Skills
* Thuật toán tìm đường đi ngắn nhất.
* Một cốc trà và bánh (à xàm thôi không cần cũng không sao)

## Step-by-Step Solution
* Dễ thấy rằng u,v không cố định nên ta nên dùng thuật toán Floyd. Ta gọi d[i][j] là đường đi ngắn nhất từ i đến j.
* Đầu tiên vì vẫn chưa có đỉnh nào được bật nên ta duyệt tất cả các cạnh rồi gán giá trị d[u][v] cho mỗi cặp cạnh u,v.
* Với mỗi truy vấn 1 với đỉnh s được bật : ta sẽ sử dụng lại thuật toán Floyd với đỉnh trung gian là đỉnh s, tìm được đường đi ngắn nhất giữa 2 đỉnh bất kì với đỉnh s vừa được bật thêm.
* Với mỗi truy vấn 2 ta in ra d[u][v] nếu tồn tại đường đi giữa u và v, nếu không in ra -1.

## Conclusion
* Bài này vẫn AC được vì số truy vấn 1 nhiều nhất là n nên độ phức tạp chỉ là O(n^3+k) đủ để AC chứ không phải độ phức tạp O(n^2*k).
* Còn ở mỗi truy vấn 2 ta chỉ xét đỉnh trung gian là s vì những đỉnh đã được bật từ trước đã được xét rồi, còn các đỉnh chưa được bật thì không cần xét vào. 
