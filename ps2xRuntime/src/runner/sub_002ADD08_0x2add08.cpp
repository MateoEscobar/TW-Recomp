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

// Function: sub_002ADD08
// Address: 0x2add08 - 0x2ade10
void sub_002ADD08_0x2add08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADD08_0x2add08");
#endif

    switch (ctx->pc) {
        case 0x2add2cu: goto label_2add2c;
        case 0x2add34u: goto label_2add34;
        case 0x2add48u: goto label_2add48;
        case 0x2add58u: goto label_2add58;
        case 0x2add68u: goto label_2add68;
        case 0x2add70u: goto label_2add70;
        case 0x2adda0u: goto label_2adda0;
        case 0x2addacu: goto label_2addac;
        case 0x2addb4u: goto label_2addb4;
        case 0x2addd0u: goto label_2addd0;
        case 0x2adddcu: goto label_2adddc;
        case 0x2addf4u: goto label_2addf4;
        default: break;
    }

    ctx->pc = 0x2add08u;

    // 0x2add08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2add08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2add0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2add0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2add10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2add10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2add14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2add14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2add18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2add1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2add1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2add20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2add20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2add24: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2ADD24u;
    SET_GPR_U32(ctx, 31, 0x2ADD2Cu);
    ctx->pc = 0x2ADD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD24u;
    // 0x2add28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2ADD24u, 0x2ADD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD2Cu;
label_2add2c:
    // 0x2add2c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2ADD2Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD34u);
    ctx->pc = 0x2ADD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD2Cu;
    // 0x2add30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2ADD2Cu, 0x2ADD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD34u;
label_2add34:
    // 0x2add34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2add34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add38: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2ADD38u;
    {
        const bool branch_taken_0x2add38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD38u;
        // 0x2add3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add38) {
            ctx->pc = 0x2ADDF4u;
            goto label_2addf4;
        }
    }
    ctx->pc = 0x2ADD40u;
    // 0x2add40: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2ADD40u;
    SET_GPR_U32(ctx, 31, 0x2ADD48u);
    ctx->pc = 0x2ADD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD40u;
    // 0x2add44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2ADD40u, 0x2ADD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD48u;
label_2add48:
    // 0x2add48: 0x5051002b  beql        $v0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2ADD48u;
    {
        const bool branch_taken_0x2add48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2add48) {
            ctx->pc = 0x2ADD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADD48u;
            // 0x2add4c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADDF8u;
            goto label_2addf8;
        }
    }
    ctx->pc = 0x2ADD50u;
    // 0x2add50: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x2ADD50u;
    SET_GPR_U32(ctx, 31, 0x2ADD58u);
    ctx->pc = 0x2ADD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD50u;
    // 0x2add54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2ADD50u, 0x2ADD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD58u;
label_2add58:
    // 0x2add58: 0x50510027  beql        $v0, $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2ADD58u;
    {
        const bool branch_taken_0x2add58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2add58) {
            ctx->pc = 0x2ADD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADD58u;
            // 0x2add5c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADDF8u;
            goto label_2addf8;
        }
    }
    ctx->pc = 0x2ADD60u;
    // 0x2add60: 0xc087502  jal         func_21D408
    ctx->pc = 0x2ADD60u;
    SET_GPR_U32(ctx, 31, 0x2ADD68u);
    ctx->pc = 0x2ADD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD60u;
    // 0x2add64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ADD60u, 0x2ADD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD68u;
label_2add68:
    // 0x2add68: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2ADD68u;
    SET_GPR_U32(ctx, 31, 0x2ADD70u);
    ctx->pc = 0x2ADD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD68u;
    // 0x2add6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2ADD68u, 0x2ADD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD70u;
label_2add70:
    // 0x2add70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2add70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add74: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ADD74u;
    {
        const bool branch_taken_0x2add74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD74u;
        // 0x2add78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add74) {
            ctx->pc = 0x2ADDA0u;
            goto label_2adda0;
        }
    }
    ctx->pc = 0x2ADD7Cu;
    // 0x2add7c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2add7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2add80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2add80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2add84: 0x90460adb  lbu         $a2, 0xADB($v0)
    ctx->pc = 0x2add84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2779)));
    // 0x2add88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2add88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add8c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2add8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2add90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2add90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2add94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2add94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add98: 0xc0b010c  jal         func_2C0430
    ctx->pc = 0x2ADD98u;
    SET_GPR_U32(ctx, 31, 0x2ADDA0u);
    ctx->pc = 0x2ADD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD98u;
    // 0x2add9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0430u, 0x2ADD98u, 0x2ADDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDA0u;
label_2adda0:
    // 0x2adda0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2adda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adda4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2ADDA4u;
    SET_GPR_U32(ctx, 31, 0x2ADDACu);
    ctx->pc = 0x2ADDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDA4u;
    // 0x2adda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2ADDA4u, 0x2ADDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDACu;
label_2addac:
    // 0x2addac: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2ADDACu;
    SET_GPR_U32(ctx, 31, 0x2ADDB4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2ADDACu, 0x2ADDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDB4u;
label_2addb4:
    // 0x2addb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2addb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2addb8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADDB8u;
    {
        const bool branch_taken_0x2addb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDB8u;
        // 0x2addbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addb8) {
            ctx->pc = 0x2ADDD0u;
            goto label_2addd0;
        }
    }
    ctx->pc = 0x2ADDC0u;
    // 0x2addc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2addc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2addc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2addc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2addc8: 0xc0ab784  jal         func_2ADE10
    ctx->pc = 0x2ADDC8u;
    SET_GPR_U32(ctx, 31, 0x2ADDD0u);
    ctx->pc = 0x2ADDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDC8u;
    // 0x2addcc: 0x24070fa0  addiu       $a3, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADE10u, 0x2ADDC8u, 0x2ADDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDD0u;
label_2addd0:
    // 0x2addd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2addd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2addd4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2ADDD4u;
    SET_GPR_U32(ctx, 31, 0x2ADDDCu);
    ctx->pc = 0x2ADDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDD4u;
    // 0x2addd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2ADDD4u, 0x2ADDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDDCu;
label_2adddc:
    // 0x2adddc: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x2adddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x2adde0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2adde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2adde4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADDE4u;
    {
        const bool branch_taken_0x2adde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDE4u;
        // 0x2adde8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adde4) {
            ctx->pc = 0x2ADDF8u;
            goto label_2addf8;
        }
    }
    ctx->pc = 0x2ADDECu;
    // 0x2addec: 0xc05928a  jal         func_164A28
    ctx->pc = 0x2ADDECu;
    SET_GPR_U32(ctx, 31, 0x2ADDF4u);
    ctx->pc = 0x2ADDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDECu;
    // 0x2addf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A28u, 0x2ADDECu, 0x2ADDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDF4u;
label_2addf4:
    // 0x2addf4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2addf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2addf8:
    // 0x2addf8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2addf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2addfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2addfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ade00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ade00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ade04: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE04u;
        // 0x2ade08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADE0Cu;
    // 0x2ade0c: 0x0  nop
    ctx->pc = 0x2ade0cu;
    // NOP
    ctx->pc = 0x2ade10u;
}
