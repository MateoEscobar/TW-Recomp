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

// Function: sub_00150CA8
// Address: 0x150ca8 - 0x150cf0
void sub_00150CA8_0x150ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150CA8_0x150ca8");
#endif

    switch (ctx->pc) {
        case 0x150cccu: goto label_150ccc;
        default: break;
    }

    ctx->pc = 0x150ca8u;

    // 0x150ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150cac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x150cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150cb4: 0x24424390  addiu       $v0, $v0, 0x4390
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
    // 0x150cb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x150cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cbc: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x150cc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cc4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x150CC4u;
    SET_GPR_U32(ctx, 31, 0x150CCCu);
    ctx->pc = 0x150CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CC4u;
    // 0x150cc8: 0xa040003f  sb          $zero, 0x3F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x150CC4u, 0x150CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CCCu;
label_150ccc:
    // 0x150ccc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x150cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x150cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150cd8: 0xa062c56c  sb          $v0, -0x3A94($v1)
    ctx->pc = 0x150cd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C56Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C56Cu, _value); } while (0);
    // 0x150cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x150CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CDCu;
        // 0x150ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150CE4u;
    // 0x150ce4: 0x0  nop
    ctx->pc = 0x150ce4u;
    // NOP
    // 0x150ce8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x150ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x150cec: 0x0  nop
    ctx->pc = 0x150cecu;
    // NOP
    ctx->pc = 0x150cf0u;
}
