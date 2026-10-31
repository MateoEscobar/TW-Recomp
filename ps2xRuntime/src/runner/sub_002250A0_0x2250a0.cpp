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

// Function: sub_002250A0
// Address: 0x2250a0 - 0x225200
void sub_002250A0_0x2250a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002250A0_0x2250a0");
#endif

    switch (ctx->pc) {
        case 0x2250c4u: goto label_2250c4;
        case 0x225138u: goto label_225138;
        case 0x225148u: goto label_225148;
        case 0x225170u: goto label_225170;
        case 0x225184u: goto label_225184;
        case 0x2251d8u: goto label_2251d8;
        default: break;
    }

    ctx->pc = 0x2250a0u;

    // 0x2250a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2250a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2250a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2250a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2250a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2250a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2250acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2250b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2250b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2250b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2250b8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2250b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2250bc: 0xc08a684  jal         func_229A10
    ctx->pc = 0x2250BCu;
    SET_GPR_U32(ctx, 31, 0x2250C4u);
    ctx->pc = 0x2250C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250BCu;
    // 0x2250c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x2250BCu, 0x2250C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250C4u;
label_2250c4:
    // 0x2250c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2250c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2250c8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2250c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2250cc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2250ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2250d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2250d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2250d4: 0x0  nop
    ctx->pc = 0x2250d4u;
    // NOP
    // 0x2250d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2250d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2250dc: 0x0  nop
    ctx->pc = 0x2250dcu;
    // NOP
    // 0x2250e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2250E0u;
    {
        const bool branch_taken_0x2250e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2250e0) {
            ctx->pc = 0x225108u;
            goto label_225108;
        }
    }
    ctx->pc = 0x2250E8u;
    // 0x2250e8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2250e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2250ec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2250ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2250f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2250f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2250f4: 0x0  nop
    ctx->pc = 0x2250f4u;
    // NOP
    // 0x2250f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2250f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2250fc: 0x0  nop
    ctx->pc = 0x2250fcu;
    // NOP
    // 0x225100: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x225100u;
    {
        const bool branch_taken_0x225100 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x225104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225100u;
        // 0x225104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225100) {
            ctx->pc = 0x2251E8u;
            goto label_2251e8;
        }
    }
    ctx->pc = 0x225108u;
label_225108:
    // 0x225108: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x225108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x22510c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x22510cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x225110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225114: 0x0  nop
    ctx->pc = 0x225114u;
    // NOP
    // 0x225118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22511c: 0x0  nop
    ctx->pc = 0x22511cu;
    // NOP
    // 0x225120: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x225120u;
    {
        const bool branch_taken_0x225120 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x225124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225120u;
        // 0x225124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225120) {
            ctx->pc = 0x2251E8u;
            goto label_2251e8;
        }
    }
    ctx->pc = 0x225128u;
    // 0x225128: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x225128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x22512c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225130: 0xc089998  jal         func_226660
    ctx->pc = 0x225130u;
    SET_GPR_U32(ctx, 31, 0x225138u);
    ctx->pc = 0x225134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225130u;
    // 0x225134: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225130u, 0x225138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225138u;
label_225138:
    // 0x225138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225138u;
    {
        const bool branch_taken_0x225138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225138) {
            ctx->pc = 0x225150u;
            goto label_225150;
        }
    }
    ctx->pc = 0x225140u;
    // 0x225140: 0xc05dc36  jal         func_1770D8
    ctx->pc = 0x225140u;
    SET_GPR_U32(ctx, 31, 0x225148u);
    ctx->pc = 0x225144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225140u;
    // 0x225144: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x225140u, 0x225148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225148u;
label_225148:
    // 0x225148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x225148u;
    {
        const bool branch_taken_0x225148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225148u;
        // 0x22514c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225148) {
            ctx->pc = 0x225158u;
            goto label_225158;
        }
    }
    ctx->pc = 0x225150u;
label_225150:
    // 0x225150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225154: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_225158:
    // 0x225158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22515c: 0x3405a003  ori         $a1, $zero, 0xA003
    ctx->pc = 0x22515cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40963);
    // 0x225160: 0x52eb8  dsll        $a1, $a1, 26
    ctx->pc = 0x225160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 26);
    // 0x225164: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x225164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x225168: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225168u;
    SET_GPR_U32(ctx, 31, 0x225170u);
    ctx->pc = 0x22516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225168u;
    // 0x22516c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225168u, 0x225170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225170u;
label_225170:
    // 0x225170: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x225170u;
    {
        const bool branch_taken_0x225170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225170u;
        // 0x225174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225170) {
            ctx->pc = 0x22518Cu;
            goto label_22518c;
        }
    }
    ctx->pc = 0x225178u;
    // 0x225178: 0x3c0500c4  lui         $a1, 0xC4
    ctx->pc = 0x225178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)196 << 16));
    // 0x22517c: 0xc089998  jal         func_226660
    ctx->pc = 0x22517Cu;
    SET_GPR_U32(ctx, 31, 0x225184u);
    ctx->pc = 0x225180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22517Cu;
    // 0x225180: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22517Cu, 0x225184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225184u;
label_225184:
    // 0x225184: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x225184u;
    {
        const bool branch_taken_0x225184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225184) {
            ctx->pc = 0x225188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225184u;
            // 0x225188: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2251E4u;
            goto label_2251e4;
        }
    }
    ctx->pc = 0x22518Cu;
label_22518c:
    // 0x22518c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22518cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x225190: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x225190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x225194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225198: 0x0  nop
    ctx->pc = 0x225198u;
    // NOP
    // 0x22519c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22519cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2251a0: 0x0  nop
    ctx->pc = 0x2251a0u;
    // NOP
    // 0x2251a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2251A4u;
    {
        const bool branch_taken_0x2251a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2251A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251A4u;
        // 0x2251a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251a4) {
            ctx->pc = 0x2251D0u;
            goto label_2251d0;
        }
    }
    ctx->pc = 0x2251ACu;
    // 0x2251ac: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2251acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2251b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2251b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2251b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2251b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2251b8: 0x0  nop
    ctx->pc = 0x2251b8u;
    // NOP
    // 0x2251bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2251bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2251c0: 0x0  nop
    ctx->pc = 0x2251c0u;
    // NOP
    // 0x2251c4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2251C4u;
    {
        const bool branch_taken_0x2251c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2251c4) {
            ctx->pc = 0x2251C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2251C4u;
            // 0x2251c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2251E4u;
            goto label_2251e4;
        }
    }
    ctx->pc = 0x2251CCu;
    // 0x2251cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2251ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2251d0:
    // 0x2251d0: 0xc089998  jal         func_226660
    ctx->pc = 0x2251D0u;
    SET_GPR_U32(ctx, 31, 0x2251D8u);
    ctx->pc = 0x2251D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251D0u;
    // 0x2251d4: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2251D0u, 0x2251D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251D8u;
label_2251d8:
    // 0x2251d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2251D8u;
    {
        const bool branch_taken_0x2251d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2251DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251D8u;
        // 0x2251dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251d8) {
            ctx->pc = 0x2251E8u;
            goto label_2251e8;
        }
    }
    ctx->pc = 0x2251E0u;
    // 0x2251e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2251e4:
    // 0x2251e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2251e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2251e8:
    // 0x2251e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2251e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2251ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2251ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2251f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2251f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2251f4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2251f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2251f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2251F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2251FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251F8u;
        // 0x2251fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225200u;
}
