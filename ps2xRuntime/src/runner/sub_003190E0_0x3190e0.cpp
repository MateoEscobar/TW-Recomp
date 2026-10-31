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

// Function: sub_003190E0
// Address: 0x3190e0 - 0x319270
void sub_003190E0_0x3190e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003190E0_0x3190e0");
#endif

    switch (ctx->pc) {
        case 0x319114u: goto label_319114;
        case 0x31911cu: goto label_31911c;
        case 0x319130u: goto label_319130;
        case 0x319140u: goto label_319140;
        case 0x319164u: goto label_319164;
        case 0x319180u: goto label_319180;
        case 0x319194u: goto label_319194;
        case 0x3191a0u: goto label_3191a0;
        case 0x3191a8u: goto label_3191a8;
        case 0x3191b0u: goto label_3191b0;
        case 0x3191d4u: goto label_3191d4;
        case 0x3191ecu: goto label_3191ec;
        case 0x3191f4u: goto label_3191f4;
        case 0x319200u: goto label_319200;
        case 0x319208u: goto label_319208;
        case 0x319210u: goto label_319210;
        case 0x319228u: goto label_319228;
        case 0x319234u: goto label_319234;
        default: break;
    }

    ctx->pc = 0x3190e0u;

    // 0x3190e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3190e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3190e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3190e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3190e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3190ec: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3190ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3190f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3190f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3190f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3190f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3190f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3190fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3190fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x319100: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x319100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x319104: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x319104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x319108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31910c: 0xc059646  jal         func_165918
    ctx->pc = 0x31910Cu;
    SET_GPR_U32(ctx, 31, 0x319114u);
    ctx->pc = 0x319110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31910Cu;
    // 0x319110: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x31910Cu, 0x319114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319114u;
label_319114:
    // 0x319114: 0xc05959e  jal         func_165678
    ctx->pc = 0x319114u;
    SET_GPR_U32(ctx, 31, 0x31911Cu);
    ctx->pc = 0x319118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319114u;
    // 0x319118: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x319114u, 0x31911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31911Cu;
label_31911c:
    // 0x31911c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31911cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319120: 0x12a00048  beqz        $s5, . + 4 + (0x48 << 2)
    ctx->pc = 0x319120u;
    {
        const bool branch_taken_0x319120 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x319124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319120u;
        // 0x319124: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319120) {
            ctx->pc = 0x319244u;
            goto label_319244;
        }
    }
    ctx->pc = 0x319128u;
    // 0x319128: 0xc08750a  jal         func_21D428
    ctx->pc = 0x319128u;
    SET_GPR_U32(ctx, 31, 0x319130u);
    ctx->pc = 0x31912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319128u;
    // 0x31912c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x319128u, 0x319130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319130u;
label_319130:
    // 0x319130: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x319130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x319134: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x319134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319138: 0xc059856  jal         func_166158
    ctx->pc = 0x319138u;
    SET_GPR_U32(ctx, 31, 0x319140u);
    ctx->pc = 0x31913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319138u;
    // 0x31913c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x319138u, 0x319140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319140u;
label_319140:
    // 0x319140: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x319140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x319144: 0x86430038  lh          $v1, 0x38($s2)
    ctx->pc = 0x319144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x319148: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x319148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31914c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31914Cu;
    {
        const bool branch_taken_0x31914c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x319150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31914Cu;
        // 0x319150: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31914c) {
            ctx->pc = 0x31915Cu;
            goto label_31915c;
        }
    }
    ctx->pc = 0x319154u;
    // 0x319154: 0x92820270  lbu         $v0, 0x270($s4)
    ctx->pc = 0x319154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x319158: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x319158u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
label_31915c:
    // 0x31915c: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x31915Cu;
    SET_GPR_U32(ctx, 31, 0x319164u);
    ctx->pc = 0x319160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31915Cu;
    // 0x319160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31915Cu, 0x319164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319164u;
label_319164:
    // 0x319164: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x319164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319168: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x319168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31916c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x31916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x319170: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x319170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x319174: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x319174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319178: 0xc0a5776  jal         func_295DD8
    ctx->pc = 0x319178u;
    SET_GPR_U32(ctx, 31, 0x319180u);
    ctx->pc = 0x31917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319178u;
    // 0x31917c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x319178u, 0x319180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319180u;
label_319180:
    // 0x319180: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319184: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x319184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x319188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x319188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31918c: 0xc0a5922  jal         func_296488
    ctx->pc = 0x31918Cu;
    SET_GPR_U32(ctx, 31, 0x319194u);
    ctx->pc = 0x319190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31918Cu;
    // 0x319190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x31918Cu, 0x319194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319194u;
label_319194:
    // 0x319194: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x319194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x319198: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x319198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31919c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3191a0:
    // 0x3191a0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x3191A0u;
    SET_GPR_U32(ctx, 31, 0x3191A8u);
    ctx->pc = 0x3191A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3191A0u;
    // 0x3191a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3191A0u, 0x3191A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191A8u;
