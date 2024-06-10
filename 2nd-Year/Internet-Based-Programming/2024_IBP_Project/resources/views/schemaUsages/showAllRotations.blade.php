@extends('schemas.admin_panel_layout')

@section('title', 'Tüm Güzergahlar')

@section('form')
<div class="card-header">
    <h3 class="card-title">Güzergahlar Listesi</h3>
</div>
<div class="card-body table-responsive p-0">
    <table class="table table-hover text-nowrap">
        <thead>
            <tr>
                <th>İsim</th>
                <th>Adres</th>
                <th>Telefon</th>
                <th>E-posta</th>
                <th>Aylık</th>
                <th>Aktif Üye</th>
                <th>Açıklama</th>
            </tr>
        </thead>
        <tbody>
            @foreach ($rotations->sortBy('name') as $rotation)
                <tr style="background-color: #4d88df92 !important">
                    <td>{{ $rotation->name }}</td>
                    <td>{{ $rotation->location }}</td>
                    <td>{{ $rotation->guide_name }}</td>
                    <td>{{ $rotation->guide_phone }}</td>
                    <td>{{ $rotation->price }}</td>
                    <td>{{ $rotation->time }}</td>
                    <td>{{ $rotation->description }}</td>
                </tr>
            @endforeach
        </tbody>
    </table>
</div>
@endsection
