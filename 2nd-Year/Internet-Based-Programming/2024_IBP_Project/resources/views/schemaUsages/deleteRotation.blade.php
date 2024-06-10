@extends('schemas.admin_panel_layout')

@section('title', 'Güzergah Sil')

@section('form')
<div class="card border-dark shadow-lg">
    <div class="card-header bg-dark text-white d-flex align-items-center"style="background-color: #4d88df92 !important">
        <h3 class="card-title mb-0">Silinecek Güzergahın İsmi</h3>
    </div>
    <form action="{{ route('deleteRotation.post') }}" method="post"style="background-color: #4d88df92 !important">
        @csrf
        <div class="card-body">
            <div class="form-group">
                <label for="name" class="form-label">Güzergahın İsmi:</label>
                <input style="background-color: #4d88df92 !important" name="name" id="name" class="form-control" placeholder="Salon ismini giriniz" required>
            </div>
        </div>
        <div class="card-footer text-end">
            <button style="background-color: #4d88df92 !important" type="submit" class="btn btn-danger"> Güzergahı Sil </button>
        </div>
    </form>
</div>
@endsection
