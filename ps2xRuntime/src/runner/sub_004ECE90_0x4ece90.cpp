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

// Function: sub_004ECE90
// Address: 0x4ece90 - 0x4ecf88
void sub_004ECE90_0x4ece90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE90_0x4ece90");
#endif

    switch (ctx->pc) {
        case 0x4eced4u: goto label_4eced4;
        case 0x4ecef0u: goto label_4ecef0;
        case 0x4ecf3cu: goto label_4ecf3c;
        case 0x4ecf5cu: goto label_4ecf5c;
        default: break;
    }

    ctx->pc = 0x4ece90u;

    // 0x4ece90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4ece90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4ece94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ece94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece98: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4ece98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4ece9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ece9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecea0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4ecea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4ecea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ecea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecea8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ecea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4eceac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4eceacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eceb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4eceb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eceb4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4eceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4eceb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4eceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4ecebc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4ecebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4ecec0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4ecec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x4ecec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ecec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ecec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ececc: 0xc13b356  jal         func_4ECD58
    ctx->pc = 0x4ECECCu;
    SET_GPR_U32(ctx, 31, 0x4ECED4u);
    ctx->pc = 0x4ECED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECECCu;
    // 0x4eced0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECD58u, 0x4ECECCu, 0x4ECED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECED4u;
label_4eced4:
    // 0x4eced4: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x4eced4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4eced8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4ECED8u;
    {
        const bool branch_taken_0x4eced8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECED8u;
        // 0x4ecedc: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eced8) {
            ctx->pc = 0x4ECF4Cu;
            goto label_4ecf4c;
        }
    }
    ctx->pc = 0x4ECEE0u;
    // 0x4ecee0: 0x24140084  addiu       $s4, $zero, 0x84
    ctx->pc = 0x4ecee0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ecee4: 0x251a823  subu        $s5, $s2, $s1
    ctx->pc = 0x4ecee4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4ecee8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ecee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eceec: 0x0  nop
    ctx->pc = 0x4eceecu;
    // NOP
label_4ecef0:
    // 0x4ecef0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4ecef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ecef4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4ecef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ecef8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ecef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ecefc: 0xb41018  mult        $v0, $a1, $s4
    ctx->pc = 0x4ecefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ecf00: 0x8ec4489c  lw          $a0, 0x489C($s6)
    ctx->pc = 0x4ecf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
    // 0x4ecf04: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x4ecf04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ecf08: 0x248414d4  addiu       $a0, $a0, 0x14D4
    ctx->pc = 0x4ecf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
    // 0x4ecf0c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x4ecf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ecf10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ecf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ecf14: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x4ecf14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ecf18: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x4ecf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4ecf1c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ecf1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ecf20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ECF20u;
    {
        const bool branch_taken_0x4ecf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECF20u;
        // 0x4ecf24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecf20) {
            ctx->pc = 0x4ECF3Cu;
            goto label_4ecf3c;
        }
    }
    ctx->pc = 0x4ECF28u;
    // 0x4ecf28: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4ecf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4ecf2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ecf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecf30: 0x153083  sra         $a2, $s5, 2
    ctx->pc = 0x4ecf30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 21), 2));
    // 0x4ecf34: 0xc13b31a  jal         func_4ECC68
    ctx->pc = 0x4ECF34u;
    SET_GPR_U32(ctx, 31, 0x4ECF3Cu);
    ctx->pc = 0x4ECF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECF34u;
    // 0x4ecf38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECC68u, 0x4ECF34u, 0x4ECF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECF3Cu;
label_4ecf3c:
    // 0x4ecf3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4ecf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4ecf40: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x4ecf40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4ecf44: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4ECF44u;
    {
        const bool branch_taken_0x4ecf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ecf44) {
            ctx->pc = 0x4ECF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECF44u;
            // 0x4ecf48: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ECEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ecef0;
        }
    }
    ctx->pc = 0x4ECF4Cu;
label_4ecf4c:
    // 0x4ecf4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ecf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecf50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ecf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecf54: 0xc13b37a  jal         func_4ECDE8
    ctx->pc = 0x4ECF54u;
    SET_GPR_U32(ctx, 31, 0x4ECF5Cu);
    ctx->pc = 0x4ECF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECF54u;
    // 0x4ecf58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECDE8u, 0x4ECF54u, 0x4ECF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECF5Cu;
label_4ecf5c:
    // 0x4ecf5c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4ecf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ecf60: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4ecf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ecf64: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4ecf64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ecf68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ecf68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ecf6c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4ecf6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ecf70: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4ecf70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ecf74: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4ecf74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ecf78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ecf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ecf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECF7Cu;
        // 0x4ecf80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ECF84u;
    // 0x4ecf84: 0x0  nop
    ctx->pc = 0x4ecf84u;
    // NOP
    ctx->pc = 0x4ecf88u;
}
