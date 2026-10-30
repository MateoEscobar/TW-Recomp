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

// Function: sub_0040BBA8
// Address: 0x40bba8 - 0x40bc18
void sub_0040BBA8_0x40bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BBA8_0x40bba8");
#endif

    switch (ctx->pc) {
        case 0x40bbc4u: goto label_40bbc4;
        case 0x40bbe8u: goto label_40bbe8;
        case 0x40bbf4u: goto label_40bbf4;
        default: break;
    }

    ctx->pc = 0x40bba8u;

    // 0x40bba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40bba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40bbac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40bbb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40bbb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40bbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bbb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40bbbc: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40BBBCu;
    SET_GPR_U32(ctx, 31, 0x40BBC4u);
    ctx->pc = 0x40BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BBBCu;
    // 0x40bbc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40BBBCu, 0x40BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BBC4u;
label_40bbc4:
    // 0x40bbc4: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x40BBC4u;
    {
        const bool branch_taken_0x40bbc4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x40BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BBC4u;
        // 0x40bbc8: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bbc4) {
            ctx->pc = 0x40BBD0u;
            goto label_40bbd0;
        }
    }
    ctx->pc = 0x40BBCCu;
    // 0x40bbcc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x40bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_40bbd0:
    // 0x40bbd0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x40bbd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x40bbd4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x40BBD4u;
    {
        const bool branch_taken_0x40bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BBD4u;
        // 0x40bbd8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bbd4) {
            ctx->pc = 0x40BBFCu;
            goto label_40bbfc;
        }
    }
    ctx->pc = 0x40BBDCu;
    // 0x40bbdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40bbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bbe0: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x40BBE0u;
    SET_GPR_U32(ctx, 31, 0x40BBE8u);
    ctx->pc = 0x40BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BBE0u;
    // 0x40bbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x40BBE0u, 0x40BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BBE8u;
label_40bbe8:
    // 0x40bbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bbec: 0xc102ec8  jal         func_40BB20
    ctx->pc = 0x40BBECu;
    SET_GPR_U32(ctx, 31, 0x40BBF4u);
    ctx->pc = 0x40BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BBECu;
    // 0x40bbf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BB20u, 0x40BBECu, 0x40BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BBF4u;
label_40bbf4:
    // 0x40bbf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40BBF4u;
    {
        const bool branch_taken_0x40bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BBF4u;
        // 0x40bbf8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bbf4) {
            ctx->pc = 0x40BC04u;
            goto label_40bc04;
        }
    }
    ctx->pc = 0x40BBFCu;
label_40bbfc:
    // 0x40bbfc: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x40bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
    // 0x40bc00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40bc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40bc04:
    // 0x40bc04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40bc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40bc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40bc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x40BC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BC0Cu;
        // 0x40bc10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BC14u;
    // 0x40bc14: 0x0  nop
    ctx->pc = 0x40bc14u;
    // NOP
    ctx->pc = 0x40bc18u;
}
