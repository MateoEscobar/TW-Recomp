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

// Function: sub_001B5B08
// Address: 0x1b5b08 - 0x1b5b80
void sub_001B5B08_0x1b5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5B08_0x1b5b08");
#endif

    switch (ctx->pc) {
        case 0x1b5b34u: goto label_1b5b34;
        case 0x1b5b58u: goto label_1b5b58;
        default: break;
    }

    ctx->pc = 0x1b5b08u;

    // 0x1b5b08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5b0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5b14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b5b18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b1c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5B1Cu;
    {
        const bool branch_taken_0x1b5b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B1Cu;
        // 0x1b5b20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b1c) {
            ctx->pc = 0x1B5B48u;
            goto label_1b5b48;
        }
    }
    ctx->pc = 0x1B5B24u;
    // 0x1b5b24: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1b5b24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x1b5b28: 0x2610e990  addiu       $s0, $s0, -0x1670
    ctx->pc = 0x1b5b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961552));
    // 0x1b5b2c: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1B5B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B34u);
    ctx->pc = 0x1B5B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B2Cu;
    // 0x1b5b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1B5B2Cu, 0x1B5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B34u;
label_1b5b34:
    // 0x1b5b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5b38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b5b3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b5b40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B40u;
    {
        const bool branch_taken_0x1b5b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B40u;
        // 0x1b5b44: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b40) {
            ctx->pc = 0x1B5B5Cu;
            goto label_1b5b5c;
        }
    }
    ctx->pc = 0x1B5B48u;
label_1b5b48:
    // 0x1b5b48: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b5b48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b5b4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b5b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b50: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x1B5B50u;
    SET_GPR_U32(ctx, 31, 0x1B5B58u);
    ctx->pc = 0x1B5B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B50u;
    // 0x1b5b54: 0x26040840  addiu       $a0, $s0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CB0u, 0x1B5B50u, 0x1B5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B58u;
label_1b5b58:
    // 0x1b5b58: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1b5b58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b5c:
    // 0x1b5b5c: 0x24620840  addiu       $v0, $v1, 0x840
    ctx->pc = 0x1b5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x1b5b60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b5b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5b64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1b5b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5b70: 0xac5177a8  sw          $s1, 0x77A8($v0)
    ctx->pc = 0x1b5b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30632), GPR_U32(ctx, 17));
    // 0x1b5b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B78u;
        // 0x1b5b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5B80u;
}
