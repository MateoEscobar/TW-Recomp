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

// Function: sub_00235478
// Address: 0x235478 - 0x2354b8
void sub_00235478_0x235478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235478_0x235478");
#endif

    switch (ctx->pc) {
        case 0x23548cu: goto label_23548c;
        case 0x235494u: goto label_235494;
        case 0x2354a4u: goto label_2354a4;
        default: break;
    }

    ctx->pc = 0x235478u;

    // 0x235478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23547c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235484: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235484u;
    SET_GPR_U32(ctx, 31, 0x23548Cu);
    ctx->pc = 0x235488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235484u;
    // 0x235488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235484u, 0x23548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23548Cu;
label_23548c:
    // 0x23548c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23548Cu;
    SET_GPR_U32(ctx, 31, 0x235494u);
    ctx->pc = 0x235490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23548Cu;
    // 0x235490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23548Cu, 0x235494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235494u;
label_235494:
    // 0x235494: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235494u;
    {
        const bool branch_taken_0x235494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235494) {
            ctx->pc = 0x235498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235494u;
            // 0x235498: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2354ACu;
            goto label_2354ac;
        }
    }
    ctx->pc = 0x23549Cu;
    // 0x23549c: 0xc087502  jal         func_21D408
    ctx->pc = 0x23549Cu;
    SET_GPR_U32(ctx, 31, 0x2354A4u);
    ctx->pc = 0x2354A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23549Cu;
    // 0x2354a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23549Cu, 0x2354A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354A4u;
label_2354a4:
    // 0x2354a4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2354a8: 0x8462002c  lh          $v0, 0x2C($v1)
    ctx->pc = 0x2354a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
label_2354ac:
    // 0x2354ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2354acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2354b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2354B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2354B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354B0u;
        // 0x2354b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2354B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2354B8u;
}
