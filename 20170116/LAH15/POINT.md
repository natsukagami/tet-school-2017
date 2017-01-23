# POINT 

## To Mo

## Problem Statement
Cho một tập các đoạn thẳng **_{D}_** và một tập các điểm **_{p}_** nằm trên trục hoành.  
Với mỗi điểm trong tập điểm **_{p}_** xác định số đoạn thẳng đi qua nó.
Các đầu mút của đoạn thẳng có tọa độ nguyên dương bé hơn 10^9, _1 &le; |D|, |p| &le; 10^5_.

## Required Skills
- Biết dùng hàm sort 

## Step-by-Step Solution
Đầu tiên, ta sẽ bắt đầu bằng hướng giải mà ai-cũng-có-thể-nghĩ-ra: Lưu một mảng để xem với mỗi điểm bất kì trên trục hoành, có bao nhiêu đoàn thẳng đi qua nó. Gọi mảng này là mảng count[].  
Ta nhận thấy, với mỗi đoạn thẳng ta có thể tăng tất cả các phần tử trong mảng mà có tọa độ nằm giữa hai đầu mút của nó lên một.  
Vậy, với mỗi điểm thuộc **_{p}_** ta chỉ cần in ra count[tọa độ của điểm].  
Cách làm này có độ phức tạp là O(tổng độ dài các đoạn thẳng) và bộ nhớ là O(max của đầu mút), không thể nào AC với giới hạn cực khủng của đề bài.  
Đến đây, ta sẽ vận dụng một nhận xét rất để giải bài toán này: Một điểm thuộc vào thêm một đoạn thẳng khi nó có tọa độ lớn hơn hoặc bằng một đầu mút trái và ngược lại, nó sẽ thuộc ít đi một đoạn thẳng khi tọa độ của nó lớn hơn hoặc bằng một đầu mút phải.  
Ta sẽ đi chứng minh điều này đúng. Nếu điểm này thuộc một đoạn thẳng, số đoạn thẳng nó thuộc sẽ chỉ tăng thêm một vì tọa độ của nó không lớn hơn đầu mút phải và tọa độ của nó lớn hơn đầu mút trái. Nếu nó nằm bên trái đoạn thẳng hoặc bên phải đoạn thẳng thì số đoạn thẳng đi qua nó không đổi. Đây là một tính chất tối quan trọng vì nó cho ta hướng làm bài này. Từ tính chất trên, ta nhận thấy với mỗi đoạn thẳng, ta có thể xử lí độc lập điểm đầu và điểm cuối của nó. Nói cách khác, với các điểm đầu mút ta không cần quan tâm nó là của đoạn thẳng nào mà điều duy nhất ta cần quan tâm là đấy là điểm đầu hay là điểm cuối.  
Vậy ta có thể đi đến một lời giải như sau: Nhét hết tất cả các điểm đầu mút và các điểm trong tập _{p}_ vào một mảng, sắp xếp lại mảng đó. Sau khi có mảng các đầu mút và các điểm cần xét, lấy _k_ là số đoạn thẳng đi qua các điểm hiện tại. Đến đây, đơn giản là duyệt mảng, với mỗi phần tử là đầu mút trái ta tăng _k_, với mỗi phần tử là điểm truy vấn thuộc _{p}_ thì ta cho kết quả ở điểm đấy là _k_ và gặp điểm đầu mút phải thì ta giảm _k_ đi 1. 
Chú ý thứ tự ưu tiên xử lí khi các điểm cùng tọa độ: Mút trái trước, điểm mình cần truy vấn rồi mới đến điểm kết thúc.  
Lí do: Nếu một điểm thuộc đầu mút trái hoặc mút phải của một đoạn thẳng thì nó vẫn thuộc đoạn thẳng. Vì vậy, ta phải tăng số _k_ khi gặp mút trái trước, xử lí truy vấn rồi mới _k_ khi gặp mút phải để tránh tính thiếu và tính thừa.  
Để cho dễ hiểu hơn, các bạn có thể xem code ở [đây](https://github.com/natsukagami/tet-school-2017/blob/master/20170116/LAH15/Code/point.cpp).

## Conclusion
* Điều quan trọng nhất của bài là phải nhận ra mình có thể xử lí điểm mút trái và mút phải độc lập.
* Đây là một bài sử dụng một tư tưởng rất hay gặp và tư tưởng đầu mút trái và đầu mút phải có thể xử lí độc lập có thể áp dụng để giải rất nhiều bài
* Cẩn thận khi cài đặt, cần xét kĩ lưỡng ưu tiên xử lí điểm loại nào trước