label_3191a8:
    // 0x3191a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3191A8u;
    SET_GPR_U32(ctx, 31, 0x3191B0u);
    ctx->pc = 0x3191ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3191A8u;
    // 0x3191ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3191A8u, 0x3191B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191B0u;
label_3191b0:
    // 0x3191b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3191b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191b4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3191B4u;
    {
        const bool branch_taken_0x3191b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3191b4) {
            ctx->pc = 0x3191B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3191B4u;
            // 0x3191b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319238u;
            goto label_319238;
        }
    }
    ctx->pc = 0x3191BCu;
    // 0x3191bc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x3191bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x3191c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3191c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3191c4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3191C4u;
    {
        const bool branch_taken_0x3191c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3191C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191C4u;
        // 0x3191c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191c4) {
            ctx->pc = 0x319234u;
            goto label_319234;
        }
    }
    ctx->pc = 0x3191CCu;
    // 0x3191cc: 0xc089f98  jal         func_227E60
    ctx->pc = 0x3191CCu;
    SET_GPR_U32(ctx, 31, 0x3191D4u);
    ctx->pc = 0x3191D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3191CCu;
    // 0x3191d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x3191CCu, 0x3191D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191D4u;
label_3191d4:
    // 0x3191d4: 0x50510018  beql        $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3191D4u;
    {
        const bool branch_taken_0x3191d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3191d4) {
            ctx->pc = 0x3191D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3191D4u;
            // 0x3191d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319238u;
            goto label_319238;
        }
    }
    ctx->pc = 0x3191DCu;
    // 0x3191dc: 0x12150003  beq         $s0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3191DCu;
    {
        const bool branch_taken_0x3191dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x3191E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191DCu;
        // 0x3191e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191dc) {
            ctx->pc = 0x3191ECu;
            goto label_3191ec;
        }
    }
    ctx->pc = 0x3191E4u;
    // 0x3191e4: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x3191E4u;
    SET_GPR_U32(ctx, 31, 0x3191ECu);
    ctx->pc = 0x3191E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3191E4u;
    // 0x3191e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x3191E4u, 0x3191ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191ECu;
label_3191ec:
    // 0x3191ec: 0xc087502  jal         func_21D408
    ctx->pc = 0x3191ECu;
    SET_GPR_U32(ctx, 31, 0x3191F4u);
    ctx->pc = 0x3191F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3191ECu;
    // 0x3191f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3191ECu, 0x3191F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191F4u;
label_3191f4:
    // 0x3191f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3191f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191f8: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x3191F8u;
    SET_GPR_U32(ctx, 31, 0x319200u);
    ctx->pc = 0x3191FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3191F8u;
    // 0x3191fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x3191F8u, 0x319200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319200u;
label_319200:
    // 0x319200: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x319200u;
    SET_GPR_U32(ctx, 31, 0x319208u);
    ctx->pc = 0x319204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319200u;
    // 0x319204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x319200u, 0x319208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319208u;
label_319208:
    // 0x319208: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x319208u;
    SET_GPR_U32(ctx, 31, 0x319210u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x319208u, 0x319210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319210u;
label_319210:
    // 0x319210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319214: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319214u;
    {
        const bool branch_taken_0x319214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x319218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319214u;
        // 0x319218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319214) {
            ctx->pc = 0x319228u;
            goto label_319228;
        }
    }
    ctx->pc = 0x31921Cu;
    // 0x31921c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319220: 0xc0b0e56  jal         func_2C3958
    ctx->pc = 0x319220u;
    SET_GPR_U32(ctx, 31, 0x319228u);
    ctx->pc = 0x319224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319220u;
    // 0x319224: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3958u, 0x319220u, 0x319228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319228u;
label_319228:
    // 0x319228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x319228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31922c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31922Cu;
    SET_GPR_U32(ctx, 31, 0x319234u);
    ctx->pc = 0x319230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31922Cu;
    // 0x319230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31922Cu, 0x319234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319234u;
label_319234:
    // 0x319234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x319234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_319238:
    // 0x319238: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x319238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31923c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x31923Cu;
    {
        const bool branch_taken_0x31923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31923Cu;
        // 0x319240: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31923c) {
            ctx->pc = 0x3191A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3191a0;
        }
    }
    ctx->pc = 0x319244u;
label_319244:
    // 0x319244: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x319244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x319248: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x319248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31924c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31924cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319250: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x319250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x319254: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x319254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319258: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x319258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31925c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31925cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319264: 0x3e00008  jr          $ra
    ctx->pc = 0x319264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319264u;
        // 0x319268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31926Cu;
    // 0x31926c: 0x0  nop
    ctx->pc = 0x31926cu;
    // NOP
    ctx->pc = 0x319270u;
}
