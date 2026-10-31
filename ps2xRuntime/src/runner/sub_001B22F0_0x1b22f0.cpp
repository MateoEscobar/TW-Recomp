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

// Function: sub_001B22F0
// Address: 0x1b22f0 - 0x1b2330
void sub_001B22F0_0x1b22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B22F0_0x1b22f0");
#endif

    switch (ctx->pc) {
        case 0x1b22f0u: goto label_1b22f0;
        case 0x1b22f4u: goto label_1b22f4;
        case 0x1b22f8u: goto label_1b22f8;
        case 0x1b22fcu: goto label_1b22fc;
        case 0x1b2300u: goto label_1b2300;
        case 0x1b2304u: goto label_1b2304;
        case 0x1b2308u: goto label_1b2308;
        case 0x1b230cu: goto label_1b230c;
        case 0x1b2310u: goto label_1b2310;
        case 0x1b2314u: goto label_1b2314;
        case 0x1b2318u: goto label_1b2318;
        case 0x1b231cu: goto label_1b231c;
        case 0x1b2320u: goto label_1b2320;
        case 0x1b2324u: goto label_1b2324;
        case 0x1b2328u: goto label_1b2328;
        case 0x1b232cu: goto label_1b232c;
        default: break;
    }

    ctx->pc = 0x1b22f0u;

label_1b22f0:
    // 0x1b22f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b22f4:
    // 0x1b22f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b22f8:
    // 0x1b22f8: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_1b22fc:
    if (ctx->pc == 0x1B22FCu) {
        ctx->pc = 0x1B22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22F8u;
        // 0x1b22fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2300u;
        goto label_1b2300;
    }
    ctx->pc = 0x1B22F8u;
    {
        const bool branch_taken_0x1b22f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22F8u;
        // 0x1b22fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22f8) {
            ctx->pc = 0x1B2320u;
            goto label_1b2320;
        }
    }
    ctx->pc = 0x1B2300u;
label_1b2300:
    // 0x1b2300: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b2300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b2304:
    // 0x1b2304: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b2304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b2308:
    // 0x1b2308: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1b2308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b230c:
    // 0x1b230c: 0x8ca34120  lw          $v1, 0x4120($a1)
    ctx->pc = 0x1b230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_1b2310:
    // 0x1b2310: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1b2314:
    // 0x1b2314: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b2314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1b2318:
    // 0x1b2318: 0x40f809  jalr        $v0
label_1b231c:
    if (ctx->pc == 0x1B231Cu) {
        ctx->pc = 0x1B231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2318u;
        // 0x1b231c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2320u;
        goto label_1b2320;
    }
    ctx->pc = 0x1B2318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2320u);
        ctx->pc = 0x1B231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2318u;
        // 0x1b231c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2318u, 0x1B2320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2320u;
label_1b2320:
    // 0x1b2320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2324:
    // 0x1b2324: 0x3e00008  jr          $ra
label_1b2328:
    if (ctx->pc == 0x1B2328u) {
        ctx->pc = 0x1B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2324u;
        // 0x1b2328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B232Cu;
        goto label_1b232c;
    }
    ctx->pc = 0x1B2324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2324u;
        // 0x1b2328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B232Cu;
label_1b232c:
    // 0x1b232c: 0x0  nop
    ctx->pc = 0x1b232cu;
    // NOP
    ctx->pc = 0x1b2330u;
}
