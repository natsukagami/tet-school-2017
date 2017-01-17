# SEG
## Nguyễn Đức Huy

## Problem Statement
Trên trục số người ta sơn n đoạn thẳng, đoạn thẳng thứ i có 2 đầu mút ai và bi. Một số đoạn liên tiếp có thể chồng lên nhau một phần hoặc nằm hẳn bên trong nhau. Cuối cùng, sẽ có một số đoạn được sơn rời nhau. Hãy xác định số lượng các đoạn thẳng như thế và chiều dài của đoạn dài nhất.

## Required Skills
- Thuật toán sắp xếp.
- Tư tưởng duyệt từ trái sang phải.

## Step-by-Step Solution
Đầu tiên, ta thấy rằng nếu mỗi một đầu mút được định nghĩa là một sự kiện, một biến điều khiển là cur=0, với việc khi bắt đầu đoạn sơn thì sẽ cur++ và khi kết thúc sơn thì sẽ là cur--, và sắp xếp lại các thứ tự các sự kiện theo chiều tăng dần từ trái qua phải, và sự kiện cur++ được xử lí trước thì một đoạn được sơn liên tiếp kết thúc khi sau một sự kiện nào đó mà giá trị cur==0. Ta lưu lại biến để xử lý trong lúc for. Độ phức tạp O(nlogn)
![alt-text](http://imgur.com/9RfHfgG)

## Conclusion
Bài này thật là trí tuệ, nhất là đoạn xét từ trái sang phải. Chắc chắn sẽ còn nhiều bài khó hơn dùng tư tưởng tưởng chừng như hiển nhiên này.
