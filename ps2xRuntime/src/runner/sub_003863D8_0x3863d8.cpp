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

// Function: sub_003863D8
// Address: 0x3863d8 - 0x386410
void sub_003863D8_0x3863d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003863D8_0x3863d8");
#endif

    switch (ctx->pc) {
        case 0x3863d8u: goto label_3863d8;
        case 0x3863dcu: goto label_3863dc;
        case 0x3863e0u: goto label_3863e0;
        case 0x3863e4u: goto label_3863e4;
        case 0x3863e8u: goto label_3863e8;
        case 0x3863ecu: goto label_3863ec;
        case 0x3863f0u: goto label_3863f0;
        case 0x3863f4u: goto label_3863f4;
        case 0x3863f8u: goto label_3863f8;
        case 0x3863fcu: goto label_3863fc;
        case 0x386400u: goto label_386400;
        case 0x386404u: goto label_386404;
        case 0x386408u: goto label_386408;
        case 0x38640cu: goto label_38640c;
        default: break;
    }

    ctx->pc = 0x3863d8u;

label_3863d8:
    // 0x3863d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3863d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3863dc:
    // 0x3863dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3863dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3863e0:
    // 0x3863e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3863e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3863e4:
    // 0x3863e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3863e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3863e8:
    // 0x3863e8: 0x8c472b04  lw          $a3, 0x2B04($v0)
    ctx->pc = 0x3863e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_3863ec:
    // 0x3863ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3863ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3863f0:
    // 0x3863f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3863f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3863f4:
    // 0x3863f4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x3863f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_3863f8:
    // 0x3863f8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x3863f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3863fc:
    // 0x3863fc: 0x60f809  jalr        $v1
label_386400:
    if (ctx->pc == 0x386400u) {
        ctx->pc = 0x386400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863FCu;
        // 0x386400: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386404u;
        goto label_386404;
    }
    ctx->pc = 0x3863FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386404u);
        ctx->pc = 0x386400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863FCu;
        // 0x386400: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3863FCu, 0x386404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386404u;
label_386404:
    // 0x386404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_386408:
    // 0x386408: 0x3e00008  jr          $ra
label_38640c:
    if (ctx->pc == 0x38640Cu) {
        ctx->pc = 0x38640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386408u;
        // 0x38640c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386410u;
        goto label_fallthrough_0x386408;
    }
    ctx->pc = 0x386408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386408u;
        // 0x38640c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x386408:
    ctx->pc = 0x386410u;
}
