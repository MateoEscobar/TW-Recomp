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

// Function: sub_001C4C88
// Address: 0x1c4c88 - 0x1c4d00
void sub_001C4C88_0x1c4c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4C88_0x1c4c88");
#endif

    switch (ctx->pc) {
        case 0x1c4cb0u: goto label_1c4cb0;
        case 0x1c4cc4u: goto label_1c4cc4;
        default: break;
    }

    ctx->pc = 0x1c4c88u;

    // 0x1c4c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4c8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c4c90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c98: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c4c9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4ca0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4CA0u;
    {
        const bool branch_taken_0x1c4ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CA0u;
        // 0x1c4ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ca0) {
            ctx->pc = 0x1C4CECu;
            goto label_1c4cec;
        }
    }
    ctx->pc = 0x1C4CA8u;
    // 0x1c4ca8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C4CA8u;
    SET_GPR_U32(ctx, 31, 0x1C4CB0u);
    ctx->pc = 0x1C4CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CA8u;
    // 0x1c4cac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C4CA8u, 0x1C4CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CB0u;
label_1c4cb0:
    // 0x1c4cb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4CB0u;
    {
        const bool branch_taken_0x1c4cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CB0u;
        // 0x1c4cb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cb0) {
            ctx->pc = 0x1C4CE8u;
            goto label_1c4ce8;
        }
    }
    ctx->pc = 0x1C4CB8u;
    // 0x1c4cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cbc: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C4CBCu;
    SET_GPR_U32(ctx, 31, 0x1C4CC4u);
    ctx->pc = 0x1C4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CBCu;
    // 0x1c4cc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4CBCu, 0x1C4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CC4u;
label_1c4cc4:
    // 0x1c4cc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4ccc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4CCCu;
    {
        const bool branch_taken_0x1c4ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CCCu;
        // 0x1c4cd0: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ccc) {
            ctx->pc = 0x1C4CE8u;
            goto label_1c4ce8;
        }
    }
    ctx->pc = 0x1C4CD4u;
    // 0x1c4cd4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1c4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c4cd8: 0x9462094c  lhu         $v0, 0x94C($v1)
    ctx->pc = 0x1c4cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2380)));
    // 0x1c4cdc: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x1c4cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x1c4ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4CE0u;
    {
        const bool branch_taken_0x1c4ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CE0u;
        // 0x1c4ce4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ce0) {
            ctx->pc = 0x1C4CECu;
            goto label_1c4cec;
        }
    }
    ctx->pc = 0x1C4CE8u;
label_1c4ce8:
    // 0x1c4ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4cec:
    // 0x1c4cec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CF4u;
        // 0x1c4cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4CFCu;
    // 0x1c4cfc: 0x0  nop
    ctx->pc = 0x1c4cfcu;
    // NOP
    ctx->pc = 0x1c4d00u;
}
