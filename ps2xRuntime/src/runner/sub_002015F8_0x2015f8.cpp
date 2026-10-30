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

// Function: sub_002015F8
// Address: 0x2015f8 - 0x201650
void sub_002015F8_0x2015f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015F8_0x2015f8");
#endif

    switch (ctx->pc) {
        case 0x2015f8u: goto label_2015f8;
        case 0x2015fcu: goto label_2015fc;
        case 0x201600u: goto label_201600;
        case 0x201604u: goto label_201604;
        case 0x201608u: goto label_201608;
        case 0x20160cu: goto label_20160c;
        case 0x201610u: goto label_201610;
        case 0x201614u: goto label_201614;
        case 0x201618u: goto label_201618;
        case 0x20161cu: goto label_20161c;
        case 0x201620u: goto label_201620;
        case 0x201624u: goto label_201624;
        case 0x201628u: goto label_201628;
        case 0x20162cu: goto label_20162c;
        case 0x201630u: goto label_201630;
        case 0x201634u: goto label_201634;
        case 0x201638u: goto label_201638;
        case 0x20163cu: goto label_20163c;
        case 0x201640u: goto label_201640;
        case 0x201644u: goto label_201644;
        case 0x201648u: goto label_201648;
        case 0x20164cu: goto label_20164c;
        default: break;
    }

    ctx->pc = 0x2015f8u;

label_2015f8:
    // 0x2015f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2015f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2015fc:
    // 0x2015fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2015fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_201600:
    // 0x201600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_201604:
    // 0x201604: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x201604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_201608:
    // 0x201608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20160c:
    // 0x20160c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20160cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201610:
    // 0x201610: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x201610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_201614:
    // 0x201614: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x201614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_201618:
    // 0x201618: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x201618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20161c:
    // 0x20161c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20161cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_201620:
    // 0x201620: 0xa0f809  jalr        $a1
label_201624:
    if (ctx->pc == 0x201624u) {
        ctx->pc = 0x201624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201620u;
        // 0x201624: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201628u;
        goto label_201628;
    }
    ctx->pc = 0x201620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x201628u);
        ctx->pc = 0x201624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201620u;
        // 0x201624: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201620u, 0x201628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201628u;
label_201628:
    // 0x201628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x201628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20162c:
    // 0x20162c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20162cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201630:
    // 0x201630: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201634:
    // 0x201634: 0x60f809  jalr        $v1
label_201638:
    if (ctx->pc == 0x201638u) {
        ctx->pc = 0x201638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201634u;
        // 0x201638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20163Cu;
        goto label_20163c;
    }
    ctx->pc = 0x201634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20163Cu);
        ctx->pc = 0x201638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201634u;
        // 0x201638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201634u, 0x20163Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20163Cu;
label_20163c:
    // 0x20163c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x20163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_201640:
    // 0x201640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201644:
    // 0x201644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201648:
    // 0x201648: 0x3e00008  jr          $ra
label_20164c:
    if (ctx->pc == 0x20164Cu) {
        ctx->pc = 0x20164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201648u;
        // 0x20164c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201650u;
        goto label_fallthrough_0x201648;
    }
    ctx->pc = 0x201648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201648u;
        // 0x20164c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x201648:
    ctx->pc = 0x201650u;
}
