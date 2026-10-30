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

// Function: sub_0020D890
// Address: 0x20d890 - 0x20d928
void sub_0020D890_0x20d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D890_0x20d890");
#endif

    switch (ctx->pc) {
        case 0x20d890u: goto label_20d890;
        case 0x20d894u: goto label_20d894;
        case 0x20d898u: goto label_20d898;
        case 0x20d89cu: goto label_20d89c;
        case 0x20d8a0u: goto label_20d8a0;
        case 0x20d8a4u: goto label_20d8a4;
        case 0x20d8a8u: goto label_20d8a8;
        case 0x20d8acu: goto label_20d8ac;
        case 0x20d8b0u: goto label_20d8b0;
        case 0x20d8b4u: goto label_20d8b4;
        case 0x20d8b8u: goto label_20d8b8;
        case 0x20d8bcu: goto label_20d8bc;
        case 0x20d8c0u: goto label_20d8c0;
        case 0x20d8c4u: goto label_20d8c4;
        case 0x20d8c8u: goto label_20d8c8;
        case 0x20d8ccu: goto label_20d8cc;
        case 0x20d8d0u: goto label_20d8d0;
        case 0x20d8d4u: goto label_20d8d4;
        case 0x20d8d8u: goto label_20d8d8;
        case 0x20d8dcu: goto label_20d8dc;
        case 0x20d8e0u: goto label_20d8e0;
        case 0x20d8e4u: goto label_20d8e4;
        case 0x20d8e8u: goto label_20d8e8;
        case 0x20d8ecu: goto label_20d8ec;
        case 0x20d8f0u: goto label_20d8f0;
        case 0x20d8f4u: goto label_20d8f4;
        case 0x20d8f8u: goto label_20d8f8;
        case 0x20d8fcu: goto label_20d8fc;
        case 0x20d900u: goto label_20d900;
        case 0x20d904u: goto label_20d904;
        case 0x20d908u: goto label_20d908;
        case 0x20d90cu: goto label_20d90c;
        case 0x20d910u: goto label_20d910;
        case 0x20d914u: goto label_20d914;
        case 0x20d918u: goto label_20d918;
        case 0x20d91cu: goto label_20d91c;
        case 0x20d920u: goto label_20d920;
        case 0x20d924u: goto label_20d924;
        default: break;
    }

    ctx->pc = 0x20d890u;

label_20d890:
    // 0x20d890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20d894:
    // 0x20d894: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20d898:
    // 0x20d898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20d89c:
    // 0x20d89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d8a0:
    // 0x20d8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d8a4:
    // 0x20d8a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20d8a8:
    // 0x20d8a8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20d8ac:
    if (ctx->pc == 0x20D8ACu) {
        ctx->pc = 0x20D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8A8u;
        // 0x20d8ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D8B0u;
        goto label_20d8b0;
    }
    ctx->pc = 0x20D8A8u;
    {
        const bool branch_taken_0x20d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8A8u;
        // 0x20d8ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8a8) {
            ctx->pc = 0x20D90Cu;
            goto label_20d90c;
        }
    }
    ctx->pc = 0x20D8B0u;
label_20d8b0:
    // 0x20d8b0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20d8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20d8b4:
    // 0x20d8b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d8b8:
    // 0x20d8b8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20d8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20d8bc:
    // 0x20d8bc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20d8c0:
    // 0x20d8c0: 0x40f809  jalr        $v0
label_20d8c4:
    if (ctx->pc == 0x20D8C4u) {
        ctx->pc = 0x20D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C0u;
        // 0x20d8c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D8C8u;
        goto label_20d8c8;
    }
    ctx->pc = 0x20D8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D8C8u);
        ctx->pc = 0x20D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C0u;
        // 0x20d8c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D8C0u, 0x20D8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D8C8u;
label_20d8c8:
    // 0x20d8c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_20d8cc:
    if (ctx->pc == 0x20D8CCu) {
        ctx->pc = 0x20D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C8u;
        // 0x20d8cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D8D0u;
        goto label_20d8d0;
    }
    ctx->pc = 0x20D8C8u;
    {
        const bool branch_taken_0x20d8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C8u;
        // 0x20d8cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8c8) {
            ctx->pc = 0x20D910u;
            goto label_20d910;
        }
    }
    ctx->pc = 0x20D8D0u;
label_20d8d0:
    // 0x20d8d0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20d8d4:
    // 0x20d8d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d8d8:
    // 0x20d8d8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20d8d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20d8dc:
    // 0x20d8dc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20d8e0:
    // 0x20d8e0: 0x40f809  jalr        $v0
label_20d8e4:
    if (ctx->pc == 0x20D8E4u) {
        ctx->pc = 0x20D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E0u;
        // 0x20d8e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D8E8u;
        goto label_20d8e8;
    }
    ctx->pc = 0x20D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D8E8u);
        ctx->pc = 0x20D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E0u;
        // 0x20d8e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D8E0u, 0x20D8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D8E8u;
label_20d8e8:
    // 0x20d8e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20d8ec:
    if (ctx->pc == 0x20D8ECu) {
        ctx->pc = 0x20D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E8u;
        // 0x20d8ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D8F0u;
        goto label_20d8f0;
    }
    ctx->pc = 0x20D8E8u;
    {
        const bool branch_taken_0x20d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E8u;
        // 0x20d8ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8e8) {
            ctx->pc = 0x20D910u;
            goto label_20d910;
        }
    }
    ctx->pc = 0x20D8F0u;
label_20d8f0:
    // 0x20d8f0: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x20d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20d8f4:
    // 0x20d8f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d8f8:
    // 0x20d8f8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20d8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20d8fc:
    // 0x20d8fc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20d900:
    // 0x20d900: 0x40f809  jalr        $v0
label_20d904:
    if (ctx->pc == 0x20D904u) {
        ctx->pc = 0x20D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D900u;
        // 0x20d904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D908u;
        goto label_20d908;
    }
    ctx->pc = 0x20D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D908u);
        ctx->pc = 0x20D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D900u;
        // 0x20d904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D900u, 0x20D908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D908u;
label_20d908:
    // 0x20d908: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x20d908u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20d90c:
    // 0x20d90c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20d90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d910:
    // 0x20d910: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20d910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d914:
    // 0x20d914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d918:
    // 0x20d918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d91c:
    // 0x20d91c: 0x3e00008  jr          $ra
label_20d920:
    if (ctx->pc == 0x20D920u) {
        ctx->pc = 0x20D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D91Cu;
        // 0x20d920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D924u;
        goto label_20d924;
    }
    ctx->pc = 0x20D91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D91Cu;
        // 0x20d920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D924u;
label_20d924:
    // 0x20d924: 0x0  nop
    ctx->pc = 0x20d924u;
    // NOP
    ctx->pc = 0x20d928u;
}
