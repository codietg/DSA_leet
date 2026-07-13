# Write your MySQL query statement below
select e.employee_id
from Employees e 
left join
Salaries s
on e.employee_id=s.employee_id
where e.employee_id is null or s.employee_id is null or e.name is null


UNION

select s.employee_id
from Employees e 
right join
Salaries s
on e.employee_id=s.employee_id
where e.employee_id is null or s.employee_id is null or e.name is null

order by employee_id
;
