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

// Function: sub_00247FC0
// Address: 0x247fc0 - 0x248110
void sub_00247FC0_0x247fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247FC0_0x247fc0");
#endif

    switch (ctx->pc) {
        case 0x247fc0u: goto label_247fc0;
        case 0x247fc4u: goto label_247fc4;
        case 0x247fc8u: goto label_247fc8;
        case 0x247fccu: goto label_247fcc;
        case 0x247fd0u: goto label_247fd0;
        case 0x247fd4u: goto label_247fd4;
        case 0x247fd8u: goto label_247fd8;
        case 0x247fdcu: goto label_247fdc;
        case 0x247fe0u: goto label_247fe0;
        case 0x247fe4u: goto label_247fe4;
        case 0x247fe8u: goto label_247fe8;
        case 0x247fecu: goto label_247fec;
        case 0x247ff0u: goto label_247ff0;
        case 0x247ff4u: goto label_247ff4;
        case 0x247ff8u: goto label_247ff8;
        case 0x247ffcu: goto label_247ffc;
        case 0x248000u: goto label_248000;
        case 0x248004u: goto label_248004;
        case 0x248008u: goto label_248008;
        case 0x24800cu: goto label_24800c;
        case 0x248010u: goto label_248010;
        case 0x248014u: goto label_248014;
        case 0x248018u: goto label_248018;
        case 0x24801cu: goto label_24801c;
        case 0x248020u: goto label_248020;
        case 0x248024u: goto label_248024;
        case 0x248028u: goto label_248028;
        case 0x24802cu: goto label_24802c;
        case 0x248030u: goto label_248030;
        case 0x248034u: goto label_248034;
        case 0x248038u: goto label_248038;
        case 0x24803cu: goto label_24803c;
        case 0x248040u: goto label_248040;
        case 0x248044u: goto label_248044;
        case 0x248048u: goto label_248048;
        case 0x24804cu: goto label_24804c;
        case 0x248050u: goto label_248050;
        case 0x248054u: goto label_248054;
        case 0x248058u: goto label_248058;
        case 0x24805cu: goto label_24805c;
        case 0x248060u: goto label_248060;
        case 0x248064u: goto label_248064;
        case 0x248068u: goto label_248068;
        case 0x24806cu: goto label_24806c;
        case 0x248070u: goto label_248070;
        case 0x248074u: goto label_248074;
        case 0x248078u: goto label_248078;
        case 0x24807cu: goto label_24807c;
        case 0x248080u: goto label_248080;
        case 0x248084u: goto label_248084;
        case 0x248088u: goto label_248088;
        case 0x24808cu: goto label_24808c;
        case 0x248090u: goto label_248090;
        case 0x248094u: goto label_248094;
        case 0x248098u: goto label_248098;
        case 0x24809cu: goto label_24809c;
        case 0x2480a0u: goto label_2480a0;
        case 0x2480a4u: goto label_2480a4;
        case 0x2480a8u: goto label_2480a8;
        case 0x2480acu: goto label_2480ac;
        case 0x2480b0u: goto label_2480b0;
        case 0x2480b4u: goto label_2480b4;
        case 0x2480b8u: goto label_2480b8;
        case 0x2480bcu: goto label_2480bc;
        case 0x2480c0u: goto label_2480c0;
        case 0x2480c4u: goto label_2480c4;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480ccu: goto label_2480cc;
        case 0x2480d0u: goto label_2480d0;
        case 0x2480d4u: goto label_2480d4;
        case 0x2480d8u: goto label_2480d8;
        case 0x2480dcu: goto label_2480dc;
        case 0x2480e0u: goto label_2480e0;
        case 0x2480e4u: goto label_2480e4;
        case 0x2480e8u: goto label_2480e8;
        case 0x2480ecu: goto label_2480ec;
        case 0x2480f0u: goto label_2480f0;
        case 0x2480f4u: goto label_2480f4;
        case 0x2480f8u: goto label_2480f8;
        case 0x2480fcu: goto label_2480fc;
        case 0x248100u: goto label_248100;
        case 0x248104u: goto label_248104;
        case 0x248108u: goto label_248108;
        case 0x24810cu: goto label_24810c;
        default: break;
    }

    ctx->pc = 0x247fc0u;

