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

// Function: sub_00110B18
// Address: 0x110b18 - 0x110b60
void sub_00110B18_0x110b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110B18_0x110b18");
#endif

    switch (ctx->pc) {
        case 0x110b34u: goto label_110b34;
        case 0x110b40u: goto label_110b40;
        default: break;
    }

    ctx->pc = 0x110b18u;

    // 0x110b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110b1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x110b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x110b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110b28: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x110b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x110b2c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x110B2Cu;
    SET_GPR_U32(ctx, 31, 0x110B34u);
    ctx->pc = 0x110B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B2Cu;
    // 0x110b30: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x110B2Cu, 0x110B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B34u;
label_110b34:
    // 0x110b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b38: 0xc0442d8  jal         func_110B60
    ctx->pc = 0x110B38u;
    SET_GPR_U32(ctx, 31, 0x110B40u);
    ctx->pc = 0x110B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B38u;
    // 0x110b3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B60u, 0x110B38u, 0x110B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B40u;
label_110b40:
    // 0x110b40: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x110b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x110b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b48: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x110b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x110b4c: 0x8e024274  lw          $v0, 0x4274($s0)
    ctx->pc = 0x110b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17012)));
    // 0x110b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x110b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110b54: 0x3e00008  jr          $ra
    ctx->pc = 0x110B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B54u;
        // 0x110b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B5Cu;
    // 0x110b5c: 0x0  nop
    ctx->pc = 0x110b5cu;
    // NOP
    ctx->pc = 0x110b60u;
}
