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

// Function: sub_0029D4F8
// Address: 0x29d4f8 - 0x29d558
void sub_0029D4F8_0x29d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D4F8_0x29d4f8");
#endif

    switch (ctx->pc) {
        case 0x29d4f8u: goto label_29d4f8;
        case 0x29d4fcu: goto label_29d4fc;
        case 0x29d500u: goto label_29d500;
        case 0x29d504u: goto label_29d504;
        case 0x29d508u: goto label_29d508;
        case 0x29d50cu: goto label_29d50c;
        case 0x29d510u: goto label_29d510;
        case 0x29d514u: goto label_29d514;
        case 0x29d518u: goto label_29d518;
        case 0x29d51cu: goto label_29d51c;
        case 0x29d520u: goto label_29d520;
        case 0x29d524u: goto label_29d524;
        case 0x29d528u: goto label_29d528;
        case 0x29d52cu: goto label_29d52c;
        case 0x29d530u: goto label_29d530;
        case 0x29d534u: goto label_29d534;
        case 0x29d538u: goto label_29d538;
        case 0x29d53cu: goto label_29d53c;
        case 0x29d540u: goto label_29d540;
        case 0x29d544u: goto label_29d544;
        case 0x29d548u: goto label_29d548;
        case 0x29d54cu: goto label_29d54c;
        case 0x29d550u: goto label_29d550;
        case 0x29d554u: goto label_29d554;
        default: break;
    }

    ctx->pc = 0x29d4f8u;

label_29d4f8:
    // 0x29d4f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d4fc:
    // 0x29d4fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29d4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_29d500:
    // 0x29d500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d504:
    // 0x29d504: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d508:
    // 0x29d508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29d50c:
    // 0x29d50c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d510:
    // 0x29d510: 0xc0e53cc  jal         func_394F30
label_29d514:
    if (ctx->pc == 0x29D514u) {
        ctx->pc = 0x29D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D510u;
        // 0x29d514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D518u;
        goto label_29d518;
    }
    ctx->pc = 0x29D510u;
    SET_GPR_U32(ctx, 31, 0x29D518u);
    ctx->pc = 0x29D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D510u;
    // 0x29d514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F30u, 0x29D510u, 0x29D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D518u;
label_29d518:
    // 0x29d518: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29d51c:
    if (ctx->pc == 0x29D51Cu) {
        ctx->pc = 0x29D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D518u;
        // 0x29d51c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D520u;
        goto label_29d520;
    }
    ctx->pc = 0x29D518u;
    {
        const bool branch_taken_0x29d518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D518u;
        // 0x29d51c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d518) {
            ctx->pc = 0x29D544u;
            goto label_29d544;
        }
    }
    ctx->pc = 0x29D520u;
label_29d520:
    // 0x29d520: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29d520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d524:
    // 0x29d524: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x29d524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_29d528:
    // 0x29d528: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_29d52c:
    // 0x29d52c: 0x40f809  jalr        $v0
label_29d530:
    if (ctx->pc == 0x29D530u) {
        ctx->pc = 0x29D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D52Cu;
        // 0x29d530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D534u;
        goto label_29d534;
    }
    ctx->pc = 0x29D52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D534u);
        ctx->pc = 0x29D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D52Cu;
        // 0x29d530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D52Cu, 0x29D534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D534u;
label_29d534:
    // 0x29d534: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x29d534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_29d538:
    // 0x29d538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29d538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29d53c:
    // 0x29d53c: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x29d53cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29d540:
    // 0x29d540: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29d540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d544:
    // 0x29d544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29d544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29d548:
    // 0x29d548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d54c:
    // 0x29d54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d550:
    // 0x29d550: 0x3e00008  jr          $ra
label_29d554:
    if (ctx->pc == 0x29D554u) {
        ctx->pc = 0x29D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D550u;
        // 0x29d554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D558u;
        goto label_fallthrough_0x29d550;
    }
    ctx->pc = 0x29D550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D550u;
        // 0x29d554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d550:
    ctx->pc = 0x29D558u;
}
