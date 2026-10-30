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

// Function: sub_0011B128
// Address: 0x11b128 - 0x11b1b0
void sub_0011B128_0x11b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B128_0x11b128");
#endif

    switch (ctx->pc) {
        case 0x11b128u: goto label_11b128;
        case 0x11b12cu: goto label_11b12c;
        case 0x11b130u: goto label_11b130;
        case 0x11b134u: goto label_11b134;
        case 0x11b138u: goto label_11b138;
        case 0x11b13cu: goto label_11b13c;
        case 0x11b140u: goto label_11b140;
        case 0x11b144u: goto label_11b144;
        case 0x11b148u: goto label_11b148;
        case 0x11b14cu: goto label_11b14c;
        case 0x11b150u: goto label_11b150;
        case 0x11b154u: goto label_11b154;
        case 0x11b158u: goto label_11b158;
        case 0x11b15cu: goto label_11b15c;
        case 0x11b160u: goto label_11b160;
        case 0x11b164u: goto label_11b164;
        case 0x11b168u: goto label_11b168;
        case 0x11b16cu: goto label_11b16c;
        case 0x11b170u: goto label_11b170;
        case 0x11b174u: goto label_11b174;
        case 0x11b178u: goto label_11b178;
        case 0x11b17cu: goto label_11b17c;
        case 0x11b180u: goto label_11b180;
        case 0x11b184u: goto label_11b184;
        case 0x11b188u: goto label_11b188;
        case 0x11b18cu: goto label_11b18c;
        case 0x11b190u: goto label_11b190;
        case 0x11b194u: goto label_11b194;
        case 0x11b198u: goto label_11b198;
        case 0x11b19cu: goto label_11b19c;
        case 0x11b1a0u: goto label_11b1a0;
        case 0x11b1a4u: goto label_11b1a4;
        case 0x11b1a8u: goto label_11b1a8;
        case 0x11b1acu: goto label_11b1ac;
        default: break;
    }

    ctx->pc = 0x11b128u;

label_11b128:
    // 0x11b128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11b12c:
    // 0x11b12c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11b12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_11b130:
    // 0x11b130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_11b134:
    // 0x11b134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b138:
    // 0x11b138: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11b138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_11b13c:
    // 0x11b13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b140:
    // 0x11b140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11b144:
    // 0x11b144: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x11b144u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_11b148:
    // 0x11b148: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x11b148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_11b14c:
    // 0x11b14c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b150:
    // 0x11b150: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_11b154:
    // 0x11b154: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11b158:
    // 0x11b158: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11b158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_11b15c:
    // 0x11b15c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x11b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_11b160:
    // 0x11b160: 0x60f809  jalr        $v1
label_11b164:
    if (ctx->pc == 0x11B164u) {
        ctx->pc = 0x11B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B160u;
        // 0x11b164: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B168u;
        goto label_11b168;
    }
    ctx->pc = 0x11B160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B168u);
        ctx->pc = 0x11B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B160u;
        // 0x11b164: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B160u, 0x11B168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B168u;
label_11b168:
    // 0x11b168: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_11b16c:
    if (ctx->pc == 0x11B16Cu) {
        ctx->pc = 0x11B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B168u;
        // 0x11b16c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B170u;
        goto label_11b170;
    }
    ctx->pc = 0x11B168u;
    {
        const bool branch_taken_0x11b168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B168u;
        // 0x11b16c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b168) {
            ctx->pc = 0x11B190u;
            goto label_11b190;
        }
    }
    ctx->pc = 0x11B170u;
label_11b170:
    // 0x11b170: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_11b174:
    // 0x11b174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b178:
    // 0x11b178: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11b17c:
    // 0x11b17c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_11b180:
    // 0x11b180: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x11b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_11b184:
    // 0x11b184: 0x60f809  jalr        $v1
label_11b188:
    if (ctx->pc == 0x11B188u) {
        ctx->pc = 0x11B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B184u;
        // 0x11b188: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B18Cu;
        goto label_11b18c;
    }
    ctx->pc = 0x11B184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B18Cu);
        ctx->pc = 0x11B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B184u;
        // 0x11b188: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B184u, 0x11B18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B18Cu;
label_11b18c:
    // 0x11b18c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b190:
    // 0x11b190: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11b190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b194:
    // 0x11b194: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x11b194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_11b198:
    // 0x11b198: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11b198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11b19c:
    // 0x11b19c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11b19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11b1a0:
    // 0x11b1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b1a4:
    // 0x11b1a4: 0x3e00008  jr          $ra
label_11b1a8:
    if (ctx->pc == 0x11B1A8u) {
        ctx->pc = 0x11B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1A4u;
        // 0x11b1a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B1ACu;
        goto label_11b1ac;
    }
    ctx->pc = 0x11B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1A4u;
        // 0x11b1a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B1ACu;
label_11b1ac:
    // 0x11b1ac: 0x0  nop
    ctx->pc = 0x11b1acu;
    // NOP
    ctx->pc = 0x11b1b0u;
}
