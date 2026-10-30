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

// Function: sub_00396090
// Address: 0x396090 - 0x3961d0
void sub_00396090_0x396090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396090_0x396090");
#endif

    switch (ctx->pc) {
        case 0x396090u: goto label_396090;
        case 0x396094u: goto label_396094;
        case 0x396098u: goto label_396098;
        case 0x39609cu: goto label_39609c;
        case 0x3960a0u: goto label_3960a0;
        case 0x3960a4u: goto label_3960a4;
        case 0x3960a8u: goto label_3960a8;
        case 0x3960acu: goto label_3960ac;
        case 0x3960b0u: goto label_3960b0;
        case 0x3960b4u: goto label_3960b4;
        case 0x3960b8u: goto label_3960b8;
        case 0x3960bcu: goto label_3960bc;
        case 0x3960c0u: goto label_3960c0;
        case 0x3960c4u: goto label_3960c4;
        case 0x3960c8u: goto label_3960c8;
        case 0x3960ccu: goto label_3960cc;
        case 0x3960d0u: goto label_3960d0;
        case 0x3960d4u: goto label_3960d4;
        case 0x3960d8u: goto label_3960d8;
        case 0x3960dcu: goto label_3960dc;
        case 0x3960e0u: goto label_3960e0;
        case 0x3960e4u: goto label_3960e4;
        case 0x3960e8u: goto label_3960e8;
        case 0x3960ecu: goto label_3960ec;
        case 0x3960f0u: goto label_3960f0;
        case 0x3960f4u: goto label_3960f4;
        case 0x3960f8u: goto label_3960f8;
        case 0x3960fcu: goto label_3960fc;
        case 0x396100u: goto label_396100;
        case 0x396104u: goto label_396104;
        case 0x396108u: goto label_396108;
        case 0x39610cu: goto label_39610c;
        case 0x396110u: goto label_396110;
        case 0x396114u: goto label_396114;
        case 0x396118u: goto label_396118;
        case 0x39611cu: goto label_39611c;
        case 0x396120u: goto label_396120;
        case 0x396124u: goto label_396124;
        case 0x396128u: goto label_396128;
        case 0x39612cu: goto label_39612c;
        case 0x396130u: goto label_396130;
        case 0x396134u: goto label_396134;
        case 0x396138u: goto label_396138;
        case 0x39613cu: goto label_39613c;
        case 0x396140u: goto label_396140;
        case 0x396144u: goto label_396144;
        case 0x396148u: goto label_396148;
        case 0x39614cu: goto label_39614c;
        case 0x396150u: goto label_396150;
        case 0x396154u: goto label_396154;
        case 0x396158u: goto label_396158;
        case 0x39615cu: goto label_39615c;
        case 0x396160u: goto label_396160;
        case 0x396164u: goto label_396164;
        case 0x396168u: goto label_396168;
        case 0x39616cu: goto label_39616c;
        case 0x396170u: goto label_396170;
        case 0x396174u: goto label_396174;
        case 0x396178u: goto label_396178;
        case 0x39617cu: goto label_39617c;
        case 0x396180u: goto label_396180;
        case 0x396184u: goto label_396184;
        case 0x396188u: goto label_396188;
        case 0x39618cu: goto label_39618c;
        case 0x396190u: goto label_396190;
        case 0x396194u: goto label_396194;
        case 0x396198u: goto label_396198;
        case 0x39619cu: goto label_39619c;
        case 0x3961a0u: goto label_3961a0;
        case 0x3961a4u: goto label_3961a4;
        case 0x3961a8u: goto label_3961a8;
        case 0x3961acu: goto label_3961ac;
        case 0x3961b0u: goto label_3961b0;
        case 0x3961b4u: goto label_3961b4;
        case 0x3961b8u: goto label_3961b8;
        case 0x3961bcu: goto label_3961bc;
        case 0x3961c0u: goto label_3961c0;
        case 0x3961c4u: goto label_3961c4;
        case 0x3961c8u: goto label_3961c8;
        case 0x3961ccu: goto label_3961cc;
        default: break;
    }

    ctx->pc = 0x396090u;

