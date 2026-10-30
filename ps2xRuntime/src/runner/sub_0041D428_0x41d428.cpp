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

// Function: sub_0041D428
// Address: 0x41d428 - 0x41d480
void sub_0041D428_0x41d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D428_0x41d428");
#endif

    ctx->pc = 0x41d428u;

    // 0x41d428: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x41d428u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x41d42c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x41d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x41d430: 0x8d23489c  lw          $v1, 0x489C($t1)
    ctx->pc = 0x41d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18588)));
    // 0x41d434: 0x42503  sra         $a0, $a0, 20
    ctx->pc = 0x41d434u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 20));
    // 0x41d438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41d43c: 0xa0650008  sb          $a1, 0x8($v1)
    ctx->pc = 0x41d43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x41d440: 0x8d22489c  lw          $v0, 0x489C($t1)
    ctx->pc = 0x41d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18588)));
    // 0x41d444: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x41d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41d448: 0xa0460009  sb          $a2, 0x9($v0)
    ctx->pc = 0x41d448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x41d44c: 0x8d23489c  lw          $v1, 0x489C($t1)
    ctx->pc = 0x41d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18588)));
    // 0x41d450: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x41d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41d454: 0xe44c000c  swc1        $f12, 0xC($v0)
    ctx->pc = 0x41d454u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x41d458: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41d458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d45c: 0xa0670010  sb          $a3, 0x10($v1)
    ctx->pc = 0x41d45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x41d460: 0x8d22489c  lw          $v0, 0x489C($t1)
    ctx->pc = 0x41d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18588)));
    // 0x41d464: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x41d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41d468: 0xa0480011  sb          $t0, 0x11($v0)
    ctx->pc = 0x41d468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 8));
    // 0x41d46c: 0x8d23489c  lw          $v1, 0x489C($t1)
    ctx->pc = 0x41d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18588)));
    // 0x41d470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41d470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41d474: 0x3e00008  jr          $ra
    ctx->pc = 0x41D474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D474u;
        // 0x41d478: 0xe46d0014  swc1        $f13, 0x14($v1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D47Cu;
    // 0x41d47c: 0x0  nop
    ctx->pc = 0x41d47cu;
    // NOP
    ctx->pc = 0x41d480u;
}
