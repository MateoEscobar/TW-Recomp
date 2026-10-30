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

// Function: sub_003388C0
// Address: 0x3388c0 - 0x338948
void sub_003388C0_0x3388c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003388C0_0x3388c0");
#endif

    switch (ctx->pc) {
        case 0x3388c0u: goto label_3388c0;
        case 0x3388c4u: goto label_3388c4;
        case 0x3388c8u: goto label_3388c8;
        case 0x3388ccu: goto label_3388cc;
        case 0x3388d0u: goto label_3388d0;
        case 0x3388d4u: goto label_3388d4;
        case 0x3388d8u: goto label_3388d8;
        case 0x3388dcu: goto label_3388dc;
        case 0x3388e0u: goto label_3388e0;
        case 0x3388e4u: goto label_3388e4;
        case 0x3388e8u: goto label_3388e8;
        case 0x3388ecu: goto label_3388ec;
        case 0x3388f0u: goto label_3388f0;
        case 0x3388f4u: goto label_3388f4;
        case 0x3388f8u: goto label_3388f8;
        case 0x3388fcu: goto label_3388fc;
        case 0x338900u: goto label_338900;
        case 0x338904u: goto label_338904;
        case 0x338908u: goto label_338908;
        case 0x33890cu: goto label_33890c;
        case 0x338910u: goto label_338910;
        case 0x338914u: goto label_338914;
        case 0x338918u: goto label_338918;
        case 0x33891cu: goto label_33891c;
        case 0x338920u: goto label_338920;
        case 0x338924u: goto label_338924;
        case 0x338928u: goto label_338928;
        case 0x33892cu: goto label_33892c;
        case 0x338930u: goto label_338930;
        case 0x338934u: goto label_338934;
        case 0x338938u: goto label_338938;
        case 0x33893cu: goto label_33893c;
        case 0x338940u: goto label_338940;
        case 0x338944u: goto label_338944;
        default: break;
    }

    ctx->pc = 0x3388c0u;

label_3388c0:
    // 0x3388c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3388c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3388c4:
    // 0x3388c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3388c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3388c8:
    // 0x3388c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3388c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3388cc:
    // 0x3388cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3388ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3388d0:
    // 0x3388d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3388d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3388d4:
    // 0x3388d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3388d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3388d8:
    // 0x3388d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3388d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3388dc:
    // 0x3388dc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3388dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3388e0:
    // 0x3388e0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3388e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3388e4:
    // 0x3388e4: 0x40f809  jalr        $v0
label_3388e8:
    if (ctx->pc == 0x3388E8u) {
        ctx->pc = 0x3388E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388E4u;
        // 0x3388e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3388ECu;
        goto label_3388ec;
    }
    ctx->pc = 0x3388E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3388ECu);
        ctx->pc = 0x3388E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388E4u;
        // 0x3388e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388E4u, 0x3388ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3388ECu;
label_3388ec:
    // 0x3388ec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3388ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3388f0:
    // 0x3388f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3388f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3388f4:
    // 0x3388f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3388f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3388f8:
    // 0x3388f8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x3388f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_3388fc:
    // 0x3388fc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x3388fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_338900:
    // 0x338900: 0x60f809  jalr        $v1
label_338904:
    if (ctx->pc == 0x338904u) {
        ctx->pc = 0x338904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338900u;
        // 0x338904: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338908u;
        goto label_338908;
    }
    ctx->pc = 0x338900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338908u);
        ctx->pc = 0x338904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338900u;
        // 0x338904: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338900u, 0x338908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338908u;
label_338908:
    // 0x338908: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x338908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33890c:
    // 0x33890c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33890cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_338910:
    // 0x338910: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x338910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_338914:
    // 0x338914: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x338914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
label_338918:
    // 0x338918: 0x24c66bf0  addiu       $a2, $a2, 0x6BF0
    ctx->pc = 0x338918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27632));
label_33891c:
    // 0x33891c: 0x24070051  addiu       $a3, $zero, 0x51
    ctx->pc = 0x33891cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_338920:
    // 0x338920: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x338920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_338924:
    // 0x338924: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x338924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_338928:
    // 0x338928: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x338928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_33892c:
    // 0x33892c: 0x60f809  jalr        $v1
label_338930:
    if (ctx->pc == 0x338930u) {
        ctx->pc = 0x338930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33892Cu;
        // 0x338930: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338934u;
        goto label_338934;
    }
    ctx->pc = 0x33892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338934u);
        ctx->pc = 0x338930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33892Cu;
        // 0x338930: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33892Cu, 0x338934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338934u;
label_338934:
    // 0x338934: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x338934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_338938:
    // 0x338938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33893c:
    // 0x33893c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33893cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338940:
    // 0x338940: 0x3e00008  jr          $ra
label_338944:
    if (ctx->pc == 0x338944u) {
        ctx->pc = 0x338944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338940u;
        // 0x338944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338948u;
        goto label_fallthrough_0x338940;
    }
    ctx->pc = 0x338940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338940u;
        // 0x338944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338940:
    ctx->pc = 0x338948u;
}
