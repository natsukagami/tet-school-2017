# HOPPER
## NVBD

## Problem Statement
* Cho tọa độ con châu chấu và tọa độ 2 đỉnh đối diện của một hình chữ nhật trong trục tọa độ Oxy.
* Tìm khoảng cách nhỏ nhất từ con châu chấu đến hình chữ nhật.

## Required Skills
* No Required Special Skills

## Step-by-Step Solution
* Chia bài toán ra các trường hợp:

 1. Con châu chấu đã nằm trong hình chữ nhật.
 2. Con châu chấu nằm trong các khoảng I và II.
 3. Con châu chấu nằm trong khoảng III.

 ![pic](http://i.imgur.com/cM8rdOq.png)

* Dễ thấy khoảng cách ngắn nhất tính từ con châu chấu đến hình chữ nhật trong TH1 là 0.
* Ở TH2, khoảng cách ngắn nhất tính từ con châu chấu đến hình chữ nhật là đường cao kẻ từ con châu chấu xuống cạnh gần nó nhất (Dễ dàng tính được khoảng cách đó vì các cạnh hình chữ nhật song song với trục tọa độ).
* Ở TH3, ta lấy khoảng cách ngắn nhất tính từ con châu chấu đến hình chữ nhật là min của khoảng cách từ con châu chấu đến 4 đỉnh của hình chữ nhật. 
 *d=sqrt((x1-x2) * (x1-x2)+(y1-y2) * (y1-y2)) , với d là khoảng cách từ điểm (x1,y1) đến (x2,y2).

## Conclusion
* Nếu không cẩn thận dễ bị sai số ở TH3.
