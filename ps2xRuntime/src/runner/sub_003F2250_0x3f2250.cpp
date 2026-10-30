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

// Function: sub_003F2250
// Address: 0x3f2250 - 0x3f2270
void sub_003F2250_0x3f2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2250_0x3f2250");
#endif

    switch (ctx->pc) {
        case 0x3f2254u: goto label_3f2254;
        default: break;
    }

    ctx->pc = 0x3f2250u;

    // 0x3f2250: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3f2250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f2254:
    // 0x3f2254: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3f2254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f2258: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f2258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f225c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f225cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f2260: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f2260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f2264: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2264u;
        // 0x3f2268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F226Cu;
    // 0x3f226c: 0x0  nop
    ctx->pc = 0x3f226cu;
    // NOP
    ctx->pc = 0x3f2270u;
}
