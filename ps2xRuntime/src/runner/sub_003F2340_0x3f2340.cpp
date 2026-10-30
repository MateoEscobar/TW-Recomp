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

// Function: sub_003F2340
// Address: 0x3f2340 - 0x3f2378
void sub_003F2340_0x3f2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2340_0x3f2340");
#endif

    switch (ctx->pc) {
        case 0x3f2340u: goto label_3f2340;
        case 0x3f2344u: goto label_3f2344;
        case 0x3f2348u: goto label_3f2348;
        case 0x3f234cu: goto label_3f234c;
        case 0x3f2350u: goto label_3f2350;
        case 0x3f2354u: goto label_3f2354;
        case 0x3f2358u: goto label_3f2358;
        case 0x3f235cu: goto label_3f235c;
        case 0x3f2360u: goto label_3f2360;
        case 0x3f2364u: goto label_3f2364;
        case 0x3f2368u: goto label_3f2368;
        case 0x3f236cu: goto label_3f236c;
        case 0x3f2370u: goto label_3f2370;
        case 0x3f2374u: goto label_3f2374;
        default: break;
    }

    ctx->pc = 0x3f2340u;

label_3f2340:
    // 0x3f2340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f2344:
    // 0x3f2344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f2348:
    // 0x3f2348: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f2348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f234c:
    // 0x3f234c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f234cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2350:
    // 0x3f2350: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f2354:
    // 0x3f2354: 0x40f809  jalr        $v0
label_3f2358:
    if (ctx->pc == 0x3F2358u) {
        ctx->pc = 0x3F2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2354u;
        // 0x3f2358: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F235Cu;
        goto label_3f235c;
    }
    ctx->pc = 0x3F2354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F235Cu);
        ctx->pc = 0x3F2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2354u;
        // 0x3f2358: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2354u, 0x3F235Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F235Cu;
label_3f235c:
    // 0x3f235c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f2360:
    // 0x3f2360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2364:
    // 0x3f2364: 0x38420032  xori        $v0, $v0, 0x32
    ctx->pc = 0x3f2364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)50);
label_3f2368:
    // 0x3f2368: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3f2368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3f236c:
    // 0x3f236c: 0x3e00008  jr          $ra
label_3f2370:
    if (ctx->pc == 0x3F2370u) {
        ctx->pc = 0x3F2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F236Cu;
        // 0x3f2370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2374u;
        goto label_3f2374;
    }
    ctx->pc = 0x3F236Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F236Cu;
        // 0x3f2370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F236Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2374u;
label_3f2374:
    // 0x3f2374: 0x0  nop
    ctx->pc = 0x3f2374u;
    // NOP
    ctx->pc = 0x3f2378u;
}
