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

// Function: sub_003CB0A0
// Address: 0x3cb0a0 - 0x3cb0ac
void sub_003CB0A0_0x3cb0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB0A0_0x3cb0a0");
#endif

    switch (ctx->pc) {
        case 0x3cb0a8u: goto label_3cb0a8;
        default: break;
    }

    ctx->pc = 0x3cb0a0u;

    // 0x3cb0a0: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3CB0A0u;
    SET_GPR_U32(ctx, 31, 0x3CB0A8u);
    ctx->pc = 0x3CB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB0A0u;
    // 0x3cb0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CB0A0u, 0x3CB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB0A8u;
label_3cb0a8:
    // 0x3cb0a8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x3cb0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->pc = 0x3cb0acu;
}
