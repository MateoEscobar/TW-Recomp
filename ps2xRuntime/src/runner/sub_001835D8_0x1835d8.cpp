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

// Function: sub_001835D8
// Address: 0x1835d8 - 0x183618
void sub_001835D8_0x1835d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001835D8_0x1835d8");
#endif

    ctx->pc = 0x1835d8u;

    // 0x1835d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1835d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1835dc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1835e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1835e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1835e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1835e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1835e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1835e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1835ec: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1835ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1835f0: 0x3463ff40  ori         $v1, $v1, 0xFF40
    ctx->pc = 0x1835f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65344);
    // 0x1835f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1835f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1835f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1835f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835fc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1835fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x183600: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x183600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x183604: 0x3e00008  jr          $ra
    ctx->pc = 0x183604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183604u;
        // 0x183608: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18360Cu;
    // 0x18360c: 0x0  nop
    ctx->pc = 0x18360cu;
    // NOP
    // 0x183610: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x183610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183614: 0x0  nop
    ctx->pc = 0x183614u;
    // NOP
    ctx->pc = 0x183618u;
}
