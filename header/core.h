#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef CORE_H
#define CORE_H

typedef struct
{
  int id;
  char name[50];
  float *scores; // 动态分配的数组
} Student;

typedef struct
{
  int classSize;
  char **subjectNames; // 动态分配的数组
  int subjectCount;
} SystemInfo;

extern SystemInfo systemInfo;
extern Student *students; // 动态分配的数组
extern int studentCount;

void InputScores(SystemInfo *systemInfo, Student *students, int studentCount);
void CalculateCourseTotalAndAverage(SystemInfo *systemInfo, Student *students, int studentCount);
void CalculateStudentTotalAndAverage(SystemInfo *systemInfo, Student *students, int studentCount);
void SortStudentsByTotalScoreDesc(SystemInfo *systemInfo, Student *students, int studentCount);
void SortStudentsByTotalScoreAsc(SystemInfo *systemInfo, Student *students, int studentCount);
void DisplayScoresByIDAsc(SystemInfo *systemInfo, Student *students, int studentCount);
void DisplayScoresByNameAsc(SystemInfo *systemInfo, Student *students, int studentCount);
void SearchRankingByID(SystemInfo *systemInfo, Student *students, int studentCount);
void SearchRankingByName(SystemInfo *systemInfo, Student *students, int studentCount);
void StatisticsByCategory(SystemInfo *systemInfo, Student *students, int studentCount);
void DisplayAllStudentScores(SystemInfo *systemInfo, Student *students, int studentCount);
void SetSystemInfo(SystemInfo *systemInfo, Student **students, int *studentCount);

#endif