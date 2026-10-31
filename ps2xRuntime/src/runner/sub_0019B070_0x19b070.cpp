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

// Function: sub_0019B070
// Address: 0x19b070 - 0x19b198
void sub_0019B070_0x19b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B070_0x19b070");
#endif

    switch (ctx->pc) {
        case 0x19b070u: goto label_19b070;
        case 0x19b074u: goto label_19b074;
        case 0x19b078u: goto label_19b078;
        case 0x19b07cu: goto label_19b07c;
        case 0x19b080u: goto label_19b080;
        case 0x19b084u: goto label_19b084;
        case 0x19b088u: goto label_19b088;
        case 0x19b08cu: goto label_19b08c;
        case 0x19b090u: goto label_19b090;
        case 0x19b094u: goto label_19b094;
        case 0x19b098u: goto label_19b098;
        case 0x19b09cu: goto label_19b09c;
        case 0x19b0a0u: goto label_19b0a0;
        case 0x19b0a4u: goto label_19b0a4;
        case 0x19b0a8u: goto label_19b0a8;
        case 0x19b0acu: goto label_19b0ac;
        case 0x19b0b0u: goto label_19b0b0;
        case 0x19b0b4u: goto label_19b0b4;
        case 0x19b0b8u: goto label_19b0b8;
        case 0x19b0bcu: goto label_19b0bc;
        case 0x19b0c0u: goto label_19b0c0;
        case 0x19b0c4u: goto label_19b0c4;
        case 0x19b0c8u: goto label_19b0c8;
        case 0x19b0ccu: goto label_19b0cc;
        case 0x19b0d0u: goto label_19b0d0;
        case 0x19b0d4u: goto label_19b0d4;
        case 0x19b0d8u: goto label_19b0d8;
        case 0x19b0dcu: goto label_19b0dc;
        case 0x19b0e0u: goto label_19b0e0;
        case 0x19b0e4u: goto label_19b0e4;
        case 0x19b0e8u: goto label_19b0e8;
        case 0x19b0ecu: goto label_19b0ec;
        case 0x19b0f0u: goto label_19b0f0;
        case 0x19b0f4u: goto label_19b0f4;
        case 0x19b0f8u: goto label_19b0f8;
        case 0x19b0fcu: goto label_19b0fc;
        case 0x19b100u: goto label_19b100;
        case 0x19b104u: goto label_19b104;
        case 0x19b108u: goto label_19b108;
        case 0x19b10cu: goto label_19b10c;
        case 0x19b110u: goto label_19b110;
        case 0x19b114u: goto label_19b114;
        case 0x19b118u: goto label_19b118;
        case 0x19b11cu: goto label_19b11c;
        case 0x19b120u: goto label_19b120;
        case 0x19b124u: goto label_19b124;
        case 0x19b128u: goto label_19b128;
        case 0x19b12cu: goto label_19b12c;
        case 0x19b130u: goto label_19b130;
        case 0x19b134u: goto label_19b134;
        case 0x19b138u: goto label_19b138;
        case 0x19b13cu: goto label_19b13c;
        case 0x19b140u: goto label_19b140;
        case 0x19b144u: goto label_19b144;
        case 0x19b148u: goto label_19b148;
        case 0x19b14cu: goto label_19b14c;
        case 0x19b150u: goto label_19b150;
        case 0x19b154u: goto label_19b154;
        case 0x19b158u: goto label_19b158;
        case 0x19b15cu: goto label_19b15c;
        case 0x19b160u: goto label_19b160;
        case 0x19b164u: goto label_19b164;
        case 0x19b168u: goto label_19b168;
        case 0x19b16cu: goto label_19b16c;
        case 0x19b170u: goto label_19b170;
        case 0x19b174u: goto label_19b174;
        case 0x19b178u: goto label_19b178;
        case 0x19b17cu: goto label_19b17c;
        case 0x19b180u: goto label_19b180;
        case 0x19b184u: goto label_19b184;
        case 0x19b188u: goto label_19b188;
        case 0x19b18cu: goto label_19b18c;
        case 0x19b190u: goto label_19b190;
        case 0x19b194u: goto label_19b194;
        default: break;
    }

    ctx->pc = 0x19b070u;

