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

// Function: sub_00463318
// Address: 0x463318 - 0x4637d8
void sub_00463318_0x463318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463318_0x463318");
#endif

    ctx->pc = 0x463318u;

    // 0x463318: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x463318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46331c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x46331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463320: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x463320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463324: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x463324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x463328: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x463328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x46332c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x46332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463330: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x463330u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x463334: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x463334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x463338: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x463338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46333c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x46333cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x463340: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x463340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x463344: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x463344u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x463348: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x463348u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x46334c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x46334cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x463350: 0x46020a80  add.s       $f10, $f1, $f2
    ctx->pc = 0x463350u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x463354: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x463354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463358: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x463358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46335c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x46335cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x463360: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x463360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x463364: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x463364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x463368: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x463368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x46336c: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x46336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463370: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x463370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463374: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x463374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x463378: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x463378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46337c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x46337cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x463380: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x463380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x463384: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x463384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463388: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x463388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46338c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x46338cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x463390: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x463390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x463394: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x463394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x463398: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x463398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x46339c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x46339cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4633a0: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x4633a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4633a4: 0x0  nop
    ctx->pc = 0x4633a4u;
    // NOP
    // 0x4633a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x4633A8u;
    {
        const bool branch_taken_0x4633a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4633ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4633A8u;
        // 0x4633ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4633a8) {
            ctx->pc = 0x4633B8u;
            goto label_4633b8;
        }
    }
    ctx->pc = 0x4633B0u;
    // 0x4633b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4633b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4633b4: 0x0  nop
    ctx->pc = 0x4633b4u;
    // NOP
label_4633b8:
    // 0x4633b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4633B8u;
    {
        const bool branch_taken_0x4633b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4633b8) {
            ctx->pc = 0x4633F8u;
            goto label_4633f8;
        }
    }
    ctx->pc = 0x4633C0u;
    // 0x4633c0: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x4633c0u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x4633c4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4633c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4633c8: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x4633c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4633cc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4633ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4633d0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x4633d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4633d4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4633d4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x4633d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4633d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4633dc: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x4633dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4633e0: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x4633e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x4633e4: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x4633e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x4633e8: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x4633e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4633ec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4633ecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4633f0: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x4633f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x4633f4: 0x0  nop
    ctx->pc = 0x4633f4u;
    // NOP
label_4633f8:
    // 0x4633f8: 0xc78080fc  lwc1        $f0, -0x7F04($gp)
    ctx->pc = 0x4633f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4633fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4633fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x463400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x463400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x463404: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x463404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x463408: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x463408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46340c: 0x0  nop
    ctx->pc = 0x46340cu;
    // NOP
    // 0x463410: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x463410u;
    {
        const bool branch_taken_0x463410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x463414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463410u;
        // 0x463414: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x463410) {
            ctx->pc = 0x46341Cu;
            goto label_46341c;
        }
    }
    ctx->pc = 0x463418u;
    // 0x463418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x463418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46341c:
    // 0x46341c: 0x544000d6  bnel        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x46341Cu;
    {
        const bool branch_taken_0x46341c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46341c) {
            ctx->pc = 0x463420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46341Cu;
            // 0x463420: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x463778u;
            goto label_463778;
        }
    }
    ctx->pc = 0x463424u;
    // 0x463424: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x463424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x463428: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x463428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46342c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x46342cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x463430: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x463430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x463434: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x463434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x463438: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x463438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x46343c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x46343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x463440: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x463440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x463444: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x463444u;
    {
        const bool branch_taken_0x463444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463444) {
            ctx->pc = 0x463448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x463444u;
            // 0x463448: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x463460u;
            goto label_463460;
        }
    }
    ctx->pc = 0x46344Cu;
    // 0x46344c: 0xc78a8100  lwc1        $f10, -0x7F00($gp)
    ctx->pc = 0x46344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x463450: 0x5ce0008f  bgtzl       $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x463450u;
    {
        const bool branch_taken_0x463450 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x463450) {
            ctx->pc = 0x463454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x463450u;
            // 0x463454: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x463690u;
            goto label_463690;
        }
    }
    ctx->pc = 0x463458u;
    // 0x463458: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x463458u;
    {
        const bool branch_taken_0x463458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463458u;
        // 0x46345c: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x463458) {
            ctx->pc = 0x463698u;
            goto label_463698;
        }
    }
    ctx->pc = 0x463460u;
label_463460:
    // 0x463460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x463460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x463464: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x463464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x463468: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x463468u;
    {
        const bool branch_taken_0x463468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463468u;
        // 0x46346c: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463468) {
            ctx->pc = 0x46351Cu;
            goto label_46351c;
        }
    }
    ctx->pc = 0x463470u;
    // 0x463470: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x463470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x463474: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x463474u;
    {
        const bool branch_taken_0x463474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x463474) {
            ctx->pc = 0x463478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x463474u;
            // 0x463478: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x463488u;
            goto label_463488;
        }
    }
    ctx->pc = 0x46347Cu;
    // 0x46347c: 0xc78a8104  lwc1        $f10, -0x7EFC($gp)
    ctx->pc = 0x46347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x463480: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x463480u;
    {
        const bool branch_taken_0x463480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463480u;
        // 0x463484: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x463480) {
            ctx->pc = 0x463698u;
            goto label_463698;
        }
    }
    ctx->pc = 0x463488u;
