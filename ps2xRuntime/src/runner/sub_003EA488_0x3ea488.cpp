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

// Function: sub_003EA488
// Address: 0x3ea488 - 0x3ea530
void sub_003EA488_0x3ea488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA488_0x3ea488");
#endif

    switch (ctx->pc) {
        case 0x3ea488u: goto label_3ea488;
        case 0x3ea48cu: goto label_3ea48c;
        case 0x3ea490u: goto label_3ea490;
        case 0x3ea494u: goto label_3ea494;
        case 0x3ea498u: goto label_3ea498;
        case 0x3ea49cu: goto label_3ea49c;
        case 0x3ea4a0u: goto label_3ea4a0;
        case 0x3ea4a4u: goto label_3ea4a4;
        case 0x3ea4a8u: goto label_3ea4a8;
        case 0x3ea4acu: goto label_3ea4ac;
        case 0x3ea4b0u: goto label_3ea4b0;
        case 0x3ea4b4u: goto label_3ea4b4;
        case 0x3ea4b8u: goto label_3ea4b8;
        case 0x3ea4bcu: goto label_3ea4bc;
        case 0x3ea4c0u: goto label_3ea4c0;
        case 0x3ea4c4u: goto label_3ea4c4;
        case 0x3ea4c8u: goto label_3ea4c8;
        case 0x3ea4ccu: goto label_3ea4cc;
        case 0x3ea4d0u: goto label_3ea4d0;
        case 0x3ea4d4u: goto label_3ea4d4;
        case 0x3ea4d8u: goto label_3ea4d8;
        case 0x3ea4dcu: goto label_3ea4dc;
        case 0x3ea4e0u: goto label_3ea4e0;
        case 0x3ea4e4u: goto label_3ea4e4;
        case 0x3ea4e8u: goto label_3ea4e8;
        case 0x3ea4ecu: goto label_3ea4ec;
        case 0x3ea4f0u: goto label_3ea4f0;
        case 0x3ea4f4u: goto label_3ea4f4;
        case 0x3ea4f8u: goto label_3ea4f8;
        case 0x3ea4fcu: goto label_3ea4fc;
        case 0x3ea500u: goto label_3ea500;
        case 0x3ea504u: goto label_3ea504;
        case 0x3ea508u: goto label_3ea508;
        case 0x3ea50cu: goto label_3ea50c;
        case 0x3ea510u: goto label_3ea510;
        case 0x3ea514u: goto label_3ea514;
        case 0x3ea518u: goto label_3ea518;
        case 0x3ea51cu: goto label_3ea51c;
        case 0x3ea520u: goto label_3ea520;
        case 0x3ea524u: goto label_3ea524;
        case 0x3ea528u: goto label_3ea528;
        case 0x3ea52cu: goto label_3ea52c;
        default: break;
    }

    ctx->pc = 0x3ea488u;

label_3ea488:
    // 0x3ea488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ea488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ea48c:
    // 0x3ea48c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3ea48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3ea490:
    // 0x3ea490: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ea490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ea494:
    // 0x3ea494: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ea494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ea498:
    // 0x3ea498: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3ea498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3ea49c:
    // 0x3ea49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ea49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ea4a0:
    // 0x3ea4a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ea4a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ea4a4:
    // 0x3ea4a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ea4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea4a8:
    // 0x3ea4a8: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3ea4a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea4ac:
    // 0x3ea4ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea4b0:
    // 0x3ea4b0: 0x40f809  jalr        $v0
label_3ea4b4:
    if (ctx->pc == 0x3EA4B4u) {
        ctx->pc = 0x3EA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4B0u;
        // 0x3ea4b4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4B8u;
        goto label_3ea4b8;
    }
    ctx->pc = 0x3EA4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA4B8u);
        ctx->pc = 0x3EA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4B0u;
        // 0x3ea4b4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA4B0u, 0x3EA4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA4B8u;
label_3ea4b8:
    // 0x3ea4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ea4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea4bc:
    // 0x3ea4bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ea4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ea4c0:
    // 0x3ea4c0: 0x56020016  bnel        $s0, $v0, . + 4 + (0x16 << 2)
