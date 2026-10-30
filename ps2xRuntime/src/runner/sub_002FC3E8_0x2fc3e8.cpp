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

// Function: sub_002FC3E8
// Address: 0x2fc3e8 - 0x2fc420
void sub_002FC3E8_0x2fc3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC3E8_0x2fc3e8");
#endif

    switch (ctx->pc) {
        case 0x2fc404u: goto label_2fc404;
        default: break;
    }

    ctx->pc = 0x2fc3e8u;

    // 0x2fc3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc3ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fc3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fc3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc3f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc3fc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2FC3FCu;
    SET_GPR_U32(ctx, 31, 0x2FC404u);
    ctx->pc = 0x2FC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC3FCu;
    // 0x2fc400: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2FC3FCu, 0x2FC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC404u;
label_2fc404:
    // 0x2fc404: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2fc404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2fc408: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fc408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc410: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC410u;
        // 0x2fc414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC418u;
    // 0x2fc418: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2fc418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fc41c: 0x0  nop
    ctx->pc = 0x2fc41cu;
    // NOP
    ctx->pc = 0x2fc420u;
}
