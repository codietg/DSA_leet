# Write your MySQL query statement below
with ct as(
select s1.student_id , s1.subject,s1.score as first_score,s2.score as latest_score , row_number() over(partition by s1.student_id,s1.subject order by s1.exam_date, s2.exam_date desc) as rnk
from Scores s1
left join 
Scores s2
on s1.student_id=s2.student_id
and s1.subject=s2.subject
and s1.exam_date<s2.exam_date
where s2.exam_date is not null)

select student_id, subject, first_score, latest_score
from ct
where rnk=1 and first_score<latest_score;
