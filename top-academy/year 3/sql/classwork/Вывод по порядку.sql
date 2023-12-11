SELECT FirstName + ' ' + LastName AS FullName,
Assement FROM Students29_11 AS S
LEFT JOIN Achievements29_11 AS A ON S.Id = A.StudentId;


SELECT FirstName + ' ' + LastName
AS FullName, Assement
FROM Achievements29_11 AS A RIGHT JOIN Students29_11 AS S
ON S.Id = A.StudentId;

SELECT FirstName, LastName, GroupId
FROM Students29_11 AS S FULL JOIN Groups AS G
ON G.Id = S.GroupId
ORDER BY FirstName;