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

// Function: sub_003F5870
// Address: 0x3f5870 - 0x3f58f8
void sub_003F5870_0x3f5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5870_0x3f5870");
#endif

    switch (ctx->pc) {
        case 0x3f58a0u: goto label_3f58a0;
        case 0x3f58acu: goto label_3f58ac;
        case 0x3f58c4u: goto label_3f58c4;
        case 0x3f58dcu: goto label_3f58dc;
        default: break;
    }

    ctx->pc = 0x3f5870u;

    // 0x3f5870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f5874: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f5874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f5878: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3f587c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f587cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5880: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f5880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3f5884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f5888: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3f5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3f588c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F588Cu;
    {
        const bool branch_taken_0x3f588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F588Cu;
        // 0x3f5890: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f588c) {
            ctx->pc = 0x3F58E0u;
            goto label_3f58e0;
        }
    }
    ctx->pc = 0x3F5894u;
    // 0x3f5894: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3f5894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3f5898: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F5898u;
    SET_GPR_U32(ctx, 31, 0x3F58A0u);
    ctx->pc = 0x3F589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5898u;
    // 0x3f589c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F5898u, 0x3F58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58A0u;
label_3f58a0:
    // 0x3f58a0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3f58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3f58a4: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F58A4u;
    SET_GPR_U32(ctx, 31, 0x3F58ACu);
    ctx->pc = 0x3F58A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F58A4u;
    // 0x3f58a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F58A4u, 0x3F58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58ACu;
label_3f58ac:
    // 0x3f58ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f58acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f58b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58b4: 0x8e422c7c  lw          $v0, 0x2C7C($s2)
    ctx->pc = 0x3f58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3f58b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f58b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58bc: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F58BCu;
    SET_GPR_U32(ctx, 31, 0x3F58C4u);
    ctx->pc = 0x3F58C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F58BCu;
    // 0x3f58c0: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F58BCu, 0x3F58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58C4u;
label_3f58c4:
    // 0x3f58c4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F58C4u;
    {
        const bool branch_taken_0x3f58c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F58C4u;
        // 0x3f58c8: 0x8e422c7c  lw          $v0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f58c4) {
            ctx->pc = 0x3F58DCu;
            goto label_3f58dc;
        }
    }
    ctx->pc = 0x3F58CCu;
    // 0x3f58cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f58ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f58d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58d4: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F58D4u;
    SET_GPR_U32(ctx, 31, 0x3F58DCu);
    ctx->pc = 0x3F58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F58D4u;
    // 0x3f58d8: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F58D4u, 0x3F58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58DCu;
label_3f58dc:
    // 0x3f58dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f58dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f58e0:
    // 0x3f58e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f58e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f58e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f58e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f58e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f58e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f58ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3F58ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F58ECu;
        // 0x3f58f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F58ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F58F4u;
    // 0x3f58f4: 0x0  nop
    ctx->pc = 0x3f58f4u;
    // NOP
    ctx->pc = 0x3f58f8u;
}
