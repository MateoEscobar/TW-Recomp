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

// Function: sub_00480218
// Address: 0x480218 - 0x480270
void sub_00480218_0x480218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480218_0x480218");
#endif

    ctx->pc = 0x480218u;

    // 0x480218: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x480218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x48021c: 0x8f898954  lw          $t1, -0x76AC($gp)
    ctx->pc = 0x48021cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x480220: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x480220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x480224: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x480224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x480228: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x480228u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x48022c: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x48022cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x480230: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x480230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x480234: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x480234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x480238: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x480238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x48023c: 0x24c60398  addiu       $a2, $a2, 0x398
    ctx->pc = 0x48023cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 920));
    // 0x480240: 0x24e702e0  addiu       $a3, $a3, 0x2E0
    ctx->pc = 0x480240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 736));
    // 0x480244: 0x250804d0  addiu       $t0, $t0, 0x4D0
    ctx->pc = 0x480244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1232));
    // 0x480248: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x480248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x48024c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x48024cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x480250: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x480250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x480254: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x480254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480258: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x480258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x48025c: 0xac680010  sw          $t0, 0x10($v1)
    ctx->pc = 0x48025cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
    // 0x480260: 0xaf898954  sw          $t1, -0x76AC($gp)
    ctx->pc = 0x480260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936916), GPR_U32(ctx, 9));
    // 0x480264: 0x3e00008  jr          $ra
    ctx->pc = 0x480264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480264u;
        // 0x480268: 0xaf858950  sw          $a1, -0x76B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936912), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48026Cu;
    // 0x48026c: 0x0  nop
    ctx->pc = 0x48026cu;
    // NOP
    ctx->pc = 0x480270u;
}
