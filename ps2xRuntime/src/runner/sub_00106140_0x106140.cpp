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

// Function: sub_00106140
// Address: 0x106140 - 0x106240
void sub_00106140_0x106140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106140_0x106140");
#endif

    switch (ctx->pc) {
        case 0x106140u: goto label_106140;
        case 0x106144u: goto label_106144;
        case 0x106148u: goto label_106148;
        case 0x10614cu: goto label_10614c;
        case 0x106150u: goto label_106150;
        case 0x106154u: goto label_106154;
        case 0x106158u: goto label_106158;
        case 0x10615cu: goto label_10615c;
        case 0x106160u: goto label_106160;
        case 0x106164u: goto label_106164;
        case 0x106168u: goto label_106168;
        case 0x10616cu: goto label_10616c;
        case 0x106170u: goto label_106170;
        case 0x106174u: goto label_106174;
        case 0x106178u: goto label_106178;
        case 0x10617cu: goto label_10617c;
        case 0x106180u: goto label_106180;
        case 0x106184u: goto label_106184;
        case 0x106188u: goto label_106188;
        case 0x10618cu: goto label_10618c;
        case 0x106190u: goto label_106190;
        case 0x106194u: goto label_106194;
        case 0x106198u: goto label_106198;
        case 0x10619cu: goto label_10619c;
        case 0x1061a0u: goto label_1061a0;
        case 0x1061a4u: goto label_1061a4;
        case 0x1061a8u: goto label_1061a8;
        case 0x1061acu: goto label_1061ac;
        case 0x1061b0u: goto label_1061b0;
        case 0x1061b4u: goto label_1061b4;
        case 0x1061b8u: goto label_1061b8;
        case 0x1061bcu: goto label_1061bc;
        case 0x1061c0u: goto label_1061c0;
        case 0x1061c4u: goto label_1061c4;
        case 0x1061c8u: goto label_1061c8;
        case 0x1061ccu: goto label_1061cc;
        case 0x1061d0u: goto label_1061d0;
        case 0x1061d4u: goto label_1061d4;
        case 0x1061d8u: goto label_1061d8;
        case 0x1061dcu: goto label_1061dc;
        case 0x1061e0u: goto label_1061e0;
        case 0x1061e4u: goto label_1061e4;
        case 0x1061e8u: goto label_1061e8;
        case 0x1061ecu: goto label_1061ec;
        case 0x1061f0u: goto label_1061f0;
        case 0x1061f4u: goto label_1061f4;
        case 0x1061f8u: goto label_1061f8;
        case 0x1061fcu: goto label_1061fc;
        case 0x106200u: goto label_106200;
        case 0x106204u: goto label_106204;
        case 0x106208u: goto label_106208;
        case 0x10620cu: goto label_10620c;
        case 0x106210u: goto label_106210;
        case 0x106214u: goto label_106214;
        case 0x106218u: goto label_106218;
        case 0x10621cu: goto label_10621c;
        case 0x106220u: goto label_106220;
        case 0x106224u: goto label_106224;
        case 0x106228u: goto label_106228;
        case 0x10622cu: goto label_10622c;
        case 0x106230u: goto label_106230;
        case 0x106234u: goto label_106234;
        case 0x106238u: goto label_106238;
        case 0x10623cu: goto label_10623c;
        default: break;
    }

    ctx->pc = 0x106140u;

label_106140:
    // 0x106140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x106140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_106144:
    // 0x106144: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x106144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_106148:
    // 0x106148: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x106148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_10614c:
    // 0x10614c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_106150:
    // 0x106150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106154:
    // 0x106154: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x106154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_106158:
    // 0x106158: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x106158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_10615c:
    // 0x10615c: 0x24424e80  addiu       $v0, $v0, 0x4E80
    ctx->pc = 0x10615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20096));
label_106160:
    // 0x106160: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x106160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_106164:
    // 0x106164: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x106164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_106168:
    // 0x106168: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x106168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_10616c:
    // 0x10616c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10616cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_106170:
    // 0x106170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106174:
    // 0x106174: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x106174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_106178:
    // 0x106178: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x106178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
label_10617c:
    // 0x10617c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x10617cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_106180:
    // 0x106180: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x106180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_106184:
    // 0x106184: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x106184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106188:
    // 0x106188: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_10618c:
    // 0x10618c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10618cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_106190:
    // 0x106190: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x106190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_106194:
    // 0x106194: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x106194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_106198:
    // 0x106198: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x106198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_10619c:
    // 0x10619c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x10619cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1061a0:
    // 0x1061a0: 0xc04128e  jal         func_104A38
