<?php
    session_start();
    include("connection.php");
    include("functions.php");

    if($_SERVER["REQUEST_METHOD"] == "POST") {
        $username = $_POST["username"];
        $password = $_POST["password"];
        if(!is_numeric($username) && !empty($username)) {
            $query = "select * from kayit where username = '$username' limit 1";
            $result = mysqli_query($con, $query);
            if($result && mysqli_num_rows($result) > 0) {
                $user_data = mysqli_fetch_assoc($result);
                if(password_verify($password, $user_data["password"])) {
                    $_SESSION["username"] = $user_data["username"];
                    header("Location: index.php");
                    die;
                } else {
                    echo "<script>alert('Hatalı kullanıcı adı ya da şifre!');</script>";
                }
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
    <title>Giriş Yap</title>
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
                <div class="forgot-pass">
                    <a href="forgot_my_password.php">Şifremi unuttum</a>
                </div>
              <button type="submit" class="btn">Oturum Aç</button>
                <div class="signup-link">
                    <p>İlk defa mı kullanacaksın? <a target="_self" href="sign-up.php">Kayıt Ol</a></p>
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
