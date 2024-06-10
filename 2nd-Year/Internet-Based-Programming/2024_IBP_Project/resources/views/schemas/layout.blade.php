<!DOCTYPE html>
<html lang="tr">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>@yield('title')</title>
  <style>
    .message {
        background-color: #f8d7da;
        color: #721c24;
        padding: 1rem;
        border: 1px solid #f5c6cb;
        border-radius: 0.25rem;
        margin-bottom: 1rem;
        opacity: 0;
        transition: opacity 0.5s ease-in-out, transform 0.5s ease-in-out;
        transform: translateY(-20px);
    }

    .message.success {
        background-color: #d4edda;
        color: #155724;
        border-color: #c3e6cb;
    }

    .message.show {
        opacity: 1;
        transform: translateY(0);
    }
    #message-container {
        position: fixed;
        top: 30px;
        left: 50%;
        transform: translateX(-50%);
        z-index: 1000;
        width: 80%;
        max-width: 400px;
    }
    </style>

    <script>
        document.addEventListener('DOMContentLoaded', (event) => {
            const messages = document.querySelectorAll('.message');
            messages.forEach(message => {
                message.classList.add('show');
                setTimeout(() => {
                    message.classList.remove('show');
                }, 3000);
            });
        });
    </script>
  <style>
    body {
      font-family: 'Roboto', sans-serif;
      background-image: url({{asset('dag.webp')}});
      background-size: cover;
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;
      color: #333;
    }

    .form-container {
      background: rgba(255, 255, 255, 0.9);
      padding: 30px;
      border-radius: 15px;
      box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
      width: 350px;
      text-align: center;
    }

    .form-container h2 {
      margin-bottom: 20px;
      font-size: 24px;
      color: #333;
    }

    .form-container label {
      display: block;
      margin: 10px 0 5px;
      text-align: left;
    }

    .form-container input[type="password"],
    .form-container input[type="email"] {
      width: 100%;
      padding: 12px;
      margin: 8px 0;
      border: 1px solid #ccc;
      border-radius: 5px;
      box-sizing: border-box;
      transition: border-color 0.3s;
    }

    .form-container input[type="password"]:focus,
    .form-container input[type="email"]:focus {
      border-color: #007bff;
      outline: none;
    }

    .form-container input[type="submit"] {
      width: 100%;
      padding: 12px;
      background-color: #007bff;
      border: none;
      border-radius: 5px;
      color: white;
      font-size: 16px;
      cursor: pointer;
      margin-top: 20px;
      transition: background-color 0.3s;
    }

    .form-container input[type="submit"]:hover {
      background-color: #0056b3;
    }

    .form-container input[type="submit"]:focus {
      outline: none;
    }

    input {
        background-color: #73b7cb;
        color: white;
    }
  </style>
</head>

<body>
    <div id="message-container">
        @foreach ($errors->all() as $error)
            <div class="message error">{{ $error }}</div>
        @endforeach

        @if (session('error'))
            <div class="message error">{{ session('error') }}</div>
        @endif

        @if (session('success'))
            <div class="message success">{{ session('success') }}</div>
        @endif
    </div>
  <div class="form-container" style="background-color: #66a3b5">
    @yield('form')
  </div>
</body>

</html>
