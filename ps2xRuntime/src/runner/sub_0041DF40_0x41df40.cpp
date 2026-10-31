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

// Function: sub_0041DF40
// Address: 0x41df40 - 0x41e040
void sub_0041DF40_0x41df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DF40_0x41df40");
#endif

    switch (ctx->pc) {
        case 0x41df98u: goto label_41df98;
        case 0x41dfa8u: goto label_41dfa8;
        case 0x41dfbcu: goto label_41dfbc;
        case 0x41dfccu: goto label_41dfcc;
        case 0x41e008u: goto label_41e008;
        default: break;
    }

    ctx->pc = 0x41df40u;

    // 0x41df40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x41df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x41df44: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41df44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x41df48: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x41df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x41df4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x41df4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x41df54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41df54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df58: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x41df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x41df5c: 0x2454b2e8  addiu       $s4, $v0, -0x4D18
    ctx->pc = 0x41df5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947560));
    // 0x41df60: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x41df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x41df64: 0x24152710  addiu       $s5, $zero, 0x2710
    ctx->pc = 0x41df64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x41df68: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x41df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x41df6c: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x41df6cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x41df70: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x41df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x41df74: 0x26570004  addiu       $s7, $s2, 0x4
    ctx->pc = 0x41df74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x41df78: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x41df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x41df7c: 0x241e03f4  addiu       $fp, $zero, 0x3F4
    ctx->pc = 0x41df7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41df80: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x41df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x41df84: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x41df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x41df88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41df8c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x41df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x41df90: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x41df90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41df94: 0x0  nop
    ctx->pc = 0x41df94u;
    // NOP
label_41df98:
    // 0x41df98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41df98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df9c: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x41df9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x41dfa0: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x41dfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x41dfa4: 0x0  nop
    ctx->pc = 0x41dfa4u;
    // NOP
label_41dfa8:
    // 0x41dfa8: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x41dfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x41dfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dfb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41dfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dfb4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41DFB4u;
    SET_GPR_U32(ctx, 31, 0x41DFBCu);
    ctx->pc = 0x41DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DFB4u;
    // 0x41dfb8: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41DFB4u, 0x41DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DFBCu;
label_41dfbc:
    // 0x41dfbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x41dfbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x41dfc0: 0x26c491e0  addiu       $a0, $s6, -0x6E20
    ctx->pc = 0x41dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939104));
    // 0x41dfc4: 0xc050fda  jal         func_143F68
    ctx->pc = 0x41DFC4u;
    SET_GPR_U32(ctx, 31, 0x41DFCCu);
    ctx->pc = 0x41DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DFC4u;
    // 0x41dfc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x41DFC4u, 0x41DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DFCCu;
label_41dfcc:
    // 0x41dfcc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x41dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x41dfd0: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x41dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x41dfd4: 0x2e220017  sltiu       $v0, $s1, 0x17
    ctx->pc = 0x41dfd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x41dfd8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x41DFD8u;
    {
        const bool branch_taken_0x41dfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DFD8u;
        // 0x41dfdc: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dfd8) {
            ctx->pc = 0x41DFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41dfa8;
        }
    }
    ctx->pc = 0x41DFE0u;
    // 0x41dfe0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x41dfe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dfe4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x41dfe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41dfe8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x41DFE8u;
    {
        const bool branch_taken_0x41dfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DFE8u;
        // 0x41dfec: 0x7e1018  mult        $v0, $v1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dfe8) {
            ctx->pc = 0x41DF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41df98;
        }
    }
    ctx->pc = 0x41DFF0u;
    // 0x41dff0: 0xa2400fd4  sb          $zero, 0xFD4($s2)
    ctx->pc = 0x41dff0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4052), (uint8_t)GPR_U32(ctx, 0));
    // 0x41dff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dff8: 0xa2401034  sb          $zero, 0x1034($s2)
    ctx->pc = 0x41dff8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4148), (uint8_t)GPR_U32(ctx, 0));
    // 0x41dffc: 0xa2400ff4  sb          $zero, 0xFF4($s2)
    ctx->pc = 0x41dffcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4084), (uint8_t)GPR_U32(ctx, 0));
    // 0x41e000: 0xc10782e  jal         func_41E0B8
    ctx->pc = 0x41E000u;
    SET_GPR_U32(ctx, 31, 0x41E008u);
    ctx->pc = 0x41E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E000u;
    // 0x41e004: 0xa2401014  sb          $zero, 0x1014($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 4116), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E0B8u, 0x41E000u, 0x41E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E008u;
label_41e008:
    // 0x41e008: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41e008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e00c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x41e00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x41e010: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x41e010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41e014: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x41e014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41e018: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x41e018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41e01c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41e01cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41e020: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x41e020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41e024: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x41e024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e028: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x41e028u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e02c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x41e02cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e034: 0x3e00008  jr          $ra
    ctx->pc = 0x41E034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E034u;
        // 0x41e038: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E03Cu;
    // 0x41e03c: 0x0  nop
    ctx->pc = 0x41e03cu;
    // NOP
    ctx->pc = 0x41e040u;
}
