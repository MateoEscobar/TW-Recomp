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

// Function: sub_003569D8
// Address: 0x3569d8 - 0x356a78
void sub_003569D8_0x3569d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003569D8_0x3569d8");
#endif

    switch (ctx->pc) {
        case 0x3569fcu: goto label_3569fc;
        case 0x356a10u: goto label_356a10;
        case 0x356a28u: goto label_356a28;
        case 0x356a3cu: goto label_356a3c;
        case 0x356a58u: goto label_356a58;
        case 0x356a64u: goto label_356a64;
        default: break;
    }

    ctx->pc = 0x3569d8u;

    // 0x3569d8: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x3569d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x3569dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3569dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3569e0: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x3569e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
    // 0x3569e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3569e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569e8: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x3569e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
    // 0x3569ec: 0x8c44b788  lw          $a0, -0x4878($v0)
    ctx->pc = 0x3569ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B788u));
    // 0x3569f0: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x3569f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x3569f4: 0xc051630  jal         func_1458C0
    ctx->pc = 0x3569F4u;
    SET_GPR_U32(ctx, 31, 0x3569FCu);
    ctx->pc = 0x3569F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3569F4u;
    // 0x3569f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C0u, 0x3569F4u, 0x3569FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569FCu;
label_3569fc:
    // 0x3569fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3569FCu;
    {
        const bool branch_taken_0x3569fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569FCu;
        // 0x356a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3569fc) {
            ctx->pc = 0x356A30u;
            goto label_356a30;
        }
    }
    ctx->pc = 0x356A04u;
    // 0x356a04: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x356a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x356a08: 0xc0d5abe  jal         func_356AF8
    ctx->pc = 0x356A08u;
    SET_GPR_U32(ctx, 31, 0x356A10u);
    ctx->pc = 0x356A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A08u;
    // 0x356a0c: 0x24a59048  addiu       $a1, $a1, -0x6FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356AF8u, 0x356A08u, 0x356A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A10u;
label_356a10:
    // 0x356a10: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x356a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x356a14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x356a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a18: 0x24c69058  addiu       $a2, $a2, -0x6FA8
    ctx->pc = 0x356a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938712));
    // 0x356a1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x356a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a20: 0xc10ca04  jal         func_432810
    ctx->pc = 0x356A20u;
    SET_GPR_U32(ctx, 31, 0x356A28u);
    ctx->pc = 0x356A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A20u;
    // 0x356a24: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x356A20u, 0x356A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A28u;
label_356a28:
    // 0x356a28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x356A28u;
    {
        const bool branch_taken_0x356a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A28u;
        // 0x356a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a28) {
            ctx->pc = 0x356A5Cu;
            goto label_356a5c;
        }
    }
    ctx->pc = 0x356A30u;
label_356a30:
    // 0x356a30: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x356a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x356a34: 0xc0d5abe  jal         func_356AF8
    ctx->pc = 0x356A34u;
    SET_GPR_U32(ctx, 31, 0x356A3Cu);
    ctx->pc = 0x356A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A34u;
    // 0x356a38: 0x24a59060  addiu       $a1, $a1, -0x6FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356AF8u, 0x356A34u, 0x356A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A3Cu;
label_356a3c:
    // 0x356a3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x356a3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a40: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x356a40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x356a44: 0x24c69078  addiu       $a2, $a2, -0x6F88
    ctx->pc = 0x356a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938744));
    // 0x356a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x356a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a4c: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x356a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x356a50: 0xc10ca04  jal         func_432810
    ctx->pc = 0x356A50u;
    SET_GPR_U32(ctx, 31, 0x356A58u);
    ctx->pc = 0x356A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A50u;
    // 0x356a54: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x356A50u, 0x356A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A58u;
label_356a58:
    // 0x356a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356a5c:
    // 0x356a5c: 0xc0d5abe  jal         func_356AF8
    ctx->pc = 0x356A5Cu;
    SET_GPR_U32(ctx, 31, 0x356A64u);
    ctx->pc = 0x356A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A5Cu;
    // 0x356a60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356AF8u, 0x356A5Cu, 0x356A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A64u;
label_356a64:
    // 0x356a64: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x356a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x356a68: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x356a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x356a6c: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x356a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x356a70: 0x3e00008  jr          $ra
    ctx->pc = 0x356A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A70u;
        // 0x356a74: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356A78u;
}
