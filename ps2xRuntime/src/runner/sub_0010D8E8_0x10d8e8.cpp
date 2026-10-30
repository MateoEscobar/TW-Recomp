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

// Function: sub_0010D8E8
// Address: 0x10d8e8 - 0x10d9a0
void sub_0010D8E8_0x10d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D8E8_0x10d8e8");
#endif

    switch (ctx->pc) {
        case 0x10d928u: goto label_10d928;
        case 0x10d940u: goto label_10d940;
        case 0x10d964u: goto label_10d964;
        default: break;
    }

    ctx->pc = 0x10d8e8u;

    // 0x10d8e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10d8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10d8ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10d8f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10d8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10d8f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10d8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10d8f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10d900: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d904: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10d908: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10d908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d90c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10d910: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10d910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d914: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x10d914u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x10d918: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x10d918u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x10d91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d920: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x10D920u;
    SET_GPR_U32(ctx, 31, 0x10D928u);
    ctx->pc = 0x10D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D920u;
    // 0x10d924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x10D920u, 0x10D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D928u;
label_10d928:
    // 0x10d928: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10d92c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10D92Cu;
    {
        const bool branch_taken_0x10d92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D92Cu;
        // 0x10d930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d92c) {
            ctx->pc = 0x10D97Cu;
            goto label_10d97c;
        }
    }
    ctx->pc = 0x10D934u;
    // 0x10d934: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x10d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10d938: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10D938u;
    SET_GPR_U32(ctx, 31, 0x10D940u);
    ctx->pc = 0x10D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D938u;
    // 0x10d93c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10D938u, 0x10D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D940u;
label_10d940:
    // 0x10d940: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10d940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d948: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10D948u;
    {
        const bool branch_taken_0x10d948 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D948u;
        // 0x10d94c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d948) {
            ctx->pc = 0x10D978u;
            goto label_10d978;
        }
    }
    ctx->pc = 0x10D950u;
    // 0x10d950: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x10d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x10d954: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10d954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d958: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x10d958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d95c: 0xc04680e  jal         func_11A038
    ctx->pc = 0x10D95Cu;
    SET_GPR_U32(ctx, 31, 0x10D964u);
    ctx->pc = 0x10D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D95Cu;
    // 0x10d960: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A038u, 0x10D95Cu, 0x10D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D964u;
label_10d964:
    // 0x10d964: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x10d964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x10d968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10d968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D970u;
    {
        const bool branch_taken_0x10d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D970u;
        // 0x10d974: 0xa0830011  sb          $v1, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d970) {
            ctx->pc = 0x10D97Cu;
            goto label_10d97c;
        }
    }
    ctx->pc = 0x10D978u;
label_10d978:
    // 0x10d978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d97c:
    // 0x10d97c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10d97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d980: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10d980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d984: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10d984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d988: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10d988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d98c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10d98cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d994: 0x3e00008  jr          $ra
    ctx->pc = 0x10D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D994u;
        // 0x10d998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D99Cu;
    // 0x10d99c: 0x0  nop
    ctx->pc = 0x10d99cu;
    // NOP
    ctx->pc = 0x10d9a0u;
}
