WITH order_by_turn_queue AS(
    SELECT person_name
    FROM Queue q
    WHERE (SELECT SUM(weight) FROM Queue q1 WHERE q1.turn<=q.turn) <=1000
    ORDER BY turn DESC
)
select person_name
from order_by_turn_queue
LIMIT 1