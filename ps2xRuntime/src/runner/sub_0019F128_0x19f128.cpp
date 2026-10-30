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

// Function: sub_0019F128
// Address: 0x19f128 - 0x19f1b0
void sub_0019F128_0x19f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F128_0x19f128");
#endif

    switch (ctx->pc) {
        case 0x19f128u: goto label_19f128;
        case 0x19f12cu: goto label_19f12c;
        case 0x19f130u: goto label_19f130;
        case 0x19f134u: goto label_19f134;
        case 0x19f138u: goto label_19f138;
        case 0x19f13cu: goto label_19f13c;
        case 0x19f140u: goto label_19f140;
        case 0x19f144u: goto label_19f144;
        case 0x19f148u: goto label_19f148;
        case 0x19f14cu: goto label_19f14c;
        case 0x19f150u: goto label_19f150;
        case 0x19f154u: goto label_19f154;
        case 0x19f158u: goto label_19f158;
        case 0x19f15cu: goto label_19f15c;
        case 0x19f160u: goto label_19f160;
        case 0x19f164u: goto label_19f164;
        case 0x19f168u: goto label_19f168;
        case 0x19f16cu: goto label_19f16c;
        case 0x19f170u: goto label_19f170;
        case 0x19f174u: goto label_19f174;
        case 0x19f178u: goto label_19f178;
        case 0x19f17cu: goto label_19f17c;
        case 0x19f180u: goto label_19f180;
        case 0x19f184u: goto label_19f184;
        case 0x19f188u: goto label_19f188;
        case 0x19f18cu: goto label_19f18c;
        case 0x19f190u: goto label_19f190;
        case 0x19f194u: goto label_19f194;
        case 0x19f198u: goto label_19f198;
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1a0u: goto label_19f1a0;
        case 0x19f1a4u: goto label_19f1a4;
        case 0x19f1a8u: goto label_19f1a8;
        case 0x19f1acu: goto label_19f1ac;
        default: break;
    }

    ctx->pc = 0x19f128u;

label_19f128:
    // 0x19f128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19f12c:
    // 0x19f12c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19f130:
    // 0x19f130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19f134:
    // 0x19f134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f138:
    // 0x19f138: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_19f13c:
    // 0x19f13c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f140:
    // 0x19f140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19f144:
    // 0x19f144: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19f144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f148:
    // 0x19f148: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f14c:
    // 0x19f14c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x19f14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_19f150:
    // 0x19f150: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x19f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_19f154:
    // 0x19f154: 0x40f809  jalr        $v0
label_19f158:
    if (ctx->pc == 0x19F158u) {
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F15Cu;
        goto label_19f15c;
    }
    ctx->pc = 0x19F154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F15Cu);
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F154u, 0x19F15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F15Cu;
label_19f15c:
    // 0x19f15c: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_19f160:
    if (ctx->pc == 0x19F160u) {
        ctx->pc = 0x19F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F15Cu;
        // 0x19f160: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F164u;
        goto label_19f164;
    }
    ctx->pc = 0x19F15Cu;
    {
        const bool branch_taken_0x19f15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x19f15c) {
            ctx->pc = 0x19F160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F15Cu;
            // 0x19f160: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F178u;
            goto label_19f178;
        }
    }
    ctx->pc = 0x19F164u;
label_19f164:
    // 0x19f164: 0xc06e4e8  jal         func_1B93A0
label_19f168:
    if (ctx->pc == 0x19F168u) {
        ctx->pc = 0x19F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F164u;
        // 0x19f168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F16Cu;
        goto label_19f16c;
    }
    ctx->pc = 0x19F164u;
    SET_GPR_U32(ctx, 31, 0x19F16Cu);
    ctx->pc = 0x19F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F164u;
    // 0x19f168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A0u, 0x19F164u, 0x19F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F16Cu;
label_19f16c:
    // 0x19f16c: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
label_19f170:
    if (ctx->pc == 0x19F170u) {
        ctx->pc = 0x19F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F16Cu;
        // 0x19f170: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F174u;
        goto label_19f174;
    }
    ctx->pc = 0x19F16Cu;
    {
        const bool branch_taken_0x19f16c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f16c) {
            ctx->pc = 0x19F170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F16Cu;
            // 0x19f170: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F198u;
            goto label_19f198;
        }
    }
    ctx->pc = 0x19F174u;
label_19f174:
    // 0x19f174: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f178:
    // 0x19f178: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19f178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f17c:
    // 0x19f17c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x19f17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_19f180:
    // 0x19f180: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x19f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_19f184:
    // 0x19f184: 0x60f809  jalr        $v1
label_19f188:
    if (ctx->pc == 0x19F188u) {
        ctx->pc = 0x19F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F184u;
        // 0x19f188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F18Cu;
        goto label_19f18c;
    }
    ctx->pc = 0x19F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19F18Cu);
        ctx->pc = 0x19F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F184u;
        // 0x19f188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F184u, 0x19F18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F18Cu;
label_19f18c:
    // 0x19f18c: 0xae110460  sw          $s1, 0x460($s0)
    ctx->pc = 0x19f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 17));
label_19f190:
    // 0x19f190: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x19f190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_19f194:
    // 0x19f194: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19f194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19f198:
    // 0x19f198: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19f198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19f19c:
    // 0x19f19c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19f19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f1a0:
    // 0x19f1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f1a4:
    // 0x19f1a4: 0x3e00008  jr          $ra
label_19f1a8:
    if (ctx->pc == 0x19F1A8u) {
        ctx->pc = 0x19F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A4u;
        // 0x19f1a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1ACu;
        goto label_19f1ac;
    }
    ctx->pc = 0x19F1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A4u;
        // 0x19f1a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F1ACu;
label_19f1ac:
    // 0x19f1ac: 0x0  nop
    ctx->pc = 0x19f1acu;
    // NOP
    ctx->pc = 0x19f1b0u;
}
