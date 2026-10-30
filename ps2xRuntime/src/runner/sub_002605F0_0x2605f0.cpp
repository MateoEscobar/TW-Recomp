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

// Function: sub_002605F0
// Address: 0x2605f0 - 0x260670
void sub_002605F0_0x2605f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002605F0_0x2605f0");
#endif

    switch (ctx->pc) {
        case 0x2605f0u: goto label_2605f0;
        case 0x2605f4u: goto label_2605f4;
        case 0x2605f8u: goto label_2605f8;
        case 0x2605fcu: goto label_2605fc;
        case 0x260600u: goto label_260600;
        case 0x260604u: goto label_260604;
        case 0x260608u: goto label_260608;
        case 0x26060cu: goto label_26060c;
        case 0x260610u: goto label_260610;
        case 0x260614u: goto label_260614;
        case 0x260618u: goto label_260618;
        case 0x26061cu: goto label_26061c;
        case 0x260620u: goto label_260620;
        case 0x260624u: goto label_260624;
        case 0x260628u: goto label_260628;
        case 0x26062cu: goto label_26062c;
        case 0x260630u: goto label_260630;
        case 0x260634u: goto label_260634;
        case 0x260638u: goto label_260638;
        case 0x26063cu: goto label_26063c;
        case 0x260640u: goto label_260640;
        case 0x260644u: goto label_260644;
        case 0x260648u: goto label_260648;
        case 0x26064cu: goto label_26064c;
        case 0x260650u: goto label_260650;
        case 0x260654u: goto label_260654;
        case 0x260658u: goto label_260658;
        case 0x26065cu: goto label_26065c;
        case 0x260660u: goto label_260660;
        case 0x260664u: goto label_260664;
        case 0x260668u: goto label_260668;
        case 0x26066cu: goto label_26066c;
        default: break;
    }

    ctx->pc = 0x2605f0u;

label_2605f0:
    // 0x2605f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2605f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2605f4:
    // 0x2605f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2605f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2605f8:
    // 0x2605f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2605f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2605fc:
    // 0x2605fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2605fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_260600:
    // 0x260600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x260600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_260604:
    // 0x260604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260608:
    // 0x260608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26060c:
    // 0x26060c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_260610:
    // 0x260610: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x260610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_260614:
    // 0x260614: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x260614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_260618:
    // 0x260618: 0x60f809  jalr        $v1
label_26061c:
    if (ctx->pc == 0x26061Cu) {
        ctx->pc = 0x26061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260618u;
        // 0x26061c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260620u;
        goto label_260620;
    }
    ctx->pc = 0x260618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260620u);
        ctx->pc = 0x26061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260618u;
        // 0x26061c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260618u, 0x260620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260620u;
label_260620:
    // 0x260620: 0xc089a5e  jal         func_226978
label_260624:
    if (ctx->pc == 0x260624u) {
        ctx->pc = 0x260624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260620u;
        // 0x260624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260628u;
        goto label_260628;
    }
    ctx->pc = 0x260620u;
    SET_GPR_U32(ctx, 31, 0x260628u);
    ctx->pc = 0x260624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260620u;
    // 0x260624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226978u, 0x260620u, 0x260628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260628u;
label_260628:
    // 0x260628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x260628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26062c:
    // 0x26062c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26062cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_260630:
    // 0x260630: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_260634:
    // 0x260634: 0x40f809  jalr        $v0
label_260638:
    if (ctx->pc == 0x260638u) {
        ctx->pc = 0x260638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260634u;
        // 0x260638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26063Cu;
        goto label_26063c;
    }
    ctx->pc = 0x260634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26063Cu);
        ctx->pc = 0x260638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260634u;
        // 0x260638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260634u, 0x26063Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26063Cu;
label_26063c:
    // 0x26063c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_260640:
    if (ctx->pc == 0x260640u) {
        ctx->pc = 0x260640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26063Cu;
        // 0x260640: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260644u;
        goto label_260644;
    }
    ctx->pc = 0x26063Cu;
    {
        const bool branch_taken_0x26063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26063c) {
            ctx->pc = 0x260640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26063Cu;
            // 0x260640: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260660u;
            goto label_260660;
        }
    }
    ctx->pc = 0x260644u;
label_260644:
    // 0x260644: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x260644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_260648:
    // 0x260648: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x260648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26064c:
    // 0x26064c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_260650:
    // 0x260650: 0x40f809  jalr        $v0
label_260654:
    if (ctx->pc == 0x260654u) {
        ctx->pc = 0x260654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260650u;
        // 0x260654: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260658u;
        goto label_260658;
    }
    ctx->pc = 0x260650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260658u);
        ctx->pc = 0x260654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260650u;
        // 0x260654: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260650u, 0x260658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260658u;
label_260658:
    // 0x260658: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x260658u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_26065c:
    // 0x26065c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26065cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_260660:
    // 0x260660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260664:
    // 0x260664: 0x3e00008  jr          $ra
label_260668:
    if (ctx->pc == 0x260668u) {
        ctx->pc = 0x260668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260664u;
        // 0x260668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26066Cu;
        goto label_26066c;
    }
    ctx->pc = 0x260664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260664u;
        // 0x260668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26066Cu;
label_26066c:
    // 0x26066c: 0x0  nop
    ctx->pc = 0x26066cu;
    // NOP
    ctx->pc = 0x260670u;
}
