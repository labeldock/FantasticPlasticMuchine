<template>
  <MenuLayout>
    <div class="about">
      <h1>This is an about page</h1>
    </div>
  </MenuLayout>
</template>

<script lang="ts">
import { defineComponent } from "vue";
import MenuLayout from "../layouts/MenuLayout.vue";

export default defineComponent({
  components: {
    MenuLayout,
  },
  setup (){
    
  }
});
</script>
