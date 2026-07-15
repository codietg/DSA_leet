# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary
from Employee e
left join
Department d
on e.departmentId= d.id
where e.salary = (
    select max(e2.salary)
    from employee e2
    where e2.departmentid = e.departmentid
)
group by d.name,e.name;