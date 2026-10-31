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

// Function: sub_004E4640
// Address: 0x4e4640 - 0x4e46b0
void sub_004E4640_0x4e4640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4640_0x4e4640");
#endif

    switch (ctx->pc) {
        case 0x4e4640u: goto label_4e4640;
        case 0x4e4644u: goto label_4e4644;
        case 0x4e4648u: goto label_4e4648;
        case 0x4e464cu: goto label_4e464c;
        case 0x4e4650u: goto label_4e4650;
        case 0x4e4654u: goto label_4e4654;
        case 0x4e4658u: goto label_4e4658;
        case 0x4e465cu: goto label_4e465c;
        case 0x4e4660u: goto label_4e4660;
        case 0x4e4664u: goto label_4e4664;
        case 0x4e4668u: goto label_4e4668;
        case 0x4e466cu: goto label_4e466c;
        case 0x4e4670u: goto label_4e4670;
        case 0x4e4674u: goto label_4e4674;
        case 0x4e4678u: goto label_4e4678;
        case 0x4e467cu: goto label_4e467c;
        case 0x4e4680u: goto label_4e4680;
        case 0x4e4684u: goto label_4e4684;
        case 0x4e4688u: goto label_4e4688;
        case 0x4e468cu: goto label_4e468c;
        case 0x4e4690u: goto label_4e4690;
        case 0x4e4694u: goto label_4e4694;
        case 0x4e4698u: goto label_4e4698;
        case 0x4e469cu: goto label_4e469c;
        case 0x4e46a0u: goto label_4e46a0;
        case 0x4e46a4u: goto label_4e46a4;
        case 0x4e46a8u: goto label_4e46a8;
        case 0x4e46acu: goto label_4e46ac;
        default: break;
    }

    ctx->pc = 0x4e4640u;

label_4e4640:
    // 0x4e4640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e4640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e4644:
    // 0x4e4644: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e4644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e4648:
    // 0x4e4648: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e4648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e464c:
    // 0x4e464c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e464cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4650:
    // 0x4e4650: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e4650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e4654:
    // 0x4e4654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e4654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4658:
    // 0x4e4658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e465c:
    // 0x4e465c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4e4660:
    if (ctx->pc == 0x4E4660u) {
        ctx->pc = 0x4E4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E465Cu;
        // 0x4e4660: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4664u;
        goto label_4e4664;
    }
    ctx->pc = 0x4E465Cu;
    {
        const bool branch_taken_0x4e465c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E465Cu;
        // 0x4e4660: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e465c) {
            ctx->pc = 0x4E4694u;
            goto label_4e4694;
        }
    }
    ctx->pc = 0x4E4664u;
label_4e4664:
    // 0x4e4664: 0xc0e1acc  jal         func_386B30
label_4e4668:
    if (ctx->pc == 0x4E4668u) {
        ctx->pc = 0x4E4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4664u;
        // 0x4e4668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E466Cu;
        goto label_4e466c;
    }
    ctx->pc = 0x4E4664u;
    SET_GPR_U32(ctx, 31, 0x4E466Cu);
    ctx->pc = 0x4E4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4664u;
    // 0x4e4668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386B30u, 0x4E4664u, 0x4E466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E466Cu;
label_4e466c:
    // 0x4e466c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e466cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e4670:
    // 0x4e4670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e4670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4674:
    // 0x4e4674: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e4674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e4678:
    // 0x4e4678: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e4678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e467c:
    // 0x4e467c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e467cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4680:
    // 0x4e4680: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e4684:
    // 0x4e4684: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e4684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4688:
    // 0x4e4688: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e468c:
    // 0x4e468c: 0x60f809  jalr        $v1
label_4e4690:
    if (ctx->pc == 0x4E4690u) {
        ctx->pc = 0x4E4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E468Cu;
        // 0x4e4690: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4694u;
        goto label_4e4694;
    }
    ctx->pc = 0x4E468Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4694u);
        ctx->pc = 0x4E4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E468Cu;
        // 0x4e4690: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E468Cu, 0x4E4694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4694u;
label_4e4694:
    // 0x4e4694: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e4694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4698:
    // 0x4e4698: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e4698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e469c:
    // 0x4e469c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e469cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e46a0:
    // 0x4e46a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e46a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e46a4:
    // 0x4e46a4: 0x3e00008  jr          $ra
label_4e46a8:
    if (ctx->pc == 0x4E46A8u) {
        ctx->pc = 0x4E46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E46A4u;
        // 0x4e46a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E46ACu;
        goto label_4e46ac;
    }
    ctx->pc = 0x4E46A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E46A4u;
        // 0x4e46a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E46A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E46ACu;
label_4e46ac:
    // 0x4e46ac: 0x0  nop
    ctx->pc = 0x4e46acu;
    // NOP
    ctx->pc = 0x4e46b0u;
}
