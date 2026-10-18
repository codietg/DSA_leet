# Write your MySQL query statement below
select f.unique_id , e.name
from Employees as e
left join EmployeeUNI as f
on e.id=f.id;