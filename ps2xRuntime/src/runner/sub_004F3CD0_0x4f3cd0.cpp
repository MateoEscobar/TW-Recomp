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

// Function: sub_004F3CD0
// Address: 0x4f3cd0 - 0x4f3d28
void sub_004F3CD0_0x4f3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3CD0_0x4f3cd0");
#endif

    switch (ctx->pc) {
        case 0x4f3cf8u: goto label_4f3cf8;
        case 0x4f3d14u: goto label_4f3d14;
        default: break;
    }

    ctx->pc = 0x4f3cd0u;

    // 0x4f3cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f3cd4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4f3cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f3cdc: 0x24425548  addiu       $v0, $v0, 0x5548
    ctx->pc = 0x4f3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
    // 0x4f3ce0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f3ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4f3ce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f3ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f3cec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f3cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3cf0: 0xc0e6ba8  jal         func_39AEA0
    ctx->pc = 0x4F3CF0u;
    SET_GPR_U32(ctx, 31, 0x4F3CF8u);
    ctx->pc = 0x4F3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3CF0u;
    // 0x4f3cf4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AEA0u, 0x4F3CF0u, 0x4F3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3CF8u;
label_4f3cf8:
    // 0x4f3cf8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4f3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4f3cfc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4f3cfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4f3d00: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4f3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4f3d04: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F3D04u;
    {
        const bool branch_taken_0x4f3d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3D04u;
        // 0x4f3d08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3d04) {
            ctx->pc = 0x4F3D14u;
            goto label_4f3d14;
        }
    }
    ctx->pc = 0x4F3D0Cu;
    // 0x4f3d0c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F3D0Cu;
    SET_GPR_U32(ctx, 31, 0x4F3D14u);
    ctx->pc = 0x4F3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3D0Cu;
    // 0x4f3d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F3D0Cu, 0x4F3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3D14u;
label_4f3d14:
    // 0x4f3d14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f3d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f3d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3d20: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3D20u;
        // 0x4f3d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3D28u;
}
