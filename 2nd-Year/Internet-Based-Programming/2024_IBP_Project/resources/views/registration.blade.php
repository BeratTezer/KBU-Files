@extends('schemas.layout')

@section('title', 'Kaydol')

@section('form')
    <h2>Detaylar için Kayıt Ol</h2>
    <form action="{{route('registration.post')}}" method="POST">
        @csrf
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required autofocus>

        <label for="password">Şifre:</label>
        <input type="password" id="password" name="password" required>

        <label for="password">Şifreyi Doğrula:</label>
        <input type="password" id="password" name="password2" required>
        <br><br>
        Şifreni mi unuttun? <a href="{{route('forgot_my_password')}}">Şifreni Sıfırla</a>
        <br><br><br>
        <input type="submit" value="Kayıt Ol" style="background-color:#548695">
    </form>
@endsection
