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

// Function: sub_003158B0
// Address: 0x3158b0 - 0x315928
void sub_003158B0_0x3158b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003158B0_0x3158b0");
#endif

    switch (ctx->pc) {
        case 0x3158b0u: goto label_3158b0;
        case 0x3158b4u: goto label_3158b4;
        case 0x3158b8u: goto label_3158b8;
        case 0x3158bcu: goto label_3158bc;
        case 0x3158c0u: goto label_3158c0;
        case 0x3158c4u: goto label_3158c4;
        case 0x3158c8u: goto label_3158c8;
        case 0x3158ccu: goto label_3158cc;
        case 0x3158d0u: goto label_3158d0;
        case 0x3158d4u: goto label_3158d4;
        case 0x3158d8u: goto label_3158d8;
        case 0x3158dcu: goto label_3158dc;
        case 0x3158e0u: goto label_3158e0;
        case 0x3158e4u: goto label_3158e4;
        case 0x3158e8u: goto label_3158e8;
        case 0x3158ecu: goto label_3158ec;
        case 0x3158f0u: goto label_3158f0;
        case 0x3158f4u: goto label_3158f4;
        case 0x3158f8u: goto label_3158f8;
        case 0x3158fcu: goto label_3158fc;
        case 0x315900u: goto label_315900;
        case 0x315904u: goto label_315904;
        case 0x315908u: goto label_315908;
        case 0x31590cu: goto label_31590c;
        case 0x315910u: goto label_315910;
        case 0x315914u: goto label_315914;
        case 0x315918u: goto label_315918;
        case 0x31591cu: goto label_31591c;
        case 0x315920u: goto label_315920;
        case 0x315924u: goto label_315924;
        default: break;
    }

    ctx->pc = 0x3158b0u;

label_3158b0:
    // 0x3158b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3158b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3158b4:
    // 0x3158b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3158b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3158b8:
    // 0x3158b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3158b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3158bc:
    // 0x3158bc: 0xc05959e  jal         func_165678
label_3158c0:
    if (ctx->pc == 0x3158C0u) {
        ctx->pc = 0x3158C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158BCu;
        // 0x3158c0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158C4u;
        goto label_3158c4;
    }
    ctx->pc = 0x3158BCu;
    SET_GPR_U32(ctx, 31, 0x3158C4u);
    ctx->pc = 0x3158C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158BCu;
    // 0x3158c0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3158BCu, 0x3158C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158C4u;
label_3158c4:
    // 0x3158c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3158c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3158c8:
    // 0x3158c8: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_3158cc:
    if (ctx->pc == 0x3158CCu) {
        ctx->pc = 0x3158CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158C8u;
        // 0x3158cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158D0u;
        goto label_3158d0;
    }
    ctx->pc = 0x3158C8u;
    {
        const bool branch_taken_0x3158c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3158c8) {
            ctx->pc = 0x3158CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3158C8u;
            // 0x3158cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31591Cu;
            goto label_31591c;
        }
    }
    ctx->pc = 0x3158D0u;
label_3158d0:
    // 0x3158d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3158d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3158d4:
    // 0x3158d4: 0xa20001b2  sb          $zero, 0x1B2($s0)
    ctx->pc = 0x3158d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
label_3158d8:
    // 0x3158d8: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x3158d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_3158dc:
    // 0x3158dc: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x3158dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3158e0:
    // 0x3158e0: 0x60f809  jalr        $v1
label_3158e4:
    if (ctx->pc == 0x3158E4u) {
        ctx->pc = 0x3158E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158E0u;
        // 0x3158e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158E8u;
        goto label_3158e8;
    }
    ctx->pc = 0x3158E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3158E8u);
        ctx->pc = 0x3158E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158E0u;
        // 0x3158e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3158E0u, 0x3158E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3158E8u;
label_3158e8:
    // 0x3158e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3158e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3158ec:
    // 0x3158ec: 0xc087b0e  jal         func_21EC38
label_3158f0:
    if (ctx->pc == 0x3158F0u) {
        ctx->pc = 0x3158F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158ECu;
        // 0x3158f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158F4u;
        goto label_3158f4;
    }
    ctx->pc = 0x3158ECu;
    SET_GPR_U32(ctx, 31, 0x3158F4u);
    ctx->pc = 0x3158F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158ECu;
    // 0x3158f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x3158ECu, 0x3158F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158F4u;
label_3158f4:
    // 0x3158f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3158f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3158f8:
    // 0x3158f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3158f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3158fc:
    // 0x3158fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3158fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_315900:
    // 0x315900: 0x40f809  jalr        $v0
label_315904:
    if (ctx->pc == 0x315904u) {
        ctx->pc = 0x315904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315900u;
        // 0x315904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315908u;
        goto label_315908;
    }
    ctx->pc = 0x315900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315908u);
        ctx->pc = 0x315904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315900u;
        // 0x315904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315900u, 0x315908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315908u;
label_315908:
    // 0x315908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x315908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31590c:
    // 0x31590c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315910:
    // 0x315910: 0xc08e1a4  jal         func_238690
label_315914:
    if (ctx->pc == 0x315914u) {
        ctx->pc = 0x315914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315910u;
        // 0x315914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315918u;
        goto label_315918;
    }
    ctx->pc = 0x315910u;
    SET_GPR_U32(ctx, 31, 0x315918u);
    ctx->pc = 0x315914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315910u;
    // 0x315914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x315910u, 0x315918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315918u;
label_315918:
    // 0x315918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31591c:
    // 0x31591c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31591cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_315920:
    // 0x315920: 0x3e00008  jr          $ra
label_315924:
    if (ctx->pc == 0x315924u) {
        ctx->pc = 0x315924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315920u;
        // 0x315924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315928u;
        goto label_fallthrough_0x315920;
    }
    ctx->pc = 0x315920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315920u;
        // 0x315924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315920:
    ctx->pc = 0x315928u;
}
