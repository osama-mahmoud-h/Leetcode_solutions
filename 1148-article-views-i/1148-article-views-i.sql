-- Write your PostgreSQL query statement below
select distinct v.author_id id
from Views v 
where v.author_id in (select viewer_id from Views)
order by v.author_id;
