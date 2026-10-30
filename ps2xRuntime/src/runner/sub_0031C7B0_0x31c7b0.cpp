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

// Function: sub_0031C7B0
// Address: 0x31c7b0 - 0x31c818
void sub_0031C7B0_0x31c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C7B0_0x31c7b0");
#endif

    switch (ctx->pc) {
        case 0x31c7c4u: goto label_31c7c4;
        case 0x31c7ccu: goto label_31c7cc;
        case 0x31c7d4u: goto label_31c7d4;
        case 0x31c808u: goto label_31c808;
        default: break;
    }

    ctx->pc = 0x31c7b0u;

    // 0x31c7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31c7b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31c7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31c7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c7bc: 0xc0c71a6  jal         func_31C698
    ctx->pc = 0x31C7BCu;
    SET_GPR_U32(ctx, 31, 0x31C7C4u);
    ctx->pc = 0x31C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7BCu;
    // 0x31c7c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C698u, 0x31C7BCu, 0x31C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7C4u;
label_31c7c4:
    // 0x31c7c4: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x31C7C4u;
    SET_GPR_U32(ctx, 31, 0x31C7CCu);
    ctx->pc = 0x31C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7C4u;
    // 0x31c7c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x31C7C4u, 0x31C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7CCu;
label_31c7cc:
    // 0x31c7cc: 0xc05a55c  jal         func_169570
    ctx->pc = 0x31C7CCu;
    SET_GPR_U32(ctx, 31, 0x31C7D4u);
    ctx->pc = 0x31C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7CCu;
    // 0x31c7d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x31C7CCu, 0x31C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7D4u;
label_31c7d4:
    // 0x31c7d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31c7d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31c7dc: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x31c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x31c7e0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x31c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31c7e4: 0x9207003c  lbu         $a3, 0x3C($s0)
    ctx->pc = 0x31c7e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x31c7e8: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31c7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31c7ec: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x31c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x31c7f0: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x31c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x31c7f4: 0x244300fa  addiu       $v1, $v0, 0xFA
    ctx->pc = 0x31c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
    // 0x31c7f8: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x31c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x31c7fc: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x31c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x31c800: 0xc05905e  jal         func_164178
    ctx->pc = 0x31C800u;
    SET_GPR_U32(ctx, 31, 0x31C808u);
    ctx->pc = 0x31C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C800u;
    // 0x31c804: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x31C800u, 0x31C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C808u;
label_31c808:
    // 0x31c808: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31c808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c810: 0x3e00008  jr          $ra
    ctx->pc = 0x31C810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C810u;
        // 0x31c814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C818u;
}
