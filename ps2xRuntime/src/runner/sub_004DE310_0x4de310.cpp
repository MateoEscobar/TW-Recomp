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

// Function: sub_004DE310
// Address: 0x4de310 - 0x4de358
void sub_004DE310_0x4de310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE310_0x4de310");
#endif

    switch (ctx->pc) {
        case 0x4de310u: goto label_4de310;
        case 0x4de314u: goto label_4de314;
        case 0x4de318u: goto label_4de318;
        case 0x4de31cu: goto label_4de31c;
        case 0x4de320u: goto label_4de320;
        case 0x4de324u: goto label_4de324;
        case 0x4de328u: goto label_4de328;
        case 0x4de32cu: goto label_4de32c;
        case 0x4de330u: goto label_4de330;
        case 0x4de334u: goto label_4de334;
        case 0x4de338u: goto label_4de338;
        case 0x4de33cu: goto label_4de33c;
        case 0x4de340u: goto label_4de340;
        case 0x4de344u: goto label_4de344;
        case 0x4de348u: goto label_4de348;
        case 0x4de34cu: goto label_4de34c;
        case 0x4de350u: goto label_4de350;
        case 0x4de354u: goto label_4de354;
        default: break;
    }

    ctx->pc = 0x4de310u;

label_4de310:
    // 0x4de310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4de310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4de314:
    // 0x4de314: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4de314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de318:
    // 0x4de318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de31c:
    // 0x4de31c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4de320:
    if (ctx->pc == 0x4DE320u) {
        ctx->pc = 0x4DE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE31Cu;
        // 0x4de320: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE324u;
        goto label_4de324;
    }
    ctx->pc = 0x4DE31Cu;
    {
        const bool branch_taken_0x4de31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE31Cu;
        // 0x4de320: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de31c) {
            ctx->pc = 0x4DE348u;
            goto label_4de348;
        }
    }
    ctx->pc = 0x4DE324u;
label_4de324:
    // 0x4de324: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4de324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4de328:
    // 0x4de328: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4de328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de32c:
    // 0x4de32c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4de32cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4de330:
    // 0x4de330: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4de330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4de334:
    // 0x4de334: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de338:
    // 0x4de338: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de33c:
    // 0x4de33c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de340:
    // 0x4de340: 0x60f809  jalr        $v1
label_4de344:
    if (ctx->pc == 0x4DE344u) {
        ctx->pc = 0x4DE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE340u;
        // 0x4de344: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE348u;
        goto label_4de348;
    }
    ctx->pc = 0x4DE340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE348u);
        ctx->pc = 0x4DE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE340u;
        // 0x4de344: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE340u, 0x4DE348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE348u;
label_4de348:
    // 0x4de348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de34c:
    // 0x4de34c: 0x3e00008  jr          $ra
label_4de350:
    if (ctx->pc == 0x4DE350u) {
        ctx->pc = 0x4DE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE34Cu;
        // 0x4de350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE354u;
        goto label_4de354;
    }
    ctx->pc = 0x4DE34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE34Cu;
        // 0x4de350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE354u;
label_4de354:
    // 0x4de354: 0x0  nop
    ctx->pc = 0x4de354u;
    // NOP
    ctx->pc = 0x4de358u;
}
