# Write your MySQL query statement below
with ct as (
    select book_id , count(distinct record_id) as num
    from borrowing_records
    where return_date is null
    group by book_id
)

select l.book_id, l.title, l.author, l.genre , l.publication_year, b.num as current_borrowers
from library_books l
left join
ct b
on l.book_id=b.book_id
where l.total_copies- b.num =0
order by current_borrowers desc, l.title asc;
