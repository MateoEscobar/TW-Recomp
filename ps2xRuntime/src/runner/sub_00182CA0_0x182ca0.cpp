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

// Function: sub_00182CA0
// Address: 0x182ca0 - 0x182d08
void sub_00182CA0_0x182ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182CA0_0x182ca0");
#endif

    switch (ctx->pc) {
        case 0x182cc0u: goto label_182cc0;
        case 0x182cd0u: goto label_182cd0;
        case 0x182ce0u: goto label_182ce0;
        case 0x182cf0u: goto label_182cf0;
        default: break;
    }

    ctx->pc = 0x182ca0u;

    // 0x182ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182ca4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x182ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x182ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cb0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x182cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x182cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182cb8: 0xc061664  jal         func_185990
    ctx->pc = 0x182CB8u;
    SET_GPR_U32(ctx, 31, 0x182CC0u);
    ctx->pc = 0x182CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CB8u;
    // 0x182cbc: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185990u, 0x182CB8u, 0x182CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182CC0u;
label_182cc0:
    // 0x182cc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182CC0u;
    {
        const bool branch_taken_0x182cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182cc0) {
            ctx->pc = 0x182CE8u;
            goto label_182ce8;
        }
    }
    ctx->pc = 0x182CC8u;
    // 0x182cc8: 0xc065dba  jal         func_1976E8
    ctx->pc = 0x182CC8u;
    SET_GPR_U32(ctx, 31, 0x182CD0u);
    ctx->pc = 0x182CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CC8u;
    // 0x182ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1976E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1976E8u, 0x182CC8u, 0x182CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182CD0u;
label_182cd0:
    // 0x182cd0: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x182cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    // 0x182cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x182cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cd8: 0xc061f4a  jal         func_187D28
    ctx->pc = 0x182CD8u;
    SET_GPR_U32(ctx, 31, 0x182CE0u);
    ctx->pc = 0x182CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CD8u;
    // 0x182cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x182CD8u, 0x182CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182CE0u;
label_182ce0:
    // 0x182ce0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182CE0u;
    {
        const bool branch_taken_0x182ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CE0u;
        // 0x182ce4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ce0) {
            ctx->pc = 0x182CF8u;
            goto label_182cf8;
        }
    }
    ctx->pc = 0x182CE8u;
label_182ce8:
    // 0x182ce8: 0xc060b0e  jal         func_182C38
    ctx->pc = 0x182CE8u;
    SET_GPR_U32(ctx, 31, 0x182CF0u);
    ctx->pc = 0x182CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CE8u;
    // 0x182cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C38u, 0x182CE8u, 0x182CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182CF0u;
label_182cf0:
    // 0x182cf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x182cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_182cf8:
    // 0x182cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182d00: 0x3e00008  jr          $ra
    ctx->pc = 0x182D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D00u;
        // 0x182d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182D08u;
}
