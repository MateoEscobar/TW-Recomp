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

// Function: sub_0045F0A8
// Address: 0x45f0a8 - 0x45f278
void sub_0045F0A8_0x45f0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F0A8_0x45f0a8");
#endif

    switch (ctx->pc) {
        case 0x45f190u: goto label_45f190;
        default: break;
    }

    ctx->pc = 0x45f0a8u;

    // 0x45f0a8: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x45f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f0ac: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45f0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45f0b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45f0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45f0b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x45f0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x45f0b8: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x45f0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x45f0bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x45f0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x45f0c0: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x45f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45f0c4: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x45f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45f0c8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x45f0c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x45f0cc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x45f0ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x45f0d0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x45f0d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x45f0d4: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x45f0d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x45f0d8: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x45f0d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x45f0dc: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x45f0dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x45f0e0: 0xc5000074  lwc1        $f0, 0x74($t0)
    ctx->pc = 0x45f0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f0e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x45f0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x45f0e8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x45f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45f0ec: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x45f0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f0f0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x45f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f0f4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x45f0f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x45f0f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x45f0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x45f0fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x45f0fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x45f100: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x45f100u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x45f104: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x45f104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x45f108: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x45f108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x45f10c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x45f10cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x45f110: 0x46010240  add.s       $f9, $f0, $f1
    ctx->pc = 0x45f110u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f114: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45f118: 0x460029c7  neg.s       $f7, $f5
    ctx->pc = 0x45f118u;
    ctx->f[7] = FPU_NEG_S(ctx->f[5]);
    // 0x45f11c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x45f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x45f120: 0x46003207  neg.s       $f8, $f6
    ctx->pc = 0x45f120u;
    ctx->f[8] = FPU_NEG_S(ctx->f[6]);
    // 0x45f124: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x45f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x45f128: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45f128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45f12c: 0x46012300  add.s       $f12, $f4, $f1
    ctx->pc = 0x45f12cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x45f130: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x45f130u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x45f134: 0x46023a80  add.s       $f10, $f7, $f2
    ctx->pc = 0x45f134u;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x45f138: 0x460342c0  add.s       $f11, $f8, $f3
    ctx->pc = 0x45f138u;
    ctx->f[11] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x45f13c: 0x46022b40  add.s       $f13, $f5, $f2
    ctx->pc = 0x45f13cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x45f140: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x45f140u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45f144: 0x46033240  add.s       $f9, $f6, $f3
    ctx->pc = 0x45f144u;
    ctx->f[9] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x45f148: 0xe7aa0028  swc1        $f10, 0x28($sp)
    ctx->pc = 0x45f148u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x45f14c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x45f14cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x45f150: 0xe7ab002c  swc1        $f11, 0x2C($sp)
    ctx->pc = 0x45f150u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x45f154: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x45f154u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x45f158: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x45f158u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x45f15c: 0x46034201  sub.s       $f8, $f8, $f3
    ctx->pc = 0x45f15cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x45f160: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x45f160u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x45f164: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x45f164u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x45f168: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x45f168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45f16c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x45f16cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x45f170: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x45f170u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45f174: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x45f174u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x45f178: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x45f178u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45f17c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x45f17cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x45f180: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x45f180u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45f184: 0x18e00039  blez        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x45F184u;
    {
        const bool branch_taken_0x45f184 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x45F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F184u;
        // 0x45f188: 0xe7a60014  swc1        $f6, 0x14($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f184) {
            ctx->pc = 0x45F26Cu;
            goto label_45f26c;
        }
    }
    ctx->pc = 0x45F18Cu;
    // 0x45f18c: 0x0  nop
    ctx->pc = 0x45f18cu;
    // NOP
label_45f190:
    // 0x45f190: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x45f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f194: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45f194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45f198: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x45f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f19c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f19cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f1a0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x45f1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f1a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45f1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f1a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f1ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f1b0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45f1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f1b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x45f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f1b8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x45f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f1bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f1bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f1c0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x45f1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f1c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45f1c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f1cc: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x45f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f1d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f1d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f1d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f1dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x45f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f1e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f1e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f1e4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45f1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f1e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f1ec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x45f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f1f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f1f4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f1f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45f1fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f200: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x45f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f208: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f20c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f210: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x45f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f214: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f218: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45f218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f21c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f220: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x45f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f224: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f228: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f22c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45f230: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f234: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x45f234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f23c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f240: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f244: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x45f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f248: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f24c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45f24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f250: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f254: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x45f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f258: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x45f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x45f25c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f260: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f264: 0x14e0ffca  bnez        $a3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x45F264u;
    {
        const bool branch_taken_0x45f264 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F264u;
        // 0x45f268: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f264) {
            ctx->pc = 0x45F190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45f190;
        }
    }
    ctx->pc = 0x45F26Cu;
label_45f26c:
    // 0x45f26c: 0x3e00008  jr          $ra
    ctx->pc = 0x45F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F26Cu;
        // 0x45f270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F274u;
    // 0x45f274: 0x0  nop
    ctx->pc = 0x45f274u;
    // NOP
    ctx->pc = 0x45f278u;
}
