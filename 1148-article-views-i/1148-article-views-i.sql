# Write your MySQL query statement below
select distinct v.author_id as id
from Views as v
join Views as m
on v.author_id=m.viewer_id
and v.article_id=m.article_id
order by id asc;
