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

// Function: sub_0011B888
// Address: 0x11b888 - 0x11b920
void sub_0011B888_0x11b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B888_0x11b888");
#endif

    switch (ctx->pc) {
        case 0x11b888u: goto label_11b888;
        case 0x11b88cu: goto label_11b88c;
        case 0x11b890u: goto label_11b890;
        case 0x11b894u: goto label_11b894;
        case 0x11b898u: goto label_11b898;
        case 0x11b89cu: goto label_11b89c;
        case 0x11b8a0u: goto label_11b8a0;
        case 0x11b8a4u: goto label_11b8a4;
        case 0x11b8a8u: goto label_11b8a8;
        case 0x11b8acu: goto label_11b8ac;
        case 0x11b8b0u: goto label_11b8b0;
        case 0x11b8b4u: goto label_11b8b4;
        case 0x11b8b8u: goto label_11b8b8;
        case 0x11b8bcu: goto label_11b8bc;
        case 0x11b8c0u: goto label_11b8c0;
        case 0x11b8c4u: goto label_11b8c4;
        case 0x11b8c8u: goto label_11b8c8;
        case 0x11b8ccu: goto label_11b8cc;
        case 0x11b8d0u: goto label_11b8d0;
        case 0x11b8d4u: goto label_11b8d4;
        case 0x11b8d8u: goto label_11b8d8;
        case 0x11b8dcu: goto label_11b8dc;
        case 0x11b8e0u: goto label_11b8e0;
        case 0x11b8e4u: goto label_11b8e4;
        case 0x11b8e8u: goto label_11b8e8;
        case 0x11b8ecu: goto label_11b8ec;
        case 0x11b8f0u: goto label_11b8f0;
        case 0x11b8f4u: goto label_11b8f4;
        case 0x11b8f8u: goto label_11b8f8;
        case 0x11b8fcu: goto label_11b8fc;
        case 0x11b900u: goto label_11b900;
        case 0x11b904u: goto label_11b904;
        case 0x11b908u: goto label_11b908;
        case 0x11b90cu: goto label_11b90c;
        case 0x11b910u: goto label_11b910;
        case 0x11b914u: goto label_11b914;
        case 0x11b918u: goto label_11b918;
        case 0x11b91cu: goto label_11b91c;
        default: break;
    }

    ctx->pc = 0x11b888u;

label_11b888:
    // 0x11b888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11b88c:
    // 0x11b88c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_11b890:
    // 0x11b890: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_11b894:
    // 0x11b894: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_11b898:
    // 0x11b898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11b89c:
    // 0x11b89c: 0xc0e4060  jal         func_390180
label_11b8a0:
    if (ctx->pc == 0x11B8A0u) {
        ctx->pc = 0x11B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B89Cu;
        // 0x11b8a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8A4u;
        goto label_11b8a4;
    }
    ctx->pc = 0x11B89Cu;
    SET_GPR_U32(ctx, 31, 0x11B8A4u);
    ctx->pc = 0x11B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B89Cu;
    // 0x11b8a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11B89Cu, 0x11B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8A4u;
label_11b8a4:
    // 0x11b8a4: 0xc047a5e  jal         func_11E978
label_11b8a8:
    if (ctx->pc == 0x11B8A8u) {
        ctx->pc = 0x11B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8A4u;
        // 0x11b8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8ACu;
        goto label_11b8ac;
    }
    ctx->pc = 0x11B8A4u;
    SET_GPR_U32(ctx, 31, 0x11B8ACu);
    ctx->pc = 0x11B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8A4u;
    // 0x11b8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11B8A4u, 0x11B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8ACu;