label_463488:
    // 0x463488: 0xc7808108  lwc1        $f0, -0x7EF8($gp)
    ctx->pc = 0x463488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46348c: 0xc783810c  lwc1        $f3, -0x7EF4($gp)
    ctx->pc = 0x46348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x463490: 0xc7878110  lwc1        $f7, -0x7EF0($gp)
    ctx->pc = 0x463490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x463494: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463498: 0xc7818114  lwc1        $f1, -0x7EEC($gp)
    ctx->pc = 0x463498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46349c: 0xc7828118  lwc1        $f2, -0x7EE8($gp)
    ctx->pc = 0x46349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4634a0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4634a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4634a4: 0xc785811c  lwc1        $f5, -0x7EE4($gp)
    ctx->pc = 0x4634a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4634a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4634a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4634ac: 0xc7848120  lwc1        $f4, -0x7EE0($gp)
    ctx->pc = 0x4634acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4634b0: 0xc7888124  lwc1        $f8, -0x7EDC($gp)
    ctx->pc = 0x4634b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4634b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4634b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4634b8: 0xc7838128  lwc1        $f3, -0x7ED8($gp)
    ctx->pc = 0x4634b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4634bc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4634bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4634c0: 0xc786812c  lwc1        $f6, -0x7ED4($gp)
    ctx->pc = 0x4634c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4634c4: 0xc7828130  lwc1        $f2, -0x7ED0($gp)
    ctx->pc = 0x4634c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4634c8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4634c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4634cc: 0xc7898134  lwc1        $f9, -0x7ECC($gp)
    ctx->pc = 0x4634ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4634d0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4634d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4634d4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x4634d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x4634d8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4634d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4634dc: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4634dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4634e0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4634e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4634e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4634e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4634e8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4634e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4634ec: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x4634ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x4634f0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4634f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4634f4: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x4634f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x4634f8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4634f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4634fc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x4634fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x463500: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463504: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x463504u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x463508: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x463508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x46350c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x46350cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x463510: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x463510u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x463514: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x463514u;
    {
        const bool branch_taken_0x463514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463514u;
        // 0x463518: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x463514) {
            ctx->pc = 0x463690u;
            goto label_463690;
        }
    }
    ctx->pc = 0x46351Cu;
label_46351c:
    // 0x46351c: 0x4e3002c  bgezl       $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x46351Cu;
    {
        const bool branch_taken_0x46351c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x46351c) {
            ctx->pc = 0x463520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46351Cu;
            // 0x463520: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4635D0u;
            goto label_4635d0;
        }
    }
    ctx->pc = 0x463524u;
    // 0x463524: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x463524u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x463528: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x463528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x46352c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x46352cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x463530: 0xc7808138  lwc1        $f0, -0x7EC8($gp)
    ctx->pc = 0x463530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463534: 0xc784813c  lwc1        $f4, -0x7EC4($gp)
    ctx->pc = 0x463534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x463538: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x463538u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x46353c: 0xc7868140  lwc1        $f6, -0x7EC0($gp)
    ctx->pc = 0x46353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x463540: 0xc7818144  lwc1        $f1, -0x7EBC($gp)
    ctx->pc = 0x463540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463544: 0xc7828148  lwc1        $f2, -0x7EB8($gp)
    ctx->pc = 0x463544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463548: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x46354c: 0xc787814c  lwc1        $f7, -0x7EB4($gp)
    ctx->pc = 0x46354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x463550: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463554: 0xc7838150  lwc1        $f3, -0x7EB0($gp)
    ctx->pc = 0x463554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x463558: 0xc7888154  lwc1        $f8, -0x7EAC($gp)
    ctx->pc = 0x463558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x46355c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x46355cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x463560: 0xc7858158  lwc1        $f5, -0x7EA8($gp)
    ctx->pc = 0x463560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x463564: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x463564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x463568: 0xc784815c  lwc1        $f4, -0x7EA4($gp)
    ctx->pc = 0x463568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46356c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46356cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463570: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463574: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x463574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x463578: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x463578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x46357c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46357cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463580: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463584: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x463584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x463588: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x463588u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x46358c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46358cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463590: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463594: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x463594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x463598: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x463598u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x46359c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46359cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4635a0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4635a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4635a4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4635a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4635a8: 0x460b0344  c1          0xB0344
    ctx->pc = 0x4635a8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x4635ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4635acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4635b0: 0xc7828160  lwc1        $f2, -0x7EA0($gp)
    ctx->pc = 0x4635b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4635b4: 0xc7838164  lwc1        $f3, -0x7E9C($gp)
    ctx->pc = 0x4635b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4635b8: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x4635b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x4635bc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x4635bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4635c0: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x4635c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x4635c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4635c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4635c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4635C8u;
    {
        const bool branch_taken_0x4635c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4635CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4635C8u;
        // 0x4635cc: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4635c8) {
            ctx->pc = 0x463690u;
            goto label_463690;
        }
    }
    ctx->pc = 0x4635D0u;
