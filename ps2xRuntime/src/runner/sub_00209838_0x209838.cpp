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

// Function: sub_00209838
// Address: 0x209838 - 0x2098b0
void sub_00209838_0x209838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209838_0x209838");
#endif

    switch (ctx->pc) {
        case 0x209838u: goto label_209838;
        case 0x20983cu: goto label_20983c;
        case 0x209840u: goto label_209840;
        case 0x209844u: goto label_209844;
        case 0x209848u: goto label_209848;
        case 0x20984cu: goto label_20984c;
        case 0x209850u: goto label_209850;
        case 0x209854u: goto label_209854;
        case 0x209858u: goto label_209858;
        case 0x20985cu: goto label_20985c;
        case 0x209860u: goto label_209860;
        case 0x209864u: goto label_209864;
        case 0x209868u: goto label_209868;
        case 0x20986cu: goto label_20986c;
        case 0x209870u: goto label_209870;
        case 0x209874u: goto label_209874;
        case 0x209878u: goto label_209878;
        case 0x20987cu: goto label_20987c;
        case 0x209880u: goto label_209880;
        case 0x209884u: goto label_209884;
        case 0x209888u: goto label_209888;
        case 0x20988cu: goto label_20988c;
        case 0x209890u: goto label_209890;
        case 0x209894u: goto label_209894;
        case 0x209898u: goto label_209898;
        case 0x20989cu: goto label_20989c;
        case 0x2098a0u: goto label_2098a0;
        case 0x2098a4u: goto label_2098a4;
        case 0x2098a8u: goto label_2098a8;
        case 0x2098acu: goto label_2098ac;
        default: break;
    }

    ctx->pc = 0x209838u;

label_209838:
    // 0x209838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20983c:
    // 0x20983c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_209840:
    // 0x209840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_209844:
    // 0x209844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209848:
    // 0x209848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20984c:
    // 0x20984c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_209850:
    // 0x209850: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_209854:
    if (ctx->pc == 0x209854u) {
        ctx->pc = 0x209854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209850u;
        // 0x209854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209858u;
        goto label_209858;
    }
    ctx->pc = 0x209850u;
    {
        const bool branch_taken_0x209850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209850u;
        // 0x209854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209850) {
            ctx->pc = 0x209894u;
            goto label_209894;
        }
    }
    ctx->pc = 0x209858u;
label_209858:
    // 0x209858: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20985c:
    // 0x20985c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209860:
    // 0x209860: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_209864:
    // 0x209864: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x209864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_209868:
    // 0x209868: 0x40f809  jalr        $v0
label_20986c:
    if (ctx->pc == 0x20986Cu) {
        ctx->pc = 0x20986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209868u;
        // 0x20986c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209870u;
        goto label_209870;
    }
    ctx->pc = 0x209868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209870u);
        ctx->pc = 0x20986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209868u;
        // 0x20986c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209868u, 0x209870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209870u;
label_209870:
    // 0x209870: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_209874:
    if (ctx->pc == 0x209874u) {
        ctx->pc = 0x209874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209870u;
        // 0x209874: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209878u;
        goto label_209878;
    }
    ctx->pc = 0x209870u;
    {
        const bool branch_taken_0x209870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209870u;
        // 0x209874: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209870) {
            ctx->pc = 0x209898u;
            goto label_209898;
        }
    }
    ctx->pc = 0x209878u;
label_209878:
    // 0x209878: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x209878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20987c:
    // 0x20987c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209880:
    // 0x209880: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x209880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_209884:
    // 0x209884: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x209884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_209888:
    // 0x209888: 0x40f809  jalr        $v0
label_20988c:
    if (ctx->pc == 0x20988Cu) {
        ctx->pc = 0x20988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209888u;
        // 0x20988c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209890u;
        goto label_209890;
    }
    ctx->pc = 0x209888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209890u);
        ctx->pc = 0x20988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209888u;
        // 0x20988c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209888u, 0x209890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209890u;
label_209890:
    // 0x209890: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x209890u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_209894:
    // 0x209894: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x209894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209898:
    // 0x209898: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x209898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20989c:
    // 0x20989c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20989cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2098a0:
    // 0x2098a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2098a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2098a4:
    // 0x2098a4: 0x3e00008  jr          $ra
label_2098a8:
    if (ctx->pc == 0x2098A8u) {
        ctx->pc = 0x2098A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098A4u;
        // 0x2098a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098ACu;
        goto label_2098ac;
    }
    ctx->pc = 0x2098A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2098A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098A4u;
        // 0x2098a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2098A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2098ACu;
label_2098ac:
    // 0x2098ac: 0x0  nop
    ctx->pc = 0x2098acu;
    // NOP
    ctx->pc = 0x2098b0u;
}
