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

// Function: sub_0032F0D8
// Address: 0x32f0d8 - 0x32f150
void sub_0032F0D8_0x32f0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F0D8_0x32f0d8");
#endif

    switch (ctx->pc) {
        case 0x32f0f4u: goto label_32f0f4;
        case 0x32f0fcu: goto label_32f0fc;
        case 0x32f11cu: goto label_32f11c;
        case 0x32f130u: goto label_32f130;
        default: break;
    }

    ctx->pc = 0x32f0d8u;

    // 0x32f0d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f0dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32f0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32f0ec: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32F0ECu;
    SET_GPR_U32(ctx, 31, 0x32F0F4u);
    ctx->pc = 0x32F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F0ECu;
    // 0x32f0f0: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32F0ECu, 0x32F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0F4u;
label_32f0f4:
    // 0x32f0f4: 0xc0cb988  jal         func_32E620
    ctx->pc = 0x32F0F4u;
    SET_GPR_U32(ctx, 31, 0x32F0FCu);
    ctx->pc = 0x32F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F0F4u;
    // 0x32f0f8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E620u, 0x32F0F4u, 0x32F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0FCu;
label_32f0fc:
    // 0x32f0fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x32F0FCu;
    {
        const bool branch_taken_0x32f0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f0fc) {
            ctx->pc = 0x32F100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F0FCu;
            // 0x32f100: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F120u;
            goto label_32f120;
        }
    }
    ctx->pc = 0x32F104u;
    // 0x32f104: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32f108: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x32f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x32f10c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F10Cu;
    {
        const bool branch_taken_0x32f10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f10c) {
            ctx->pc = 0x32F110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F10Cu;
            // 0x32f110: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F120u;
            goto label_32f120;
        }
    }
    ctx->pc = 0x32F114u;
    // 0x32f114: 0xc0cb62e  jal         func_32D8B8
    ctx->pc = 0x32F114u;
    SET_GPR_U32(ctx, 31, 0x32F11Cu);
    ctx->pc = 0x32F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F114u;
    // 0x32f118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8B8u, 0x32F114u, 0x32F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F11Cu;
label_32f11c:
    // 0x32f11c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x32f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_32f120:
    // 0x32f120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32f124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f128: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32F128u;
    SET_GPR_U32(ctx, 31, 0x32F130u);
    ctx->pc = 0x32F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F128u;
    // 0x32f12c: 0x8446001e  lh          $a2, 0x1E($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32F128u, 0x32F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F130u;
label_32f130:
    // 0x32f130: 0x9623001e  lhu         $v1, 0x1E($s1)
    ctx->pc = 0x32f130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x32f134: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32f134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f138: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x32f138u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x32f13c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32f13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f144: 0x3e00008  jr          $ra
    ctx->pc = 0x32F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F144u;
        // 0x32f148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F14Cu;
    // 0x32f14c: 0x0  nop
    ctx->pc = 0x32f14cu;
    // NOP
    ctx->pc = 0x32f150u;
}
