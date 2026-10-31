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

// Function: sub_002C88A8
// Address: 0x2c88a8 - 0x2c8970
void sub_002C88A8_0x2c88a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C88A8_0x2c88a8");
#endif

    switch (ctx->pc) {
        case 0x2c88a8u: goto label_2c88a8;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c88b0u: goto label_2c88b0;
        case 0x2c88b4u: goto label_2c88b4;
        case 0x2c88b8u: goto label_2c88b8;
        case 0x2c88bcu: goto label_2c88bc;
        case 0x2c88c0u: goto label_2c88c0;
        case 0x2c88c4u: goto label_2c88c4;
        case 0x2c88c8u: goto label_2c88c8;
        case 0x2c88ccu: goto label_2c88cc;
        case 0x2c88d0u: goto label_2c88d0;
        case 0x2c88d4u: goto label_2c88d4;
        case 0x2c88d8u: goto label_2c88d8;
        case 0x2c88dcu: goto label_2c88dc;
        case 0x2c88e0u: goto label_2c88e0;
        case 0x2c88e4u: goto label_2c88e4;
        case 0x2c88e8u: goto label_2c88e8;
        case 0x2c88ecu: goto label_2c88ec;
        case 0x2c88f0u: goto label_2c88f0;
        case 0x2c88f4u: goto label_2c88f4;
        case 0x2c88f8u: goto label_2c88f8;
        case 0x2c88fcu: goto label_2c88fc;
        case 0x2c8900u: goto label_2c8900;
        case 0x2c8904u: goto label_2c8904;
        case 0x2c8908u: goto label_2c8908;
        case 0x2c890cu: goto label_2c890c;
        case 0x2c8910u: goto label_2c8910;
        case 0x2c8914u: goto label_2c8914;
        case 0x2c8918u: goto label_2c8918;
        case 0x2c891cu: goto label_2c891c;
        case 0x2c8920u: goto label_2c8920;
        case 0x2c8924u: goto label_2c8924;
        case 0x2c8928u: goto label_2c8928;
        case 0x2c892cu: goto label_2c892c;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8934u: goto label_2c8934;
        case 0x2c8938u: goto label_2c8938;
        case 0x2c893cu: goto label_2c893c;
        case 0x2c8940u: goto label_2c8940;
        case 0x2c8944u: goto label_2c8944;
        case 0x2c8948u: goto label_2c8948;
        case 0x2c894cu: goto label_2c894c;
        case 0x2c8950u: goto label_2c8950;
        case 0x2c8954u: goto label_2c8954;
        case 0x2c8958u: goto label_2c8958;
        case 0x2c895cu: goto label_2c895c;
        case 0x2c8960u: goto label_2c8960;
        case 0x2c8964u: goto label_2c8964;
        case 0x2c8968u: goto label_2c8968;
        case 0x2c896cu: goto label_2c896c;
        default: break;
    }

    ctx->pc = 0x2c88a8u;

label_2c88a8:
    // 0x2c88a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c88a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c88ac:
    // 0x2c88ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c88acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c88b0:
    // 0x2c88b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c88b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2c88b4:
    // 0x2c88b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c88b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c88b8:
    // 0x2c88b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2c88bc:
    // 0x2c88bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c88bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c88c0:
    // 0x2c88c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c88c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2c88c4:
    // 0x2c88c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c88c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2c88c8:
    // 0x2c88c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c88c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c88cc:
    // 0x2c88cc: 0xc0e4060  jal         func_390180
label_2c88d0:
    if (ctx->pc == 0x2C88D0u) {
        ctx->pc = 0x2C88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88CCu;
        // 0x2c88d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C88D4u;
        goto label_2c88d4;
    }
    ctx->pc = 0x2C88CCu;
    SET_GPR_U32(ctx, 31, 0x2C88D4u);
    ctx->pc = 0x2C88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C88CCu;
    // 0x2c88d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C88CCu, 0x2C88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88D4u;
label_2c88d4:
    // 0x2c88d4: 0xc08a61a  jal         func_229868
label_2c88d8:
    if (ctx->pc == 0x2C88D8u) {
        ctx->pc = 0x2C88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88D4u;
        // 0x2c88d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C88DCu;
        goto label_2c88dc;
    }
    ctx->pc = 0x2C88D4u;
    SET_GPR_U32(ctx, 31, 0x2C88DCu);
    ctx->pc = 0x2C88D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C88D4u;
    // 0x2c88d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C88D4u, 0x2C88DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88DCu;
label_2c88dc:
    // 0x2c88dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c88dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c88e0:
    // 0x2c88e0: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_2c88e4:
    if (ctx->pc == 0x2C88E4u) {
        ctx->pc = 0x2C88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88E0u;
        // 0x2c88e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C88E8u;
        goto label_2c88e8;
    }
    ctx->pc = 0x2C88E0u;
    {
        const bool branch_taken_0x2c88e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88e0) {
            ctx->pc = 0x2C88E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C88E0u;
            // 0x2c88e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8954u;
            goto label_2c8954;
        }
    }
    ctx->pc = 0x2C88E8u;