label_396090:
    // 0x396090: 0x27bdf340  addiu       $sp, $sp, -0xCC0
    ctx->pc = 0x396090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964032));
label_396094:
    // 0x396094: 0x7fb00ca0  sq          $s0, 0xCA0($sp)
    ctx->pc = 0x396094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3232), GPR_VEC(ctx, 16));
label_396098:
    // 0x396098: 0x7fb50c50  sq          $s5, 0xC50($sp)
    ctx->pc = 0x396098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3152), GPR_VEC(ctx, 21));
label_39609c:
    // 0x39609c: 0x27b00c30  addiu       $s0, $sp, 0xC30
    ctx->pc = 0x39609cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 3120));
label_3960a0:
    // 0x3960a0: 0xe7b40cb0  swc1        $f20, 0xCB0($sp)
    ctx->pc = 0x3960a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3248), bits); }
label_3960a4:
    // 0x3960a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3960a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3960a8:
    // 0x3960a8: 0xafa40c30  sw          $a0, 0xC30($sp)
    ctx->pc = 0x3960a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3120), GPR_U32(ctx, 4));
label_3960ac:
    // 0x3960ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3960acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3960b0:
    // 0x3960b0: 0x7fb10c90  sq          $s1, 0xC90($sp)
    ctx->pc = 0x3960b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3216), GPR_VEC(ctx, 17));
label_3960b4:
    // 0x3960b4: 0x7fb20c80  sq          $s2, 0xC80($sp)
    ctx->pc = 0x3960b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3200), GPR_VEC(ctx, 18));
label_3960b8:
    // 0x3960b8: 0x7fb30c70  sq          $s3, 0xC70($sp)
    ctx->pc = 0x3960b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3184), GPR_VEC(ctx, 19));
label_3960bc:
    // 0x3960bc: 0x7fb40c60  sq          $s4, 0xC60($sp)
    ctx->pc = 0x3960bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3168), GPR_VEC(ctx, 20));
label_3960c0:
    // 0x3960c0: 0xffbf0c40  sd          $ra, 0xC40($sp)
    ctx->pc = 0x3960c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3136), GPR_U64(ctx, 31));
label_3960c4:
    // 0x3960c4: 0xc0e4060  jal         func_390180
label_3960c8:
    if (ctx->pc == 0x3960C8u) {
        ctx->pc = 0x3960C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960C4u;
        // 0x3960c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3960CCu;
        goto label_3960cc;
    }
    ctx->pc = 0x3960C4u;
    SET_GPR_U32(ctx, 31, 0x3960CCu);
    ctx->pc = 0x3960C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3960C4u;
    // 0x3960c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3960C4u, 0x3960CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960CCu;
label_3960cc:
    // 0x3960cc: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_3960d0:
    if (ctx->pc == 0x3960D0u) {
        ctx->pc = 0x3960D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960CCu;
        // 0x3960d0: 0x7bb00ca0  lq          $s0, 0xCA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3960D4u;
        goto label_3960d4;
    }
    ctx->pc = 0x3960CCu;
    {
        const bool branch_taken_0x3960cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3960cc) {
            ctx->pc = 0x3960D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3960CCu;
            // 0x3960d0: 0x7bb00ca0  lq          $s0, 0xCA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3961A8u;
            goto label_3961a8;
        }
    }
    ctx->pc = 0x3960D4u;
label_3960d4:
    // 0x3960d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3960d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3960d8:
    // 0x3960d8: 0xc0e4060  jal         func_390180
label_3960dc:
    if (ctx->pc == 0x3960DCu) {
        ctx->pc = 0x3960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960D8u;
        // 0x3960dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3960E0u;
        goto label_3960e0;
    }
    ctx->pc = 0x3960D8u;
    SET_GPR_U32(ctx, 31, 0x3960E0u);
    ctx->pc = 0x3960DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3960D8u;
    // 0x3960dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3960D8u, 0x3960E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960E0u;
