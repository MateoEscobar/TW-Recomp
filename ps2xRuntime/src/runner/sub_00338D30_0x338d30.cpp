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

// Function: sub_00338D30
// Address: 0x338d30 - 0x338df8
void sub_00338D30_0x338d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338D30_0x338d30");
#endif

    switch (ctx->pc) {
        case 0x338d78u: goto label_338d78;
        case 0x338d80u: goto label_338d80;
        case 0x338d98u: goto label_338d98;
        case 0x338da4u: goto label_338da4;
        case 0x338dc4u: goto label_338dc4;
        default: break;
    }

    ctx->pc = 0x338d30u;

    // 0x338d30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338d34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x338d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x338d38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x338d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x338d3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x338d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d44: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x338d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x338d48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x338d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338d50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x338d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338d54: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x338d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x338d58: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x338d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x338d5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x338d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x338d60: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x338d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x338d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338d68: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x338d68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x338d6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x338D6Cu;
    {
        const bool branch_taken_0x338d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D6Cu;
        // 0x338d70: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d6c) {
            ctx->pc = 0x338D94u;
            goto label_338d94;
        }
    }
    ctx->pc = 0x338D74u;
    // 0x338d74: 0x0  nop
    ctx->pc = 0x338d74u;
    // NOP
label_338d78:
    // 0x338d78: 0xc0ced94  jal         func_33B650
    ctx->pc = 0x338D78u;
    SET_GPR_U32(ctx, 31, 0x338D80u);
    ctx->pc = 0x338D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D78u;
    // 0x338d7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x338D78u, 0x338D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D80u;
label_338d80:
    // 0x338d80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x338d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d84: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x338d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d88: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x338d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x338d8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x338d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x338d90: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x338d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_338d94:
    // 0x338d94: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x338d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_338d98:
    // 0x338d98: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x338d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x338d9c: 0xc0cefdc  jal         func_33BF70
    ctx->pc = 0x338D9Cu;
    SET_GPR_U32(ctx, 31, 0x338DA4u);
    ctx->pc = 0x338DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D9Cu;
    // 0x338da0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF70u, 0x338D9Cu, 0x338DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DA4u;
label_338da4:
    // 0x338da4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x338DA4u;
    {
        const bool branch_taken_0x338da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DA4u;
        // 0x338da8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338da4) {
            ctx->pc = 0x338D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338d78;
        }
    }
    ctx->pc = 0x338DACu;
    // 0x338dac: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x338dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x338db0: 0x28042  srl         $s0, $v0, 1
    ctx->pc = 0x338db0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x338db4: 0x1612fff8  bne         $s0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x338DB4u;
    {
        const bool branch_taken_0x338db4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x338db4) {
            ctx->pc = 0x338D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338d98;
        }
    }
    ctx->pc = 0x338DBCu;
    // 0x338dbc: 0xc0ced94  jal         func_33B650
    ctx->pc = 0x338DBCu;
    SET_GPR_U32(ctx, 31, 0x338DC4u);
    ctx->pc = 0x338DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DBCu;
    // 0x338dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B650u, 0x338DBCu, 0x338DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DC4u;
label_338dc4:
    // 0x338dc4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x338DC4u;
    {
        const bool branch_taken_0x338dc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x338DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DC4u;
        // 0x338dc8: 0xae60b950  sw          $zero, -0x46B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294949200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338dc4) {
            ctx->pc = 0x338DD8u;
            goto label_338dd8;
        }
    }
    ctx->pc = 0x338DCCu;
    // 0x338dcc: 0xae60b950  sw          $zero, -0x46B0($s3)
    ctx->pc = 0x338dccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294949200), GPR_U32(ctx, 0));
    // 0x338dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338DD0u;
    {
        const bool branch_taken_0x338dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DD0u;
        // 0x338dd4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338dd0) {
            ctx->pc = 0x338DDCu;
            goto label_338ddc;
        }
    }
    ctx->pc = 0x338DD8u;
label_338dd8:
    // 0x338dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338ddc:
    // 0x338ddc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x338ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338de0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x338de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338de4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338de8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x338de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338df0: 0x3e00008  jr          $ra
    ctx->pc = 0x338DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DF0u;
        // 0x338df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338DF8u;
}
