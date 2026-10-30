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

// Function: sub_0032DF80
// Address: 0x32df80 - 0x32e040
void sub_0032DF80_0x32df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DF80_0x32df80");
#endif

    switch (ctx->pc) {
        case 0x32dff4u: goto label_32dff4;
        case 0x32e00cu: goto label_32e00c;
        case 0x32e024u: goto label_32e024;
        default: break;
    }

    ctx->pc = 0x32df80u;

    // 0x32df80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32df84: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x32df88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32df8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32df90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32df90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32df98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32df9c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x32DF9Cu;
    {
        const bool branch_taken_0x32df9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF9Cu;
        // 0x32dfa0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32df9c) {
            ctx->pc = 0x32E004u;
            goto label_32e004;
        }
    }
    ctx->pc = 0x32DFA4u;
    // 0x32dfa4: 0x2862005c  slti        $v0, $v1, 0x5C
    ctx->pc = 0x32dfa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)92) ? 1 : 0);
    // 0x32dfa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32DFA8u;
    {
        const bool branch_taken_0x32dfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFA8u;
        // 0x32dfac: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfa8) {
            ctx->pc = 0x32DFC0u;
            goto label_32dfc0;
        }
    }
    ctx->pc = 0x32DFB0u;
    // 0x32dfb0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32DFB0u;
    {
        const bool branch_taken_0x32dfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32dfb0) {
            ctx->pc = 0x32DFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DFB0u;
            // 0x32dfb4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DFE0u;
            goto label_32dfe0;
        }
    }
    ctx->pc = 0x32DFB8u;
    // 0x32dfb8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x32DFB8u;
    {
        const bool branch_taken_0x32dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dfb8) {
            ctx->pc = 0x32E01Cu;
            goto label_32e01c;
        }
    }
    ctx->pc = 0x32DFC0u;
label_32dfc0:
    // 0x32dfc0: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x32dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x32dfc4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32DFC4u;
    {
        const bool branch_taken_0x32dfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFC4u;
        // 0x32dfc8: 0x24020113  addiu       $v0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfc4) {
            ctx->pc = 0x32DFDCu;
            goto label_32dfdc;
        }
    }
    ctx->pc = 0x32DFCCu;
    // 0x32dfcc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DFCCu;
    {
        const bool branch_taken_0x32dfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32dfcc) {
            ctx->pc = 0x32DFECu;
            goto label_32dfec;
        }
    }
    ctx->pc = 0x32DFD4u;
    // 0x32dfd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32DFD4u;
    {
        const bool branch_taken_0x32dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dfd4) {
            ctx->pc = 0x32E01Cu;
            goto label_32e01c;
        }
    }
    ctx->pc = 0x32DFDCu;
label_32dfdc:
    // 0x32dfdc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x32dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_32dfe0:
    // 0x32dfe0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32dfe4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32DFE4u;
    {
        const bool branch_taken_0x32dfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFE4u;
        // 0x32dfe8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfe4) {
            ctx->pc = 0x32E02Cu;
            goto label_32e02c;
        }
    }
    ctx->pc = 0x32DFECu;
label_32dfec:
    // 0x32dfec: 0xc0cb312  jal         func_32CC48
    ctx->pc = 0x32DFECu;
    SET_GPR_U32(ctx, 31, 0x32DFF4u);
    ctx->pc = 0x32DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DFECu;
    // 0x32dff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC48u, 0x32DFECu, 0x32DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFF4u;
label_32dff4:
    // 0x32dff4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x32dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32dff8: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x32dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x32dffc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DFFCu;
    {
        const bool branch_taken_0x32dffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32dffc) {
            ctx->pc = 0x32E01Cu;
            goto label_32e01c;
        }
    }
    ctx->pc = 0x32E004u;
label_32e004:
    // 0x32e004: 0xc0cb752  jal         func_32DD48
    ctx->pc = 0x32E004u;
    SET_GPR_U32(ctx, 31, 0x32E00Cu);
    ctx->pc = 0x32E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E004u;
    // 0x32e008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DD48u, 0x32E004u, 0x32E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E00Cu;
label_32e00c:
    // 0x32e00c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e010: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32e010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32e014: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32E014u;
    {
        const bool branch_taken_0x32e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E014u;
        // 0x32e018: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e014) {
            ctx->pc = 0x32E02Cu;
            goto label_32e02c;
        }
    }
    ctx->pc = 0x32E01Cu;
label_32e01c:
    // 0x32e01c: 0xc0cb790  jal         func_32DE40
    ctx->pc = 0x32E01Cu;
    SET_GPR_U32(ctx, 31, 0x32E024u);
    ctx->pc = 0x32E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E01Cu;
    // 0x32e020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DE40u, 0x32E01Cu, 0x32E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E024u;
label_32e024:
    // 0x32e024: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32e024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32e028: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x32e028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_32e02c:
    // 0x32e02c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32e02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e038: 0x3e00008  jr          $ra
    ctx->pc = 0x32E038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E038u;
        // 0x32e03c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E040u;
}