label_3960e0:
    // 0x3960e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3960e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3960e4:
    // 0x3960e4: 0x27a40c10  addiu       $a0, $sp, 0xC10
    ctx->pc = 0x3960e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
label_3960e8:
    // 0x3960e8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x3960e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_3960ec:
    // 0x3960ec: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x3960ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3960f0:
    // 0x3960f0: 0xc0f809  jalr        $a2
label_3960f4:
    if (ctx->pc == 0x3960F4u) {
        ctx->pc = 0x3960F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960F0u;
        // 0x3960f4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3960F8u;
        goto label_3960f8;
    }
    ctx->pc = 0x3960F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3960F8u);
        ctx->pc = 0x3960F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960F0u;
        // 0x3960f4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3960F0u, 0x3960F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3960F8u;
label_3960f8:
    // 0x3960f8: 0x7ba20c10  lq          $v0, 0xC10($sp)
    ctx->pc = 0x3960f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 3088)));
label_3960fc:
    // 0x3960fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3960fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_396100:
    // 0x396100: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x396100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_396104:
    // 0x396104: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x396104u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_396108:
    // 0x396108: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x396108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_39610c:
    // 0x39610c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x39610cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_396110:
    // 0x396110: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x396110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_396114:
    // 0x396114: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x396114u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_396118:
    // 0x396118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39611c:
    // 0x39611c: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x39611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_396120:
    // 0x396120: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x396120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_396124:
    // 0x396124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x396124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396128:
    // 0x396128: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x396128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39612c:
    // 0x39612c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x39612cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_396130:
    // 0x396130: 0xc0e6a14  jal         func_39A850
label_396134:
    if (ctx->pc == 0x396134u) {
        ctx->pc = 0x396134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396130u;
        // 0x396134: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396138u;
        goto label_396138;
    }
    ctx->pc = 0x396130u;
    SET_GPR_U32(ctx, 31, 0x396138u);
    ctx->pc = 0x396134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396130u;
    // 0x396134: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A850u, 0x396130u, 0x396138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396138u;
label_396138:
    // 0x396138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39613c:
    // 0x39613c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_396140:
    if (ctx->pc == 0x396140u) {
        ctx->pc = 0x396140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39613Cu;
        // 0x396140: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396144u;
        goto label_396144;
    }
    ctx->pc = 0x39613Cu;
    {
        const bool branch_taken_0x39613c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39613Cu;
        // 0x396140: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39613c) {
            ctx->pc = 0x3961A4u;
            goto label_3961a4;
        }
    }
    ctx->pc = 0x396144u;
label_396144:
    // 0x396144: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x396144u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_396148:
    // 0x396148: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x396148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39614c:
    // 0x39614c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x39614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_396150:
    // 0x396150: 0x54550011  bnel        $v0, $s5, . + 4 + (0x11 << 2)
label_396154:
    if (ctx->pc == 0x396154u) {
        ctx->pc = 0x396154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396150u;
        // 0x396154: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396158u;
        goto label_396158;
    }
    ctx->pc = 0x396150u;
    {
        const bool branch_taken_0x396150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x396150) {
            ctx->pc = 0x396154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396150u;
            // 0x396154: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396198u;
            goto label_396198;
        }
    }
    ctx->pc = 0x396158u;
label_396158:
    // 0x396158: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x396158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_39615c:
    // 0x39615c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396160:
    // 0x396160: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x396160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_396164:
    // 0x396164: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x396164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_396168:
    // 0x396168: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x396168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39616c:
    // 0x39616c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_396170:
    // 0x396170: 0x40f809  jalr        $v0
label_396174:
    if (ctx->pc == 0x396174u) {
        ctx->pc = 0x396174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396170u;
        // 0x396174: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396178u;
        goto label_396178;
    }
    ctx->pc = 0x396170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396178u);
        ctx->pc = 0x396174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396170u;
        // 0x396174: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396170u, 0x396178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396178u;
label_396178:
    // 0x396178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39617c:
    // 0x39617c: 0xc10c313  jal         func_430C4C