label_247fc0:
    // 0x247fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_247fc4:
    // 0x247fc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_247fc8:
    // 0x247fc8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x247fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_247fcc:
    // 0x247fcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x247fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247fd0:
    // 0x247fd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x247fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_247fd4:
    // 0x247fd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x247fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247fd8:
    // 0x247fd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x247fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_247fdc:
    // 0x247fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_247fe0:
    // 0x247fe0: 0xc089bfc  jal         func_226FF0
label_247fe4:
    if (ctx->pc == 0x247FE4u) {
        ctx->pc = 0x247FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FE0u;
        // 0x247fe4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247FE8u;
        goto label_247fe8;
    }
    ctx->pc = 0x247FE0u;
    SET_GPR_U32(ctx, 31, 0x247FE8u);
    ctx->pc = 0x247FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FE0u;
    // 0x247fe4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x247FE0u, 0x247FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FE8u;
label_247fe8:
    // 0x247fe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247fec:
    // 0x247fec: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_247ff0:
    if (ctx->pc == 0x247FF0u) {
        ctx->pc = 0x247FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FECu;
        // 0x247ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247FF4u;
        goto label_247ff4;
    }
    ctx->pc = 0x247FECu;
    {
        const bool branch_taken_0x247fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FECu;
        // 0x247ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fec) {
            ctx->pc = 0x248014u;
            goto label_248014;
        }
    }
    ctx->pc = 0x247FF4u;
label_247ff4:
    // 0x247ff4: 0xc08a61a  jal         func_229868
label_247ff8:
    if (ctx->pc == 0x247FF8u) {
        ctx->pc = 0x247FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FF4u;
        // 0x247ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247FFCu;
        goto label_247ffc;
    }
    ctx->pc = 0x247FF4u;
    SET_GPR_U32(ctx, 31, 0x247FFCu);
    ctx->pc = 0x247FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FF4u;
    // 0x247ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x247FF4u, 0x247FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FFCu;
label_247ffc:
    // 0x247ffc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_248000:
    if (ctx->pc == 0x248000u) {
        ctx->pc = 0x248000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FFCu;
        // 0x248000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248004u;
        goto label_248004;
    }
    ctx->pc = 0x247FFCu;
    {
        const bool branch_taken_0x247ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247ffc) {
            ctx->pc = 0x248000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247FFCu;
            // 0x248000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248014u;
            goto label_248014;
        }
    }
    ctx->pc = 0x248004u;
label_248004:
    // 0x248004: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x248004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_248008:
    // 0x248008: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_24800c:
    if (ctx->pc == 0x24800Cu) {
        ctx->pc = 0x24800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248008u;
        // 0x24800c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248010u;
        goto label_248010;
    }
    ctx->pc = 0x248008u;
    {
        const bool branch_taken_0x248008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x248008) {
            ctx->pc = 0x24800Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248008u;
            // 0x24800c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248028u;
            goto label_248028;
        }
    }
    ctx->pc = 0x248010u;
label_248010:
    // 0x248010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x248010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_248014:
    // 0x248014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x248014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_248018:
    // 0x248018: 0xc08700c  jal         func_21C030
label_24801c:
    if (ctx->pc == 0x24801Cu) {
        ctx->pc = 0x24801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248018u;
        // 0x24801c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248020u;
        goto label_248020;
    }
    ctx->pc = 0x248018u;
    SET_GPR_U32(ctx, 31, 0x248020u);
    ctx->pc = 0x24801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248018u;
    // 0x24801c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248018u, 0x248020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248020u;
label_248020:
    // 0x248020: 0x10000035  b           . + 4 + (0x35 << 2)
