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

// Function: sub_002A7FF8
// Address: 0x2a7ff8 - 0x2a8190
void sub_002A7FF8_0x2a7ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7FF8_0x2a7ff8");
#endif

    switch (ctx->pc) {
        case 0x2a7ff8u: goto label_2a7ff8;
        case 0x2a7ffcu: goto label_2a7ffc;
        case 0x2a8000u: goto label_2a8000;
        case 0x2a8004u: goto label_2a8004;
        case 0x2a8008u: goto label_2a8008;
        case 0x2a800cu: goto label_2a800c;
        case 0x2a8010u: goto label_2a8010;
        case 0x2a8014u: goto label_2a8014;
        case 0x2a8018u: goto label_2a8018;
        case 0x2a801cu: goto label_2a801c;
        case 0x2a8020u: goto label_2a8020;
        case 0x2a8024u: goto label_2a8024;
        case 0x2a8028u: goto label_2a8028;
        case 0x2a802cu: goto label_2a802c;
        case 0x2a8030u: goto label_2a8030;
        case 0x2a8034u: goto label_2a8034;
        case 0x2a8038u: goto label_2a8038;
        case 0x2a803cu: goto label_2a803c;
        case 0x2a8040u: goto label_2a8040;
        case 0x2a8044u: goto label_2a8044;
        case 0x2a8048u: goto label_2a8048;
        case 0x2a804cu: goto label_2a804c;
        case 0x2a8050u: goto label_2a8050;
        case 0x2a8054u: goto label_2a8054;
        case 0x2a8058u: goto label_2a8058;
        case 0x2a805cu: goto label_2a805c;
        case 0x2a8060u: goto label_2a8060;
        case 0x2a8064u: goto label_2a8064;
        case 0x2a8068u: goto label_2a8068;
        case 0x2a806cu: goto label_2a806c;
        case 0x2a8070u: goto label_2a8070;
        case 0x2a8074u: goto label_2a8074;
        case 0x2a8078u: goto label_2a8078;
        case 0x2a807cu: goto label_2a807c;
        case 0x2a8080u: goto label_2a8080;
        case 0x2a8084u: goto label_2a8084;
        case 0x2a8088u: goto label_2a8088;
        case 0x2a808cu: goto label_2a808c;
        case 0x2a8090u: goto label_2a8090;
        case 0x2a8094u: goto label_2a8094;
        case 0x2a8098u: goto label_2a8098;
        case 0x2a809cu: goto label_2a809c;
        case 0x2a80a0u: goto label_2a80a0;
        case 0x2a80a4u: goto label_2a80a4;
        case 0x2a80a8u: goto label_2a80a8;
        case 0x2a80acu: goto label_2a80ac;
        case 0x2a80b0u: goto label_2a80b0;
        case 0x2a80b4u: goto label_2a80b4;
        case 0x2a80b8u: goto label_2a80b8;
        case 0x2a80bcu: goto label_2a80bc;
        case 0x2a80c0u: goto label_2a80c0;
        case 0x2a80c4u: goto label_2a80c4;
        case 0x2a80c8u: goto label_2a80c8;
        case 0x2a80ccu: goto label_2a80cc;
        case 0x2a80d0u: goto label_2a80d0;
        case 0x2a80d4u: goto label_2a80d4;
        case 0x2a80d8u: goto label_2a80d8;
        case 0x2a80dcu: goto label_2a80dc;
        case 0x2a80e0u: goto label_2a80e0;
        case 0x2a80e4u: goto label_2a80e4;
        case 0x2a80e8u: goto label_2a80e8;
        case 0x2a80ecu: goto label_2a80ec;
        case 0x2a80f0u: goto label_2a80f0;
        case 0x2a80f4u: goto label_2a80f4;
        case 0x2a80f8u: goto label_2a80f8;
        case 0x2a80fcu: goto label_2a80fc;
        case 0x2a8100u: goto label_2a8100;
        case 0x2a8104u: goto label_2a8104;
        case 0x2a8108u: goto label_2a8108;
        case 0x2a810cu: goto label_2a810c;
        case 0x2a8110u: goto label_2a8110;
        case 0x2a8114u: goto label_2a8114;
        case 0x2a8118u: goto label_2a8118;
        case 0x2a811cu: goto label_2a811c;
        case 0x2a8120u: goto label_2a8120;
        case 0x2a8124u: goto label_2a8124;
        case 0x2a8128u: goto label_2a8128;
        case 0x2a812cu: goto label_2a812c;
        case 0x2a8130u: goto label_2a8130;
        case 0x2a8134u: goto label_2a8134;
        case 0x2a8138u: goto label_2a8138;
        case 0x2a813cu: goto label_2a813c;
        case 0x2a8140u: goto label_2a8140;
        case 0x2a8144u: goto label_2a8144;
        case 0x2a8148u: goto label_2a8148;
        case 0x2a814cu: goto label_2a814c;
        case 0x2a8150u: goto label_2a8150;
        case 0x2a8154u: goto label_2a8154;
        case 0x2a8158u: goto label_2a8158;
        case 0x2a815cu: goto label_2a815c;
        case 0x2a8160u: goto label_2a8160;
        case 0x2a8164u: goto label_2a8164;
        case 0x2a8168u: goto label_2a8168;
        case 0x2a816cu: goto label_2a816c;
        case 0x2a8170u: goto label_2a8170;
        case 0x2a8174u: goto label_2a8174;
        case 0x2a8178u: goto label_2a8178;
        case 0x2a817cu: goto label_2a817c;
        case 0x2a8180u: goto label_2a8180;
        case 0x2a8184u: goto label_2a8184;
        case 0x2a8188u: goto label_2a8188;
        case 0x2a818cu: goto label_2a818c;
        default: break;
    }

    ctx->pc = 0x2a7ff8u;

