@extends('schemas.layout')

@section('title', 'Kaydol')

@section('form')
    <h2>Hesap Şifreni Sıfırla</h2>
    <form action="{{route('forgot_my_password.post')}}" method="POST">
        @csrf
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required>

        <label for="password">Şifre:</label>
        <input type="password" id="password" name="password" required>

        <label for="password2">Şifreyi Doğrula:</label>
        <input type="password" id="password" name="password2" required>
        <br><br>
        Hesabın var mı? <a href="{{route('login')}}">Oturum Aç</a>?
        <br><br><br>
        <input type="submit" value="Şifremi Sıfırla" style="background-color:#548695">
    </form>
@endsection