label_248024:
    if (ctx->pc == 0x248024u) {
        ctx->pc = 0x248024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248020u;
        // 0x248024: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248028u;
        goto label_248028;
    }
    ctx->pc = 0x248020u;
    {
        const bool branch_taken_0x248020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248020u;
        // 0x248024: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248020) {
            ctx->pc = 0x2480F8u;
            goto label_2480f8;
        }
    }
    ctx->pc = 0x248028u;
label_248028:
    // 0x248028: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x248028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_24802c:
    // 0x24802c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x24802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_248030:
    // 0x248030: 0x40f809  jalr        $v0
label_248034:
    if (ctx->pc == 0x248034u) {
        ctx->pc = 0x248034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248030u;
        // 0x248034: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248038u;
        goto label_248038;
    }
    ctx->pc = 0x248030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248038u);
        ctx->pc = 0x248034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248030u;
        // 0x248034: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248030u, 0x248038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248038u;
label_248038:
    // 0x248038: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x248038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_24803c:
    // 0x24803c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_248040:
    // 0x248040: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_248044:
    if (ctx->pc == 0x248044u) {
        ctx->pc = 0x248044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248040u;
        // 0x248044: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248048u;
        goto label_248048;
    }
    ctx->pc = 0x248040u;
    {
        const bool branch_taken_0x248040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248040) {
            ctx->pc = 0x248044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248040u;
            // 0x248044: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2480F8u;
            goto label_2480f8;
        }
    }
    ctx->pc = 0x248048u;
label_248048:
    // 0x248048: 0xc0e57ce  jal         func_395F38
label_24804c:
    if (ctx->pc == 0x24804Cu) {
        ctx->pc = 0x24804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248048u;
        // 0x24804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248050u;
        goto label_248050;
    }
    ctx->pc = 0x248048u;
    SET_GPR_U32(ctx, 31, 0x248050u);
    ctx->pc = 0x24804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248048u;
    // 0x24804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x248048u, 0x248050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248050u;
label_248050:
    // 0x248050: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x248050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_248054:
    // 0x248054: 0x94450112  lhu         $a1, 0x112($v0)
    ctx->pc = 0x248054u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_248058:
    // 0x248058: 0xc0e44cc  jal         func_391330
label_24805c:
    if (ctx->pc == 0x24805Cu) {
        ctx->pc = 0x24805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248058u;
        // 0x24805c: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248060u;
        goto label_248060;
    }
    ctx->pc = 0x248058u;
    SET_GPR_U32(ctx, 31, 0x248060u);
    ctx->pc = 0x24805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248058u;
    // 0x24805c: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x248058u, 0x248060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248060u;
label_248060:
    // 0x248060: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_248064:
    // 0x248064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x248064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248068:
    // 0x248068: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x248068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_24806c:
    // 0x24806c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x24806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_248070:
    // 0x248070: 0x40f809  jalr        $v0
label_248074:
    if (ctx->pc == 0x248074u) {
        ctx->pc = 0x248074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248070u;
        // 0x248074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248078u;
        goto label_248078;
    }
    ctx->pc = 0x248070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248078u);
        ctx->pc = 0x248074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248070u;
        // 0x248074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248070u, 0x248078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248078u;
label_248078:
    // 0x248078: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x248078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_24807c:
    // 0x24807c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_248080:
    // 0x248080: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_248084:
    if (ctx->pc == 0x248084u) {
        ctx->pc = 0x248084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248080u;
        // 0x248084: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248088u;
        goto label_248088;
    }
    ctx->pc = 0x248080u;
    {
        const bool branch_taken_0x248080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248080u;
        // 0x248084: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248080) {
            ctx->pc = 0x2480C0u;
            goto label_2480c0;
        }
    }
    ctx->pc = 0x248088u;
label_248088:
    // 0x248088: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x248088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24808c:
    // 0x24808c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24808cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_248090:
    // 0x248090: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_248094:
    // 0x248094: 0x82220084  lb          $v0, 0x84($s1)
    ctx->pc = 0x248094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
