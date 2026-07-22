# Write your MySQL query statement below
with pro as
(select p1.*, p2.category as category
from ProductPurchases p1 
left join ProductInfo p2
on p1.product_id=p2.product_id)

select r1.product_id as product1_id, r2.product_id as product2_id, r1.category as Product1_category, r2.category as product2_category, count(distinct r1.user_id) as customer_count
from pro r1
inner join pro r2
on r1.user_id=r2.user_id
and r1.product_id<r2.product_id
group by r1.product_id, r2.product_id, r1.category, r2.category
having count(distinct r1.user_id)>=3
order by customer_count desc, product1_id, product2_id;