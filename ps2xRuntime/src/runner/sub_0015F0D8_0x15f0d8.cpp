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

// Function: sub_0015F0D8
// Address: 0x15f0d8 - 0x15f180
void sub_0015F0D8_0x15f0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F0D8_0x15f0d8");
#endif

    switch (ctx->pc) {
        case 0x15f10cu: goto label_15f10c;
        case 0x15f130u: goto label_15f130;
        default: break;
    }

    ctx->pc = 0x15f0d8u;

    // 0x15f0d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15f0dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15f0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15f0e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15f0e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15f0e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15f0ec: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15F0ECu;
    {
        const bool branch_taken_0x15f0ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0ECu;
        // 0x15f0f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0ec) {
            ctx->pc = 0x15F168u;
            goto label_15f168;
        }
    }
    ctx->pc = 0x15F0F4u;
    // 0x15f0f4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15F0F4u;
    {
        const bool branch_taken_0x15f0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0F4u;
        // 0x15f0f8: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0f4) {
            ctx->pc = 0x15F168u;
            goto label_15f168;
        }
    }
    ctx->pc = 0x15F0FCu;
    // 0x15f0fc: 0x261066d0  addiu       $s0, $s0, 0x66D0
    ctx->pc = 0x15f0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26320));
    // 0x15f100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f104: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15F104u;
    SET_GPR_U32(ctx, 31, 0x15F10Cu);
    ctx->pc = 0x15F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F104u;
    // 0x15f108: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15F104u, 0x15F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F10Cu;
label_15f10c:
    // 0x15f10c: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x15f10cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x15f110: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x15f114: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15f118: 0x24428828  addiu       $v0, $v0, -0x77D8
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936616));
    // 0x15f11c: 0x2463a9c8  addiu       $v1, $v1, -0x5638
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945224));
    // 0x15f120: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x15f120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x15f124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f128: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x15F128u;
    SET_GPR_U32(ctx, 31, 0x15F130u);
    ctx->pc = 0x15F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F128u;
    // 0x15f12c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x15F128u, 0x15F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F130u;
label_15f130:
    // 0x15f130: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15f130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15f134: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x15f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x15f138: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x15f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
    // 0x15f13c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x15f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x15f140: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x15f140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x15f144: 0x2442cfa0  addiu       $v0, $v0, -0x3060
    ctx->pc = 0x15f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954912));
    // 0x15f148: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x15f148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x15f14c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15f14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15f150: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x15f150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x15f154: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x15f158: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x15f158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x15f15c: 0x24a5cef0  addiu       $a1, $a1, -0x3110
    ctx->pc = 0x15f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954736));
    // 0x15f160: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x15f160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x15f164: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x15f164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
label_15f168:
    // 0x15f168: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15f168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f16c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15f16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f170: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15f170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f178: 0x3e00008  jr          $ra
    ctx->pc = 0x15F178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F178u;
        // 0x15f17c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F180u;
}
