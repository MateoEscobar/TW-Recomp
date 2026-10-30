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

// Function: sub_002BAEC8
// Address: 0x2baec8 - 0x2baf08
void sub_002BAEC8_0x2baec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAEC8_0x2baec8");
#endif

    switch (ctx->pc) {
        case 0x2baee8u: goto label_2baee8;
        default: break;
    }

    ctx->pc = 0x2baec8u;

    // 0x2baec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2baec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2baecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2baeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baed0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2baed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2baed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2baed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2baed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2baedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2baedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baee0: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2BAEE0u;
    SET_GPR_U32(ctx, 31, 0x2BAEE8u);
    ctx->pc = 0x2BAEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAEE0u;
    // 0x2baee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BAEE0u, 0x2BAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAEE8u;
label_2baee8:
    // 0x2baee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2baee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2baeec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2baeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2baef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2baef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2baef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2baef8: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2baef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2baefc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEFCu;
        // 0x2baf00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAF04u;
    // 0x2baf04: 0x0  nop
    ctx->pc = 0x2baf04u;
    // NOP
    ctx->pc = 0x2baf08u;
}
