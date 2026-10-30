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

// Function: sub_00203788
// Address: 0x203788 - 0x203800
void sub_00203788_0x203788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203788_0x203788");
#endif

    switch (ctx->pc) {
        case 0x203788u: goto label_203788;
        case 0x20378cu: goto label_20378c;
        case 0x203790u: goto label_203790;
        case 0x203794u: goto label_203794;
        case 0x203798u: goto label_203798;
        case 0x20379cu: goto label_20379c;
        case 0x2037a0u: goto label_2037a0;
        case 0x2037a4u: goto label_2037a4;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037acu: goto label_2037ac;
        case 0x2037b0u: goto label_2037b0;
        case 0x2037b4u: goto label_2037b4;
        case 0x2037b8u: goto label_2037b8;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c0u: goto label_2037c0;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037c8u: goto label_2037c8;
        case 0x2037ccu: goto label_2037cc;
        case 0x2037d0u: goto label_2037d0;
        case 0x2037d4u: goto label_2037d4;
        case 0x2037d8u: goto label_2037d8;
        case 0x2037dcu: goto label_2037dc;
        case 0x2037e0u: goto label_2037e0;
        case 0x2037e4u: goto label_2037e4;
        case 0x2037e8u: goto label_2037e8;
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f0u: goto label_2037f0;
        case 0x2037f4u: goto label_2037f4;
        case 0x2037f8u: goto label_2037f8;
        case 0x2037fcu: goto label_2037fc;
        default: break;
    }

    ctx->pc = 0x203788u;

label_203788:
    // 0x203788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20378c:
    // 0x20378c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_203790:
    // 0x203790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203794:
    // 0x203794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203798:
    // 0x203798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20379c:
    // 0x20379c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2037a0:
    // 0x2037a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2037a4:
    if (ctx->pc == 0x2037A4u) {
        ctx->pc = 0x2037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037A0u;
        // 0x2037a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037A8u;
        goto label_2037a8;
    }
    ctx->pc = 0x2037A0u;
    {
        const bool branch_taken_0x2037a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037A0u;
        // 0x2037a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037a0) {
            ctx->pc = 0x2037E4u;
            goto label_2037e4;
        }
    }
    ctx->pc = 0x2037A8u;
label_2037a8:
    // 0x2037a8: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2037a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2037ac:
    // 0x2037ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2037b0:
    // 0x2037b0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2037b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2037b4:
    // 0x2037b4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2037b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2037b8:
    // 0x2037b8: 0x40f809  jalr        $v0
label_2037bc:
    if (ctx->pc == 0x2037BCu) {
        ctx->pc = 0x2037BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037B8u;
        // 0x2037bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037C0u;
        goto label_2037c0;
    }
    ctx->pc = 0x2037B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2037C0u);
        ctx->pc = 0x2037BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037B8u;
        // 0x2037bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037B8u, 0x2037C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2037C0u;
label_2037c0:
    // 0x2037c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2037c4:
    if (ctx->pc == 0x2037C4u) {
        ctx->pc = 0x2037C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037C0u;
        // 0x2037c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037C8u;
        goto label_2037c8;
    }
    ctx->pc = 0x2037C0u;
    {
        const bool branch_taken_0x2037c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037C0u;
        // 0x2037c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037c0) {
            ctx->pc = 0x2037E8u;
            goto label_2037e8;
        }
    }
    ctx->pc = 0x2037C8u;
label_2037c8:
    // 0x2037c8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2037c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2037cc:
    // 0x2037cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2037ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2037d0:
    // 0x2037d0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2037d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2037d4:
    // 0x2037d4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2037d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2037d8:
    // 0x2037d8: 0x40f809  jalr        $v0
label_2037dc:
    if (ctx->pc == 0x2037DCu) {
        ctx->pc = 0x2037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D8u;
        // 0x2037dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037E0u;
        goto label_2037e0;
    }
    ctx->pc = 0x2037D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2037E0u);
        ctx->pc = 0x2037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D8u;
        // 0x2037dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037D8u, 0x2037E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2037E0u;
label_2037e0:
    // 0x2037e0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2037e4:
    // 0x2037e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2037e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2037e8:
    // 0x2037e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2037e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2037ec:
    // 0x2037ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2037ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2037f0:
    // 0x2037f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2037f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2037f4:
    // 0x2037f4: 0x3e00008  jr          $ra
label_2037f8:
    if (ctx->pc == 0x2037F8u) {
        ctx->pc = 0x2037F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F4u;
        // 0x2037f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037FCu;
        goto label_2037fc;
    }
    ctx->pc = 0x2037F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2037F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F4u;
        // 0x2037f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2037FCu;
label_2037fc:
    // 0x2037fc: 0x0  nop
    ctx->pc = 0x2037fcu;
    // NOP
    ctx->pc = 0x203800u;
}
