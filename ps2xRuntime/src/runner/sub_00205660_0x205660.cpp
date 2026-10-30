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

// Function: sub_00205660
// Address: 0x205660 - 0x2056d8
void sub_00205660_0x205660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205660_0x205660");
#endif

    switch (ctx->pc) {
        case 0x205660u: goto label_205660;
        case 0x205664u: goto label_205664;
        case 0x205668u: goto label_205668;
        case 0x20566cu: goto label_20566c;
        case 0x205670u: goto label_205670;
        case 0x205674u: goto label_205674;
        case 0x205678u: goto label_205678;
        case 0x20567cu: goto label_20567c;
        case 0x205680u: goto label_205680;
        case 0x205684u: goto label_205684;
        case 0x205688u: goto label_205688;
        case 0x20568cu: goto label_20568c;
        case 0x205690u: goto label_205690;
        case 0x205694u: goto label_205694;
        case 0x205698u: goto label_205698;
        case 0x20569cu: goto label_20569c;
        case 0x2056a0u: goto label_2056a0;
        case 0x2056a4u: goto label_2056a4;
        case 0x2056a8u: goto label_2056a8;
        case 0x2056acu: goto label_2056ac;
        case 0x2056b0u: goto label_2056b0;
        case 0x2056b4u: goto label_2056b4;
        case 0x2056b8u: goto label_2056b8;
        case 0x2056bcu: goto label_2056bc;
        case 0x2056c0u: goto label_2056c0;
        case 0x2056c4u: goto label_2056c4;
        case 0x2056c8u: goto label_2056c8;
        case 0x2056ccu: goto label_2056cc;
        case 0x2056d0u: goto label_2056d0;
        case 0x2056d4u: goto label_2056d4;
        default: break;
    }

    ctx->pc = 0x205660u;

label_205660:
    // 0x205660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_205664:
    // 0x205664: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x205664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_205668:
    // 0x205668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20566c:
    // 0x20566c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20566cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205670:
    // 0x205670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205674:
    // 0x205674: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x205674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_205678:
    // 0x205678: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_20567c:
    if (ctx->pc == 0x20567Cu) {
        ctx->pc = 0x20567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205678u;
        // 0x20567c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205680u;
        goto label_205680;
    }
    ctx->pc = 0x205678u;
    {
        const bool branch_taken_0x205678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205678u;
        // 0x20567c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205678) {
            ctx->pc = 0x2056BCu;
            goto label_2056bc;
        }
    }
    ctx->pc = 0x205680u;
label_205680:
    // 0x205680: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x205680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_205684:
    // 0x205684: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x205684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205688:
    // 0x205688: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x205688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20568c:
    // 0x20568c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_205690:
    // 0x205690: 0x40f809  jalr        $v0
label_205694:
    if (ctx->pc == 0x205694u) {
        ctx->pc = 0x205694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205690u;
        // 0x205694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205698u;
        goto label_205698;
    }
    ctx->pc = 0x205690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205698u);
        ctx->pc = 0x205694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205690u;
        // 0x205694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205690u, 0x205698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205698u;
label_205698:
    // 0x205698: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20569c:
    if (ctx->pc == 0x20569Cu) {
        ctx->pc = 0x20569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205698u;
        // 0x20569c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056A0u;
        goto label_2056a0;
    }
    ctx->pc = 0x205698u;
    {
        const bool branch_taken_0x205698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205698u;
        // 0x20569c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205698) {
            ctx->pc = 0x2056C0u;
            goto label_2056c0;
        }
    }
    ctx->pc = 0x2056A0u;
label_2056a0:
    // 0x2056a0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x2056a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2056a4:
    // 0x2056a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2056a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2056a8:
    // 0x2056a8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2056ac:
    // 0x2056ac: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2056b0:
    // 0x2056b0: 0x40f809  jalr        $v0
label_2056b4:
    if (ctx->pc == 0x2056B4u) {
        ctx->pc = 0x2056B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056B0u;
        // 0x2056b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056B8u;
        goto label_2056b8;
    }
    ctx->pc = 0x2056B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2056B8u);
        ctx->pc = 0x2056B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056B0u;
        // 0x2056b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2056B0u, 0x2056B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2056B8u;
label_2056b8:
    // 0x2056b8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2056b8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2056bc:
    // 0x2056bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2056bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2056c0:
    // 0x2056c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2056c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2056c4:
    // 0x2056c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2056c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2056c8:
    // 0x2056c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2056c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2056cc:
    // 0x2056cc: 0x3e00008  jr          $ra
label_2056d0:
    if (ctx->pc == 0x2056D0u) {
        ctx->pc = 0x2056D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056CCu;
        // 0x2056d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056D4u;
        goto label_2056d4;
    }
    ctx->pc = 0x2056CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2056D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056CCu;
        // 0x2056d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2056CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2056D4u;
label_2056d4:
    // 0x2056d4: 0x0  nop
    ctx->pc = 0x2056d4u;
    // NOP
    ctx->pc = 0x2056d8u;
}