label_19b070:
    // 0x19b070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19b074:
    // 0x19b074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19b074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_19b078:
    // 0x19b078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19b07c:
    // 0x19b07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b080:
    // 0x19b080: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x19b080u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_19b084:
    // 0x19b084: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x19b084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19b088:
    // 0x19b088: 0xc047e6c  jal         func_11F9B0
label_19b08c:
    if (ctx->pc == 0x19B08Cu) {
        ctx->pc = 0x19B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B088u;
        // 0x19b08c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B090u;
        goto label_19b090;
    }
    ctx->pc = 0x19B088u;
    SET_GPR_U32(ctx, 31, 0x19B090u);
    ctx->pc = 0x19B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B088u;
    // 0x19b08c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19B088u, 0x19B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B090u;
label_19b090:
    // 0x19b090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b094:
    // 0x19b094: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x19b094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_19b098:
    // 0x19b098: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_19b09c:
    // 0x19b09c: 0xa0f809  jalr        $a1
label_19b0a0:
    if (ctx->pc == 0x19B0A0u) {
        ctx->pc = 0x19B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B09Cu;
        // 0x19b0a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0A4u;
        goto label_19b0a4;
    }
    ctx->pc = 0x19B09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19B0A4u);
        ctx->pc = 0x19B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B09Cu;
        // 0x19b0a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B09Cu, 0x19B0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B0A4u;
label_19b0a4:
    // 0x19b0a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19b0a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19b0a8:
    // 0x19b0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b0ac:
    // 0x19b0ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19b0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19b0b0:
    // 0x19b0b0: 0xc066df6  jal         func_19B7D8
label_19b0b4:
    if (ctx->pc == 0x19B0B4u) {
        ctx->pc = 0x19B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0B0u;
        // 0x19b0b4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0B8u;
        goto label_19b0b8;
    }
    ctx->pc = 0x19B0B0u;
    SET_GPR_U32(ctx, 31, 0x19B0B8u);
    ctx->pc = 0x19B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B0B0u;
    // 0x19b0b4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B7D8u, 0x19B0B0u, 0x19B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0B8u;
label_19b0b8:
    // 0x19b0b8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x19b0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_19b0bc:
    // 0x19b0bc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x19b0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_19b0c0:
    // 0x19b0c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b0c4:
    // 0x19b0c4: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
label_19b0c8:
    // 0x19b0c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19b0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19b0cc:
    // 0x19b0cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19b0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19b0d0:
    // 0x19b0d0: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x19b0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b0d4:
    // 0x19b0d4: 0x0  nop
    ctx->pc = 0x19b0d4u;
    // NOP
label_19b0d8:
    // 0x19b0d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b0dc:
    if (ctx->pc == 0x19B0DCu) {
        ctx->pc = 0x19B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0D8u;
        // 0x19b0dc: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0E0u;
        goto label_19b0e0;
    }
    ctx->pc = 0x19B0D8u;
    {
        const bool branch_taken_0x19b0d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b0d8) {
            ctx->pc = 0x19B0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B0D8u;
            // 0x19b0dc: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B0E0u;
            goto label_19b0e0;
        }
    }
    ctx->pc = 0x19B0E0u;
label_19b0e0:
    // 0x19b0e0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_19b0e4:
    // 0x19b0e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19b0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19b0e8:
    // 0x19b0e8: 0x0  nop
    ctx->pc = 0x19b0e8u;
    // NOP
label_19b0ec:
    // 0x19b0ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19b0ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b0f0:
    // 0x19b0f0: 0x0  nop
    ctx->pc = 0x19b0f0u;
    // NOP
label_19b0f4:
    // 0x19b0f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b0f8:
    if (ctx->pc == 0x19B0F8u) {
        ctx->pc = 0x19B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0F4u;
        // 0x19b0f8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0FCu;
        goto label_19b0fc;
    }
    ctx->pc = 0x19B0F4u;
    {
        const bool branch_taken_0x19b0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b0f4) {
            ctx->pc = 0x19B0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B0F4u;
            // 0x19b0f8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B0FCu;
            goto label_19b0fc;
        }
    }
    ctx->pc = 0x19B0FCu;
label_19b0fc:
    // 0x19b0fc: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x19b0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_19b100:
    // 0x19b100: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19b100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19b104:
    // 0x19b104: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19b104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_19b108:
    // 0x19b108: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x19b108u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_19b10c:
    // 0x19b10c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x19b10cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_19b110:
    // 0x19b110: 0xc0cdd5a  jal         func_337568
