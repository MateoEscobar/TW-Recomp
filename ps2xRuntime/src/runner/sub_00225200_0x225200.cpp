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

// Function: sub_00225200
// Address: 0x225200 - 0x225390
void sub_00225200_0x225200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225200_0x225200");
#endif

    switch (ctx->pc) {
        case 0x225228u: goto label_225228;
        case 0x225298u: goto label_225298;
        case 0x2252a8u: goto label_2252a8;
        case 0x2252c8u: goto label_2252c8;
        case 0x2252d8u: goto label_2252d8;
        case 0x2252f0u: goto label_2252f0;
        case 0x225330u: goto label_225330;
        case 0x22534cu: goto label_22534c;
        case 0x22536cu: goto label_22536c;
        default: break;
    }

    ctx->pc = 0x225200u;

    // 0x225200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225204: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x225204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x225208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22520c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x225210: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225214: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x225214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x225218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22521c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22521cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225220: 0xc08a684  jal         func_229A10
    ctx->pc = 0x225220u;
    SET_GPR_U32(ctx, 31, 0x225228u);
    ctx->pc = 0x225224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225220u;
    // 0x225224: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x225220u, 0x225228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225228u;
label_225228:
    // 0x225228: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x225228u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x22522c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x22522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x225230: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x225230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x225234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225238: 0x0  nop
    ctx->pc = 0x225238u;
    // NOP
    // 0x22523c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22523cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225240: 0x0  nop
    ctx->pc = 0x225240u;
    // NOP
    // 0x225244: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x225244u;
    {
        const bool branch_taken_0x225244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225244) {
            ctx->pc = 0x22526Cu;
            goto label_22526c;
        }
    }
    ctx->pc = 0x22524Cu;
    // 0x22524c: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x22524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x225250: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x225250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x225254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225258: 0x0  nop
    ctx->pc = 0x225258u;
    // NOP
    // 0x22525c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22525cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225260: 0x0  nop
    ctx->pc = 0x225260u;
    // NOP
    // 0x225264: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x225264u;
    {
        const bool branch_taken_0x225264 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x225268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225264u;
        // 0x225268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225264) {
            ctx->pc = 0x225374u;
            goto label_225374;
        }
    }
    ctx->pc = 0x22526Cu;
label_22526c:
    // 0x22526c: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x22526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x225270: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x225270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x225274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225278: 0x0  nop
    ctx->pc = 0x225278u;
    // NOP
    // 0x22527c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22527cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225280: 0x0  nop
    ctx->pc = 0x225280u;
    // NOP
    // 0x225284: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x225284u;
    {
        const bool branch_taken_0x225284 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x225288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225284u;
        // 0x225288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225284) {
            ctx->pc = 0x225374u;
            goto label_225374;
        }
    }
    ctx->pc = 0x22528Cu;
    // 0x22528c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225290: 0xc089998  jal         func_226660
    ctx->pc = 0x225290u;
    SET_GPR_U32(ctx, 31, 0x225298u);
    ctx->pc = 0x225294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225290u;
    // 0x225294: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225290u, 0x225298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225298u;
label_225298:
    // 0x225298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225298u;
    {
        const bool branch_taken_0x225298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225298) {
            ctx->pc = 0x2252B0u;
            goto label_2252b0;
        }
    }
    ctx->pc = 0x2252A0u;
    // 0x2252a0: 0xc05dc36  jal         func_1770D8
    ctx->pc = 0x2252A0u;
    SET_GPR_U32(ctx, 31, 0x2252A8u);
    ctx->pc = 0x2252A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252A0u;
    // 0x2252a4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x2252A0u, 0x2252A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252A8u;
label_2252a8:
    // 0x2252a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2252A8u;
    {
        const bool branch_taken_0x2252a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252A8u;
        // 0x2252ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252a8) {
            ctx->pc = 0x2252B8u;
            goto label_2252b8;
        }
    }
    ctx->pc = 0x2252B0u;
label_2252b0:
    // 0x2252b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2252b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2252b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2252b8:
    // 0x2252b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2252b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252c0: 0xc089998  jal         func_226660
    ctx->pc = 0x2252C0u;
    SET_GPR_U32(ctx, 31, 0x2252C8u);
    ctx->pc = 0x2252C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252C0u;
    // 0x2252c4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2252C0u, 0x2252C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252C8u;