label_2a7ff8:
    // 0x2a7ff8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a7ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2a7ffc:
    // 0x2a7ffc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2a7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2a8000:
    // 0x2a8000: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2a8000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2a8004:
    // 0x2a8004: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a8004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a8008:
    // 0x2a8008: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2a8008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2a800c:
    // 0x2a800c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a800cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8010:
    // 0x2a8010: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2a8010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2a8014:
    // 0x2a8014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a8014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a8018:
    // 0x2a8018: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a8018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2a801c:
    // 0x2a801c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2a801cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a8020:
    // 0x2a8020: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a8024:
    // 0x2a8024: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2a8024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2a8028:
    // 0x2a8028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a802c:
    // 0x2a802c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a802cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8030:
    // 0x2a8030: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a8030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8034:
    // 0x2a8034: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a8034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a8038:
    // 0x2a8038: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2a8038u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a803c:
    // 0x2a803c: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2a803cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2a8040:
    // 0x2a8040: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a8040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a8044:
    // 0x2a8044: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a8044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a8048:
    // 0x2a8048: 0xc105df6  jal         func_4177D8
label_2a804c:
    if (ctx->pc == 0x2A804Cu) {
        ctx->pc = 0x2A804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8048u;
        // 0x2a804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8050u;
        goto label_2a8050;
    }
    ctx->pc = 0x2A8048u;
    SET_GPR_U32(ctx, 31, 0x2A8050u);
    ctx->pc = 0x2A804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8048u;
    // 0x2a804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2A8048u, 0x2A8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8050u;
label_2a8050:
    // 0x2a8050: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2a8054:
    if (ctx->pc == 0x2A8054u) {
        ctx->pc = 0x2A8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8050u;
        // 0x2a8054: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8058u;
        goto label_2a8058;
    }
    ctx->pc = 0x2A8050u;
    {
        const bool branch_taken_0x2a8050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8050u;
        // 0x2a8054: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8050) {
            ctx->pc = 0x2A8094u;
            goto label_2a8094;
        }
    }
    ctx->pc = 0x2A8058u;
label_2a8058:
    // 0x2a8058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a805c:
    // 0x2a805c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a8060:
    // 0x2a8060: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a8060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8064:
    // 0x2a8064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8068:
    // 0x2a8068: 0xc105df6  jal         func_4177D8
label_2a806c:
    if (ctx->pc == 0x2A806Cu) {
        ctx->pc = 0x2A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8068u;
        // 0x2a806c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8070u;
        goto label_2a8070;
    }
    ctx->pc = 0x2A8068u;
    SET_GPR_U32(ctx, 31, 0x2A8070u);
    ctx->pc = 0x2A806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8068u;
    // 0x2a806c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2A8068u, 0x2A8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8070u;
label_2a8070:
    // 0x2a8070: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2a8074:
    if (ctx->pc == 0x2A8074u) {
        ctx->pc = 0x2A8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8070u;
        // 0x2a8074: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8078u;
        goto label_2a8078;
    }
    ctx->pc = 0x2A8070u;
    {
        const bool branch_taken_0x2a8070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8070u;
        // 0x2a8074: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8070) {
            ctx->pc = 0x2A8094u;
            goto label_2a8094;
        }
    }
    ctx->pc = 0x2A8078u;
