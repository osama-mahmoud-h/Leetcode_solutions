-- Write your PostgreSQL query statement below
select
 a.machine_id,
 round( 
    avg(case when a.activity_type='end' then a.timestamp end)::numeric
    - 
    avg(case when a.activity_type='start' then a.timestamp end)::numeric
  ,3) as processing_time
from Activity a
group by a.machine_id ;

