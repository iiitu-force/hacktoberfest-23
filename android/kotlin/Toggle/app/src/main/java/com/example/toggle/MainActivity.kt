package com.example.toggle

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.Toast
import android.widget.ToggleButton

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        var tb1: ToggleButton = findViewById(R.id.tb1)
        var tb2: ToggleButton = findViewById(R.id.tb2)
        var btn: Button = findViewById(R.id.btn)

        btn.setOnClickListener {
            Toast.makeText(this,"ToggleButton1: ${tb1.text} \nToggleButton2: ${tb2.text}",Toast.LENGTH_SHORT).show()
        }
    }
}