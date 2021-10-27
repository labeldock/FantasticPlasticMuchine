import { CalcDescription } from "./types"

export function calcDescription (target:any): CalcDescription|null {
  return calcDescriptionList.find(({ calcurator }) => target === calcurator) || null;
}

const calcDescriptionList:CalcDescription[] = [
  {
    formula:'minimumLineWidth = layerHeight + nozzleSize',
    refUrls:['https://dyzedesign.com/2018/07/3d-print-speed-calculation-find-optimal-speed/'],
    calcurator: calcMinLineWidth,
  },
  {
    formula:'maximumLineWidth = layerHeight + nozzleFlatSize',
    refUrls:['https://dyzedesign.com/2018/07/3d-print-speed-calculation-find-optimal-speed/'],
    calcurator: calcMaxLineWidth
  }
]

export function calcMinLineWidth({ layerHeight, nozzleSize }:{ layerHeight: number, nozzleSize: number}):number{
  return layerHeight + nozzleSize
}

export function calcMaxLineWidth({ layerHeight, nozzleFlatSize }:{ layerHeight: number, nozzleFlatSize: number }):number{
  return layerHeight + nozzleFlatSize
}