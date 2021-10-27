<template>
  <MenuLayout>
    <img alt="Vue logo" src="../assets/logo.png" style="width:30px;" />
      <h2>Currect Extrusion Width</h2>
      <div>
        <div>
          <img src="../assets/nozzledesc.png" />
        </div>
        <blockquote v-for="description in [calcDescription(calcMinLineWidth), calcDescription(calcMaxLineWidth)]">
          <a :href="description.refUrls" target="_blank">
            {{ description.formula }}
          </a>
        </blockquote>
        <div>
          <button v-for="preset in PRINT_PRESET" @click="setPresetConfig(preset)">{{ preset.NAME }}</button>
        </div>
        <ul>
          <li>NozzleSize  : <input type="number" v-model="nozzleSize" step="0.1" /></li>
          <li>LayerHeight  : <input type="number" v-model="layerHeight" step="0.1" /></li>
          <li>
            Line Width :
            {{ calcMinLineWidth({ layerHeight, nozzleSize }) }} ~
            {{ calcMaxLineWidth({ layerHeight, nozzleFlatSize }) }}
          </li>
        </ul>
      </div>
  </MenuLayout>  
</template>

<script lang="ts">
import { defineComponent, ref } from "vue"
import MenuLayout from "../layouts/MenuLayout.vue"
import { PrintPresetItem } from "../shared/types"
import { PRINT_PRESET } from "../shared/constants"
import { calcDescription, calcMinLineWidth, calcMaxLineWidth } from "../shared/calcurators"

export default defineComponent({
  components: {
    MenuLayout,
  },
  setup (){
    const nozzleSize = ref(PRINT_PRESET[0].NOZZLE_DIAMETER)
    const layerHeight = ref(PRINT_PRESET[0].LAYER_HEIGHT)
    const nozzleFlatSize = ref(PRINT_PRESET[0].NOZZLE_FLAT_SIZE)

    function setPresetConfig ({NOZZLE_DIAMETER, LAYER_HEIGHT, NOZZLE_FLAT_SIZE}:PrintPresetItem){
      nozzleSize.value = NOZZLE_DIAMETER
      layerHeight.value = LAYER_HEIGHT
      nozzleFlatSize.value = NOZZLE_FLAT_SIZE
    }

    return {
      //const
      PRINT_PRESET,
      //state
      nozzleSize,
      layerHeight,
      nozzleFlatSize,
      //fn
      setPresetConfig,
      calcDescription,
      calcMinLineWidth,
      calcMaxLineWidth,
    }
  }
});
</script>
