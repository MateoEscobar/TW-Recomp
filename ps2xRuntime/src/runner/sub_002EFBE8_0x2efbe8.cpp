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

// Function: sub_002EFBE8
// Address: 0x2efbe8 - 0x2efcc0
void sub_002EFBE8_0x2efbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFBE8_0x2efbe8");
#endif

    switch (ctx->pc) {
        case 0x2efc10u: goto label_2efc10;
        case 0x2efc34u: goto label_2efc34;
        case 0x2efc58u: goto label_2efc58;
        case 0x2efc8cu: goto label_2efc8c;
        case 0x2efc94u: goto label_2efc94;
        case 0x2efca8u: goto label_2efca8;
        default: break;
    }

    ctx->pc = 0x2efbe8u;

    // 0x2efbe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2efbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2efbec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2efbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2efbf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2efbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2efbf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efbf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2efbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2efbfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2efbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efc00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2efc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2efc04: 0x8c4301a8  lw          $v1, 0x1A8($v0)
    ctx->pc = 0x2efc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x2efc08: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFC08u;
    {
        const bool branch_taken_0x2efc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efc08) {
            ctx->pc = 0x2EFC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFC08u;
            // 0x2efc0c: 0x84420092  lh          $v0, 0x92($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC18u;
            goto label_2efc18;
        }
    }
    ctx->pc = 0x2EFC10u;
label_2efc10:
    // 0x2efc10: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2EFC10u;
    {
        const bool branch_taken_0x2efc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC10u;
        // 0x2efc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc10) {
            ctx->pc = 0x2EFCACu;
            goto label_2efcac;
        }
    }
    ctx->pc = 0x2EFC18u;
label_2efc18:
    // 0x2efc18: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2efc18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2efc1c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2efc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2efc20: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2efc20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2efc24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2efc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2efc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc2c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2EFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC34u);
    ctx->pc = 0x2EFC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC2Cu;
    // 0x2efc30: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EFC2Cu, 0x2EFC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC34u;
label_2efc34:
    // 0x2efc34: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2efc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2efc38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2efc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efc3c: 0x0  nop
    ctx->pc = 0x2efc3cu;
    // NOP
    // 0x2efc40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2efc40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2efc44: 0x0  nop
    ctx->pc = 0x2efc44u;
    // NOP
    // 0x2efc48: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2EFC48u;
    {
        const bool branch_taken_0x2efc48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC48u;
        // 0x2efc4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc48) {
            ctx->pc = 0x2EFCACu;
            goto label_2efcac;
        }
    }
    ctx->pc = 0x2EFC50u;
    // 0x2efc50: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2EFC50u;
    SET_GPR_U32(ctx, 31, 0x2EFC58u);
    ctx->pc = 0x2EFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC50u;
    // 0x2efc54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EFC50u, 0x2EFC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC58u;
label_2efc58:
    // 0x2efc58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2efc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc5c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EFC5Cu;
    {
        const bool branch_taken_0x2efc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC5Cu;
        // 0x2efc60: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc5c) {
            ctx->pc = 0x2EFC8Cu;
            goto label_2efc8c;
        }
    }
    ctx->pc = 0x2EFC64u;
    // 0x2efc64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2efc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efc68: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2efc68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2efc6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2efc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2efc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2efc74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2efc74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2efc78: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2efc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efc7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2efc7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2efc80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc84: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2EFC84u;
    SET_GPR_U32(ctx, 31, 0x2EFC8Cu);
    ctx->pc = 0x2EFC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC84u;
    // 0x2efc88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2EFC84u, 0x2EFC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC8Cu;
label_2efc8c:
    // 0x2efc8c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2EFC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC94u);
    ctx->pc = 0x2EFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC8Cu;
    // 0x2efc90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EFC8Cu, 0x2EFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC94u;
label_2efc94:
    // 0x2efc94: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2EFC94u;
    {
        const bool branch_taken_0x2efc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC94u;
        // 0x2efc98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc94) {
            ctx->pc = 0x2EFC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFC9Cu;
    // 0x2efc9c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2efc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efca0: 0xc0bebdc  jal         func_2FAF70
    ctx->pc = 0x2EFCA0u;
    SET_GPR_U32(ctx, 31, 0x2EFCA8u);
    ctx->pc = 0x2EFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFCA0u;
    // 0x2efca4: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2EFCA0u, 0x2EFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFCA8u;
label_2efca8:
    // 0x2efca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2efca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efcac:
    // 0x2efcac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2efcacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efcb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2efcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efcb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCB8u;
        // 0x2efcbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFCC0u;
}
