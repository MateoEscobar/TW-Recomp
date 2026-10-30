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

// Function: sub_003996A0
// Address: 0x3996a0 - 0x399718
void sub_003996A0_0x3996a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003996A0_0x3996a0");
#endif

    switch (ctx->pc) {
        case 0x3996a0u: goto label_3996a0;
        case 0x3996a4u: goto label_3996a4;
        case 0x3996a8u: goto label_3996a8;
        case 0x3996acu: goto label_3996ac;
        case 0x3996b0u: goto label_3996b0;
        case 0x3996b4u: goto label_3996b4;
        case 0x3996b8u: goto label_3996b8;
        case 0x3996bcu: goto label_3996bc;
        case 0x3996c0u: goto label_3996c0;
        case 0x3996c4u: goto label_3996c4;
        case 0x3996c8u: goto label_3996c8;
        case 0x3996ccu: goto label_3996cc;
        case 0x3996d0u: goto label_3996d0;
        case 0x3996d4u: goto label_3996d4;
        case 0x3996d8u: goto label_3996d8;
        case 0x3996dcu: goto label_3996dc;
        case 0x3996e0u: goto label_3996e0;
        case 0x3996e4u: goto label_3996e4;
        case 0x3996e8u: goto label_3996e8;
        case 0x3996ecu: goto label_3996ec;
        case 0x3996f0u: goto label_3996f0;
        case 0x3996f4u: goto label_3996f4;
        case 0x3996f8u: goto label_3996f8;
        case 0x3996fcu: goto label_3996fc;
        case 0x399700u: goto label_399700;
        case 0x399704u: goto label_399704;
        case 0x399708u: goto label_399708;
        case 0x39970cu: goto label_39970c;
        case 0x399710u: goto label_399710;
        case 0x399714u: goto label_399714;
        default: break;
    }

    ctx->pc = 0x3996a0u;

label_3996a0:
    // 0x3996a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3996a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3996a4:
    // 0x3996a4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3996a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3996a8:
    // 0x3996a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3996a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3996ac:
    // 0x3996ac: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3996acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3996b0:
    // 0x3996b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3996b4:
    // 0x3996b4: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x3996b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3996b8:
    // 0x3996b8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x3996b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3996bc:
    // 0x3996bc: 0xc0e404c  jal         func_390130
label_3996c0:
    if (ctx->pc == 0x3996C0u) {
        ctx->pc = 0x3996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996BCu;
        // 0x3996c0: 0x86040024  lh          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996C4u;
        goto label_3996c4;
    }
    ctx->pc = 0x3996BCu;
    SET_GPR_U32(ctx, 31, 0x3996C4u);
    ctx->pc = 0x3996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996BCu;
    // 0x3996c0: 0x86040024  lh          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x3996BCu, 0x3996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996C4u;
label_3996c4:
    // 0x3996c4: 0xc0e57ce  jal         func_395F38
label_3996c8:
    if (ctx->pc == 0x3996C8u) {
        ctx->pc = 0x3996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996C4u;
        // 0x3996c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996CCu;
        goto label_3996cc;
    }
    ctx->pc = 0x3996C4u;
    SET_GPR_U32(ctx, 31, 0x3996CCu);
    ctx->pc = 0x3996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996C4u;
    // 0x3996c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3996C4u, 0x3996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996CCu;
label_3996cc:
    // 0x3996cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3996ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3996d0:
    // 0x3996d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3996d4:
    // 0x3996d4: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x3996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_3996d8:
    // 0x3996d8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x3996d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_3996dc:
    // 0x3996dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3996dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3996e0:
    // 0x3996e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3996e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3996e4:
    // 0x3996e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3996e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3996e8:
    // 0x3996e8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_3996ec:
    if (ctx->pc == 0x3996ECu) {
        ctx->pc = 0x3996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996E8u;
        // 0x3996ec: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996F0u;
        goto label_3996f0;
    }
    ctx->pc = 0x3996E8u;
    {
        const bool branch_taken_0x3996e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996E8u;
        // 0x3996ec: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996e8) {
            ctx->pc = 0x399704u;
            goto label_399704;
        }
    }
    ctx->pc = 0x3996F0u;
label_3996f0:
    // 0x3996f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3996f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3996f4:
    // 0x3996f4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3996f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3996f8:
    // 0x3996f8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3996f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3996fc:
    // 0x3996fc: 0x60f809  jalr        $v1
label_399700:
    if (ctx->pc == 0x399700u) {
        ctx->pc = 0x399700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996FCu;
        // 0x399700: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399704u;
        goto label_399704;
    }
    ctx->pc = 0x3996FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x399704u);
        ctx->pc = 0x399700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996FCu;
        // 0x399700: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3996FCu, 0x399704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399704u;
label_399704:
    // 0x399704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x399704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399708:
    // 0x399708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39970c:
    // 0x39970c: 0x3e00008  jr          $ra
label_399710:
    if (ctx->pc == 0x399710u) {
        ctx->pc = 0x399710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39970Cu;
        // 0x399710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399714u;
        goto label_399714;
    }
    ctx->pc = 0x39970Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39970Cu;
        // 0x399710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39970Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399714u;
label_399714:
    // 0x399714: 0x0  nop
    ctx->pc = 0x399714u;
    // NOP
    ctx->pc = 0x399718u;
}
