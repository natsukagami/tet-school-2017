# SEG
## Nguyễn Đức Huy

## Problem Statement
Trên trục số người ta sơn n đoạn thẳng, đoạn thẳng thứ i có 2 đầu mút ai và bi. Một số đoạn liên tiếp có thể chồng lên nhau một phần hoặc nằm hẳn bên trong nhau. Cuối cùng, sẽ có một số đoạn được sơn rời nhau. Hãy xác định số lượng các đoạn thẳng như thế và chiều dài của đoạn dài nhất.

## Required Skills
- Thuật toán sắp xếp.
- Tư tưởng duyệt từ trái sang phải.

## Step-by-Step Solution
Đầu tiên, ta thấy rằng nếu mỗi một đầu mút được định nghĩa là một sự kiện, một biến điều khiển là cur=0, biến đếm dem=0, biến độ dài seg=0, với việc khi bắt đầu đoạn sơn thì sẽ cur++ và khi kết thúc sơn thì sẽ là cur--, và sắp xếp lại các thứ tự các sự kiện theo chiều tăng dần từ trái qua phải, và sự kiện cur++ được xử lí trước thì một đoạn được sơn liên tiếp kết thúc khi sau một sự kiện nào đó mà giá trị cur==0. Nhờ vậy, ta có thể đếm được số đoạn rời nhau bằng cách với mỗi một sự kiện mà cur==0, dem++ . Tiếp theo, ta lưu thêm 1 biến start, thể hiện vị trí đầu tiên của đoạn liên tiếp mình đang xét. Mỗi khi sau một sự kiện mà cur==0, ta lấy độ dài đoạn từ start đến sự kiện hiện tại, và cập nhật vào một biến seg, là độ dài đoạn lớn nhất hiện tại, ban đầu được khởi tạo là 0. Đáp án trả về là dem và seg. Độ phức tạp O(nlogn).
![alt-text](http://i.imgur.com/9RfHfgG.png)

## Conclusion
Tư tưởng xét từ trái sang phải là một tư tưởng tuy đơn giản, nhưng nó sẽ giúp trong rất nhiều bài toán hơn.
