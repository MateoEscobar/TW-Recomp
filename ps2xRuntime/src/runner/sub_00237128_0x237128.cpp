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

// Function: sub_00237128
// Address: 0x237128 - 0x2371d8
void sub_00237128_0x237128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237128_0x237128");
#endif

    switch (ctx->pc) {
        case 0x237148u: goto label_237148;
        case 0x237150u: goto label_237150;
        case 0x23716cu: goto label_23716c;
        case 0x237198u: goto label_237198;
        case 0x2371c0u: goto label_2371c0;
        default: break;
    }

    ctx->pc = 0x237128u;

    // 0x237128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23712c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x237130: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237134: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237138: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x237138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23713c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23713cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237140: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237140u;
    SET_GPR_U32(ctx, 31, 0x237148u);
    ctx->pc = 0x237144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237140u;
    // 0x237144: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237140u, 0x237148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237148u;
label_237148:
    // 0x237148: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237148u;
    SET_GPR_U32(ctx, 31, 0x237150u);
    ctx->pc = 0x23714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237148u;
    // 0x23714c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237148u, 0x237150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237150u;
label_237150:
    // 0x237150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237154: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x237154u;
    {
        const bool branch_taken_0x237154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x237154) {
            ctx->pc = 0x237158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237154u;
            // 0x237158: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2371C4u;
            goto label_2371c4;
        }
    }
    ctx->pc = 0x23715Cu;
    // 0x23715c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23715Cu;
    {
        const bool branch_taken_0x23715c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23715c) {
            ctx->pc = 0x237160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23715Cu;
            // 0x237160: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237180u;
            goto label_237180;
        }
    }
    ctx->pc = 0x237164u;
    // 0x237164: 0xc08db4a  jal         func_236D28
    ctx->pc = 0x237164u;
    SET_GPR_U32(ctx, 31, 0x23716Cu);
    ctx->pc = 0x237168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237164u;
    // 0x237168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D28u, 0x237164u, 0x23716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23716Cu;
label_23716c:
    // 0x23716c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x23716cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x237170: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x237170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x237174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x237174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x237178: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x237178u;
    {
        const bool branch_taken_0x237178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237178u;
        // 0x23717c: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237178) {
            ctx->pc = 0x2371C0u;
            goto label_2371c0;
        }
    }
    ctx->pc = 0x237180u;
label_237180:
    // 0x237180: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x237180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x237184: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x237184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x237188: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x237188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23718c: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x23718cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x237190: 0xc0e409a  jal         func_390268
    ctx->pc = 0x237190u;
    SET_GPR_U32(ctx, 31, 0x237198u);
    ctx->pc = 0x237194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237190u;
    // 0x237194: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x237190u, 0x237198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237198u;
label_237198:
    // 0x237198: 0xdc4300e0  ld          $v1, 0xE0($v0)
    ctx->pc = 0x237198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x23719c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x23719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2371a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2371a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2371a4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2371a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2371a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2371a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2371ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2371acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2371b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2371B0u;
    {
        const bool branch_taken_0x2371b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371B0u;
        // 0x2371b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371b0) {
            ctx->pc = 0x2371C0u;
            goto label_2371c0;
        }
    }
    ctx->pc = 0x2371B8u;
    // 0x2371b8: 0xc08dbee  jal         func_236FB8
    ctx->pc = 0x2371B8u;
    SET_GPR_U32(ctx, 31, 0x2371C0u);
    ctx->pc = 0x2371BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371B8u;
    // 0x2371bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x2371B8u, 0x2371C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371C0u;
label_2371c0:
    // 0x2371c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2371c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2371c4:
    // 0x2371c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2371c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2371c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2371c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2371cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2371CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371CCu;
        // 0x2371d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2371CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2371D4u;
    // 0x2371d4: 0x0  nop
    ctx->pc = 0x2371d4u;
    // NOP
    ctx->pc = 0x2371d8u;
}
