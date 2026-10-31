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

// Function: sub_004D9F68
// Address: 0x4d9f68 - 0x4d9fb8
void sub_004D9F68_0x4d9f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9F68_0x4d9f68");
#endif

    switch (ctx->pc) {
        case 0x4d9f8cu: goto label_4d9f8c;
        case 0x4d9fa4u: goto label_4d9fa4;
        default: break;
    }

    ctx->pc = 0x4d9f68u;

    // 0x4d9f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d9f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d9f6c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4d9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4d9f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d9f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d9f74: 0x8c625b50  lw          $v0, 0x5B50($v1)
    ctx->pc = 0x4d9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715B50u));
    // 0x4d9f78: 0x24705b50  addiu       $s0, $v1, 0x5B50
    ctx->pc = 0x4d9f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23376));
    // 0x4d9f7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D9F7Cu;
    {
        const bool branch_taken_0x4d9f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9F7Cu;
        // 0x4d9f80: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9f7c) {
            ctx->pc = 0x4D9FA4u;
            goto label_4d9fa4;
        }
    }
    ctx->pc = 0x4D9F84u;
    // 0x4d9f84: 0xc10b7e0  jal         func_42DF80
    ctx->pc = 0x4D9F84u;
    SET_GPR_U32(ctx, 31, 0x4D9F8Cu);
    ctx->pc = 0x42DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DF80u, 0x4D9F84u, 0x4D9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9F8Cu;
label_4d9f8c:
    // 0x4d9f8c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4d9f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4d9f90: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4d9f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4d9f94: 0x24a56470  addiu       $a1, $a1, 0x6470
    ctx->pc = 0x4d9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25712));
    // 0x4d9f98: 0x24c671c8  addiu       $a2, $a2, 0x71C8
    ctx->pc = 0x4d9f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29128));
    // 0x4d9f9c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x4D9F9Cu;
    SET_GPR_U32(ctx, 31, 0x4D9FA4u);
    ctx->pc = 0x4D9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9F9Cu;
    // 0x4d9fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x4D9F9Cu, 0x4D9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9FA4u;
label_4d9fa4:
    // 0x4d9fa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d9fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d9fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d9facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9FB0u;
        // 0x4d9fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9FB8u;
}