label_3ea4c4:
    if (ctx->pc == 0x3EA4C4u) {
        ctx->pc = 0x3EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4C0u;
        // 0x3ea4c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4C8u;
        goto label_3ea4c8;
    }
    ctx->pc = 0x3EA4C0u;
    {
        const bool branch_taken_0x3ea4c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea4c0) {
            ctx->pc = 0x3EA4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA4C0u;
            // 0x3ea4c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA51Cu;
            goto label_3ea51c;
        }
    }
    ctx->pc = 0x3EA4C8u;
label_3ea4c8:
    // 0x3ea4c8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3ea4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3ea4cc:
    // 0x3ea4cc: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3ea4d0:
    if (ctx->pc == 0x3EA4D0u) {
        ctx->pc = 0x3EA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4CCu;
        // 0x3ea4d0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4D4u;
        goto label_3ea4d4;
    }
    ctx->pc = 0x3EA4CCu;
    {
        const bool branch_taken_0x3ea4cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4CCu;
        // 0x3ea4d0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4cc) {
            ctx->pc = 0x3EA4ECu;
            goto label_3ea4ec;
        }
    }
    ctx->pc = 0x3EA4D4u;
label_3ea4d4:
    // 0x3ea4d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea4d8:
    // 0x3ea4d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ea4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ea4dc:
    // 0x3ea4dc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea4e0:
    // 0x3ea4e0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea4e4:
    // 0x3ea4e4: 0x60f809  jalr        $v1
label_3ea4e8:
    if (ctx->pc == 0x3EA4E8u) {
        ctx->pc = 0x3EA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4E4u;
        // 0x3ea4e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4ECu;
        goto label_3ea4ec;
    }
    ctx->pc = 0x3EA4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA4ECu);
        ctx->pc = 0x3EA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4E4u;
        // 0x3ea4e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA4E4u, 0x3EA4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA4ECu;
label_3ea4ec:
    // 0x3ea4ec: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x3ea4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ea4f0:
    // 0x3ea4f0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3ea4f4:
    if (ctx->pc == 0x3EA4F4u) {
        ctx->pc = 0x3EA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4F0u;
        // 0x3ea4f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4F8u;
        goto label_3ea4f8;
    }
    ctx->pc = 0x3EA4F0u;
    {
        const bool branch_taken_0x3ea4f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4F0u;
        // 0x3ea4f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4f0) {
            ctx->pc = 0x3EA510u;
            goto label_3ea510;
        }
    }
    ctx->pc = 0x3EA4F8u;
label_3ea4f8:
    // 0x3ea4f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea4fc:
    // 0x3ea4fc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3ea4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ea500:
    // 0x3ea500: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea504:
    // 0x3ea504: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea508:
    // 0x3ea508: 0x60f809  jalr        $v1
label_3ea50c:
    if (ctx->pc == 0x3EA50Cu) {
        ctx->pc = 0x3EA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA508u;
        // 0x3ea50c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA510u;
        goto label_3ea510;
    }
    ctx->pc = 0x3EA508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA510u);
        ctx->pc = 0x3EA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA508u;
        // 0x3ea50c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA508u, 0x3EA510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA510u;
label_3ea510:
    // 0x3ea510: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3ea510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_3ea514:
    // 0x3ea514: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3ea514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_3ea518:
    // 0x3ea518: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ea518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ea51c:
    // 0x3ea51c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ea51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea520:
    // 0x3ea520: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3ea520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea524:
    // 0x3ea524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ea524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea528:
    // 0x3ea528: 0x3e00008  jr          $ra
label_3ea52c:
    if (ctx->pc == 0x3EA52Cu) {
        ctx->pc = 0x3EA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA528u;
        // 0x3ea52c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA530u;
        goto label_fallthrough_0x3ea528;
    }
    ctx->pc = 0x3EA528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA528u;
        // 0x3ea52c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea528:
    ctx->pc = 0x3EA530u;
}
