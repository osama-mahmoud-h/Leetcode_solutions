-- Write your PostgreSQL query statement below
select 
    ROUND(
        count(DISTINCT player_id)::NUMERIC /(select count(DISTINCT a3.player_id) from Activity a3)
    , 2)
as fraction
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
