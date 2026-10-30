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

// Function: sub_001811B0
// Address: 0x1811b0 - 0x181228
void sub_001811B0_0x1811b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811B0_0x1811b0");
#endif

    switch (ctx->pc) {
        case 0x1811d8u: goto label_1811d8;
        case 0x1811e0u: goto label_1811e0;
        case 0x181200u: goto label_181200;
        default: break;
    }

    ctx->pc = 0x1811b0u;

    // 0x1811b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1811b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1811b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1811b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1811b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1811bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1811bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1811c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1811c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1811c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1811c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1811c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1811c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1811cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1811CCu;
    {
        const bool branch_taken_0x1811cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811CCu;
        // 0x1811d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811cc) {
            ctx->pc = 0x1811F8u;
            goto label_1811f8;
        }
    }
    ctx->pc = 0x1811D4u;
    // 0x1811d4: 0x0  nop
    ctx->pc = 0x1811d4u;
    // NOP
label_1811d8:
    // 0x1811d8: 0xc06048a  jal         func_181228
    ctx->pc = 0x1811D8u;
    SET_GPR_U32(ctx, 31, 0x1811E0u);
    ctx->pc = 0x1811DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811D8u;
    // 0x1811dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181228u, 0x1811D8u, 0x1811E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1811E0u;
label_1811e0:
    // 0x1811e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1811e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1811e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1811e8: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1811E8u;
    {
        const bool branch_taken_0x1811e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1811ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811E8u;
        // 0x1811ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811e8) {
            ctx->pc = 0x1811F8u;
            goto label_1811f8;
        }
    }
    ctx->pc = 0x1811F0u;
    // 0x1811f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1811F0u;
    {
        const bool branch_taken_0x1811f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811F0u;
        // 0x1811f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811f0) {
            ctx->pc = 0x181210u;
            goto label_181210;
        }
    }
    ctx->pc = 0x1811F8u;
label_1811f8:
    // 0x1811f8: 0xc06046a  jal         func_1811A8
    ctx->pc = 0x1811F8u;
    SET_GPR_U32(ctx, 31, 0x181200u);
    ctx->pc = 0x1811FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811F8u;
    // 0x1811fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1811A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1811A8u, 0x1811F8u, 0x181200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181200u;
label_181200:
    // 0x181200: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x181200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x181204: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x181204u;
    {
        const bool branch_taken_0x181204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181204) {
            ctx->pc = 0x181208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181204u;
            // 0x181208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1811D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1811d8;
        }
    }
    ctx->pc = 0x18120Cu;
    // 0x18120c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18120cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181210:
    // 0x181210: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x181210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181214: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x181214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181218: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x181218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18121c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18121cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181220: 0x3e00008  jr          $ra
    ctx->pc = 0x181220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181220u;
        // 0x181224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181228u;
}