label_396180:
    if (ctx->pc == 0x396180u) {
        ctx->pc = 0x396180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39617Cu;
        // 0x396180: 0x26850ec8  addiu       $a1, $s4, 0xEC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396184u;
        goto label_396184;
    }
    ctx->pc = 0x39617Cu;
    SET_GPR_U32(ctx, 31, 0x396184u);
    ctx->pc = 0x396180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39617Cu;
    // 0x396180: 0x26850ec8  addiu       $a1, $s4, 0xEC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x39617Cu, 0x396184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396184u;
label_396184:
    // 0x396184: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_396188:
    if (ctx->pc == 0x396188u) {
        ctx->pc = 0x396188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396184u;
        // 0x396188: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39618Cu;
        goto label_39618c;
    }
    ctx->pc = 0x396184u;
    {
        const bool branch_taken_0x396184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396184) {
            ctx->pc = 0x396188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396184u;
            // 0x396188: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396198u;
            goto label_396198;
        }
    }
    ctx->pc = 0x39618Cu;
label_39618c:
    // 0x39618c: 0xc0e5544  jal         func_395510
label_396190:
    if (ctx->pc == 0x396190u) {
        ctx->pc = 0x396190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39618Cu;
        // 0x396190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396194u;
        goto label_396194;
    }
    ctx->pc = 0x39618Cu;
    SET_GPR_U32(ctx, 31, 0x396194u);
    ctx->pc = 0x396190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39618Cu;
    // 0x396190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395510u, 0x39618Cu, 0x396194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396194u;
label_396194:
    // 0x396194: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x396194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_396198:
    // 0x396198: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x396198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_39619c:
    // 0x39619c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3961a0:
    if (ctx->pc == 0x3961A0u) {
        ctx->pc = 0x3961A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39619Cu;
        // 0x3961a0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3961A4u;
        goto label_3961a4;
    }
    ctx->pc = 0x39619Cu;
    {
        const bool branch_taken_0x39619c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3961A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39619Cu;
        // 0x3961a0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39619c) {
            ctx->pc = 0x396148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396148;
        }
    }
    ctx->pc = 0x3961A4u;
label_3961a4:
    // 0x3961a4: 0x7bb00ca0  lq          $s0, 0xCA0($sp)
    ctx->pc = 0x3961a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3232)));
label_3961a8:
    // 0x3961a8: 0x7bb10c90  lq          $s1, 0xC90($sp)
    ctx->pc = 0x3961a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3216)));
label_3961ac:
    // 0x3961ac: 0x7bb20c80  lq          $s2, 0xC80($sp)
    ctx->pc = 0x3961acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3200)));
label_3961b0:
    // 0x3961b0: 0x7bb30c70  lq          $s3, 0xC70($sp)
    ctx->pc = 0x3961b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3184)));
label_3961b4:
    // 0x3961b4: 0x7bb40c60  lq          $s4, 0xC60($sp)
    ctx->pc = 0x3961b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3168)));
label_3961b8:
    // 0x3961b8: 0x7bb50c50  lq          $s5, 0xC50($sp)
    ctx->pc = 0x3961b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3152)));
label_3961bc:
    // 0x3961bc: 0xdfbf0c40  ld          $ra, 0xC40($sp)
    ctx->pc = 0x3961bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3136)));
label_3961c0:
    // 0x3961c0: 0xc7b40cb0  lwc1        $f20, 0xCB0($sp)
    ctx->pc = 0x3961c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3961c4:
    // 0x3961c4: 0x3e00008  jr          $ra
label_3961c8:
    if (ctx->pc == 0x3961C8u) {
        ctx->pc = 0x3961C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961C4u;
        // 0x3961c8: 0x27bd0cc0  addiu       $sp, $sp, 0xCC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3961CCu;
        goto label_3961cc;
    }
    ctx->pc = 0x3961C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3961C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961C4u;
        // 0x3961c8: 0x27bd0cc0  addiu       $sp, $sp, 0xCC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3961C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3961CCu;
label_3961cc:
    // 0x3961cc: 0x0  nop
    ctx->pc = 0x3961ccu;
    // NOP
    ctx->pc = 0x3961d0u;
}
