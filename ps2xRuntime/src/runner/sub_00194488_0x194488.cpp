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

// Function: sub_00194488
// Address: 0x194488 - 0x194550
void sub_00194488_0x194488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194488_0x194488");
#endif

    switch (ctx->pc) {
        case 0x194488u: goto label_194488;
        case 0x19448cu: goto label_19448c;
        case 0x194490u: goto label_194490;
        case 0x194494u: goto label_194494;
        case 0x194498u: goto label_194498;
        case 0x19449cu: goto label_19449c;
        case 0x1944a0u: goto label_1944a0;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944a8u: goto label_1944a8;
        case 0x1944acu: goto label_1944ac;
        case 0x1944b0u: goto label_1944b0;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944b8u: goto label_1944b8;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944c0u: goto label_1944c0;
        case 0x1944c4u: goto label_1944c4;
        case 0x1944c8u: goto label_1944c8;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944d0u: goto label_1944d0;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944d8u: goto label_1944d8;
        case 0x1944dcu: goto label_1944dc;
        case 0x1944e0u: goto label_1944e0;
        case 0x1944e4u: goto label_1944e4;
        case 0x1944e8u: goto label_1944e8;
        case 0x1944ecu: goto label_1944ec;
        case 0x1944f0u: goto label_1944f0;
        case 0x1944f4u: goto label_1944f4;
        case 0x1944f8u: goto label_1944f8;
        case 0x1944fcu: goto label_1944fc;
        case 0x194500u: goto label_194500;
        case 0x194504u: goto label_194504;
        case 0x194508u: goto label_194508;
        case 0x19450cu: goto label_19450c;
        case 0x194510u: goto label_194510;
        case 0x194514u: goto label_194514;
        case 0x194518u: goto label_194518;
        case 0x19451cu: goto label_19451c;
        case 0x194520u: goto label_194520;
        case 0x194524u: goto label_194524;
        case 0x194528u: goto label_194528;
        case 0x19452cu: goto label_19452c;
        case 0x194530u: goto label_194530;
        case 0x194534u: goto label_194534;
        case 0x194538u: goto label_194538;
        case 0x19453cu: goto label_19453c;
        case 0x194540u: goto label_194540;
        case 0x194544u: goto label_194544;
        case 0x194548u: goto label_194548;
        case 0x19454cu: goto label_19454c;
        default: break;
    }

    ctx->pc = 0x194488u;

label_194488:
    // 0x194488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19448c:
    // 0x19448c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19448cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_194490:
    // 0x194490: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x194490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_194494:
    // 0x194494: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x194494u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_194498:
    // 0x194498: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x194498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_19449c:
    // 0x19449c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19449cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1944a0:
    // 0x1944a0: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x1944a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1944a4:
    // 0x1944a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1944a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1944a8:
    // 0x1944a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1944a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1944ac:
    // 0x1944ac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1944acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1944b0:
    // 0x1944b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1944b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1944b4:
    // 0x1944b4: 0x24060460  addiu       $a2, $zero, 0x460
    ctx->pc = 0x1944b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_1944b8:
    // 0x1944b8: 0x24a53538  addiu       $a1, $a1, 0x3538
    ctx->pc = 0x1944b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13624));
label_1944bc:
    // 0x1944bc: 0x250834d0  addiu       $t0, $t0, 0x34D0
    ctx->pc = 0x1944bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13520));
label_1944c0:
    // 0x1944c0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1944c4:
    // 0x1944c4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1944c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1944c8:
    // 0x1944c8: 0x240904a9  addiu       $t1, $zero, 0x4A9
    ctx->pc = 0x1944c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1193));
label_1944cc:
    // 0x1944cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1944ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1944d0:
    // 0x1944d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1944d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1944d4:
    // 0x1944d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1944d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1944d8:
    // 0x1944d8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1944d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1944dc:
    // 0x1944dc: 0x40f809  jalr        $v0
label_1944e0:
    if (ctx->pc == 0x1944E0u) {
        ctx->pc = 0x1944E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944DCu;
        // 0x1944e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944E4u;
        goto label_1944e4;
    }
    ctx->pc = 0x1944DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1944E4u);
        ctx->pc = 0x1944E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944DCu;
        // 0x1944e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1944DCu, 0x1944E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1944E4u;
