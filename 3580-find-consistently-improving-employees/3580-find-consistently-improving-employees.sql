# Write your MySQL query statement below
with ct as(
select *, row_number() over(partition by employee_id order by review_date desc) as rnk
from performance_reviews),

ct2 as
(select employee_id, sum(case when rnk=1 then rating end) as r1,
sum(case when rnk=2 then rating end) as r2, 
sum(case when rnk=3 then rating end) as r3
from ct
where rnk<=3 
group by employee_id)

select e.employee_id as employee_id, e.name as name, (c.r1-c.r3) as improvement_score
from ct2 c
left join employees e
on c.employee_id= e.employee_id
where c.r1 is not null and c.r2 is not null and c.r3 is not null 
and c.r1>c.r2
and c.r2>c.r3
group by e.employee_id
order by improvement_score desc,name;
