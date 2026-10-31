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

// Function: sub_004E9600
// Address: 0x4e9600 - 0x4e9680
void sub_004E9600_0x4e9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9600_0x4e9600");
#endif

    switch (ctx->pc) {
        case 0x4e9600u: goto label_4e9600;
        case 0x4e9604u: goto label_4e9604;
        case 0x4e9608u: goto label_4e9608;
        case 0x4e960cu: goto label_4e960c;
        case 0x4e9610u: goto label_4e9610;
        case 0x4e9614u: goto label_4e9614;
        case 0x4e9618u: goto label_4e9618;
        case 0x4e961cu: goto label_4e961c;
        case 0x4e9620u: goto label_4e9620;
        case 0x4e9624u: goto label_4e9624;
        case 0x4e9628u: goto label_4e9628;
        case 0x4e962cu: goto label_4e962c;
        case 0x4e9630u: goto label_4e9630;
        case 0x4e9634u: goto label_4e9634;
        case 0x4e9638u: goto label_4e9638;
        case 0x4e963cu: goto label_4e963c;
        case 0x4e9640u: goto label_4e9640;
        case 0x4e9644u: goto label_4e9644;
        case 0x4e9648u: goto label_4e9648;
        case 0x4e964cu: goto label_4e964c;
        case 0x4e9650u: goto label_4e9650;
        case 0x4e9654u: goto label_4e9654;
        case 0x4e9658u: goto label_4e9658;
        case 0x4e965cu: goto label_4e965c;
        case 0x4e9660u: goto label_4e9660;
        case 0x4e9664u: goto label_4e9664;
        case 0x4e9668u: goto label_4e9668;
        case 0x4e966cu: goto label_4e966c;
        case 0x4e9670u: goto label_4e9670;
        case 0x4e9674u: goto label_4e9674;
        case 0x4e9678u: goto label_4e9678;
        case 0x4e967cu: goto label_4e967c;
        default: break;
    }

    ctx->pc = 0x4e9600u;

label_4e9600:
    // 0x4e9600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9604:
    // 0x4e9604: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9608:
    // 0x4e9608: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e960c:
    // 0x4e960c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e960cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9610:
    // 0x4e9610: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9614:
    // 0x4e9614: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9618:
    // 0x4e9618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e961c:
    // 0x4e961c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e9620:
    if (ctx->pc == 0x4E9620u) {
        ctx->pc = 0x4E9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E961Cu;
        // 0x4e9620: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9624u;
        goto label_4e9624;
    }
    ctx->pc = 0x4E961Cu;
    {
        const bool branch_taken_0x4e961c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E961Cu;
        // 0x4e9620: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e961c) {
            ctx->pc = 0x4E9664u;
            goto label_4e9664;
        }
    }
    ctx->pc = 0x4E9624u;
label_4e9624:
    // 0x4e9624: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e9628:
    // 0x4e9628: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e9628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e962c:
    // 0x4e962c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e962cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e9630:
    // 0x4e9630: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e9630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e9634:
    // 0x4e9634: 0x60f809  jalr        $v1
label_4e9638:
    if (ctx->pc == 0x4E9638u) {
        ctx->pc = 0x4E9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9634u;
        // 0x4e9638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E963Cu;
        goto label_4e963c;
    }
    ctx->pc = 0x4E9634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E963Cu);
        ctx->pc = 0x4E9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9634u;
        // 0x4e9638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9634u, 0x4E963Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E963Cu;
label_4e963c:
    // 0x4e963c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e9640:
    // 0x4e9640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e9640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e9644:
    // 0x4e9644: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e9644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9648:
    // 0x4e9648: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e9648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e964c:
    // 0x4e964c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e964cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9650:
    // 0x4e9650: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9654:
    // 0x4e9654: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9658:
    // 0x4e9658: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e965c:
    // 0x4e965c: 0x60f809  jalr        $v1
label_4e9660:
    if (ctx->pc == 0x4E9660u) {
        ctx->pc = 0x4E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E965Cu;
        // 0x4e9660: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9664u;
        goto label_4e9664;
    }
    ctx->pc = 0x4E965Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9664u);
        ctx->pc = 0x4E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E965Cu;
        // 0x4e9660: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E965Cu, 0x4E9664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9664u;
label_4e9664:
    // 0x4e9664: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e9664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9668:
    // 0x4e9668: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e9668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e966c:
    // 0x4e966c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e966cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9670:
    // 0x4e9670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9674:
    // 0x4e9674: 0x3e00008  jr          $ra
label_4e9678:
    if (ctx->pc == 0x4E9678u) {
        ctx->pc = 0x4E9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9674u;
        // 0x4e9678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E967Cu;
        goto label_4e967c;
    }
    ctx->pc = 0x4E9674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9674u;
        // 0x4e9678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E967Cu;
label_4e967c:
    // 0x4e967c: 0x0  nop
    ctx->pc = 0x4e967cu;
    // NOP
    ctx->pc = 0x4e9680u;
}
