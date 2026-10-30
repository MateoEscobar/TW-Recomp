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

// Function: sub_00228E68
// Address: 0x228e68 - 0x228ed0
void sub_00228E68_0x228e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228E68_0x228e68");
#endif

    switch (ctx->pc) {
        case 0x228e88u: goto label_228e88;
        case 0x228e94u: goto label_228e94;
        default: break;
    }

    ctx->pc = 0x228e68u;

    // 0x228e68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228e6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x228e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x228e70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x228e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x228e74: 0x24900600  addiu       $s0, $a0, 0x600
    ctx->pc = 0x228e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1536));
    // 0x228e78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x228e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x228e7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228e84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x228e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_228e88:
    // 0x228e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x228e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e8c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x228E8Cu;
    SET_GPR_U32(ctx, 31, 0x228E94u);
    ctx->pc = 0x228E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E8Cu;
    // 0x228e90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x228E8Cu, 0x228E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E94u;
label_228e94:
    // 0x228e94: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x228E94u;
    {
        const bool branch_taken_0x228e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228e94) {
            ctx->pc = 0x228E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228E94u;
            // 0x228e98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228EA4u;
            goto label_228ea4;
        }
    }
    ctx->pc = 0x228E9Cu;
    // 0x228e9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x228E9Cu;
    {
        const bool branch_taken_0x228e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E9Cu;
        // 0x228ea0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e9c) {
            ctx->pc = 0x228EB4u;
            goto label_228eb4;
        }
    }
    ctx->pc = 0x228EA4u;
label_228ea4:
    // 0x228ea4: 0x2a220030  slti        $v0, $s1, 0x30
    ctx->pc = 0x228ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x228ea8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x228EA8u;
    {
        const bool branch_taken_0x228ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EA8u;
        // 0x228eac: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ea8) {
            ctx->pc = 0x228E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228e88;
        }
    }
    ctx->pc = 0x228EB0u;
    // 0x228eb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x228eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_228eb4:
    // 0x228eb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x228eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228eb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x228eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228ebc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x228ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x228EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EC4u;
        // 0x228ec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228ECCu;
    // 0x228ecc: 0x0  nop
    ctx->pc = 0x228eccu;
    // NOP
    ctx->pc = 0x228ed0u;
}
