-- Write your PostgreSQL query statement below
SELECT 
  s.score,
  (
    SELECT COUNT(DISTINCT score)
    FROM Scores s2
    WHERE s2.score >= s.score
  ) AS rank
FROM Scores s
ORDER BY s.score DESC;