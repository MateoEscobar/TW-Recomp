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

// Function: sub_00473970
// Address: 0x473970 - 0x4739b8
void sub_00473970_0x473970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473970_0x473970");
#endif

    switch (ctx->pc) {
        case 0x473994u: goto label_473994;
        default: break;
    }

    ctx->pc = 0x473970u;

    // 0x473970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x473970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x473974: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x473974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x473978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47397c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x47397cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x473980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473988: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x473988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47398c: 0xc11b676  jal         func_46D9D8
    ctx->pc = 0x47398Cu;
    SET_GPR_U32(ctx, 31, 0x473994u);
    ctx->pc = 0x473990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47398Cu;
    // 0x473990: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D9D8u, 0x47398Cu, 0x473994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473994u;
label_473994:
    // 0x473994: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x473994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47399c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47399cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4739a0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4739a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4739a4: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x4739a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x4739a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4739a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4739ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4739acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4739b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4739B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4739B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4739B0u;
        // 0x4739b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4739B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4739B8u;
}