label_2a8078:
    // 0x2a8078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a807c:
    // 0x2a807c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a8080:
    // 0x2a8080: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a8080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8084:
    // 0x2a8084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8088:
    // 0x2a8088: 0xc105df6  jal         func_4177D8
label_2a808c:
    if (ctx->pc == 0x2A808Cu) {
        ctx->pc = 0x2A808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8088u;
        // 0x2a808c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8090u;
        goto label_2a8090;
    }
    ctx->pc = 0x2A8088u;
    SET_GPR_U32(ctx, 31, 0x2A8090u);
    ctx->pc = 0x2A808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8088u;
    // 0x2a808c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2A8088u, 0x2A8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8090u;
label_2a8090:
    // 0x2a8090: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2a8090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2a8094:
    // 0x2a8094: 0xc10587a  jal         func_4161E8
label_2a8098:
    if (ctx->pc == 0x2A8098u) {
        ctx->pc = 0x2A8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8094u;
        // 0x2a8098: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A809Cu;
        goto label_2a809c;
    }
    ctx->pc = 0x2A8094u;
    SET_GPR_U32(ctx, 31, 0x2A809Cu);
    ctx->pc = 0x2A8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8094u;
    // 0x2a8098: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A8094u, 0x2A809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A809Cu;
label_2a809c:
    // 0x2a809c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a809cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a80a0:
    // 0x2a80a0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2a80a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_2a80a4:
    // 0x2a80a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a80a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a80a8:
    // 0x2a80a8: 0x24c6c310  addiu       $a2, $a2, -0x3CF0
    ctx->pc = 0x2a80a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951696));
label_2a80ac:
    // 0x2a80ac: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2a80acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_2a80b0:
    // 0x2a80b0: 0xc0a770e  jal         func_29DC38
label_2a80b4:
    if (ctx->pc == 0x2A80B4u) {
        ctx->pc = 0x2A80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80B0u;
        // 0x2a80b4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A80B8u;
        goto label_2a80b8;
    }
    ctx->pc = 0x2A80B0u;
    SET_GPR_U32(ctx, 31, 0x2A80B8u);
    ctx->pc = 0x2A80B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A80B0u;
    // 0x2a80b4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DC38u, 0x2A80B0u, 0x2A80B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A80B8u;
label_2a80b8:
    // 0x2a80b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a80b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a80bc:
    // 0x2a80bc: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
label_2a80c0:
    if (ctx->pc == 0x2A80C0u) {
        ctx->pc = 0x2A80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80BCu;
        // 0x2a80c0: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A80C4u;
        goto label_2a80c4;
    }
    ctx->pc = 0x2A80BCu;
    {
        const bool branch_taken_0x2a80bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80BCu;
        // 0x2a80c0: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80bc) {
            ctx->pc = 0x2A8170u;
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A80C4u;
label_2a80c4:
    // 0x2a80c4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a80c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a80c8:
    // 0x2a80c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a80c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a80cc:
    // 0x2a80cc: 0x0  nop
    ctx->pc = 0x2a80ccu;
    // NOP
label_2a80d0:
    // 0x2a80d0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_2a80d4:
    if (ctx->pc == 0x2A80D4u) {
        ctx->pc = 0x2A80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80D0u;
        // 0x2a80d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A80D8u;
        goto label_2a80d8;
    }
    ctx->pc = 0x2A80D0u;
    {
        const bool branch_taken_0x2a80d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80D0u;
        // 0x2a80d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80d0) {
            ctx->pc = 0x2A8174u;
            goto label_2a8174;
        }
    }
    ctx->pc = 0x2A80D8u;
label_2a80d8:
    // 0x2a80d8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2a80d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a80dc:
    // 0x2a80dc: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2a80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2a80e0:
    // 0x2a80e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a80e4:
    // 0x2a80e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a80e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a80e8:
    // 0x2a80e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a80ec:
    // 0x2a80ec: 0x40f809  jalr        $v0
label_2a80f0:
    if (ctx->pc == 0x2A80F0u) {
        ctx->pc = 0x2A80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80ECu;
        // 0x2a80f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A80F4u;
        goto label_2a80f4;
    }
    ctx->pc = 0x2A80ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A80F4u);
        ctx->pc = 0x2A80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80ECu;
        // 0x2a80f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A80ECu, 0x2A80F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A80F4u;
