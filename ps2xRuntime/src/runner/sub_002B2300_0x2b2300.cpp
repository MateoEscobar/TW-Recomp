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

// Function: sub_002B2300
// Address: 0x2b2300 - 0x2b2340
void sub_002B2300_0x2b2300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2300_0x2b2300");
#endif

    switch (ctx->pc) {
        case 0x2b2300u: goto label_2b2300;
        case 0x2b2304u: goto label_2b2304;
        case 0x2b2308u: goto label_2b2308;
        case 0x2b230cu: goto label_2b230c;
        case 0x2b2310u: goto label_2b2310;
        case 0x2b2314u: goto label_2b2314;
        case 0x2b2318u: goto label_2b2318;
        case 0x2b231cu: goto label_2b231c;
        case 0x2b2320u: goto label_2b2320;
        case 0x2b2324u: goto label_2b2324;
        case 0x2b2328u: goto label_2b2328;
        case 0x2b232cu: goto label_2b232c;
        case 0x2b2330u: goto label_2b2330;
        case 0x2b2334u: goto label_2b2334;
        case 0x2b2338u: goto label_2b2338;
        case 0x2b233cu: goto label_2b233c;
        default: break;
    }

    ctx->pc = 0x2b2300u;

label_2b2300:
    // 0x2b2300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b2304:
    // 0x2b2304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b2308:
    // 0x2b2308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b230c:
    // 0x2b230c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b230cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2310:
    // 0x2b2310: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b2314:
    // 0x2b2314: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b2314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b2318:
    // 0x2b2318: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b2318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b231c:
    // 0x2b231c: 0x40f809  jalr        $v0
label_2b2320:
    if (ctx->pc == 0x2B2320u) {
        ctx->pc = 0x2B2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B231Cu;
        // 0x2b2320: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2324u;
        goto label_2b2324;
    }
    ctx->pc = 0x2B231Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2324u);
        ctx->pc = 0x2B2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B231Cu;
        // 0x2b2320: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B231Cu, 0x2B2324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2324u;
label_2b2324:
    // 0x2b2324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2328:
    // 0x2b2328: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b232c:
    // 0x2b232c: 0xc08e1a4  jal         func_238690
label_2b2330:
    if (ctx->pc == 0x2B2330u) {
        ctx->pc = 0x2B2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B232Cu;
        // 0x2b2330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2334u;
        goto label_2b2334;
    }
    ctx->pc = 0x2B232Cu;
    SET_GPR_U32(ctx, 31, 0x2B2334u);
    ctx->pc = 0x2B2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B232Cu;
    // 0x2b2330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2B232Cu, 0x2B2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2334u;
label_2b2334:
    // 0x2b2334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2338:
    // 0x2b2338: 0x3e00008  jr          $ra
label_2b233c:
    if (ctx->pc == 0x2B233Cu) {
        ctx->pc = 0x2B233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2338u;
        // 0x2b233c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2340u;
        goto label_fallthrough_0x2b2338;
    }
    ctx->pc = 0x2B2338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2338u;
        // 0x2b233c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b2338:
    ctx->pc = 0x2B2340u;
}
