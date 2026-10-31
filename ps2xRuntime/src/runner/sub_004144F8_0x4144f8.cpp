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

// Function: sub_004144F8
// Address: 0x4144f8 - 0x414548
void sub_004144F8_0x4144f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004144F8_0x4144f8");
#endif

    switch (ctx->pc) {
        case 0x4144f8u: goto label_4144f8;
        case 0x4144fcu: goto label_4144fc;
        case 0x414500u: goto label_414500;
        case 0x414504u: goto label_414504;
        case 0x414508u: goto label_414508;
        case 0x41450cu: goto label_41450c;
        case 0x414510u: goto label_414510;
        case 0x414514u: goto label_414514;
        case 0x414518u: goto label_414518;
        case 0x41451cu: goto label_41451c;
        case 0x414520u: goto label_414520;
        case 0x414524u: goto label_414524;
        case 0x414528u: goto label_414528;
        case 0x41452cu: goto label_41452c;
        case 0x414530u: goto label_414530;
        case 0x414534u: goto label_414534;
        case 0x414538u: goto label_414538;
        case 0x41453cu: goto label_41453c;
        case 0x414540u: goto label_414540;
        case 0x414544u: goto label_414544;
        default: break;
    }

    ctx->pc = 0x4144f8u;

label_4144f8:
    // 0x4144f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4144f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4144fc:
    // 0x4144fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4144fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_414500:
    // 0x414500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_414504:
    // 0x414504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x414504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414508:
    // 0x414508: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x414508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41450c:
    // 0x41450c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41450cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_414510:
    // 0x414510: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x414510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_414514:
    // 0x414514: 0x40f809  jalr        $v0
label_414518:
    if (ctx->pc == 0x414518u) {
        ctx->pc = 0x414518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414514u;
        // 0x414518: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41451Cu;
        goto label_41451c;
    }
    ctx->pc = 0x414514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41451Cu);
        ctx->pc = 0x414518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414514u;
        // 0x414518: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414514u, 0x41451Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41451Cu;
label_41451c:
    // 0x41451c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414520:
    // 0x414520: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x414520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_414524:
    // 0x414524: 0xc13d726  jal         func_4F5C98
label_414528:
    if (ctx->pc == 0x414528u) {
        ctx->pc = 0x414528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414524u;
        // 0x414528: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41452Cu;
        goto label_41452c;
    }
    ctx->pc = 0x414524u;
    SET_GPR_U32(ctx, 31, 0x41452Cu);
    ctx->pc = 0x414528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414524u;
    // 0x414528: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5C98u, 0x414524u, 0x41452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41452Cu;
label_41452c:
    // 0x41452c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x41452cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_414530:
    // 0x414530: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x414530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414534:
    // 0x414534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x414534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_414538:
    // 0x414538: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x414538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41453c:
    // 0x41453c: 0x3e00008  jr          $ra
label_414540:
    if (ctx->pc == 0x414540u) {
        ctx->pc = 0x414540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41453Cu;
        // 0x414540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414544u;
        goto label_414544;
    }
    ctx->pc = 0x41453Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41453Cu;
        // 0x414540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41453Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414544u;
label_414544:
    // 0x414544: 0x0  nop
    ctx->pc = 0x414544u;
    // NOP
    ctx->pc = 0x414548u;
}
