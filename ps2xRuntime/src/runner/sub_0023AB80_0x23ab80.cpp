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

// Function: sub_0023AB80
// Address: 0x23ab80 - 0x23ac50
void sub_0023AB80_0x23ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AB80_0x23ab80");
#endif

    switch (ctx->pc) {
        case 0x23abc8u: goto label_23abc8;
        case 0x23abe8u: goto label_23abe8;
        case 0x23abf4u: goto label_23abf4;
        default: break;
    }

    ctx->pc = 0x23ab80u;

    // 0x23ab80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23ab84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23ab88: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x23ab88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x23ab8c: 0x24556710  addiu       $s5, $v0, 0x6710
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
    // 0x23ab90: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x23ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x23ab94: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x23ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x23ab98: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x23ab98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x23ab9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23ab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x23aba0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23aba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aba4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x23aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x23aba8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x23aba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abac: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x23abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x23abb0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x23abb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abb4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x23abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x23abb8: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x23abb8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
    // 0x23abbc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x23abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x23abc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23abc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23abc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_23abc8:
    // 0x23abc8: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x23abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x23abcc: 0x14560010  bne         $v0, $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x23ABCCu;
    {
        const bool branch_taken_0x23abcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x23ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABCCu;
        // 0x23abd0: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abcc) {
            ctx->pc = 0x23AC10u;
            goto label_23ac10;
        }
    }
    ctx->pc = 0x23ABD4u;
    // 0x23abd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23abd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23ABD8u;
    {
        const bool branch_taken_0x23abd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABD8u;
        // 0x23abdc: 0x759021  addu        $s2, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abd8) {
            ctx->pc = 0x23ABFCu;
            goto label_23abfc;
        }
    }
    ctx->pc = 0x23ABE0u;
    // 0x23abe0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23ABE0u;
    SET_GPR_U32(ctx, 31, 0x23ABE8u);
    ctx->pc = 0x23ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ABE0u;
    // 0x23abe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23ABE0u, 0x23ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABE8u;
label_23abe8:
    // 0x23abe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23abe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abec: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23ABECu;
    SET_GPR_U32(ctx, 31, 0x23ABF4u);
    ctx->pc = 0x23ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ABECu;
    // 0x23abf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23ABECu, 0x23ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABF4u;
label_23abf4:
    // 0x23abf4: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23ABF4u;
    {
        const bool branch_taken_0x23abf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABF4u;
        // 0x23abf8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abf4) {
            ctx->pc = 0x23AC14u;
            goto label_23ac14;
        }
    }
    ctx->pc = 0x23ABFCu;
label_23abfc:
    // 0x23abfc: 0x8ee2bd30  lw          $v0, -0x42D0($s7)
    ctx->pc = 0x23abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
    // 0x23ac00: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x23ac04: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x23ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x23ac08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23AC08u;
    {
        const bool branch_taken_0x23ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC08u;
        // 0x23ac0c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac08) {
            ctx->pc = 0x23AC24u;
            goto label_23ac24;
        }
    }
    ctx->pc = 0x23AC10u;
label_23ac10:
    // 0x23ac10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23ac10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23ac14:
    // 0x23ac14: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x23ac14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x23ac18: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x23ac18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23ac1c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x23AC1Cu;
    {
        const bool branch_taken_0x23ac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC1Cu;
        // 0x23ac20: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac1c) {
            ctx->pc = 0x23ABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23abc8;
        }
    }
    ctx->pc = 0x23AC24u;
label_23ac24:
    // 0x23ac24: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x23ac24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23ac28: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23ac28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23ac2c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x23ac2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23ac30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23ac30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23ac34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23ac34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ac38: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23ac38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ac3c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x23ac3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ac40: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x23ac40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ac44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC48u;
        // 0x23ac4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC50u;
}
