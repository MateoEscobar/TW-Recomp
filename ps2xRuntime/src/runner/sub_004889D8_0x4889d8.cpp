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

// Function: sub_004889D8
// Address: 0x4889d8 - 0x488a10
void sub_004889D8_0x4889d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004889D8_0x4889d8");
#endif

    switch (ctx->pc) {
        case 0x4889d8u: goto label_4889d8;
        case 0x4889dcu: goto label_4889dc;
        case 0x4889e0u: goto label_4889e0;
        case 0x4889e4u: goto label_4889e4;
        case 0x4889e8u: goto label_4889e8;
        case 0x4889ecu: goto label_4889ec;
        case 0x4889f0u: goto label_4889f0;
        case 0x4889f4u: goto label_4889f4;
        case 0x4889f8u: goto label_4889f8;
        case 0x4889fcu: goto label_4889fc;
        case 0x488a00u: goto label_488a00;
        case 0x488a04u: goto label_488a04;
        case 0x488a08u: goto label_488a08;
        case 0x488a0cu: goto label_488a0c;
        default: break;
    }

    ctx->pc = 0x4889d8u;

label_4889d8:
    // 0x4889d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4889d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4889dc:
    // 0x4889dc: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x4889dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4889e0:
    // 0x4889e0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4889e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4889e4:
    // 0x4889e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4889e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4889e8:
    // 0x4889e8: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4889e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4889ec:
    // 0x4889ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4889ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4889f0:
    // 0x4889f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4889f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4889f4:
    // 0x4889f4: 0x40f809  jalr        $v0
label_4889f8:
    if (ctx->pc == 0x4889F8u) {
        ctx->pc = 0x4889FCu;
        goto label_4889fc;
    }
    ctx->pc = 0x4889F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4889FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4889F4u, 0x4889FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4889FCu;
label_4889fc:
    // 0x4889fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4889fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_488a00:
    // 0x488a00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x488a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_488a04:
    // 0x488a04: 0x3e00008  jr          $ra
label_488a08:
    if (ctx->pc == 0x488A08u) {
        ctx->pc = 0x488A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A04u;
        // 0x488a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488A0Cu;
        goto label_488a0c;
    }
    ctx->pc = 0x488A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A04u;
        // 0x488a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488A0Cu;
label_488a0c:
    // 0x488a0c: 0x0  nop
    ctx->pc = 0x488a0cu;
    // NOP
    ctx->pc = 0x488a10u;
}