label_1944e4:
    // 0x1944e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1944e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1944e8:
    // 0x1944e8: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_1944ec:
    if (ctx->pc == 0x1944ECu) {
        ctx->pc = 0x1944ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944E8u;
        // 0x1944ec: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944F0u;
        goto label_1944f0;
    }
    ctx->pc = 0x1944E8u;
    {
        const bool branch_taken_0x1944e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1944e8) {
            ctx->pc = 0x1944ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1944E8u;
            // 0x1944ec: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194500u;
            goto label_194500;
        }
    }
    ctx->pc = 0x1944F0u;
label_1944f0:
    // 0x1944f0: 0xc065356  jal         func_194D58
label_1944f4:
    if (ctx->pc == 0x1944F4u) {
        ctx->pc = 0x1944F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944F0u;
        // 0x1944f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944F8u;
        goto label_1944f8;
    }
    ctx->pc = 0x1944F0u;
    SET_GPR_U32(ctx, 31, 0x1944F8u);
    ctx->pc = 0x1944F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1944F0u;
    // 0x1944f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194D58u, 0x1944F0u, 0x1944F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944F8u;
label_1944f8:
    // 0x1944f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1944f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1944fc:
    // 0x1944fc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1944fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_194500:
    // 0x194500: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_194504:
    // 0x194504: 0xac46cdb8  sw          $a2, -0x3248($v0)
    ctx->pc = 0x194504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954424), GPR_U32(ctx, 6));
label_194508:
    // 0x194508: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19450c:
    // 0x19450c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x19450cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_194510:
    // 0x194510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x194510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194514:
    // 0x194514: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x194514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_194518:
    // 0x194518: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x194518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_19451c:
    // 0x19451c: 0x40f809  jalr        $v0
label_194520:
    if (ctx->pc == 0x194520u) {
        ctx->pc = 0x194520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19451Cu;
        // 0x194520: 0xae06cdb4  sw          $a2, -0x324C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294954420), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194524u;
        goto label_194524;
    }
    ctx->pc = 0x19451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194524u);
        ctx->pc = 0x194520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19451Cu;
        // 0x194520: 0xae06cdb4  sw          $a2, -0x324C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294954420), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19451Cu, 0x194524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194524u;
label_194524:
    // 0x194524: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
label_194528:
    if (ctx->pc == 0x194528u) {
        ctx->pc = 0x194528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194524u;
        // 0x194528: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19452Cu;
        goto label_19452c;
    }
    ctx->pc = 0x194524u;
    {
        const bool branch_taken_0x194524 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x194524) {
            ctx->pc = 0x194528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194524u;
            // 0x194528: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19453Cu;
            goto label_19453c;
        }
    }
    ctx->pc = 0x19452Cu;
label_19452c:
    // 0x19452c: 0x8e04cdb4  lw          $a0, -0x324C($s0)
    ctx->pc = 0x19452cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_194530:
    // 0x194530: 0xc06538a  jal         func_194E28
label_194534:
    if (ctx->pc == 0x194534u) {
        ctx->pc = 0x194534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194530u;
        // 0x194534: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194538u;
        goto label_194538;
    }
    ctx->pc = 0x194530u;
    SET_GPR_U32(ctx, 31, 0x194538u);
    ctx->pc = 0x194534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194530u;
    // 0x194534: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E28u, 0x194530u, 0x194538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194538u;
label_194538:
    // 0x194538: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x194538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19453c:
    // 0x19453c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19453cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_194540:
    // 0x194540: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x194540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194544:
    // 0x194544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194548:
    // 0x194548: 0x3e00008  jr          $ra
label_19454c:
    if (ctx->pc == 0x19454Cu) {
        ctx->pc = 0x19454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194548u;
        // 0x19454c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194550u;
        goto label_fallthrough_0x194548;
    }
    ctx->pc = 0x194548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194548u;
        // 0x19454c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x194548:
    ctx->pc = 0x194550u;
}
