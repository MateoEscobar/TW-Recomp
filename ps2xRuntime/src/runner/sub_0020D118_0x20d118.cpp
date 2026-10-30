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

// Function: sub_0020D118
// Address: 0x20d118 - 0x20d1b8
void sub_0020D118_0x20d118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D118_0x20d118");
#endif

    switch (ctx->pc) {
        case 0x20d118u: goto label_20d118;
        case 0x20d11cu: goto label_20d11c;
        case 0x20d120u: goto label_20d120;
        case 0x20d124u: goto label_20d124;
        case 0x20d128u: goto label_20d128;
        case 0x20d12cu: goto label_20d12c;
        case 0x20d130u: goto label_20d130;
        case 0x20d134u: goto label_20d134;
        case 0x20d138u: goto label_20d138;
        case 0x20d13cu: goto label_20d13c;
        case 0x20d140u: goto label_20d140;
        case 0x20d144u: goto label_20d144;
        case 0x20d148u: goto label_20d148;
        case 0x20d14cu: goto label_20d14c;
        case 0x20d150u: goto label_20d150;
        case 0x20d154u: goto label_20d154;
        case 0x20d158u: goto label_20d158;
        case 0x20d15cu: goto label_20d15c;
        case 0x20d160u: goto label_20d160;
        case 0x20d164u: goto label_20d164;
        case 0x20d168u: goto label_20d168;
        case 0x20d16cu: goto label_20d16c;
        case 0x20d170u: goto label_20d170;
        case 0x20d174u: goto label_20d174;
        case 0x20d178u: goto label_20d178;
        case 0x20d17cu: goto label_20d17c;
        case 0x20d180u: goto label_20d180;
        case 0x20d184u: goto label_20d184;
        case 0x20d188u: goto label_20d188;
        case 0x20d18cu: goto label_20d18c;
        case 0x20d190u: goto label_20d190;
        case 0x20d194u: goto label_20d194;
        case 0x20d198u: goto label_20d198;
        case 0x20d19cu: goto label_20d19c;
        case 0x20d1a0u: goto label_20d1a0;
        case 0x20d1a4u: goto label_20d1a4;
        case 0x20d1a8u: goto label_20d1a8;
        case 0x20d1acu: goto label_20d1ac;
        case 0x20d1b0u: goto label_20d1b0;
        case 0x20d1b4u: goto label_20d1b4;
        default: break;
    }

    ctx->pc = 0x20d118u;

label_20d118:
    // 0x20d118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d11c:
    // 0x20d11c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20d120:
    // 0x20d120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d124:
    // 0x20d124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d128:
    // 0x20d128: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d12c:
    // 0x20d12c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20d12cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20d130:
    // 0x20d130: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20d134:
    // 0x20d134: 0x40f809  jalr        $v0
label_20d138:
    if (ctx->pc == 0x20D138u) {
        ctx->pc = 0x20D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D134u;
        // 0x20d138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D13Cu;
        goto label_20d13c;
    }
    ctx->pc = 0x20D134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D13Cu);
        ctx->pc = 0x20D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D134u;
        // 0x20d138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D134u, 0x20D13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D13Cu;
label_20d13c:
    // 0x20d13c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_20d140:
    if (ctx->pc == 0x20D140u) {
        ctx->pc = 0x20D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D13Cu;
        // 0x20d140: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D144u;
        goto label_20d144;
    }
    ctx->pc = 0x20D13Cu;
    {
        const bool branch_taken_0x20d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d13c) {
            ctx->pc = 0x20D140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D13Cu;
            // 0x20d140: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D1ACu;
            goto label_20d1ac;
        }
    }
    ctx->pc = 0x20D144u;
label_20d144:
    // 0x20d144: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20d144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d148:
    // 0x20d148: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20d148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20d14c:
    // 0x20d14c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20d150:
    // 0x20d150: 0x40f809  jalr        $v0
label_20d154:
    if (ctx->pc == 0x20D154u) {
        ctx->pc = 0x20D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D150u;
        // 0x20d154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D158u;
        goto label_20d158;
    }
    ctx->pc = 0x20D150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D158u);
        ctx->pc = 0x20D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D150u;
        // 0x20d154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D150u, 0x20D158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D158u;
label_20d158:
    // 0x20d158: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_20d15c:
    if (ctx->pc == 0x20D15Cu) {
        ctx->pc = 0x20D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D158u;
        // 0x20d15c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D160u;
        goto label_20d160;
    }
    ctx->pc = 0x20D158u;
    {
        const bool branch_taken_0x20d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d158) {
            ctx->pc = 0x20D15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D158u;
            // 0x20d15c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D1ACu;
            goto label_20d1ac;
        }
    }
    ctx->pc = 0x20D160u;
label_20d160:
    // 0x20d160: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20d164:
    // 0x20d164: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d168:
    // 0x20d168: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20d16c:
    // 0x20d16c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20d170:
    // 0x20d170: 0x60f809  jalr        $v1
label_20d174:
    if (ctx->pc == 0x20D174u) {
        ctx->pc = 0x20D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D170u;
        // 0x20d174: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D178u;
        goto label_20d178;
    }
    ctx->pc = 0x20D170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D178u);
        ctx->pc = 0x20D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D170u;
        // 0x20d174: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D170u, 0x20D178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D178u;
label_20d178:
    // 0x20d178: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20d17c:
    // 0x20d17c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d180:
    // 0x20d180: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20d180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20d184:
    // 0x20d184: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20d184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20d188:
    // 0x20d188: 0x60f809  jalr        $v1
label_20d18c:
    if (ctx->pc == 0x20D18Cu) {
        ctx->pc = 0x20D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D188u;
        // 0x20d18c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D190u;
        goto label_20d190;
    }
    ctx->pc = 0x20D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D190u);
        ctx->pc = 0x20D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D188u;
        // 0x20d18c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D188u, 0x20D190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D190u;
label_20d190:
    // 0x20d190: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20d190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20d194:
    // 0x20d194: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d198:
    // 0x20d198: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20d19c:
    // 0x20d19c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20d1a0:
    // 0x20d1a0: 0x60f809  jalr        $v1
label_20d1a4:
    if (ctx->pc == 0x20D1A4u) {
        ctx->pc = 0x20D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1A0u;
        // 0x20d1a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D1A8u;
        goto label_20d1a8;
    }
    ctx->pc = 0x20D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D1A8u);
        ctx->pc = 0x20D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1A0u;
        // 0x20d1a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D1A0u, 0x20D1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D1A8u;
label_20d1a8:
    // 0x20d1a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d1ac:
    // 0x20d1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d1b0:
    // 0x20d1b0: 0x3e00008  jr          $ra
label_20d1b4:
    if (ctx->pc == 0x20D1B4u) {
        ctx->pc = 0x20D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1B0u;
        // 0x20d1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D1B8u;
        goto label_fallthrough_0x20d1b0;
    }
    ctx->pc = 0x20D1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1B0u;
        // 0x20d1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20d1b0:
    ctx->pc = 0x20D1B8u;
}
