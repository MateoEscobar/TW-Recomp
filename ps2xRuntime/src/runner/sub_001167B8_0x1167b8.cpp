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

// Function: sub_001167B8
// Address: 0x1167b8 - 0x116828
void sub_001167B8_0x1167b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001167B8_0x1167b8");
#endif

    switch (ctx->pc) {
        case 0x1167e4u: goto label_1167e4;
        case 0x1167f8u: goto label_1167f8;
        default: break;
    }

    ctx->pc = 0x1167b8u;

    // 0x1167b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1167b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1167bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1167bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1167c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1167c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1167c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1167c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1167c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167cc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1167ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1167d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1167d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1167d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1167d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1167d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1167dc: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1167DCu;
    SET_GPR_U32(ctx, 31, 0x1167E4u);
    ctx->pc = 0x1167E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167DCu;
    // 0x1167e0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1167DCu, 0x1167E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167E4u;
label_1167e4:
    // 0x1167e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1167e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1167e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1167e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167ec: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1167ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1167f0: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x1167F0u;
    SET_GPR_U32(ctx, 31, 0x1167F8u);
    ctx->pc = 0x1167F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167F0u;
    // 0x1167f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x1167F0u, 0x1167F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167F8u;
label_1167f8:
    // 0x1167f8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1167f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1167fc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1167fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x116800: 0x34633cc4  ori         $v1, $v1, 0x3CC4
    ctx->pc = 0x116800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15556);
    // 0x116804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116808: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x116808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11680c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x11680cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x116810: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x116810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x116814: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x116814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116818: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x116818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11681c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11681cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116820: 0x3e00008  jr          $ra
    ctx->pc = 0x116820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116820u;
        // 0x116824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116828u;
}
