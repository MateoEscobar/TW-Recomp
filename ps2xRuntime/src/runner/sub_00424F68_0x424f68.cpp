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

// Function: sub_00424F68
// Address: 0x424f68 - 0x424fb0
void sub_00424F68_0x424f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424F68_0x424f68");
#endif

    switch (ctx->pc) {
        case 0x424f98u: goto label_424f98;
        default: break;
    }

    ctx->pc = 0x424f68u;

    // 0x424f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x424f6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x424f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x424f70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x424f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x424f74: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x424f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x424f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x424f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x424f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x424f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424f80: 0x8c43506c  lw          $v1, 0x506C($v0)
    ctx->pc = 0x424f80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51506Cu));
    // 0x424f84: 0x24a54fb0  addiu       $a1, $a1, 0x4FB0
    ctx->pc = 0x424f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20400));
    // 0x424f88: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x424f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x424f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x424f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424f90: 0xc11afd8  jal         func_46BF60
    ctx->pc = 0x424F90u;
    SET_GPR_U32(ctx, 31, 0x424F98u);
    ctx->pc = 0x424F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424F90u;
    // 0x424f94: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BF60u, 0x424F90u, 0x424F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424F98u;
label_424f98:
    // 0x424f98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x424f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x424fa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x424fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x424fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x424FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424FA4u;
        // 0x424fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424FACu;
    // 0x424fac: 0x0  nop
    ctx->pc = 0x424facu;
    // NOP
    ctx->pc = 0x424fb0u;
}
