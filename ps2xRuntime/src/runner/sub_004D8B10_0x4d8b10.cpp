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

// Function: sub_004D8B10
// Address: 0x4d8b10 - 0x4d8b70
void sub_004D8B10_0x4d8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8B10_0x4d8b10");
#endif

    switch (ctx->pc) {
        case 0x4d8b38u: goto label_4d8b38;
        case 0x4d8b48u: goto label_4d8b48;
        case 0x4d8b54u: goto label_4d8b54;
        default: break;
    }

    ctx->pc = 0x4d8b10u;

    // 0x4d8b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d8b14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4d8b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4d8b18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4d8b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4d8b1c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4d8b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x4d8b20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d8b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8b24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d8b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4d8b28: 0x8e0469ec  lw          $a0, 0x69EC($s0)
    ctx->pc = 0x4d8b28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x4d8b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d8b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d8b30: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x4D8B30u;
    SET_GPR_U32(ctx, 31, 0x4D8B38u);
    ctx->pc = 0x4D8B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8B30u;
    // 0x4d8b34: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x4D8B30u, 0x4D8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8B38u;
label_4d8b38:
    // 0x4d8b38: 0x8e0469ec  lw          $a0, 0x69EC($s0)
    ctx->pc = 0x4d8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x4d8b3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d8b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8b40: 0xc1362dc  jal         func_4D8B70
    ctx->pc = 0x4D8B40u;
    SET_GPR_U32(ctx, 31, 0x4D8B48u);
    ctx->pc = 0x4D8B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8B40u;
    // 0x4d8b44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D8B70u, 0x4D8B40u, 0x4D8B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8B48u;
label_4d8b48:
    // 0x4d8b48: 0x8e0469ec  lw          $a0, 0x69EC($s0)
    ctx->pc = 0x4d8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x4d8b4c: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x4D8B4Cu;
    SET_GPR_U32(ctx, 31, 0x4D8B54u);
    ctx->pc = 0x4D8B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8B4Cu;
    // 0x4d8b50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x4D8B4Cu, 0x4D8B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8B54u;
label_4d8b54:
    // 0x4d8b54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d8b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8b58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4d8b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8b5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d8b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8b60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4d8b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8b68: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8B68u;
        // 0x4d8b6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8B70u;
}