label_2252c8:
    // 0x2252c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2252C8u;
    {
        const bool branch_taken_0x2252c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2252c8) {
            ctx->pc = 0x2252CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2252C8u;
            // 0x2252cc: 0x3c0500c0  lui         $a1, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2252E4u;
            goto label_2252e4;
        }
    }
    ctx->pc = 0x2252D0u;
    // 0x2252d0: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2252D0u;
    SET_GPR_U32(ctx, 31, 0x2252D8u);
    ctx->pc = 0x2252D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252D0u;
    // 0x2252d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2252D0u, 0x2252D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252D8u;
label_2252d8:
    // 0x2252d8: 0x384200c3  xori        $v0, $v0, 0xC3
    ctx->pc = 0x2252d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)195);
    // 0x2252dc: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x2252dcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2252e0: 0x3c0500c0  lui         $a1, 0xC0
    ctx->pc = 0x2252e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
label_2252e4:
    // 0x2252e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252e8: 0xc089998  jal         func_226660
    ctx->pc = 0x2252E8u;
    SET_GPR_U32(ctx, 31, 0x2252F0u);
    ctx->pc = 0x2252ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252E8u;
    // 0x2252ec: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2252E8u, 0x2252F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252F0u;
label_2252f0:
    // 0x2252f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2252F0u;
    {
        const bool branch_taken_0x2252f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252F0u;
        // 0x2252f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252f0) {
            ctx->pc = 0x225340u;
            goto label_225340;
        }
    }
    ctx->pc = 0x2252F8u;
    // 0x2252f8: 0x5640001d  bnel        $s2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2252F8u;
    {
        const bool branch_taken_0x2252f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2252f8) {
            ctx->pc = 0x2252FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2252F8u;
            // 0x2252fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225370u;
            goto label_225370;
        }
    }
    ctx->pc = 0x225300u;
    // 0x225300: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x225300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x225304: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x225304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x225308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22530c: 0x0  nop
    ctx->pc = 0x22530cu;
    // NOP
    // 0x225310: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x225310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225314: 0x0  nop
    ctx->pc = 0x225314u;
    // NOP
    // 0x225318: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x225318u;
    {
        const bool branch_taken_0x225318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x225318) {
            ctx->pc = 0x22531Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225318u;
            // 0x22531c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225370u;
            goto label_225370;
        }
    }
    ctx->pc = 0x225320u;
    // 0x225320: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x225320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x225324: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x225324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
    // 0x225328: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225328u;
    SET_GPR_U32(ctx, 31, 0x225330u);
    ctx->pc = 0x22532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225328u;
    // 0x22532c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225328u, 0x225330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225330u;
label_225330:
    // 0x225330: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x225330u;
    {
        const bool branch_taken_0x225330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225330u;
        // 0x225334: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225330) {
            ctx->pc = 0x225374u;
            goto label_225374;
        }
    }
    ctx->pc = 0x225338u;
    // 0x225338: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x225338u;
    {
        const bool branch_taken_0x225338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225338u;
        // 0x22533c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225338) {
            ctx->pc = 0x225370u;
            goto label_225370;
        }
    }
    ctx->pc = 0x225340u;
label_225340:
    // 0x225340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225344: 0xc089998  jal         func_226660
    ctx->pc = 0x225344u;
    SET_GPR_U32(ctx, 31, 0x22534Cu);
    ctx->pc = 0x225348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225344u;
    // 0x225348: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225344u, 0x22534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22534Cu;
label_22534c:
    // 0x22534c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22534Cu;
    {
        const bool branch_taken_0x22534c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22534Cu;
        // 0x225350: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22534c) {
            ctx->pc = 0x225374u;
            goto label_225374;
        }
    }
    ctx->pc = 0x225354u;
    // 0x225354: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x225354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x225358: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x225358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x22535c: 0x34a5f080  ori         $a1, $a1, 0xF080
    ctx->pc = 0x22535cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61568);
    // 0x225360: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x225360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
    // 0x225364: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225364u;
    SET_GPR_U32(ctx, 31, 0x22536Cu);
    ctx->pc = 0x225368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225364u;
    // 0x225368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225364u, 0x22536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22536Cu;
label_22536c:
    // 0x22536c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x22536cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_225370:
    // 0x225370: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225374:
    // 0x225374: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x225374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225378: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x225378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22537c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22537cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225384: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x225384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225388: 0x3e00008  jr          $ra
    ctx->pc = 0x225388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225388u;
        // 0x22538c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225390u;
}
