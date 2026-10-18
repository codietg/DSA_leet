# Write your MySQL query statement below
select w.id
from Weather w, weather v  -- here , is the cartesian product between the table
where datediff(w.recordDate,v.recordDate)=1 and w.temperature>v.temperature