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

// Function: sub_0028BB58
// Address: 0x28bb58 - 0x28bbf0
void sub_0028BB58_0x28bb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BB58_0x28bb58");
#endif

    switch (ctx->pc) {
        case 0x28bb78u: goto label_28bb78;
        case 0x28bbd8u: goto label_28bbd8;
        default: break;
    }

    ctx->pc = 0x28bb58u;

    // 0x28bb58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28bb5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28bb60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28bb64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28bb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28bb6c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x28bb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28bb70: 0xc08a08a  jal         func_228228
    ctx->pc = 0x28BB70u;
    SET_GPR_U32(ctx, 31, 0x28BB78u);
    ctx->pc = 0x28BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB70u;
    // 0x28bb74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x28BB70u, 0x28BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB78u;
label_28bb78:
    // 0x28bb78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb7c: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x28BB7Cu;
    {
        const bool branch_taken_0x28bb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28bb7c) {
            ctx->pc = 0x28BB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BB7Cu;
            // 0x28bb80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BB84u;
    // 0x28bb84: 0x920202d5  lbu         $v0, 0x2D5($s0)
    ctx->pc = 0x28bb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 725)));
    // 0x28bb88: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x28BB88u;
    {
        const bool branch_taken_0x28bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bb88) {
            ctx->pc = 0x28BB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BB88u;
            // 0x28bb8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BB90u;
    // 0x28bb90: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x28bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x28bb94: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x28bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x28bb98: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x28bb98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28bb9c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x28bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x28bba0: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x28bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x28bba4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x28bba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28bbac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bbb0: 0xe6000250  swc1        $f0, 0x250($s0)
    ctx->pc = 0x28bbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    // 0x28bbb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bbb8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x28bbb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28bbbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bbc0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28bbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28bbc4: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x28bbc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28bbc8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x28bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x28bbcc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28bbd0: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x28BBD0u;
    SET_GPR_U32(ctx, 31, 0x28BBD8u);
    ctx->pc = 0x28BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBD0u;
    // 0x28bbd4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x28BBD0u, 0x28BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBD8u;
label_28bbd8:
    // 0x28bbd8: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x28bbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x28bbdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28bbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28bbe0:
    // 0x28bbe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bbe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x28BBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBE8u;
        // 0x28bbec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BBF0u;
}
