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

// Function: sub_00177D50
// Address: 0x177d50 - 0x177e00
void sub_00177D50_0x177d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177D50_0x177d50");
#endif

    switch (ctx->pc) {
        case 0x177d88u: goto label_177d88;
        case 0x177da4u: goto label_177da4;
        case 0x177de4u: goto label_177de4;
        default: break;
    }

    ctx->pc = 0x177d50u;

    // 0x177d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177d54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x177d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x177d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x177d5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x177d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x177d60: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x177d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177d68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x177d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x177d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177d74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x177d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d78: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x177d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177d7c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x177d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x177d80: 0xc05e0f4  jal         func_1783D0
    ctx->pc = 0x177D80u;
    SET_GPR_U32(ctx, 31, 0x177D88u);
    ctx->pc = 0x177D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D80u;
    // 0x177d84: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1783D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1783D0u, 0x177D80u, 0x177D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D88u;
label_177d88:
    // 0x177d88: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x177d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177d94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x177d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d9c: 0xc063a78  jal         func_18E9E0
    ctx->pc = 0x177D9Cu;
    SET_GPR_U32(ctx, 31, 0x177DA4u);
    ctx->pc = 0x177DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D9Cu;
    // 0x177da0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x177D9Cu, 0x177DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DA4u;
label_177da4:
    // 0x177da4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x177da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x177da8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x177da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177dac: 0x8c69cd4c  lw          $t1, -0x32B4($v1)
    ctx->pc = 0x177dacu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x177db0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x177DB0u;
    {
        const bool branch_taken_0x177db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177db0) {
            ctx->pc = 0x177DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177DB0u;
            // 0x177db4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x177DB8u;
            goto label_177db8;
        }
    }
    ctx->pc = 0x177DB8u;
label_177db8:
    // 0x177db8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dbc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x177dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177dc0: 0x8d230074  lw          $v1, 0x74($t1)
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
    // 0x177dc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x177dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dd0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x177dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x177dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x177dd8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x177dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x177ddc: 0xc05d2be  jal         func_174AF8
    ctx->pc = 0x177DDCu;
    SET_GPR_U32(ctx, 31, 0x177DE4u);
    ctx->pc = 0x177DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DDCu;
    // 0x177de0: 0x8d270074  lw          $a3, 0x74($t1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174AF8u, 0x177DDCu, 0x177DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DE4u;
label_177de4:
    // 0x177de4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x177de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177de8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x177de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177dec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177df0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x177df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177df8: 0x3e00008  jr          $ra
    ctx->pc = 0x177DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DF8u;
        // 0x177dfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E00u;
}