label_2c88e8:
    // 0x2c88e8: 0xc087502  jal         func_21D408
label_2c88ec:
    if (ctx->pc == 0x2C88ECu) {
        ctx->pc = 0x2C88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88E8u;
        // 0x2c88ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C88F0u;
        goto label_2c88f0;
    }
    ctx->pc = 0x2C88E8u;
    SET_GPR_U32(ctx, 31, 0x2C88F0u);
    ctx->pc = 0x2C88ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C88E8u;
    // 0x2c88ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C88E8u, 0x2C88F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88F0u;
label_2c88f0:
    // 0x2c88f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c88f4:
    // 0x2c88f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c88f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c88f8:
    // 0x2c88f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c88f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c88fc:
    // 0x2c88fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c8900:
    // 0x2c8900: 0x40f809  jalr        $v0
label_2c8904:
    if (ctx->pc == 0x2C8904u) {
        ctx->pc = 0x2C8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8900u;
        // 0x2c8904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8908u;
        goto label_2c8908;
    }
    ctx->pc = 0x2C8900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C8908u);
        ctx->pc = 0x2C8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8900u;
        // 0x2c8904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8900u, 0x2C8908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8908u;
label_2c8908:
    // 0x2c8908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c890c:
    // 0x2c890c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8910:
    // 0x2c8910: 0xc08e1a4  jal         func_238690
label_2c8914:
    if (ctx->pc == 0x2C8914u) {
        ctx->pc = 0x2C8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8910u;
        // 0x2c8914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8918u;
        goto label_2c8918;
    }
    ctx->pc = 0x2C8910u;
    SET_GPR_U32(ctx, 31, 0x2C8918u);
    ctx->pc = 0x2C8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8910u;
    // 0x2c8914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C8910u, 0x2C8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8918u;
label_2c8918:
    // 0x2c8918: 0xc0a4e54  jal         func_293950
label_2c891c:
    if (ctx->pc == 0x2C891Cu) {
        ctx->pc = 0x2C8920u;
        goto label_2c8920;
    }
    ctx->pc = 0x2C8918u;
    SET_GPR_U32(ctx, 31, 0x2C8920u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C8918u, 0x2C8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8920u;
label_2c8920:
    // 0x2c8920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8924:
    // 0x2c8924: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2c8928:
    if (ctx->pc == 0x2C8928u) {
        ctx->pc = 0x2C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8924u;
        // 0x2c8928: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C892Cu;
        goto label_2c892c;
    }
    ctx->pc = 0x2C8924u;
    {
        const bool branch_taken_0x2c8924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8924u;
        // 0x2c8928: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8924) {
            ctx->pc = 0x2C8944u;
            goto label_2c8944;
        }
    }
    ctx->pc = 0x2C892Cu;
label_2c892c:
    // 0x2c892c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2c892cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2c8930:
    // 0x2c8930: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c8930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c8934:
    // 0x2c8934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8938:
    // 0x2c8938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c8938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c893c:
    // 0x2c893c: 0xc0b225c  jal         func_2C8970
label_2c8940:
    if (ctx->pc == 0x2C8940u) {
        ctx->pc = 0x2C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C893Cu;
        // 0x2c8940: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8944u;
        goto label_2c8944;
    }
    ctx->pc = 0x2C893Cu;
    SET_GPR_U32(ctx, 31, 0x2C8944u);
    ctx->pc = 0x2C8940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C893Cu;
    // 0x2c8940: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8970u, 0x2C893Cu, 0x2C8944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8944u;
label_2c8944:
    // 0x2c8944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8948:
    // 0x2c8948: 0xc0a35d6  jal         func_28D758
label_2c894c:
    if (ctx->pc == 0x2C894Cu) {
        ctx->pc = 0x2C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8948u;
        // 0x2c894c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8950u;
        goto label_2c8950;
    }
    ctx->pc = 0x2C8948u;
    SET_GPR_U32(ctx, 31, 0x2C8950u);
    ctx->pc = 0x2C894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8948u;
    // 0x2c894c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C8948u, 0x2C8950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8950u;
label_2c8950:
    // 0x2c8950: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c8950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c8954:
    // 0x2c8954: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c8954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8958:
    // 0x2c8958: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c8958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c895c:
    // 0x2c895c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c895cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8960:
    // 0x2c8960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8964:
    // 0x2c8964: 0x3e00008  jr          $ra
label_2c8968:
    if (ctx->pc == 0x2C8968u) {
        ctx->pc = 0x2C8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8964u;
        // 0x2c8968: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C896Cu;
        goto label_2c896c;
    }
    ctx->pc = 0x2C8964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8964u;
        // 0x2c8968: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C896Cu;
label_2c896c:
    // 0x2c896c: 0x0  nop
    ctx->pc = 0x2c896cu;
    // NOP
    ctx->pc = 0x2c8970u;
}
