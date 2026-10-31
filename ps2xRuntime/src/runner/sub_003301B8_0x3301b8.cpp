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

// Function: sub_003301B8
// Address: 0x3301b8 - 0x330288
void sub_003301B8_0x3301b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003301B8_0x3301b8");
#endif

    switch (ctx->pc) {
        case 0x3301dcu: goto label_3301dc;
        case 0x3301f4u: goto label_3301f4;
        case 0x3301fcu: goto label_3301fc;
        case 0x330208u: goto label_330208;
        case 0x330234u: goto label_330234;
        case 0x330244u: goto label_330244;
        case 0x33025cu: goto label_33025c;
        case 0x330268u: goto label_330268;
        default: break;
    }

    ctx->pc = 0x3301b8u;

    // 0x3301b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3301b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3301bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3301bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3301c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3301c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3301c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3301c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3301c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3301c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3301cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3301ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3301d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3301d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3301d4: 0xc0c9192  jal         func_324648
    ctx->pc = 0x3301D4u;
    SET_GPR_U32(ctx, 31, 0x3301DCu);
    ctx->pc = 0x3301D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3301D4u;
    // 0x3301d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x3301D4u, 0x3301DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3301DCu;
label_3301dc:
    // 0x3301dc: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x3301dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3301e0: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x3301e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x3301e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3301e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3301e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3301e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3301ec: 0xc0c91f2  jal         func_3247C8
    ctx->pc = 0x3301ECu;
    SET_GPR_U32(ctx, 31, 0x3301F4u);
    ctx->pc = 0x3301F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3301ECu;
    // 0x3301f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247C8u, 0x3301ECu, 0x3301F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3301F4u;
label_3301f4:
    // 0x3301f4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3301F4u;
    SET_GPR_U32(ctx, 31, 0x3301FCu);
    ctx->pc = 0x3301F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3301F4u;
    // 0x3301f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3301F4u, 0x3301FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3301FCu;
label_3301fc:
    // 0x3301fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3301fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330200: 0xc0cbf9c  jal         func_32FE70
    ctx->pc = 0x330200u;
    SET_GPR_U32(ctx, 31, 0x330208u);
    ctx->pc = 0x330204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330200u;
    // 0x330204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE70u, 0x330200u, 0x330208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330208u;
label_330208:
    // 0x330208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x330208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33020c: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33020Cu;
    {
        const bool branch_taken_0x33020c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x330210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33020Cu;
        // 0x330210: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33020c) {
            ctx->pc = 0x330220u;
            goto label_330220;
        }
    }
    ctx->pc = 0x330214u;
    // 0x330214: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x330214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x330218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x330218u;
    {
        const bool branch_taken_0x330218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330218u;
        // 0x33021c: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330218) {
            ctx->pc = 0x330238u;
            goto label_330238;
        }
    }
    ctx->pc = 0x330220u;
label_330220:
    // 0x330220: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x330220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x330224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330228: 0x24c65f08  addiu       $a2, $a2, 0x5F08
    ctx->pc = 0x330228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24328));
    // 0x33022c: 0xc0c910e  jal         func_324438
    ctx->pc = 0x33022Cu;
    SET_GPR_U32(ctx, 31, 0x330234u);
    ctx->pc = 0x330230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33022Cu;
    // 0x330230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x33022Cu, 0x330234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330234u;
label_330234:
    // 0x330234: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x330234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_330238:
    // 0x330238: 0x8050ffff  lb          $s0, -0x1($v0)
    ctx->pc = 0x330238u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x33023c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x33023Cu;
    SET_GPR_U32(ctx, 31, 0x330244u);
    ctx->pc = 0x330240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33023Cu;
    // 0x330240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x33023Cu, 0x330244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330244u;
label_330244:
    // 0x330244: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330244u;
    {
        const bool branch_taken_0x330244 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x330248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330244u;
        // 0x330248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330244) {
            ctx->pc = 0x330260u;
            goto label_330260;
        }
    }
    ctx->pc = 0x33024Cu;
    // 0x33024c: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x33024cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x330250: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x330250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x330254: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x330254u;
    SET_GPR_U32(ctx, 31, 0x33025Cu);
    ctx->pc = 0x330258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330254u;
    // 0x330258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x330254u, 0x33025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33025Cu;
label_33025c:
    // 0x33025c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330260:
    // 0x330260: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x330260u;
    SET_GPR_U32(ctx, 31, 0x330268u);
    ctx->pc = 0x330264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330260u;
    // 0x330264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x330260u, 0x330268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330268u;
label_330268:
    // 0x330268: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x330268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33026c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330270: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x330270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33027c: 0x3e00008  jr          $ra
    ctx->pc = 0x33027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33027Cu;
        // 0x330280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330284u;
    // 0x330284: 0x0  nop
    ctx->pc = 0x330284u;
    // NOP
    ctx->pc = 0x330288u;
}
