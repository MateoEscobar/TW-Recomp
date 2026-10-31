#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045F4A8
// Address: 0x45f4a8 - 0x45f758
void sub_0045F4A8_0x45f4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F4A8_0x45f4a8");
#endif

    switch (ctx->pc) {
        case 0x45f520u: goto label_45f520;
        case 0x45f528u: goto label_45f528;
        case 0x45f534u: goto label_45f534;
        default: break;
    }

    ctx->pc = 0x45f4a8u;

    // 0x45f4a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x45f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x45f4ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45f4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45f4b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x45f4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x45f4b4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x45f4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x45f4b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x45f4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x45f4bc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x45f4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x45f4c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x45f4c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f4c4: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x45f4c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x45f4c8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x45f4c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f4cc: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x45f4ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x45f4d0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x45f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x45f4d4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x45f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x45f4d8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x45f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x45f4dc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x45f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x45f4e0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x45f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x45f4e4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x45f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x45f4e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45f4ec: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x45f4ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x45f4f0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x45f4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45f4f4: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x45f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f4f8: 0xc5010074  lwc1        $f1, 0x74($t0)
    ctx->pc = 0x45f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f4fc: 0x8d1e0038  lw          $fp, 0x38($t0)
    ctx->pc = 0x45f4fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x45f500: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x45f500u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45f504: 0x8d170008  lw          $s7, 0x8($t0)
    ctx->pc = 0x45f504u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x45f508: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x45f508u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x45f50c: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x45f50cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45f510: 0x8d110004  lw          $s1, 0x4($t0)
    ctx->pc = 0x45f510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x45f514: 0x18e00080  blez        $a3, . + 4 + (0x80 << 2)
    ctx->pc = 0x45F514u;
    {
        const bool branch_taken_0x45f514 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x45F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F514u;
        // 0x45f518: 0x8d120034  lw          $s2, 0x34($t0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f514) {
            ctx->pc = 0x45F718u;
            goto label_45f718;
        }
    }
    ctx->pc = 0x45F51Cu;
    // 0x45f51c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x45f51cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_45f520:
    // 0x45f520: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x45F520u;
    SET_GPR_U32(ctx, 31, 0x45F528u);
    ctx->pc = 0x45F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45F520u;
    // 0x45f524: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x45F520u, 0x45F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F528u;
label_45f528:
    // 0x45f528: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x45f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x45f52c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x45F52Cu;
    SET_GPR_U32(ctx, 31, 0x45F534u);
    ctx->pc = 0x45F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45F52Cu;
    // 0x45f530: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x45F52Cu, 0x45F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F534u;
label_45f534:
    // 0x45f534: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x45f534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x45f538: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x45f538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45f53c: 0x4600a147  neg.s       $f5, $f20
    ctx->pc = 0x45f53cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[20]);
    // 0x45f540: 0xc6a60000  lwc1        $f6, 0x0($s5)
    ctx->pc = 0x45f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x45f544: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x45f544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x45f548: 0xc6c80008  lwc1        $f8, 0x8($s6)
    ctx->pc = 0x45f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x45f54c: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x45f54cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x45f550: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x45f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45f554: 0x46062b02  mul.s       $f12, $f5, $f6
    ctx->pc = 0x45f554u;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x45f558: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x45f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f55c: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x45f55cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x45f560: 0xc6a90004  lwc1        $f9, 0x4($s5)
    ctx->pc = 0x45f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x45f564: 0x4608a1c2  mul.s       $f7, $f20, $f8
    ctx->pc = 0x45f564u;
    ctx->f[7] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x45f568: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x45f568u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x45f56c: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x45f56cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x45f570: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x45f570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x45f574: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x45f574u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x45f578: 0x46090282  mul.s       $f10, $f0, $f9
    ctx->pc = 0x45f578u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x45f57c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x45f57cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45f580: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x45f580u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x45f584: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x45f584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x45f588: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x45f588u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x45f58c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x45f58cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x45f590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f594: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x45f594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x45f598: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x45f598u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x45f59c: 0x460aa500  add.s       $f20, $f20, $f10
    ctx->pc = 0x45f59cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[10]);
    // 0x45f5a0: 0x460b39c0  add.s       $f7, $f7, $f11
    ctx->pc = 0x45f5a0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
    // 0x45f5a4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x45f5a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45f5a8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x45f5a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x45f5ac: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x45f5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x45f5b0: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x45f5b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x45f5b4: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x45f5b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x45f5b8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x45f5b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45f5bc: 0x461539c2  mul.s       $f7, $f7, $f21
    ctx->pc = 0x45f5bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
    // 0x45f5c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x45f5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45f5c4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x45f5c4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x45f5c8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x45f5c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45f5cc: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x45f5ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45f5d0: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x45f5d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45f5d4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x45f5d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x45f5d8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f5dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x45f5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45f5e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45f5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45f5e4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f5e8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f5ec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f5ecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f5f0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f5f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f5f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f5f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f5fc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45f5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45f600: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f604: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f608: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f608u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f60c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f610: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f618: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45f618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45f61c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x45f61cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x45f620: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f624: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f628: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f62c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f62cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f630: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f634: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45f638: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f63c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f640: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f644: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f648: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f64c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45f64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45f650: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f654: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f658: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f65c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f65cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f664: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45f664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45f668: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f66c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x45f66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x45f670: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f674: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f678: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f680: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45f684: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f688: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f68c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f690: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f694: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f698: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45f698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45f69c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f6a0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f6a4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f6a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f6a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f6ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f6b0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45f6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45f6b4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x45f6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x45f6b8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45f6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f6bc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f6c0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f6c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f6c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f6c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f6c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f6cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f6d0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45f6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45f6d4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f6d8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f6dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f6dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f6e0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f6e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f6e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f6e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f6ec: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45f6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45f6f0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f6f4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f6f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45f6f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45f6fc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f700: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x45f700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x45f704: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45f704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f70c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45f70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45f710: 0x1680ff83  bnez        $s4, . + 4 + (-0x7D << 2)
    ctx->pc = 0x45F710u;
    {
        const bool branch_taken_0x45f710 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x45F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F710u;
        // 0x45f714: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f710) {
            ctx->pc = 0x45F520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45f520;
        }
    }
    ctx->pc = 0x45F718u;
label_45f718:
    // 0x45f718: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x45f718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45f71c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x45f71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45f720: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x45f720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45f724: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x45f724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45f728: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x45f728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45f72c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x45f72cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45f730: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x45f730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45f734: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x45f734u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45f738: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x45f738u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45f73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45f73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45f740: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x45f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x45f744: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x45f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x45f748: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x45f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x45f74c: 0x3e00008  jr          $ra
    ctx->pc = 0x45F74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F74Cu;
        // 0x45f750: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F754u;
    // 0x45f754: 0x0  nop
    ctx->pc = 0x45f754u;
    // NOP
    ctx->pc = 0x45f758u;
}
