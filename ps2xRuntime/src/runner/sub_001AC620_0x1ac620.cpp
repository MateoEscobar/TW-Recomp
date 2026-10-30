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

// Function: sub_001AC620
// Address: 0x1ac620 - 0x1ac6b0
void sub_001AC620_0x1ac620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC620_0x1ac620");
#endif

    switch (ctx->pc) {
        case 0x1ac620u: goto label_1ac620;
        case 0x1ac624u: goto label_1ac624;
        case 0x1ac628u: goto label_1ac628;
        case 0x1ac62cu: goto label_1ac62c;
        case 0x1ac630u: goto label_1ac630;
        case 0x1ac634u: goto label_1ac634;
        case 0x1ac638u: goto label_1ac638;
        case 0x1ac63cu: goto label_1ac63c;
        case 0x1ac640u: goto label_1ac640;
        case 0x1ac644u: goto label_1ac644;
        case 0x1ac648u: goto label_1ac648;
        case 0x1ac64cu: goto label_1ac64c;
        case 0x1ac650u: goto label_1ac650;
        case 0x1ac654u: goto label_1ac654;
        case 0x1ac658u: goto label_1ac658;
        case 0x1ac65cu: goto label_1ac65c;
        case 0x1ac660u: goto label_1ac660;
        case 0x1ac664u: goto label_1ac664;
        case 0x1ac668u: goto label_1ac668;
        case 0x1ac66cu: goto label_1ac66c;
        case 0x1ac670u: goto label_1ac670;
        case 0x1ac674u: goto label_1ac674;
        case 0x1ac678u: goto label_1ac678;
        case 0x1ac67cu: goto label_1ac67c;
        case 0x1ac680u: goto label_1ac680;
        case 0x1ac684u: goto label_1ac684;
        case 0x1ac688u: goto label_1ac688;
        case 0x1ac68cu: goto label_1ac68c;
        case 0x1ac690u: goto label_1ac690;
        case 0x1ac694u: goto label_1ac694;
        case 0x1ac698u: goto label_1ac698;
        case 0x1ac69cu: goto label_1ac69c;
        case 0x1ac6a0u: goto label_1ac6a0;
        case 0x1ac6a4u: goto label_1ac6a4;
        case 0x1ac6a8u: goto label_1ac6a8;
        case 0x1ac6acu: goto label_1ac6ac;
        default: break;
    }

    ctx->pc = 0x1ac620u;

label_1ac620:
    // 0x1ac620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac624:
    // 0x1ac624: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ac624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ac628:
    // 0x1ac628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac62c:
    // 0x1ac62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac630:
    // 0x1ac630: 0xc051800  jal         func_146000
label_1ac634:
    if (ctx->pc == 0x1AC634u) {
        ctx->pc = 0x1AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC630u;
        // 0x1ac634: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC638u;
        goto label_1ac638;
    }
    ctx->pc = 0x1AC630u;
    SET_GPR_U32(ctx, 31, 0x1AC638u);
    ctx->pc = 0x1AC634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC630u;
    // 0x1ac634: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1AC630u, 0x1AC638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC638u;
label_1ac638:
    // 0x1ac638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac63c:
    // 0x1ac63c: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x1ac63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1ac640:
    // 0x1ac640: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1ac640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1ac644:
    // 0x1ac644: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1ac644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1ac648:
    // 0x1ac648: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ac648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ac64c:
    // 0x1ac64c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ac64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ac650:
    // 0x1ac650: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ac654:
    // 0x1ac654: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ac654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1ac658:
    // 0x1ac658: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ac658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ac65c:
    // 0x1ac65c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac660:
    if (ctx->pc == 0x1AC660u) {
        ctx->pc = 0x1AC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC65Cu;
        // 0x1ac660: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC664u;
        goto label_1ac664;
    }
    ctx->pc = 0x1AC65Cu;
    {
        const bool branch_taken_0x1ac65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC65Cu;
        // 0x1ac660: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac65c) {
            ctx->pc = 0x1AC680u;
            goto label_1ac680;
        }
    }
    ctx->pc = 0x1AC664u;
label_1ac664:
    // 0x1ac664: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ac664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ac668:
    // 0x1ac668: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ac668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac66c:
    // 0x1ac66c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac670:
    // 0x1ac670: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ac670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ac674:
    // 0x1ac674: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ac678:
    // 0x1ac678: 0x40f809  jalr        $v0
label_1ac67c:
    if (ctx->pc == 0x1AC67Cu) {
        ctx->pc = 0x1AC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC678u;
        // 0x1ac67c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC680u;
        goto label_1ac680;
    }
    ctx->pc = 0x1AC678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC680u);
        ctx->pc = 0x1AC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC678u;
        // 0x1ac67c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC678u, 0x1AC680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC680u;
label_1ac680:
    // 0x1ac680: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ac680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ac684:
    // 0x1ac684: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ac684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ac688:
    // 0x1ac688: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac68c:
    // 0x1ac68c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ac690:
    // 0x1ac690: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ac690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ac694:
    // 0x1ac694: 0x40f809  jalr        $v0
label_1ac698:
    if (ctx->pc == 0x1AC698u) {
        ctx->pc = 0x1AC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC694u;
        // 0x1ac698: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC69Cu;
        goto label_1ac69c;
    }
    ctx->pc = 0x1AC694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC69Cu);
        ctx->pc = 0x1AC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC694u;
        // 0x1ac698: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC694u, 0x1AC69Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC69Cu;
label_1ac69c:
    // 0x1ac69c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1ac69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1ac6a0:
    // 0x1ac6a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ac6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac6a4:
    // 0x1ac6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac6a8:
    // 0x1ac6a8: 0x3e00008  jr          $ra
label_1ac6ac:
    if (ctx->pc == 0x1AC6ACu) {
        ctx->pc = 0x1AC6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6A8u;
        // 0x1ac6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6B0u;
        goto label_fallthrough_0x1ac6a8;
    }
    ctx->pc = 0x1AC6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6A8u;
        // 0x1ac6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac6a8:
    ctx->pc = 0x1AC6B0u;
}
