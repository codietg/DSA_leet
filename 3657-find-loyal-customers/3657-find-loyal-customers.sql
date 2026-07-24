# Write your MySQL query statement below
select customer_id
from customer_transactions
group by customer_id
having count(if(transaction_type='purchase',1,null))>2 
and datediff(max(transaction_date),min(transaction_date))>29 
and (count(if(transaction_type='refund',1,null))/count(1))<0.2