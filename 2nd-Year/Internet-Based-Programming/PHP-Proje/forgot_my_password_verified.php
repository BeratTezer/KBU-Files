<?php
    session_start();
    include("connection.php");
    
    if($_SERVER["REQUEST_METHOD"] == "POST") {
        $username = $_SESSION["username"];
        $password = $_SESSION["password"];
        $password_check = $_SESSION["password_check"];
        if(!empty($username) && $password === $password_check) {
            $newPassword = password_hash($password, PASSWORD_DEFAULT);
            $query = "UPDATE kayit SET password='$newPassword' WHERE username='$username'";
            $result = mysqli_query($con, $query);
            if($result) {
                echo "<script>alert('$usernameKullanıcı ait şifre başarıyla güncellendi.');</script>";
                $_SESSION = array();
                session_destroy();
                sleep(2);
                header("Location:login.php");
                die;
            } else {
                echo "<script>alert('Şifre güncellenemedi, tekrar deneyiniz.');</script>";
                $_SESSION = array();
                session_destroy();
                sleep(2);
                header("Location:forgot_my_password.php");
                die;
            }
        }
    }
?>

<!DOCTYPE html>
<html lang="tr">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Şifreni Değiştir</title>
    <link rel="stylesheet" href="dist/css/main.css">
</head>

<body>
    <div class="container">
        <div class="login-box">
            <h2>Otel Yönetim</h2>
            <form method="post">
                <div class="input-box">
                    <input type="password" name="password" required>
                    <label>Şifre</label>
                </div>
                <div class="input-box">
                    <input type="password" name="password_check" required>
                    <label>Şifreyi Onayla</label>
                </div>
              <button type="submit" class="btn">Şifreyi Güncelle</button>
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