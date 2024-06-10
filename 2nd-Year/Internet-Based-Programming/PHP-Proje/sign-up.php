<?php
    session_start();
    
    include("connection.php");
    include("functions.php");

    if($_SERVER["REQUEST_METHOD"] == "POST") {
        $username = $_POST["username"];
        $password = $_POST["password"];
        $password_check = $_POST["passwordcheck"];
        if(!is_numeric($username) && !empty($username)) {
            if($password === $password_check) {
                $user_id = random_num(20);
                $password = password_hash($password, PASSWORD_DEFAULT);
                $query = "insert into kayit (user_id, username, password) values ('$user_id', '$username', '$password')";
                mysqli_query($con, $query);
                header("Location: login.php");
                die;
            } else {
                echo "<script>alert('Lütfen şifrelerin eşleştiğiden emin olun');</script>";
            }
        } else {
            echo "<script>alert('Kullanıcı adı yalnızca sayılardan oluşamaz!');</script>";
        }
    }
?>

<!DOCTYPE html>
<html lang="tr">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kayıt Ol</title>
    <link rel="stylesheet" href="dist/css/main.css">
</head>

<body>
    <div class="container">
        <div class="login-box">
            <h2>Otel Yönetim</h2>
            <form method="post">
                <div class="input-box">
                    <input type="text" name="username" required autofocus>
                    <label style="color: #fff;">Kullanıcı Adı</label>
                </div>
                <div class="input-box">
                    <input type="password" name="password" required>
                    <label style="color: #fff;">Şifre</label>
                </div>
                <div class="input-box">
                    <input type="password" name="passwordcheck" required>
                    <label style="color: #fff;">Şifreyi Onayla</label>
                </div>
              <button type="submit" class="btn">Kayıt Ol</button>
                <div class="signup-link">
                    <p>Zaten hesabın var mı? <a target="_self" href="login.php">Oturum Aç</a></p>
                </div>
            </form>
        </div>

        <span style="--i:0;"></span>
        <span style="--i:1;"></span>
        <span style="--i:2;"></span>
        <span style="--i:3;"></span>
        <span style="--i:4;"></span>
        <span style="--i:5;"></span>
        <span style="--i:6;"></span>
        <span style="--i:7;"></span>
        <span style="--i:8;"></span>
        <span style="--i:9;"></span>
        <span style="--i:10;"></span>
        <span style="--i:11;"></span>
        <span style="--i:12;"></span>
        <span style="--i:13;"></span>
        <span style="--i:14;"></span>
        <span style="--i:15;"></span>
        <span style="--i:16;"></span>
        <span style="--i:17;"></span>
        <span style="--i:18;"></span>
        <span style="--i:19;"></span>
        <span style="--i:20;"></span>
        <span style="--i:21;"></span>
        <span style="--i:22;"></span>
        <span style="--i:23;"></span>
        <span style="--i:24;"></span>
        <span style="--i:25;"></span>
        <span style="--i:26;"></span>
        <span style="--i:27;"></span>
        <span style="--i:28;"></span>
        <span style="--i:29;"></span>
        <span style="--i:30;"></span>
        <span style="--i:31;"></span>
        <span style="--i:32;"></span>
        <span style="--i:33;"></span>
        <span style="--i:34;"></span>
        <span style="--i:35;"></span>
        <span style="--i:36;"></span>
        <span style="--i:37;"></span>
        <span style="--i:38;"></span>
        <span style="--i:39;"></span>
        <span style="--i:40;"></span>
        <span style="--i:41;"></span>
        <span style="--i:42;"></span>
        <span style="--i:43;"></span>
        <span style="--i:44;"></span>
        <span style="--i:45;"></span>
        <span style="--i:46;"></span>
        <span style="--i:47;"></span>
        <span style="--i:48;"></span>
        <span style="--i:49;"></span>
    </div>
</body>
</html>