#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

  int partition(int arr[],int l,int h)
  {
    int pivot=arr[l];
    int i=l,j=h;
    while(i<j)
      {
        while(arr[i]<=pivot){
          i++;
        }
        while(arr[j]>pivot){
          j--;
        }
        if(i<j)
        {
          swap(arr[i],arr[j]);
        }
      }
        swap(arr[l],arr[j]);
        return j;
  }
  int QuickSort(int arr[],int l,int h)
    {
      if(l<h)
      {
        int j=partition(arr,l,h);
        QuickSort(arr,l,j);
        QuickSort(arr,j+1,h);
      }
      return 0;
    }
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int l=0;l<n;l++)
    {
      cin>>arr[l];
    }
  QuickSort(arr,0,n-1);
  for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<endl;
    }
  return 0;
  }