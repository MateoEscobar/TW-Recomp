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

// Function: sub_0015E048
// Address: 0x15e048 - 0x15e0f8
void sub_0015E048_0x15e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E048_0x15e048");
#endif

    switch (ctx->pc) {
        case 0x15e074u: goto label_15e074;
        case 0x15e084u: goto label_15e084;
        case 0x15e090u: goto label_15e090;
        case 0x15e0a4u: goto label_15e0a4;
        case 0x15e0b8u: goto label_15e0b8;
        case 0x15e0ccu: goto label_15e0cc;
        case 0x15e0dcu: goto label_15e0dc;
        default: break;
    }

    ctx->pc = 0x15e048u;

    // 0x15e048: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15e04c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15e050: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15e050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15e054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e05c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15e060: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15e064: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15e064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15e068: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e06c: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15E06Cu;
    SET_GPR_U32(ctx, 31, 0x15E074u);
    ctx->pc = 0x15E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E06Cu;
    // 0x15e070: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15E06Cu, 0x15E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E074u;
label_15e074:
    // 0x15e074: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15e078: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x15e07c: 0xc0579e4  jal         func_15E790
    ctx->pc = 0x15E07Cu;
    SET_GPR_U32(ctx, 31, 0x15E084u);
    ctx->pc = 0x15E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E07Cu;
    // 0x15e080: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x15E07Cu, 0x15E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E084u;
label_15e084:
    // 0x15e084: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x15e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x15e088: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x15E088u;
    SET_GPR_U32(ctx, 31, 0x15E090u);
    ctx->pc = 0x15E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E088u;
    // 0x15e08c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x15E088u, 0x15E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E090u;
label_15e090:
    // 0x15e090: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x15e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    // 0x15e094: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15e094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e098: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x15e098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x15e09c: 0xc04456a  jal         func_1115A8
    ctx->pc = 0x15E09Cu;
    SET_GPR_U32(ctx, 31, 0x15E0A4u);
    ctx->pc = 0x15E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E09Cu;
    // 0x15e0a0: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x15E09Cu, 0x15E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0A4u;
label_15e0a4:
    // 0x15e0a4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15e0a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0ac: 0x2451f928  addiu       $s1, $v0, -0x6D8
    ctx->pc = 0x15e0acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965544));
    // 0x15e0b0: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x15E0B0u;
    SET_GPR_U32(ctx, 31, 0x15E0B8u);
    ctx->pc = 0x15E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E0B0u;
    // 0x15e0b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x15E0B0u, 0x15E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0B8u;
label_15e0b8:
    // 0x15e0b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E0B8u;
    {
        const bool branch_taken_0x15e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0B8u;
        // 0x15e0bc: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0b8) {
            ctx->pc = 0x15E0CCu;
            goto label_15e0cc;
        }
    }
    ctx->pc = 0x15E0C0u;
    // 0x15e0c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0c4: 0xc043e94  jal         func_10FA50
    ctx->pc = 0x15E0C4u;
    SET_GPR_U32(ctx, 31, 0x15E0CCu);
    ctx->pc = 0x15E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E0C4u;
    // 0x15e0c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15E0C4u, 0x15E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0CCu;
label_15e0cc:
    // 0x15e0cc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15e0d0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x15e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x15e0d4: 0xc08129e  jal         func_204A78
    ctx->pc = 0x15E0D4u;
    SET_GPR_U32(ctx, 31, 0x15E0DCu);
    ctx->pc = 0x15E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E0D4u;
    // 0x15e0d8: 0x8c456690  lw          $a1, 0x6690($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204A78u, 0x15E0D4u, 0x15E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0DCu;
label_15e0dc:
    // 0x15e0dc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15e0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e0e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15e0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e0e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15e0e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e0e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15E0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0ECu;
        // 0x15e0f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E0F4u;
    // 0x15e0f4: 0x0  nop
    ctx->pc = 0x15e0f4u;
    // NOP
    ctx->pc = 0x15e0f8u;
}
