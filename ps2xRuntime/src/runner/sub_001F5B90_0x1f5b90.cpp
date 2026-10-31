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

// Function: sub_001F5B90
// Address: 0x1f5b90 - 0x1f5bd0
void sub_001F5B90_0x1f5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5B90_0x1f5b90");
#endif

    ctx->pc = 0x1f5b90u;

    // 0x1f5b90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f5b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f5b94: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5B94u;
    {
        const bool branch_taken_0x1f5b94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5b94) {
            ctx->pc = 0x1F5BC8u;
            goto label_1f5bc8;
        }
    }
    ctx->pc = 0x1F5B9Cu;
    // 0x1f5b9c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5B9Cu;
    {
        const bool branch_taken_0x1f5b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B9Cu;
        // 0x1f5ba0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b9c) {
            ctx->pc = 0x1F5BC8u;
            goto label_1f5bc8;
        }
    }
    ctx->pc = 0x1F5BA4u;
    // 0x1f5ba4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f5ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f5ba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5bac: 0xc442f41c  lwc1        $f2, -0xBE4($v0)
    ctx->pc = 0x1f5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5bb0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1f5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1f5bb4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1f5bb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f5bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5bbc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f5bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f5bc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f5bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f5bc4: 0xe460ee80  swc1        $f0, -0x1180($v1)
    ctx->pc = 0x1f5bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x63EE80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EE80u, _value); } while (0); }
label_1f5bc8:
    // 0x1f5bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5BD0u;
}
