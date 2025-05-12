WITH all_pepole AS(
(SELECT requester_id AS id
FROM RequestAccepted)
UNION ALL
(SELECT accepter_id AS user_id
FROM RequestAccepted)
)



SELECT 
    id ,
    COUNT(*) AS num
FROM all_pepole

GROUP BY id
ORDER BY COUNT(*) DESC
LIMIT 1
