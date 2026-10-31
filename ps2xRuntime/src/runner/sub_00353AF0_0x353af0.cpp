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

// Function: sub_00353AF0
// Address: 0x353af0 - 0x353b78
void sub_00353AF0_0x353af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353AF0_0x353af0");
#endif

    switch (ctx->pc) {
        case 0x353b0cu: goto label_353b0c;
        case 0x353b50u: goto label_353b50;
        case 0x353b60u: goto label_353b60;
        default: break;
    }

    ctx->pc = 0x353af0u;

    // 0x353af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353af4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x353af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x353af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x353afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353b04: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x353B04u;
    SET_GPR_U32(ctx, 31, 0x353B0Cu);
    ctx->pc = 0x353B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B04u;
    // 0x353b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x353B04u, 0x353B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B0Cu;
label_353b0c:
    // 0x353b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x353b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b10: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x353B10u;
    {
        const bool branch_taken_0x353b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B10u;
        // 0x353b14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b10) {
            ctx->pc = 0x353B58u;
            goto label_353b58;
        }
    }
    ctx->pc = 0x353B18u;
    // 0x353b18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x353b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x353b1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x353B1Cu;
    {
        const bool branch_taken_0x353b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b1c) {
            ctx->pc = 0x353B58u;
            goto label_353b58;
        }
    }
    ctx->pc = 0x353B24u;
    // 0x353b24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353b28: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x353B28u;
    {
        const bool branch_taken_0x353b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x353b28) {
            ctx->pc = 0x353B58u;
            goto label_353b58;
        }
    }
    ctx->pc = 0x353B30u;
    // 0x353b30: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x353b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x353b34: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x353b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x353b38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353B38u;
    {
        const bool branch_taken_0x353b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B38u;
        // 0x353b3c: 0x30620006  andi        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b38) {
            ctx->pc = 0x353B48u;
            goto label_353b48;
        }
    }
    ctx->pc = 0x353B40u;
    // 0x353b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353B40u;
    {
        const bool branch_taken_0x353b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b40) {
            ctx->pc = 0x353B58u;
            goto label_353b58;
        }
    }
    ctx->pc = 0x353B48u;
label_353b48:
    // 0x353b48: 0xc0d4c56  jal         func_353158
    ctx->pc = 0x353B48u;
    SET_GPR_U32(ctx, 31, 0x353B50u);
    ctx->pc = 0x353158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353158u, 0x353B48u, 0x353B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B50u;
label_353b50:
    // 0x353b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353B50u;
    {
        const bool branch_taken_0x353b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B50u;
        // 0x353b54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b50) {
            ctx->pc = 0x353B64u;
            goto label_353b64;
        }
    }
    ctx->pc = 0x353B58u;
label_353b58:
    // 0x353b58: 0xc0d497e  jal         func_3525F8
    ctx->pc = 0x353B58u;
    SET_GPR_U32(ctx, 31, 0x353B60u);
    ctx->pc = 0x353B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B58u;
    // 0x353b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3525F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3525F8u, 0x353B58u, 0x353B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B60u;
label_353b60:
    // 0x353b60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x353b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353b64:
    // 0x353b64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x353b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353b70: 0x3e00008  jr          $ra
    ctx->pc = 0x353B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B70u;
        // 0x353b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353B78u;
}
