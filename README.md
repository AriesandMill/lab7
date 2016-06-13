# lab8
1.	因為在第5行有個throw 卻沒有人接(catch) 就call terminal然後停止
    所以不會執行下面的cout
2.	不會,會顯示錯誤訊息terminate called after throwing an instance of 'double' 可知throw 3.0的3.0被當作double型別,所以我修改code成throw      3.0f 就可以成功編譯
