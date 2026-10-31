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

// Function: sub_002235F8
// Address: 0x2235f8 - 0x223628
void sub_002235F8_0x2235f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002235F8_0x2235f8");
#endif

    switch (ctx->pc) {
        case 0x223608u: goto label_223608;
        case 0x22361cu: goto label_22361c;
        default: break;
    }

    ctx->pc = 0x2235f8u;

    // 0x2235f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2235f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2235fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2235fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223600: 0xc088ade  jal         func_222B78
    ctx->pc = 0x223600u;
    SET_GPR_U32(ctx, 31, 0x223608u);
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x223600u, 0x223608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223608u;
label_223608:
    // 0x223608: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x223608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22360c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22360cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x223610: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223614: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x223614u;
    SET_GPR_U32(ctx, 31, 0x22361Cu);
    ctx->pc = 0x223618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223614u;
    // 0x223618: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x223614u, 0x22361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22361Cu;
label_22361c:
    // 0x22361c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22361cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223620: 0x3e00008  jr          $ra
    ctx->pc = 0x223620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223620u;
        // 0x223624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223628u;
}
