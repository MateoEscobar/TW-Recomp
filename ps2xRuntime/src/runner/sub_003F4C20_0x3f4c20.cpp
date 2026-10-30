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

// Function: sub_003F4C20
// Address: 0x3f4c20 - 0x3f4c80
void sub_003F4C20_0x3f4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4C20_0x3f4c20");
#endif

    switch (ctx->pc) {
        case 0x3f4c48u: goto label_3f4c48;
        case 0x3f4c54u: goto label_3f4c54;
        case 0x3f4c64u: goto label_3f4c64;
        case 0x3f4c6cu: goto label_3f4c6c;
        default: break;
    }

    ctx->pc = 0x3f4c20u;

    // 0x3f4c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f4c24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f4c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3f4c28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f4c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f4c2c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f4c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3f4c30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f4c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f4c34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c38: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f4c3c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3f4c3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f4c40: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3F4C40u;
    SET_GPR_U32(ctx, 31, 0x3F4C48u);
    ctx->pc = 0x3F4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C40u;
    // 0x3f4c44: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F4C40u, 0x3F4C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C48u;
label_3f4c48:
    // 0x3f4c48: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3f4c4c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3F4C4Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C54u);
    ctx->pc = 0x3F4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C4Cu;
    // 0x3f4c50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3F4C4Cu, 0x3F4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C54u;
label_3f4c54:
    // 0x3f4c54: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3f4c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4c5c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3F4C5Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C64u);
    ctx->pc = 0x3F4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C5Cu;
    // 0x3f4c60: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3F4C5Cu, 0x3F4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C64u;
label_3f4c64:
    // 0x3f4c64: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3F4C64u;
    SET_GPR_U32(ctx, 31, 0x3F4C6Cu);
    ctx->pc = 0x3F4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4C64u;
    // 0x3f4c68: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F4C64u, 0x3F4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4C6Cu;
label_3f4c6c:
    // 0x3f4c6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f4c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f4c70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f4c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f4c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4c78: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4C78u;
        // 0x3f4c7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4C80u;
}
