<template>
  <header>
    <div id="nav">
      <router-link to="/">Home</router-link> |
      <router-link to="/about">About</router-link>
    </div>
  </header>
  <main>
    <slot></slot>
  </main>
</template>
<script lang="ts">
import { defineComponent } from 'vue'
export default defineComponent({
  name: "Home",
  setup (){
  
  }
});
</script>