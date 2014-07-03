NMU-CS222-PrintQueue
====================
<b>Northern Michigan University<br />
Data Structures <br />
Author:</b> Rob Fugate <br />
<b>Purpose:</b> This program will emulate a print queue. The program reads commands from a file named "pg3cmds.txt". One print job can't begin until the previous one has completed.<br />

<b>Input:</b><br />
1:14 PRINT 5<br />
1:16 PRINT 7<br />
1:21 PRINT 2<br />

<b>Output:</b><br />
1:14 Received 5-minute print request<br />
1:16 Received 7-minute print request<br />
1:19 Completed print request submitted at 1:14<br />
1:21 Received 2-minute print request<br />
1:26 Completed print request submitted at 1:16<br />
1:28 Completed print request submitted at 1:21<br />

Source: http://philos.nmu.edu/cs222-01-13w/PG3.pdf
