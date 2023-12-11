CREATE DATABASE P12_Eugene
DROP DATABASE P12_Eugene
CREATE TABLE Students(

Id int,
FirstName varChar(255),
LastName varChar(255),
BirthDay date,
GrandaLada money,
Email text
);

INSERT INTO Students(Id,FirstName,LastName,BirthDay,Email)
VALUES (1, 'Eugene', 'Veselov', '2006-03-24', 'some@mail.comf');

SELECT TOP (1000) [Id]
      ,[FirstName]
      ,[LastName]
      ,[BirthDay]
      ,[GrandaLada]
      ,[Email]
  FROM [P12_Eugene].[dbo].[Students]