label_4635d0:
    // 0x4635d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4635d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4635d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4635d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4635d8: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x4635d8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4635dc: 0x460b0344  c1          0xB0344
    ctx->pc = 0x4635dcu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x4635e0: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x4635e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4635e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4635e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4635e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4635e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4635ec: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4635ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4635f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4635f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4635f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4635f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4635f8: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x4635f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4635fc: 0xc7808168  lwc1        $f0, -0x7E98($gp)
    ctx->pc = 0x4635fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463600: 0xc784816c  lwc1        $f4, -0x7E94($gp)
    ctx->pc = 0x463600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x463604: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463608: 0xc78a8170  lwc1        $f10, -0x7E90($gp)
    ctx->pc = 0x463608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x46360c: 0xc7818174  lwc1        $f1, -0x7E8C($gp)
    ctx->pc = 0x46360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463610: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x463610u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x463614: 0xc7868178  lwc1        $f6, -0x7E88($gp)
    ctx->pc = 0x463614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x463618: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x463618u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x46361c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x46361cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x463620: 0xc787817c  lwc1        $f7, -0x7E84($gp)
    ctx->pc = 0x463620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x463624: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x463628: 0xc7848180  lwc1        $f4, -0x7E80($gp)
    ctx->pc = 0x463628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46362c: 0xc7898184  lwc1        $f9, -0x7E7C($gp)
    ctx->pc = 0x46362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x463630: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x463630u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x463634: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463638: 0xc7838188  lwc1        $f3, -0x7E78($gp)
    ctx->pc = 0x463638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46363c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x46363cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x463640: 0xc788818c  lwc1        $f8, -0x7E74($gp)
    ctx->pc = 0x463640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x463644: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x463644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x463648: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x46364c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46364cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463650: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x463650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x463654: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x463654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x463658: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x46365c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46365cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463660: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x463660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x463664: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x463664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x463668: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x463668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x46366c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x46366cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x463670: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x463670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x463674: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x463674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x463678: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x463678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x46367c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x46367cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x463680: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x463680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x463684: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x463684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x463688: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x463688u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x46368c: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x46368cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_463690:
    // 0x463690: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x463690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x463694: 0x0  nop
    ctx->pc = 0x463694u;
    // NOP
label_463698:
    // 0x463698: 0xc7828190  lwc1        $f2, -0x7E70($gp)
    ctx->pc = 0x463698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46369c: 0xc7858194  lwc1        $f5, -0x7E6C($gp)
    ctx->pc = 0x46369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4636a0: 0xc7868198  lwc1        $f6, -0x7E68($gp)
    ctx->pc = 0x4636a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4636a4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x4636a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4636a8: 0xc787819c  lwc1        $f7, -0x7E64($gp)
    ctx->pc = 0x4636a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4636ac: 0xc78881a0  lwc1        $f8, -0x7E60($gp)
    ctx->pc = 0x4636acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4636b0: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x4636b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x4636b4: 0xc78981a4  lwc1        $f9, -0x7E5C($gp)
    ctx->pc = 0x4636b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4636b8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4636b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4636bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4636bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4636c0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x4636c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x4636c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4636c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4636c8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4636c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4636cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4636ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4636d0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4636d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4636d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4636d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4636d8: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x4636d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x4636dc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x4636dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x4636e0: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x4636e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x4636e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4636e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4636e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4636e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4636ec: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x4636ecu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x4636f0: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x4636f0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x4636f4: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x4636f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x4636f8: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x4636f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4636fc: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x4636fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x463700: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x463700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x463704: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x463704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463708: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x463708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x46370c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x46370cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463710: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x463710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x463714: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x463714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463718: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x463718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x46371c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x46371cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463720: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x463720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x463724: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x463724u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x463728: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x463728u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x46372c: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x46372cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x463730: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x463730u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x463734: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x463734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x463738: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x463738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x46373c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x46373cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x463740: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x463740u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x463744: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x463744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x463748: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x463748u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x46374c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x46374cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x463750: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x463750u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x463754: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x463754u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x463758: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x463758u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x46375c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x46375cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x463760: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x463760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x463764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x463764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463768: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x463768u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x46376c: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x46376cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x463770: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x463770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463774: 0x0  nop
    ctx->pc = 0x463774u;
    // NOP
label_463778:
    // 0x463778: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x463778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46377c: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x46377cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x463780: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x463780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x463784: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x463784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x463788: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x463788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x46378c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x46378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463790: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x463790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463794: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x463794u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x463798: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x463798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46379c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x46379cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4637a0: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x4637a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4637a4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x4637a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4637a8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x4637a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4637ac: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x4637acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x4637b0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4637b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4637b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4637b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4637b8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x4637b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4637bc: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x4637bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4637c0: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x4637c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4637c4: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x4637c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x4637c8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4637c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4637cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4637ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4637d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4637D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4637D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4637D0u;
        // 0x4637d4: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4637D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4637D8u;
}
