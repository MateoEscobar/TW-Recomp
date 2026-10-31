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

// Function: sub_00431748
// Address: 0x431748 - 0x4317a0
void sub_00431748_0x431748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431748_0x431748");
#endif

    ctx->pc = 0x431748u;

    // 0x431748: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x431748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x43174c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x43174cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x431750: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x431750u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x431754: 0x3c090043  lui         $t1, 0x43
    ctx->pc = 0x431754u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)67 << 16));
    // 0x431758: 0x244229c0  addiu       $v0, $v0, 0x29C0
    ctx->pc = 0x431758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10688));
    // 0x43175c: 0x24632a28  addiu       $v1, $v1, 0x2A28
    ctx->pc = 0x43175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10792));
    // 0x431760: 0x25082aa8  addiu       $t0, $t0, 0x2AA8
    ctx->pc = 0x431760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10920));
    // 0x431764: 0x25292b10  addiu       $t1, $t1, 0x2B10
    ctx->pc = 0x431764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11024));
    // 0x431768: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x431768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x43176c: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x43176cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x431770: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x431770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x431774: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x431774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x431778: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x431778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x43177c: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x43177cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x431780: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x431780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x431784: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x431784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x431788: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x431788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x43178c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x43178cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x431790: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x431790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x431794: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x431794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x431798: 0x3e00008  jr          $ra
    ctx->pc = 0x431798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431798u;
        // 0x43179c: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4317A0u;
}
