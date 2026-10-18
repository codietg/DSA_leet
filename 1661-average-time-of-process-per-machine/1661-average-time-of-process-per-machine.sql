# Write your MySQL query statement below
select a.machine_id , round(avg(a.timestamp-e.timestamp),3) as processing_time

from Activity as a
join Activity as e
on a.activity_type<e.activity_type
and a.process_id = e.process_id
and a.machine_id = e.machine_id
group by a.machine_id
order by a.machine_id asc;