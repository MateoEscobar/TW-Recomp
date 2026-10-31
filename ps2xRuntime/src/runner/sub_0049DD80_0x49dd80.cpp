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

// Function: sub_0049DD80
// Address: 0x49dd80 - 0x49ddf0
void sub_0049DD80_0x49dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DD80_0x49dd80");
#endif

    switch (ctx->pc) {
        case 0x49dda0u: goto label_49dda0;
        case 0x49ddbcu: goto label_49ddbc;
        case 0x49ddd8u: goto label_49ddd8;
        default: break;
    }

    ctx->pc = 0x49dd80u;

    // 0x49dd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49dd84: 0xaf808a58  sw          $zero, -0x75A8($gp)
    ctx->pc = 0x49dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937176), GPR_U32(ctx, 0));
    // 0x49dd88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49dd8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49dd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dd90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49dd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dd94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49dd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dd98: 0xc121848  jal         func_486120
    ctx->pc = 0x49DD98u;
    SET_GPR_U32(ctx, 31, 0x49DDA0u);
    ctx->pc = 0x49DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DD98u;
    // 0x49dd9c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x49DD98u, 0x49DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DDA0u;
label_49dda0:
    // 0x49dda0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49DDA0u;
    {
        const bool branch_taken_0x49dda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDA0u;
        // 0x49dda4: 0xaf828a60  sw          $v0, -0x75A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dda0) {
            ctx->pc = 0x49DDDCu;
            goto label_49dddc;
        }
    }
    ctx->pc = 0x49DDA8u;
    // 0x49dda8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49dda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ddac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49ddacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ddb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49ddb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ddb4: 0xc121848  jal         func_486120
    ctx->pc = 0x49DDB4u;
    SET_GPR_U32(ctx, 31, 0x49DDBCu);
    ctx->pc = 0x49DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DDB4u;
    // 0x49ddb8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x49DDB4u, 0x49DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DDBCu;
label_49ddbc:
    // 0x49ddbc: 0xaf828a64  sw          $v0, -0x759C($gp)
    ctx->pc = 0x49ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937188), GPR_U32(ctx, 2));
    // 0x49ddc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49DDC0u;
    {
        const bool branch_taken_0x49ddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDC0u;
        // 0x49ddc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ddc0) {
            ctx->pc = 0x49DDD0u;
            goto label_49ddd0;
        }
    }
    ctx->pc = 0x49DDC8u;
    // 0x49ddc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49DDC8u;
    {
        const bool branch_taken_0x49ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDC8u;
        // 0x49ddcc: 0xaf808a68  sw          $zero, -0x7598($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ddc8) {
            ctx->pc = 0x49DDE0u;
            goto label_49dde0;
        }
    }
    ctx->pc = 0x49DDD0u;
label_49ddd0:
    // 0x49ddd0: 0xc121888  jal         func_486220
    ctx->pc = 0x49DDD0u;
    SET_GPR_U32(ctx, 31, 0x49DDD8u);
    ctx->pc = 0x49DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DDD0u;
    // 0x49ddd4: 0x8f848a60  lw          $a0, -0x75A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x49DDD0u, 0x49DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DDD8u;
label_49ddd8:
    // 0x49ddd8: 0xaf808a60  sw          $zero, -0x75A0($gp)
    ctx->pc = 0x49ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U32(ctx, 0));
label_49dddc:
    // 0x49dddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49dddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49dde0:
    // 0x49dde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49dde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dde4: 0x3e00008  jr          $ra
    ctx->pc = 0x49DDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDE4u;
        // 0x49dde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DDECu;
    // 0x49ddec: 0x0  nop
    ctx->pc = 0x49ddecu;
    // NOP
    ctx->pc = 0x49ddf0u;
}
