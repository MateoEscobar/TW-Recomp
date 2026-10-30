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

// Function: sub_0029B9B0
// Address: 0x29b9b0 - 0x29baa8
void sub_0029B9B0_0x29b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B9B0_0x29b9b0");
#endif

    switch (ctx->pc) {
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba24u: goto label_29ba24;
        case 0x29ba48u: goto label_29ba48;
        case 0x29ba64u: goto label_29ba64;
        case 0x29ba6cu: goto label_29ba6c;
        default: break;
    }

    ctx->pc = 0x29b9b0u;

    // 0x29b9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b9b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29b9b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29b9bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29b9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b9c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29b9cc: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x29b9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b9d0: 0x8e4201a8  lw          $v0, 0x1A8($s2)
    ctx->pc = 0x29b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
    // 0x29b9d4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x29b9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29b9d8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x29B9D8u;
    {
        const bool branch_taken_0x29b9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9D8u;
        // 0x29b9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9d8) {
            ctx->pc = 0x29BA84u;
            goto label_29ba84;
        }
    }
    ctx->pc = 0x29B9E0u;
    // 0x29b9e0: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x29b9e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x29b9e4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x29b9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x29b9e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b9ec: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29B9ECu;
    {
        const bool branch_taken_0x29b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9ECu;
        // 0x29b9f0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9ec) {
            ctx->pc = 0x29BA80u;
            goto label_29ba80;
        }
    }
    ctx->pc = 0x29B9F4u;
    // 0x29b9f4: 0x86500092  lh          $s0, 0x92($s2)
    ctx->pc = 0x29b9f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x29b9f8: 0x82260010  lb          $a2, 0x10($s1)
    ctx->pc = 0x29b9f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29b9fc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29ba00: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x29ba00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x29ba04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x29ba08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29ba0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29ba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29ba10: 0xc0a6cae  jal         func_29B2B8
    ctx->pc = 0x29BA10u;
    SET_GPR_U32(ctx, 31, 0x29BA18u);
    ctx->pc = 0x29BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA10u;
    // 0x29ba14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x29BA10u, 0x29BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA18u;
label_29ba18:
    // 0x29ba18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba1c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x29BA1Cu;
    SET_GPR_U32(ctx, 31, 0x29BA24u);
    ctx->pc = 0x29BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA1Cu;
    // 0x29ba20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29BA1Cu, 0x29BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA24u;
label_29ba24:
    // 0x29ba24: 0x3c0141a2  lui         $at, 0x41A2
    ctx->pc = 0x29ba24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16802 << 16));
    // 0x29ba28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29ba28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ba2c: 0x0  nop
    ctx->pc = 0x29ba2cu;
    // NOP
    // 0x29ba30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29ba30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ba34: 0x0  nop
    ctx->pc = 0x29ba34u;
    // NOP
    // 0x29ba38: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29BA38u;
    {
        const bool branch_taken_0x29ba38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA38u;
        // 0x29ba3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba38) {
            ctx->pc = 0x29BA84u;
            goto label_29ba84;
        }
    }
    ctx->pc = 0x29BA40u;
    // 0x29ba40: 0xc0a09bc  jal         func_2826F0
    ctx->pc = 0x29BA40u;
    SET_GPR_U32(ctx, 31, 0x29BA48u);
    ctx->pc = 0x29BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA40u;
    // 0x29ba44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826F0u, 0x29BA40u, 0x29BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA48u;
label_29ba48:
    // 0x29ba48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ba48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ba50: 0x5602000d  bnel        $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29BA50u;
    {
        const bool branch_taken_0x29ba50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ba50) {
            ctx->pc = 0x29BA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BA50u;
            // 0x29ba54: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BA88u;
            goto label_29ba88;
        }
    }
    ctx->pc = 0x29BA58u;
    // 0x29ba58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba5c: 0xc0a6d0a  jal         func_29B428
    ctx->pc = 0x29BA5Cu;
    SET_GPR_U32(ctx, 31, 0x29BA64u);
    ctx->pc = 0x29BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA5Cu;
    // 0x29ba60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B428u, 0x29BA5Cu, 0x29BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA64u;
label_29ba64:
    // 0x29ba64: 0xc0a6db6  jal         func_29B6D8
    ctx->pc = 0x29BA64u;
    SET_GPR_U32(ctx, 31, 0x29BA6Cu);
    ctx->pc = 0x29BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA64u;
    // 0x29ba68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B6D8u, 0x29BA64u, 0x29BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA6Cu;
label_29ba6c:
    // 0x29ba6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29ba70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29ba70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba74: 0xa070011d  sb          $s0, 0x11D($v1)
    ctx->pc = 0x29ba74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 16));
    // 0x29ba78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29BA78u;
    {
        const bool branch_taken_0x29ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA78u;
        // 0x29ba7c: 0xa2200012  sb          $zero, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba78) {
            ctx->pc = 0x29BA84u;
            goto label_29ba84;
        }
    }
    ctx->pc = 0x29BA80u;
label_29ba80:
    // 0x29ba80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ba84:
    // 0x29ba84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29ba84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29ba88:
    // 0x29ba88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29ba88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ba8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29ba8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ba90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ba94: 0x3e00008  jr          $ra
    ctx->pc = 0x29BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA94u;
        // 0x29ba98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BA9Cu;
    // 0x29ba9c: 0x0  nop
    ctx->pc = 0x29ba9cu;
    // NOP
    // 0x29baa0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29baa4: 0x0  nop
    ctx->pc = 0x29baa4u;
    // NOP
    ctx->pc = 0x29baa8u;
}
