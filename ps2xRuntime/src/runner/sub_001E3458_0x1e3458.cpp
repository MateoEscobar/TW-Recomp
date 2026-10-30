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

// Function: sub_001E3458
// Address: 0x1e3458 - 0x1e34c0
void sub_001E3458_0x1e3458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3458_0x1e3458");
#endif

    switch (ctx->pc) {
        case 0x1e346cu: goto label_1e346c;
        case 0x1e34acu: goto label_1e34ac;
        default: break;
    }

    ctx->pc = 0x1e3458u;

    // 0x1e3458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e345c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3464: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1E3464u;
    SET_GPR_U32(ctx, 31, 0x1E346Cu);
    ctx->pc = 0x1E3468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3464u;
    // 0x1e3468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1E3464u, 0x1E346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E346Cu;
label_1e346c:
    // 0x1e346c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e3470: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1e3470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1e3474: 0x24638510  addiu       $v1, $v1, -0x7AF0
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935824));
    // 0x1e3478: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1e3478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1e347c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1e347cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x1e3480: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1e3480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1e3484: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e3484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e3488: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x1e3488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
    // 0x1e348c: 0x24c6c658  addiu       $a2, $a2, -0x39A8
    ctx->pc = 0x1e348cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952536));
    // 0x1e3490: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e3490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e3494: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e3494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e3498: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e3498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1e349c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e349cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e34a0: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1e34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x1e34a4: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1E34A4u;
    SET_GPR_U32(ctx, 31, 0x1E34ACu);
    ctx->pc = 0x1E34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E34A4u;
    // 0x1e34a8: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1E34A4u, 0x1E34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34ACu;
label_1e34ac:
    // 0x1e34ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e34acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e34b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e34b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e34b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e34b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E34B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34B8u;
        // 0x1e34bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E34B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E34C0u;
}
