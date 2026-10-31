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

// Function: sub_001E9AE8
// Address: 0x1e9ae8 - 0x1e9b38
void sub_001E9AE8_0x1e9ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9AE8_0x1e9ae8");
#endif

    switch (ctx->pc) {
        case 0x1e9b0cu: goto label_1e9b0c;
        case 0x1e9b1cu: goto label_1e9b1c;
        case 0x1e9b24u: goto label_1e9b24;
        default: break;
    }

    ctx->pc = 0x1e9ae8u;

    // 0x1e9ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9af0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e9af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e9af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9af8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E9AF8u;
    {
        const bool branch_taken_0x1e9af8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AF8u;
        // 0x1e9afc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9af8) {
            ctx->pc = 0x1E9B24u;
            goto label_1e9b24;
        }
    }
    ctx->pc = 0x1E9B00u;
    // 0x1e9b00: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e9b00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1e9b04: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x1E9B04u;
    SET_GPR_U32(ctx, 31, 0x1E9B0Cu);
    ctx->pc = 0x1E9B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B04u;
    // 0x1e9b08: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1E9B04u, 0x1E9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B0Cu;
label_1e9b0c:
    // 0x1e9b0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1e9b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1e9b10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b14: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1E9B14u;
    SET_GPR_U32(ctx, 31, 0x1E9B1Cu);
    ctx->pc = 0x1E9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B14u;
    // 0x1e9b18: 0x24060029  addiu       $a2, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1E9B14u, 0x1E9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B1Cu;
label_1e9b1c:
    // 0x1e9b1c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1E9B1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B24u);
    ctx->pc = 0x1E9B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B1Cu;
    // 0x1e9b20: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1E9B1Cu, 0x1E9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B24u;
label_1e9b24:
    // 0x1e9b24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e9b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B30u;
        // 0x1e9b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9B38u;
}
