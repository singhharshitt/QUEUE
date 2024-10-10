# QUEUE
<br>
<br>

<h1><b>PRIORITY QUEUE QUESTION</b></h1>
<br>
<b>Design a system for an emergency room where patients arrive with varying medical conditions, each assigned a severity score. Create a priority queue to manage patient treatment based on severity, ensuring those with higher scores are treated first.</b>
<br>
<br>

Patients are dequeued in order of severity for treatment.<br>
<br>
Input format :<br>
<br>

The first line of input consists of an integer N, representing the number of patients in the emergency room.<br>
<br>

The next N lines consist of two space-separated values each:<br>
<br>

A string representing the patient's name.<br>
<br>
An integer value representing the severity score.<br>
<br>

Output format :<br>
<br>

For each patient being treated, the output displays a line: "Treating patient: X (Severity: Y)" where X is the patient's name and Y is the severity score.<br>

Refer to the sample output for formatting specifications.<br>
Code constraints :<br>

In this scenario, the test cases fall under the following constraints:<br>

1 ≤ N ≤ 20<br>

1 ≤ severity score ≤ 20<br>

Patient names are strings with a maximum length of 50 characters.<br>
Sample test cases :<br>
Input 1 :<br>
6<br>
Frank 8<br>
Grace 1<br>
Hank 4<br>
Ivy 2<br>
Jack 6<br>
Karen 5<br>
<br>
Output 1 :<br>
<br>

Treating patient: Frank (Severity: 8)<br>
Treating patient: Jack (Severity: 6)<br>
Treating patient: Karen (Severity: 5)<br>
Treating patient: Hank (Severity: 4)<br>
Treating patient: Ivy (Severity: 2)<br>
Treating patient: Grace (Severity: 1)<br>
<br>
Input 2 :<br>

5<br>
Alice 4<br>
Bob 6<br>
Carol 3<br>
David 7<br>
Eve 5<br>

Output 2 :<br>

Treating patient: David (Severity: 7)<br>
Treating patient: Bob (Severity: 6)<br>
Treating patient: Eve (Severity: 5)<br>
Treating patient: Alice (Severity: 4)<br>
Treating patient: Carol (Severity: 3)<br>
<br>
