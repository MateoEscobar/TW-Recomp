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

// Function: sub_003E7060
// Address: 0x3e7060 - 0x3e7100
void sub_003E7060_0x3e7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7060_0x3e7060");
#endif

    switch (ctx->pc) {
        case 0x3e7088u: goto label_3e7088;
        case 0x3e7090u: goto label_3e7090;
        case 0x3e70d8u: goto label_3e70d8;
        case 0x3e70e8u: goto label_3e70e8;
        default: break;
    }

    ctx->pc = 0x3e7060u;

    // 0x3e7060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e7064: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e7064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e7068: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e706c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e706cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7070: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e7070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e7074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e7074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e707c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e707cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7080: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E7080u;
    SET_GPR_U32(ctx, 31, 0x3E7088u);
    ctx->pc = 0x3E7084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7080u;
    // 0x3e7084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E7080u, 0x3E7088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7088u;
label_3e7088:
    // 0x3e7088: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E7088u;
    SET_GPR_U32(ctx, 31, 0x3E7090u);
    ctx->pc = 0x3E708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7088u;
    // 0x3e708c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E7088u, 0x3E7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7090u;
label_3e7090:
    // 0x3e7090: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e7090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7094: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e7094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e7098: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7098u;
    {
        const bool branch_taken_0x3e7098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7098u;
        // 0x3e709c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7098) {
            ctx->pc = 0x3E70ACu;
            goto label_3e70ac;
        }
    }
    ctx->pc = 0x3E70A0u;
    // 0x3e70a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e70a4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3e70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3e70a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e70ac:
    // 0x3e70ac: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E70ACu;
    {
        const bool branch_taken_0x3e70ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E70ACu;
        // 0x3e70b0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e70ac) {
            ctx->pc = 0x3E70CCu;
            goto label_3e70cc;
        }
    }
    ctx->pc = 0x3E70B4u;
    // 0x3e70b4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3e70b8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3e70bc: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3e70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x3e70c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e70c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e70c4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e70c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x3e70c8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3e70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3e70cc:
    // 0x3e70cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e70ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e70d0: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E70D0u;
    SET_GPR_U32(ctx, 31, 0x3E70D8u);
    ctx->pc = 0x3E70D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70D0u;
    // 0x3e70d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E70D0u, 0x3E70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70D8u;
label_3e70d8:
    // 0x3e70d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e70dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e70dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e70e0: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E70E0u;
    SET_GPR_U32(ctx, 31, 0x3E70E8u);
    ctx->pc = 0x3E70E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70E0u;
    // 0x3e70e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E70E0u, 0x3E70E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70E8u;
label_3e70e8:
    // 0x3e70e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e70e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e70ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e70ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e70f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e70f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e70f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e70f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E70F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E70F8u;
        // 0x3e70fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E70F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7100u;
}
