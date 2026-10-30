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

// Function: sub_002CD640
// Address: 0x2cd640 - 0x2cd698
void sub_002CD640_0x2cd640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD640_0x2cd640");
#endif

    switch (ctx->pc) {
        case 0x2cd640u: goto label_2cd640;
        case 0x2cd644u: goto label_2cd644;
        case 0x2cd648u: goto label_2cd648;
        case 0x2cd64cu: goto label_2cd64c;
        case 0x2cd650u: goto label_2cd650;
        case 0x2cd654u: goto label_2cd654;
        case 0x2cd658u: goto label_2cd658;
        case 0x2cd65cu: goto label_2cd65c;
        case 0x2cd660u: goto label_2cd660;
        case 0x2cd664u: goto label_2cd664;
        case 0x2cd668u: goto label_2cd668;
        case 0x2cd66cu: goto label_2cd66c;
        case 0x2cd670u: goto label_2cd670;
        case 0x2cd674u: goto label_2cd674;
        case 0x2cd678u: goto label_2cd678;
        case 0x2cd67cu: goto label_2cd67c;
        case 0x2cd680u: goto label_2cd680;
        case 0x2cd684u: goto label_2cd684;
        case 0x2cd688u: goto label_2cd688;
        case 0x2cd68cu: goto label_2cd68c;
        case 0x2cd690u: goto label_2cd690;
        case 0x2cd694u: goto label_2cd694;
        default: break;
    }

    ctx->pc = 0x2cd640u;

label_2cd640:
    // 0x2cd640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cd644:
    // 0x2cd644: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cd644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cd648:
    // 0x2cd648: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cd648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cd64c:
    // 0x2cd64c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2cd650:
    if (ctx->pc == 0x2CD650u) {
        ctx->pc = 0x2CD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD64Cu;
        // 0x2cd650: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD654u;
        goto label_2cd654;
    }
    ctx->pc = 0x2CD64Cu;
    {
        const bool branch_taken_0x2cd64c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD64Cu;
        // 0x2cd650: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd64c) {
            ctx->pc = 0x2CD688u;
            goto label_2cd688;
        }
    }
    ctx->pc = 0x2CD654u;
label_2cd654:
    // 0x2cd654: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cd654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd658:
    // 0x2cd658: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x2cd658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_2cd65c:
    // 0x2cd65c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2cd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2cd660:
    // 0x2cd660: 0x40f809  jalr        $v0
label_2cd664:
    if (ctx->pc == 0x2CD664u) {
        ctx->pc = 0x2CD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD660u;
        // 0x2cd664: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD668u;
        goto label_2cd668;
    }
    ctx->pc = 0x2CD660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD668u);
        ctx->pc = 0x2CD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD660u;
        // 0x2cd664: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD660u, 0x2CD668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD668u;
label_2cd668:
    // 0x2cd668: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cd668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd66c:
    // 0x2cd66c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2cd66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2cd670:
    // 0x2cd670: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2cd674:
    if (ctx->pc == 0x2CD674u) {
        ctx->pc = 0x2CD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD670u;
        // 0x2cd674: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD678u;
        goto label_2cd678;
    }
    ctx->pc = 0x2CD670u;
    {
        const bool branch_taken_0x2cd670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd670) {
            ctx->pc = 0x2CD674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD670u;
            // 0x2cd674: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD688u;
            goto label_2cd688;
        }
    }
    ctx->pc = 0x2CD678u;
label_2cd678:
    // 0x2cd678: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x2cd678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2cd67c:
    // 0x2cd67c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2cd680:
    if (ctx->pc == 0x2CD680u) {
        ctx->pc = 0x2CD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD67Cu;
        // 0x2cd680: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD684u;
        goto label_2cd684;
    }
    ctx->pc = 0x2CD67Cu;
    {
        const bool branch_taken_0x2cd67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd67c) {
            ctx->pc = 0x2CD680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD67Cu;
            // 0x2cd680: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD68Cu;
            goto label_2cd68c;
        }
    }
    ctx->pc = 0x2CD684u;
label_2cd684:
    // 0x2cd684: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2cd684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_2cd688:
    // 0x2cd688: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cd688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd68c:
    // 0x2cd68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd690:
    // 0x2cd690: 0x3e00008  jr          $ra
label_2cd694:
    if (ctx->pc == 0x2CD694u) {
        ctx->pc = 0x2CD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD690u;
        // 0x2cd694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD698u;
        goto label_fallthrough_0x2cd690;
    }
    ctx->pc = 0x2CD690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD690u;
        // 0x2cd694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd690:
    ctx->pc = 0x2CD698u;
}
