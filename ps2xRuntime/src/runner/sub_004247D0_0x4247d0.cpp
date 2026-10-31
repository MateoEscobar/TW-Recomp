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

// Function: sub_004247D0
// Address: 0x4247d0 - 0x424890
void sub_004247D0_0x4247d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004247D0_0x4247d0");
#endif

    switch (ctx->pc) {
        case 0x424818u: goto label_424818;
        case 0x424820u: goto label_424820;
        case 0x424844u: goto label_424844;
        default: break;
    }

    ctx->pc = 0x4247d0u;

    // 0x4247d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4247d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4247d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4247d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4247d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4247d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4247dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4247dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4247e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4247e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4247e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4247e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4247e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4247e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4247ec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4247ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4247f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4247f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4247f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4247f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4247f8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x4247f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x4247fc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4247fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x424800: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x424800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x424804: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x424804u;
    {
        const bool branch_taken_0x424804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424804u;
        // 0x424808: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424804) {
            ctx->pc = 0x42486Cu;
            goto label_42486c;
        }
    }
    ctx->pc = 0x42480Cu;
    // 0x42480c: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x42480cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x424810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x424810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424814: 0x0  nop
    ctx->pc = 0x424814u;
    // NOP
label_424818:
    // 0x424818: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x424818u;
    SET_GPR_U32(ctx, 31, 0x424820u);
    ctx->pc = 0x42481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424818u;
    // 0x42481c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x424818u, 0x424820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424820u;
label_424820:
    // 0x424820: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x424820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x424824: 0x5474000d  bnel        $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x424824u;
    {
        const bool branch_taken_0x424824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x424824) {
            ctx->pc = 0x424828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424824u;
            // 0x424828: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42485Cu;
            goto label_42485c;
        }
    }
    ctx->pc = 0x42482Cu;
    // 0x42482c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x42482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x424830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x424830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x424834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x424838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x42483c: 0xc109026  jal         func_424098
    ctx->pc = 0x42483Cu;
    SET_GPR_U32(ctx, 31, 0x424844u);
    ctx->pc = 0x424840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42483Cu;
    // 0x424840: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x42483Cu, 0x424844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424844u;
label_424844:
    // 0x424844: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x424844u;
    {
        const bool branch_taken_0x424844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424844) {
            ctx->pc = 0x424848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424844u;
            // 0x424848: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42485Cu;
            goto label_42485c;
        }
    }
    ctx->pc = 0x42484Cu;
    // 0x42484c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x42484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x424850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x424850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x424854: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x424854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x424858: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x424858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42485c:
    // 0x42485c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x42485cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x424860: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x424860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x424864: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x424864u;
    {
        const bool branch_taken_0x424864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424864u;
        // 0x424868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424864) {
            ctx->pc = 0x424818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424818;
        }
    }
    ctx->pc = 0x42486Cu;
label_42486c:
    // 0x42486c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x42486cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x424870: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x424870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x424874: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x424874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x424878: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x424878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42487c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x42487cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x424880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x424884: 0x3e00008  jr          $ra
    ctx->pc = 0x424884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424884u;
        // 0x424888: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42488Cu;
    // 0x42488c: 0x0  nop
    ctx->pc = 0x42488cu;
    // NOP
    ctx->pc = 0x424890u;
}