label_2a80f4:
    // 0x2a80f4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2a80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2a80f8:
    // 0x2a80f8: 0x26844b00  addiu       $a0, $s4, 0x4B00
    ctx->pc = 0x2a80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 19200));
label_2a80fc:
    // 0x2a80fc: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2a80fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2a8100:
    // 0x2a8100: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a8100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a8104:
    // 0x2a8104: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a8104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8108:
    // 0x2a8108: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a8108u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a810c:
    // 0x2a810c: 0xc0a4e54  jal         func_293950
label_2a8110:
    if (ctx->pc == 0x2A8110u) {
        ctx->pc = 0x2A8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A810Cu;
        // 0x2a8110: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8114u;
        goto label_2a8114;
    }
    ctx->pc = 0x2A810Cu;
    SET_GPR_U32(ctx, 31, 0x2A8114u);
    ctx->pc = 0x2A8110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A810Cu;
    // 0x2a8110: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A810Cu, 0x2A8114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8114u;
label_2a8114:
    // 0x2a8114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8118:
    // 0x2a8118: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_2a811c:
    if (ctx->pc == 0x2A811Cu) {
        ctx->pc = 0x2A811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8118u;
        // 0x2a811c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8120u;
        goto label_2a8120;
    }
    ctx->pc = 0x2A8118u;
    {
        const bool branch_taken_0x2a8118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8118) {
            ctx->pc = 0x2A811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8118u;
            // 0x2a811c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8168u;
            goto label_2a8168;
        }
    }
    ctx->pc = 0x2A8120u;
label_2a8120:
    // 0x2a8120: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a8120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a8124:
    // 0x2a8124: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a8124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8128:
    // 0x2a8128: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a812c:
    // 0x2a812c: 0x40f809  jalr        $v0
label_2a8130:
    if (ctx->pc == 0x2A8130u) {
        ctx->pc = 0x2A8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A812Cu;
        // 0x2a8130: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8134u;
        goto label_2a8134;
    }
    ctx->pc = 0x2A812Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8134u);
        ctx->pc = 0x2A8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A812Cu;
        // 0x2a8130: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A812Cu, 0x2A8134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8134u;
label_2a8134:
    // 0x2a8134: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2a8134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2a8138:
    // 0x2a8138: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a813c:
    // 0x2a813c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a813cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8140:
    // 0x2a8140: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a8140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a8144:
    // 0x2a8144: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a8144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a8148:
    // 0x2a8148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a814c:
    // 0x2a814c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a814cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a8150:
    // 0x2a8150: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8154:
    // 0x2a8154: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a8154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8158:
    // 0x2a8158: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a815c:
    // 0x2a815c: 0xc0b3102  jal         func_2CC408
label_2a8160:
    if (ctx->pc == 0x2A8160u) {
        ctx->pc = 0x2A8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A815Cu;
        // 0x2a8160: 0x340aea60  ori         $t2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8164u;
        goto label_2a8164;
    }
    ctx->pc = 0x2A815Cu;
    SET_GPR_U32(ctx, 31, 0x2A8164u);
    ctx->pc = 0x2A8160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A815Cu;
    // 0x2a8160: 0x340aea60  ori         $t2, $zero, 0xEA60 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC408u, 0x2A815Cu, 0x2A8164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8164u;
label_2a8164:
    // 0x2a8164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a8164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a8168:
    // 0x2a8168: 0xc0a35d6  jal         func_28D758
label_2a816c:
    if (ctx->pc == 0x2A816Cu) {
        ctx->pc = 0x2A816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8168u;
        // 0x2a816c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8170u;
        goto label_2a8170;
    }
    ctx->pc = 0x2A8168u;
    SET_GPR_U32(ctx, 31, 0x2A8170u);
    ctx->pc = 0x2A816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8168u;
    // 0x2a816c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A8168u, 0x2A8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8170u;
label_2a8170:
    // 0x2a8170: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2a8170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a8174:
    // 0x2a8174: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2a8174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8178:
    // 0x2a8178: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a8178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a817c:
    // 0x2a817c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a817cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8180:
    // 0x2a8180: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2a8180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a8184:
    // 0x2a8184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8188:
    // 0x2a8188: 0x3e00008  jr          $ra
label_2a818c:
    if (ctx->pc == 0x2A818Cu) {
        ctx->pc = 0x2A818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8188u;
        // 0x2a818c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8190u;
        goto label_fallthrough_0x2a8188;
    }
    ctx->pc = 0x2A8188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8188u;
        // 0x2a818c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a8188:
    ctx->pc = 0x2A8190u;
}
