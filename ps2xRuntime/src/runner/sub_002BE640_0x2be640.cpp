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

// Function: sub_002BE640
// Address: 0x2be640 - 0x2be680
void sub_002BE640_0x2be640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE640_0x2be640");
#endif

    ctx->pc = 0x2be640u;

    // 0x2be640: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2be640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2be644: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2be644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2be648: 0x24630510  addiu       $v1, $v1, 0x510
    ctx->pc = 0x2be648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x2be64c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2be64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2be650: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2be650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2be654: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2be654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2be658: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2be658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be65c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2be65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2be660: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2be660u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be664: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2be664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be668: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2be668u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2be66c: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x2be66cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2be670: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2be670u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2be674: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE674u;
        // 0x2be678: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE67Cu;
    // 0x2be67c: 0x0  nop
    ctx->pc = 0x2be67cu;
    // NOP
    ctx->pc = 0x2be680u;
}