label_11b8ac:
    // 0x11b8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b8b0:
    // 0x11b8b0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_11b8b4:
    if (ctx->pc == 0x11B8B4u) {
        ctx->pc = 0x11B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8B0u;
        // 0x11b8b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8B8u;
        goto label_11b8b8;
    }
    ctx->pc = 0x11B8B0u;
    {
        const bool branch_taken_0x11b8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8B0u;
        // 0x11b8b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8b0) {
            ctx->pc = 0x11B908u;
            goto label_11b908;
        }
    }
    ctx->pc = 0x11B8B8u;
label_11b8b8:
    // 0x11b8b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11b8bc:
    // 0x11b8bc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11b8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11b8c0:
    // 0x11b8c0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11b8c4:
    // 0x11b8c4: 0x40f809  jalr        $v0
label_11b8c8:
    if (ctx->pc == 0x11B8C8u) {
        ctx->pc = 0x11B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C4u;
        // 0x11b8c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8CCu;
        goto label_11b8cc;
    }
    ctx->pc = 0x11B8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B8CCu);
        ctx->pc = 0x11B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C4u;
        // 0x11b8c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B8C4u, 0x11B8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B8CCu;
label_11b8cc:
    // 0x11b8cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11b8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11b8d0:
    // 0x11b8d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_11b8d4:
    if (ctx->pc == 0x11B8D4u) {
        ctx->pc = 0x11B8D8u;
        goto label_11b8d8;
    }
    ctx->pc = 0x11B8D0u;
    {
        const bool branch_taken_0x11b8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b8d0) {
            ctx->pc = 0x11B8F4u;
            goto label_11b8f4;
        }
    }
    ctx->pc = 0x11B8D8u;
label_11b8d8:
    // 0x11b8d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11b8dc:
    // 0x11b8dc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11b8e0:
    // 0x11b8e0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11b8e4:
    // 0x11b8e4: 0x40f809  jalr        $v0
label_11b8e8:
    if (ctx->pc == 0x11B8E8u) {
        ctx->pc = 0x11B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E4u;
        // 0x11b8e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8ECu;
        goto label_11b8ec;
    }
    ctx->pc = 0x11B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B8ECu);
        ctx->pc = 0x11B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E4u;
        // 0x11b8e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B8E4u, 0x11B8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B8ECu;
label_11b8ec:
    // 0x11b8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b8f0:
    // 0x11b8f0: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x11b8f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_11b8f4:
    // 0x11b8f4: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
label_11b8f8:
    if (ctx->pc == 0x11B8F8u) {
        ctx->pc = 0x11B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F4u;
        // 0x11b8f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8FCu;
        goto label_11b8fc;
    }
    ctx->pc = 0x11B8F4u;
    {
        const bool branch_taken_0x11b8f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b8f4) {
            ctx->pc = 0x11B8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B8F4u;
            // 0x11b8f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B90Cu;
            goto label_11b90c;
        }
    }
    ctx->pc = 0x11B8FCu;
label_11b8fc:
    // 0x11b8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b900:
    // 0x11b900: 0xc047910  jal         func_11E440
label_11b904:
    if (ctx->pc == 0x11B904u) {
        ctx->pc = 0x11B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B900u;
        // 0x11b904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B908u;
        goto label_11b908;
    }
    ctx->pc = 0x11B900u;
    SET_GPR_U32(ctx, 31, 0x11B908u);
    ctx->pc = 0x11B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B900u;
    // 0x11b904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x11B900u, 0x11B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B908u;
label_11b908:
    // 0x11b908: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11b908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b90c:
    // 0x11b90c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11b90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11b910:
    // 0x11b910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b914:
    // 0x11b914: 0x3e00008  jr          $ra
label_11b918:
    if (ctx->pc == 0x11B918u) {
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B914u;
        // 0x11b918: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B91Cu;
        goto label_11b91c;
    }
    ctx->pc = 0x11B914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B914u;
        // 0x11b918: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B91Cu;
label_11b91c:
    // 0x11b91c: 0x0  nop
    ctx->pc = 0x11b91cu;
    // NOP
    ctx->pc = 0x11b920u;
}