label_1061a4:
    if (ctx->pc == 0x1061A4u) {
        ctx->pc = 0x1061A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061A0u;
        // 0x1061a4: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1061A8u;
        goto label_1061a8;
    }
    ctx->pc = 0x1061A0u;
    SET_GPR_U32(ctx, 31, 0x1061A8u);
    ctx->pc = 0x1061A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1061A0u;
    // 0x1061a4: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x1061A0u, 0x1061A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061A8u;
label_1061a8:
    // 0x1061a8: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x1061a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_1061ac:
    // 0x1061ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1061acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1061b0:
    // 0x1061b0: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x1061b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
label_1061b4:
    // 0x1061b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1061b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1061b8:
    // 0x1061b8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1061b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1061bc:
    // 0x1061bc: 0xc05d462  jal         func_175188
label_1061c0:
    if (ctx->pc == 0x1061C0u) {
        ctx->pc = 0x1061C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061BCu;
        // 0x1061c0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1061C4u;
        goto label_1061c4;
    }
    ctx->pc = 0x1061BCu;
    SET_GPR_U32(ctx, 31, 0x1061C4u);
    ctx->pc = 0x1061C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1061BCu;
    // 0x1061c0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1061BCu, 0x1061C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061C4u;
label_1061c4:
    // 0x1061c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1061c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1061c8:
    // 0x1061c8: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1061c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1061cc:
    // 0x1061cc: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1061ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1061d0:
    // 0x1061d0: 0xa0f809  jalr        $a1
label_1061d4:
    if (ctx->pc == 0x1061D4u) {
        ctx->pc = 0x1061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061D0u;
        // 0x1061d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1061D8u;
        goto label_1061d8;
    }
    ctx->pc = 0x1061D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1061D8u);
        ctx->pc = 0x1061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061D0u;
        // 0x1061d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1061D0u, 0x1061D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1061D8u;
label_1061d8:
    // 0x1061d8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1061d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1061dc:
    // 0x1061dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1061dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1061e0:
    // 0x1061e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1061e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1061e4:
    // 0x1061e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1061e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1061e8:
    // 0x1061e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1061e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1061ec:
    // 0x1061ec: 0xc05d420  jal         func_175080
label_1061f0:
    if (ctx->pc == 0x1061F0u) {
        ctx->pc = 0x1061F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061ECu;
        // 0x1061f0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1061F4u;
        goto label_1061f4;
    }
    ctx->pc = 0x1061ECu;
    SET_GPR_U32(ctx, 31, 0x1061F4u);
    ctx->pc = 0x1061F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1061ECu;
    // 0x1061f0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x1061ECu, 0x1061F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061F4u;
label_1061f4:
    // 0x1061f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1061f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1061f8:
    // 0x1061f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1061f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1061fc:
    // 0x1061fc: 0xc042ed8  jal         func_10BB60
label_106200:
    if (ctx->pc == 0x106200u) {
        ctx->pc = 0x106200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061FCu;
        // 0x106200: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106204u;
        goto label_106204;
    }
    ctx->pc = 0x1061FCu;
    SET_GPR_U32(ctx, 31, 0x106204u);
    ctx->pc = 0x106200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1061FCu;
    // 0x106200: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x1061FCu, 0x106204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106204u;
label_106204:
    // 0x106204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106208:
    // 0x106208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10620c:
    // 0x10620c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10620cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106210:
    // 0x106210: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x106210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_106214:
    // 0x106214: 0xc041164  jal         func_104590
label_106218:
    if (ctx->pc == 0x106218u) {
        ctx->pc = 0x106218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106214u;
        // 0x106218: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10621Cu;
        goto label_10621c;
    }
    ctx->pc = 0x106214u;
    SET_GPR_U32(ctx, 31, 0x10621Cu);
    ctx->pc = 0x106218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106214u;
    // 0x106218: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x106214u, 0x10621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10621Cu;
label_10621c:
    // 0x10621c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10621cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106220:
    // 0x106220: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x106220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_106224:
    // 0x106224: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x106224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_106228:
    // 0x106228: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x106228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10622c:
    // 0x10622c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10622cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106230:
    // 0x106230: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x106230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106234:
    // 0x106234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106238:
    // 0x106238: 0x3e00008  jr          $ra
label_10623c:
    if (ctx->pc == 0x10623Cu) {
        ctx->pc = 0x10623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106238u;
        // 0x10623c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106240u;
        goto label_fallthrough_0x106238;
    }
    ctx->pc = 0x106238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106238u;
        // 0x10623c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106238:
    ctx->pc = 0x106240u;
}
