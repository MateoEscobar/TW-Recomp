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

// Function: sub_00486408
// Address: 0x486408 - 0x486448
void sub_00486408_0x486408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486408_0x486408");
#endif

    switch (ctx->pc) {
        case 0x486408u: goto label_486408;
        case 0x48640cu: goto label_48640c;
        case 0x486410u: goto label_486410;
        case 0x486414u: goto label_486414;
        case 0x486418u: goto label_486418;
        case 0x48641cu: goto label_48641c;
        case 0x486420u: goto label_486420;
        case 0x486424u: goto label_486424;
        case 0x486428u: goto label_486428;
        case 0x48642cu: goto label_48642c;
        case 0x486430u: goto label_486430;
        case 0x486434u: goto label_486434;
        case 0x486438u: goto label_486438;
        case 0x48643cu: goto label_48643c;
        case 0x486440u: goto label_486440;
        case 0x486444u: goto label_486444;
        default: break;
    }

    ctx->pc = 0x486408u;

label_486408:
    // 0x486408: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x486408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_48640c:
    // 0x48640c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48640cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_486410:
    // 0x486410: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x486410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_486414:
    // 0x486414: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x486414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_486418:
    // 0x486418: 0x8ca2ad9c  lw          $v0, -0x5264($a1)
    ctx->pc = 0x486418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946204)));
label_48641c:
    // 0x48641c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x48641cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_486420:
    // 0x486420: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x486420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486424:
    // 0x486424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x486424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_486428:
    // 0x486428: 0x40f809  jalr        $v0
label_48642c:
    if (ctx->pc == 0x48642Cu) {
        ctx->pc = 0x48642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486428u;
        // 0x48642c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486430u;
        goto label_486430;
    }
    ctx->pc = 0x486428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486430u);
        ctx->pc = 0x48642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486428u;
        // 0x48642c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486428u, 0x486430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486430u;
label_486430:
    // 0x486430: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_486434:
    if (ctx->pc == 0x486434u) {
        ctx->pc = 0x486434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486430u;
        // 0x486434: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486438u;
        goto label_486438;
    }
    ctx->pc = 0x486430u;
    {
        const bool branch_taken_0x486430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x486434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486430u;
        // 0x486434: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486430) {
            ctx->pc = 0x48643Cu;
            goto label_48643c;
        }
    }
    ctx->pc = 0x486438u;
label_486438:
    // 0x486438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x486438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48643c:
    // 0x48643c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48643cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_486440:
    // 0x486440: 0x3e00008  jr          $ra
label_486444:
    if (ctx->pc == 0x486444u) {
        ctx->pc = 0x486444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486440u;
        // 0x486444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486448u;
        goto label_fallthrough_0x486440;
    }
    ctx->pc = 0x486440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486440u;
        // 0x486444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x486440:
    ctx->pc = 0x486448u;
}
