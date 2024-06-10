@extends('schemas.admin_panel_layout')

@section('title', 'Üyeyi Sil')

@section('form')
<div class="card-header bg-dark text-white text-center"style="background-color: #4d88df92 !important">
    <h3 class="card-title m-0">Silinecek Üyenin E-Posta Adresi</h3>
</div>
<form action="{{ route('deleteUser.post') }}" method="post">
    @csrf
    <div class="card-body p-4">
        <div class="form-group mb-3">
            <label for="email" class="form-label">E-posta:</label>
            <input style="background-color: #4d88df92 !important" style="color: black" type="email" name="email" id="email" class="form-control" placeholder="Email adresi giriniz" style="background-color: #4d88df92 !important"required>
        </div>
    </div>
    <div class="card-footer bg-light text-end"style="background-color: #4d88df92 !important">
        <button type="submit" class="btn btn-danger"style="background-color: #4d88df92 !important" >Üyeyi Sil</button>
    </div>
</form>
@endsection
