<?php
    if(isset($_POST('submit'))){
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];

        // addition of numbers
        if(!empty($num1) && !empty($num2)){
            echo $num1 + $num2;
        }
        // substraction of numbers
        if(!empty($num1) && !empty($num2)){
            echo $num1 - $num2;
        }
        // Division of numbers
        if(!empty($num1) && !empty($num2)){
            echo $num1 / $num2;
        }
        // Multiplication of numbers
        if(!empty($num1) && !empty($num2)){
            echo $num1 * $num2;
        }
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>Calculator</h1>
    <form action="" method="POST">
        <input type="number" name="num1">
        <input type="number" name="num2">
        <button type="submit">Calculate</button>
    </form>
</body>
</html>