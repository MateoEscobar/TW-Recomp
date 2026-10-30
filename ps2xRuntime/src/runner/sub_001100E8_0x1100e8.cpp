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

// Function: sub_001100E8
// Address: 0x1100e8 - 0x110138
void sub_001100E8_0x1100e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001100E8_0x1100e8");
#endif

    switch (ctx->pc) {
        case 0x110118u: goto label_110118;
        default: break;
    }

    ctx->pc = 0x1100e8u;

    // 0x1100e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1100e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1100ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1100ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1100f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1100f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1100f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1100f8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1100f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x1100fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1100fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110100: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x110100u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x110104: 0x24e7b930  addiu       $a3, $a3, -0x46D0
    ctx->pc = 0x110104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949168));
    // 0x110108: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x110108u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11010c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110110: 0xc0447de  jal         func_111F78
    ctx->pc = 0x110110u;
    SET_GPR_U32(ctx, 31, 0x110118u);
    ctx->pc = 0x110114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110110u;
    // 0x110114: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F78u, 0x110110u, 0x110118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110118u;
label_110118:
    // 0x110118: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110118u;
    {
        const bool branch_taken_0x110118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110118u;
        // 0x11011c: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110118) {
            ctx->pc = 0x110128u;
            goto label_110128;
        }
    }
    ctx->pc = 0x110120u;
    // 0x110120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110120u;
    {
        const bool branch_taken_0x110120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110120u;
        // 0x110124: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110120) {
            ctx->pc = 0x11012Cu;
            goto label_11012c;
        }
    }
    ctx->pc = 0x110128u;
label_110128:
    // 0x110128: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x110128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_11012c:
    // 0x11012c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11012cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110130: 0x3e00008  jr          $ra
    ctx->pc = 0x110130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110130u;
        // 0x110134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110138u;
}