label_19b114:
    if (ctx->pc == 0x19B114u) {
        ctx->pc = 0x19B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B110u;
        // 0x19b114: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B118u;
        goto label_19b118;
    }
    ctx->pc = 0x19B110u;
    SET_GPR_U32(ctx, 31, 0x19B118u);
    ctx->pc = 0x19B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B110u;
    // 0x19b114: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x19B110u, 0x19B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B118u;
label_19b118:
    // 0x19b118: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x19b118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b11c:
    // 0x19b11c: 0x0  nop
    ctx->pc = 0x19b11cu;
    // NOP
label_19b120:
    // 0x19b120: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b124:
    if (ctx->pc == 0x19B124u) {
        ctx->pc = 0x19B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B120u;
        // 0x19b124: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B128u;
        goto label_19b128;
    }
    ctx->pc = 0x19B120u;
    {
        const bool branch_taken_0x19b120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b120) {
            ctx->pc = 0x19B124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B120u;
            // 0x19b124: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B128u;
            goto label_19b128;
        }
    }
    ctx->pc = 0x19B128u;
label_19b128:
    // 0x19b128: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19b128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b12c:
    // 0x19b12c: 0x0  nop
    ctx->pc = 0x19b12cu;
    // NOP
label_19b130:
    // 0x19b130: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b134:
    if (ctx->pc == 0x19B134u) {
        ctx->pc = 0x19B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B130u;
        // 0x19b134: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B138u;
        goto label_19b138;
    }
    ctx->pc = 0x19B130u;
    {
        const bool branch_taken_0x19b130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b130) {
            ctx->pc = 0x19B134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B130u;
            // 0x19b134: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B138u;
            goto label_19b138;
        }
    }
    ctx->pc = 0x19B138u;
label_19b138:
    // 0x19b138: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_19b13c:
    // 0x19b13c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x19b13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_19b140:
    // 0x19b140: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x19b140u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_19b144:
    // 0x19b144: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_19b148:
    // 0x19b148: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x19b148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_19b14c:
    // 0x19b14c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x19b14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_19b150:
    // 0x19b150: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x19b150u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_19b154:
    // 0x19b154: 0xc0cdd5a  jal         func_337568
label_19b158:
    if (ctx->pc == 0x19B158u) {
        ctx->pc = 0x19B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B154u;
        // 0x19b158: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B15Cu;
        goto label_19b15c;
    }
    ctx->pc = 0x19B154u;
    SET_GPR_U32(ctx, 31, 0x19B15Cu);
    ctx->pc = 0x19B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B154u;
    // 0x19b158: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x19B154u, 0x19B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B15Cu;
label_19b15c:
    // 0x19b15c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19b160:
    // 0x19b160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b164:
    // 0x19b164: 0xc066e5a  jal         func_19B968
label_19b168:
    if (ctx->pc == 0x19B168u) {
        ctx->pc = 0x19B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B164u;
        // 0x19b168: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B16Cu;
        goto label_19b16c;
    }
    ctx->pc = 0x19B164u;
    SET_GPR_U32(ctx, 31, 0x19B16Cu);
    ctx->pc = 0x19B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B164u;
    // 0x19b168: 0xe60000f8  swc1        $f0, 0xF8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B968u, 0x19B164u, 0x19B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B16Cu;
label_19b16c:
    // 0x19b16c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19b16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19b170:
    // 0x19b170: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x19b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b174:
    // 0x19b174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b178:
    // 0x19b178: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x19b178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19b17c:
    // 0x19b17c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19b180:
    // 0x19b180: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x19b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19b184:
    // 0x19b184: 0xe60100b8  swc1        $f1, 0xB8($s0)
    ctx->pc = 0x19b184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_19b188:
    // 0x19b188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19b188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19b18c:
    // 0x19b18c: 0x3e00008  jr          $ra
label_19b190:
    if (ctx->pc == 0x19B190u) {
        ctx->pc = 0x19B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B18Cu;
        // 0x19b190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B194u;
        goto label_19b194;
    }
    ctx->pc = 0x19B18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B18Cu;
        // 0x19b190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B194u;
label_19b194:
    // 0x19b194: 0x0  nop
    ctx->pc = 0x19b194u;
    // NOP
    ctx->pc = 0x19b198u;
}
