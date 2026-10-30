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

// Function: sub_002285F8
// Address: 0x2285f8 - 0x228630
void sub_002285F8_0x2285f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002285F8_0x2285f8");
#endif

    switch (ctx->pc) {
        case 0x228618u: goto label_228618;
        default: break;
    }

    ctx->pc = 0x2285f8u;

    // 0x2285f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2285f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2285fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2285fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228600: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x228600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x228604: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x228604u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x228608: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x228608u;
    {
        const bool branch_taken_0x228608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228608) {
            ctx->pc = 0x22860Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228608u;
            // 0x22860c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228624u;
            goto label_228624;
        }
    }
    ctx->pc = 0x228610u;
    // 0x228610: 0xc088ab6  jal         func_222AD8
    ctx->pc = 0x228610u;
    SET_GPR_U32(ctx, 31, 0x228618u);
    ctx->pc = 0x222AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222AD8u, 0x228610u, 0x228618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228618u;
label_228618:
    // 0x228618: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x228618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x22861c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x22861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x228620: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x228620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_228624:
    // 0x228624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228628: 0x3e00008  jr          $ra
    ctx->pc = 0x228628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228628u;
        // 0x22862c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228630u;
}
