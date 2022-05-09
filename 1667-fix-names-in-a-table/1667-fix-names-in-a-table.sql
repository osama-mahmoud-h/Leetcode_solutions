# Write your MySQL query statement below

SELECT user_id,
concat(UPPER(LEFT(name,1)) ,LOWER(RIGHT(name,LENGTH(name)-1))) as name
FROM Users
ORDER BY user_id


/*
SELECT concat(name,name)

FROM Users*/