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

// Function: sub_001964C0
// Address: 0x1964c0 - 0x196548
void sub_001964C0_0x1964c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001964C0_0x1964c0");
#endif

    switch (ctx->pc) {
        case 0x1964c0u: goto label_1964c0;
        case 0x1964c4u: goto label_1964c4;
        case 0x1964c8u: goto label_1964c8;
        case 0x1964ccu: goto label_1964cc;
        case 0x1964d0u: goto label_1964d0;
        case 0x1964d4u: goto label_1964d4;
        case 0x1964d8u: goto label_1964d8;
        case 0x1964dcu: goto label_1964dc;
        case 0x1964e0u: goto label_1964e0;
        case 0x1964e4u: goto label_1964e4;
        case 0x1964e8u: goto label_1964e8;
        case 0x1964ecu: goto label_1964ec;
        case 0x1964f0u: goto label_1964f0;
        case 0x1964f4u: goto label_1964f4;
        case 0x1964f8u: goto label_1964f8;
        case 0x1964fcu: goto label_1964fc;
        case 0x196500u: goto label_196500;
        case 0x196504u: goto label_196504;
        case 0x196508u: goto label_196508;
        case 0x19650cu: goto label_19650c;
        case 0x196510u: goto label_196510;
        case 0x196514u: goto label_196514;
        case 0x196518u: goto label_196518;
        case 0x19651cu: goto label_19651c;
        case 0x196520u: goto label_196520;
        case 0x196524u: goto label_196524;
        case 0x196528u: goto label_196528;
        case 0x19652cu: goto label_19652c;
        case 0x196530u: goto label_196530;
        case 0x196534u: goto label_196534;
        case 0x196538u: goto label_196538;
        case 0x19653cu: goto label_19653c;
        case 0x196540u: goto label_196540;
        case 0x196544u: goto label_196544;
        default: break;
    }

    ctx->pc = 0x1964c0u;

label_1964c0:
    // 0x1964c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1964c4:
    // 0x1964c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1964c8:
    // 0x1964c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1964c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1964cc:
    // 0x1964cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1964ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1964d0:
    // 0x1964d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1964d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1964d4:
    // 0x1964d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1964d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1964d8:
    // 0x1964d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1964d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1964dc:
    // 0x1964dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1964dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1964e0:
    // 0x1964e0: 0xac45ce8c  sw          $a1, -0x3174($v0)
    ctx->pc = 0x1964e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954636), GPR_U32(ctx, 5));
label_1964e4:
    // 0x1964e4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1964e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1964e8:
    // 0x1964e8: 0xc047e6c  jal         func_11F9B0
label_1964ec:
    if (ctx->pc == 0x1964ECu) {
        ctx->pc = 0x1964ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964E8u;
        // 0x1964ec: 0xac60ce88  sw          $zero, -0x3178($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964F0u;
        goto label_1964f0;
    }
    ctx->pc = 0x1964E8u;
    SET_GPR_U32(ctx, 31, 0x1964F0u);
    ctx->pc = 0x1964ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964E8u;
    // 0x1964ec: 0xac60ce88  sw          $zero, -0x3178($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954632), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1964E8u, 0x1964F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964F0u;
label_1964f0:
    // 0x1964f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1964f4:
    // 0x1964f4: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1964f8:
    // 0x1964f8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1964f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1964fc:
    // 0x1964fc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_196500:
    // 0x196500: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x196500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_196504:
    // 0x196504: 0x40f809  jalr        $v0
label_196508:
    if (ctx->pc == 0x196508u) {
        ctx->pc = 0x196508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196504u;
        // 0x196508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19650Cu;
        goto label_19650c;
    }
    ctx->pc = 0x196504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19650Cu);
        ctx->pc = 0x196508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196504u;
        // 0x196508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196504u, 0x19650Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19650Cu;
label_19650c:
    // 0x19650c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196510:
    // 0x196510: 0xae02ce90  sw          $v0, -0x3170($s0)
    ctx->pc = 0x196510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954640), GPR_U32(ctx, 2));
label_196514:
    // 0x196514: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_196518:
    // 0x196518: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x196518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_19651c:
    // 0x19651c: 0xa0f809  jalr        $a1
label_196520:
    if (ctx->pc == 0x196520u) {
        ctx->pc = 0x196520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19651Cu;
        // 0x196520: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196524u;
        goto label_196524;
    }
    ctx->pc = 0x19651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x196524u);
        ctx->pc = 0x196520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19651Cu;
        // 0x196520: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19651Cu, 0x196524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196524u;
label_196524:
    // 0x196524: 0x8e05ce90  lw          $a1, -0x3170($s0)
    ctx->pc = 0x196524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954640)));
label_196528:
    // 0x196528: 0xc066118  jal         func_198460
label_19652c:
    if (ctx->pc == 0x19652Cu) {
        ctx->pc = 0x19652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196528u;
        // 0x19652c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196530u;
        goto label_196530;
    }
    ctx->pc = 0x196528u;
    SET_GPR_U32(ctx, 31, 0x196530u);
    ctx->pc = 0x19652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196528u;
    // 0x19652c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198460u, 0x196528u, 0x196530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196530u;
label_196530:
    // 0x196530: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x196530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196534:
    // 0x196534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196538:
    // 0x196538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19653c:
    // 0x19653c: 0x3e00008  jr          $ra
label_196540:
    if (ctx->pc == 0x196540u) {
        ctx->pc = 0x196540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19653Cu;
        // 0x196540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196544u;
        goto label_196544;
    }
    ctx->pc = 0x19653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19653Cu;
        // 0x196540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196544u;
label_196544:
    // 0x196544: 0x0  nop
    ctx->pc = 0x196544u;
    // NOP
    ctx->pc = 0x196548u;
}
