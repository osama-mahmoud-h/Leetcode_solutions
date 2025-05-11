-- Write your PostgreSQL query statement below
select 
ROUND(
  count(case when a.player_id is not null then 1.0 else 0.0 end)::NUMERIC
    /(select count(DISTINCT a3.player_id) from Activity a3)
    , 2) as fraction
from Activity a

where (player_id, event_date) in (
    select 
        a2.player_id,
        (a2.event_date- interval '1 day')::date as event_date
    from Activity a2 
    where a.player_id = a2.player_id
    order by event_date
    limit 1 offset 1
)