label_248098:
    // 0x248098: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_24809c:
    if (ctx->pc == 0x24809Cu) {
        ctx->pc = 0x24809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248098u;
        // 0x24809c: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480A0u;
        goto label_2480a0;
    }
    ctx->pc = 0x248098u;
    {
        const bool branch_taken_0x248098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248098u;
        // 0x24809c: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248098) {
            ctx->pc = 0x2480E8u;
            goto label_2480e8;
        }
    }
    ctx->pc = 0x2480A0u;
label_2480a0:
    // 0x2480a0: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x2480a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2480a4:
    // 0x2480a4: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x2480a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2480a8:
    // 0x2480a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2480a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2480ac:
    // 0x2480ac: 0x46006028  max.s       $f0, $f12, $f0
    ctx->pc = 0x2480acu;
    ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
label_2480b0:
    // 0x2480b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2480b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2480b4:
    // 0x2480b4: 0x46010328  max.s       $f12, $f0, $f1
    ctx->pc = 0x2480b4u;
    ctx->f[12] = std::max(ctx->f[0], ctx->f[1]);
label_2480b8:
    // 0x2480b8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2480bc:
    if (ctx->pc == 0x2480BCu) {
        ctx->pc = 0x2480BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480B8u;
        // 0x2480bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480C0u;
        goto label_2480c0;
    }
    ctx->pc = 0x2480B8u;
    {
        const bool branch_taken_0x2480b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480B8u;
        // 0x2480bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480b8) {
            ctx->pc = 0x2480ECu;
            goto label_2480ec;
        }
    }
    ctx->pc = 0x2480C0u;
label_2480c0:
    // 0x2480c0: 0x82230086  lb          $v1, 0x86($s1)
    ctx->pc = 0x2480c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
label_2480c4:
    // 0x2480c4: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x2480c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2480c8:
    // 0x2480c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2480cc:
    // 0x2480cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2480ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2480d0:
    // 0x2480d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2480d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2480d4:
    // 0x2480d4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2480d8:
    if (ctx->pc == 0x2480D8u) {
        ctx->pc = 0x2480D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480D4u;
        // 0x2480d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480DCu;
        goto label_2480dc;
    }
    ctx->pc = 0x2480D4u;
    {
        const bool branch_taken_0x2480d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2480D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480D4u;
        // 0x2480d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480d4) {
            ctx->pc = 0x2480ECu;
            goto label_2480ec;
        }
    }
    ctx->pc = 0x2480DCu;
label_2480dc:
    // 0x2480dc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2480dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2480e0:
    // 0x2480e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2480e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2480e4:
    // 0x2480e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2480e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2480e8:
    // 0x2480e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2480e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2480ec:
    // 0x2480ec: 0xc091efa  jal         func_247BE8
label_2480f0:
    if (ctx->pc == 0x2480F0u) {
        ctx->pc = 0x2480F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480ECu;
        // 0x2480f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480F4u;
        goto label_2480f4;
    }
    ctx->pc = 0x2480ECu;
    SET_GPR_U32(ctx, 31, 0x2480F4u);
    ctx->pc = 0x2480F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480ECu;
    // 0x2480f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BE8u, 0x2480ECu, 0x2480F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480F4u;
label_2480f4:
    // 0x2480f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2480f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2480f8:
    // 0x2480f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2480f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2480fc:
    // 0x2480fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2480fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248100:
    // 0x248100: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x248100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248104:
    // 0x248104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248108:
    // 0x248108: 0x3e00008  jr          $ra
label_24810c:
    if (ctx->pc == 0x24810Cu) {
        ctx->pc = 0x24810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248108u;
        // 0x24810c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248110u;
        goto label_fallthrough_0x248108;
    }
    ctx->pc = 0x248108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248108u;
        // 0x24810c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248108:
    ctx->pc = 0x248110u;
}
