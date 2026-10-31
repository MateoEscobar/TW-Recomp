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

// Function: sub_001E8020
// Address: 0x1e8020 - 0x1e8120
void sub_001E8020_0x1e8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8020_0x1e8020");
#endif

    switch (ctx->pc) {
        case 0x1e8020u: goto label_1e8020;
        case 0x1e8024u: goto label_1e8024;
        case 0x1e8028u: goto label_1e8028;
        case 0x1e802cu: goto label_1e802c;
        case 0x1e8030u: goto label_1e8030;
        case 0x1e8034u: goto label_1e8034;
        case 0x1e8038u: goto label_1e8038;
        case 0x1e803cu: goto label_1e803c;
        case 0x1e8040u: goto label_1e8040;
        case 0x1e8044u: goto label_1e8044;
        case 0x1e8048u: goto label_1e8048;
        case 0x1e804cu: goto label_1e804c;
        case 0x1e8050u: goto label_1e8050;
        case 0x1e8054u: goto label_1e8054;
        case 0x1e8058u: goto label_1e8058;
        case 0x1e805cu: goto label_1e805c;
        case 0x1e8060u: goto label_1e8060;
        case 0x1e8064u: goto label_1e8064;
        case 0x1e8068u: goto label_1e8068;
        case 0x1e806cu: goto label_1e806c;
        case 0x1e8070u: goto label_1e8070;
        case 0x1e8074u: goto label_1e8074;
        case 0x1e8078u: goto label_1e8078;
        case 0x1e807cu: goto label_1e807c;
        case 0x1e8080u: goto label_1e8080;
        case 0x1e8084u: goto label_1e8084;
        case 0x1e8088u: goto label_1e8088;
        case 0x1e808cu: goto label_1e808c;
        case 0x1e8090u: goto label_1e8090;
        case 0x1e8094u: goto label_1e8094;
        case 0x1e8098u: goto label_1e8098;
        case 0x1e809cu: goto label_1e809c;
        case 0x1e80a0u: goto label_1e80a0;
        case 0x1e80a4u: goto label_1e80a4;
        case 0x1e80a8u: goto label_1e80a8;
        case 0x1e80acu: goto label_1e80ac;
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80b4u: goto label_1e80b4;
        case 0x1e80b8u: goto label_1e80b8;
        case 0x1e80bcu: goto label_1e80bc;
        case 0x1e80c0u: goto label_1e80c0;
        case 0x1e80c4u: goto label_1e80c4;
        case 0x1e80c8u: goto label_1e80c8;
        case 0x1e80ccu: goto label_1e80cc;
        case 0x1e80d0u: goto label_1e80d0;
        case 0x1e80d4u: goto label_1e80d4;
        case 0x1e80d8u: goto label_1e80d8;
        case 0x1e80dcu: goto label_1e80dc;
        case 0x1e80e0u: goto label_1e80e0;
        case 0x1e80e4u: goto label_1e80e4;
        case 0x1e80e8u: goto label_1e80e8;
        case 0x1e80ecu: goto label_1e80ec;
        case 0x1e80f0u: goto label_1e80f0;
        case 0x1e80f4u: goto label_1e80f4;
        case 0x1e80f8u: goto label_1e80f8;
        case 0x1e80fcu: goto label_1e80fc;
        case 0x1e8100u: goto label_1e8100;
        case 0x1e8104u: goto label_1e8104;
        case 0x1e8108u: goto label_1e8108;
        case 0x1e810cu: goto label_1e810c;
        case 0x1e8110u: goto label_1e8110;
        case 0x1e8114u: goto label_1e8114;
        case 0x1e8118u: goto label_1e8118;
        case 0x1e811cu: goto label_1e811c;
        default: break;
    }

    ctx->pc = 0x1e8020u;

label_1e8020:
    // 0x1e8020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e8024:
    // 0x1e8024: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e8024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1e8028:
    // 0x1e8028: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e8028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e802c:
    // 0x1e802c: 0x2442ca00  addiu       $v0, $v0, -0x3600
    ctx->pc = 0x1e802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953472));
label_1e8030:
    // 0x1e8030: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e8030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1e8034:
    // 0x1e8034: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e8034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8038:
    // 0x1e8038: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e8038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1e803c:
    // 0x1e803c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e803cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8040:
    // 0x1e8040: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e8040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e8044:
    // 0x1e8044: 0x26440ad0  addiu       $a0, $s2, 0xAD0
    ctx->pc = 0x1e8044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2768));
label_1e8048:
    // 0x1e8048: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e8048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1e804c:
    // 0x1e804c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8050:
    // 0x1e8050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e8054:
    // 0x1e8054: 0x26500a00  addiu       $s0, $s2, 0xA00
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2560));
label_1e8058:
    // 0x1e8058: 0xc0733f0  jal         func_1CCFC0
label_1e805c:
    if (ctx->pc == 0x1E805Cu) {
        ctx->pc = 0x1E805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8058u;
        // 0x1e805c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8060u;
        goto label_1e8060;
    }
    ctx->pc = 0x1E8058u;
    SET_GPR_U32(ctx, 31, 0x1E8060u);
    ctx->pc = 0x1E805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8058u;
    // 0x1e805c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1E8058u, 0x1E8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8060u;
label_1e8060:
    // 0x1e8060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8064:
    // 0x1e8064: 0xc0733f0  jal         func_1CCFC0
label_1e8068:
    if (ctx->pc == 0x1E8068u) {
        ctx->pc = 0x1E8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8064u;
        // 0x1e8068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E806Cu;
        goto label_1e806c;
    }
    ctx->pc = 0x1E8064u;
    SET_GPR_U32(ctx, 31, 0x1E806Cu);
    ctx->pc = 0x1E8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8064u;
    // 0x1e8068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1E8064u, 0x1E806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E806Cu;
label_1e806c:
    // 0x1e806c: 0x26420790  addiu       $v0, $s2, 0x790
    ctx->pc = 0x1e806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
label_1e8070:
    // 0x1e8070: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e8074:
    if (ctx->pc == 0x1E8074u) {
        ctx->pc = 0x1E8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8070u;
        // 0x1e8074: 0x26510490  addiu       $s1, $s2, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8078u;
        goto label_1e8078;
    }
    ctx->pc = 0x1E8070u;
    {
        const bool branch_taken_0x1e8070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8070u;
        // 0x1e8074: 0x26510490  addiu       $s1, $s2, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8070) {
            ctx->pc = 0x1E80ACu;
            goto label_1e80ac;
        }
    }
    ctx->pc = 0x1E8078u;
label_1e8078:
    // 0x1e8078: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_1e807c:
    if (ctx->pc == 0x1E807Cu) {
        ctx->pc = 0x1E807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8078u;
        // 0x1e807c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8080u;
        goto label_1e8080;
    }
    ctx->pc = 0x1E8078u;
    {
        const bool branch_taken_0x1e8078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8078u;
        // 0x1e807c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8078) {
            ctx->pc = 0x1E80A8u;
            goto label_1e80a8;
        }
    }
    ctx->pc = 0x1E8080u;
label_1e8080:
    // 0x1e8080: 0x2610ff30  addiu       $s0, $s0, -0xD0
    ctx->pc = 0x1e8080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
label_1e8084:
    // 0x1e8084: 0x0  nop
    ctx->pc = 0x1e8084u;
    // NOP
label_1e8088:
    // 0x1e8088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e808c:
    // 0x1e808c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8090:
    // 0x1e8090: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e8090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e8094:
    // 0x1e8094: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e8094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e8098:
    // 0x1e8098: 0x60f809  jalr        $v1
label_1e809c:
    if (ctx->pc == 0x1E809Cu) {
        ctx->pc = 0x1E809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8098u;
        // 0x1e809c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80A0u;
        goto label_1e80a0;
    }
    ctx->pc = 0x1E8098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E80A0u);
        ctx->pc = 0x1E809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8098u;
        // 0x1e809c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8098u, 0x1E80A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E80A0u;
label_1e80a0:
    // 0x1e80a0: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1e80a4:
    if (ctx->pc == 0x1E80A4u) {
        ctx->pc = 0x1E80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80A0u;
        // 0x1e80a4: 0x2610ff30  addiu       $s0, $s0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80A8u;
        goto label_1e80a8;
    }
    ctx->pc = 0x1E80A0u;
    {
        const bool branch_taken_0x1e80a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80A0u;
        // 0x1e80a4: 0x2610ff30  addiu       $s0, $s0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80a0) {
            ctx->pc = 0x1E8088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8088;
        }
    }
    ctx->pc = 0x1E80A8u;
label_1e80a8:
    // 0x1e80a8: 0x26510490  addiu       $s1, $s2, 0x490
    ctx->pc = 0x1e80a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_1e80ac:
    // 0x1e80ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1e80b0:
    if (ctx->pc == 0x1E80B0u) {
        ctx->pc = 0x1E80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80ACu;
        // 0x1e80b0: 0x26530390  addiu       $s3, $s2, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80B4u;
        goto label_1e80b4;
    }
    ctx->pc = 0x1E80ACu;
    {
        const bool branch_taken_0x1e80ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80ACu;
        // 0x1e80b0: 0x26530390  addiu       $s3, $s2, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80ac) {
            ctx->pc = 0x1E80E8u;
            goto label_1e80e8;
        }
    }
    ctx->pc = 0x1E80B4u;
label_1e80b4:
    // 0x1e80b4: 0x26500790  addiu       $s0, $s2, 0x790
    ctx->pc = 0x1e80b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
label_1e80b8:
    // 0x1e80b8: 0x5230000c  beql        $s1, $s0, . + 4 + (0xC << 2)
label_1e80bc:
    if (ctx->pc == 0x1E80BCu) {
        ctx->pc = 0x1E80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80B8u;
        // 0x1e80bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80C0u;
        goto label_1e80c0;
    }
    ctx->pc = 0x1E80B8u;
    {
        const bool branch_taken_0x1e80b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e80b8) {
            ctx->pc = 0x1E80BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E80B8u;
            // 0x1e80bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E80ECu;
            goto label_1e80ec;
        }
    }
    ctx->pc = 0x1E80C0u;
label_1e80c0:
    // 0x1e80c0: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x1e80c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_1e80c4:
    // 0x1e80c4: 0x0  nop
    ctx->pc = 0x1e80c4u;
    // NOP
label_1e80c8:
    // 0x1e80c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e80c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e80cc:
    // 0x1e80cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e80d0:
    // 0x1e80d0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e80d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e80d4:
    // 0x1e80d4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e80d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e80d8:
    // 0x1e80d8: 0x60f809  jalr        $v1
label_1e80dc:
    if (ctx->pc == 0x1E80DCu) {
        ctx->pc = 0x1E80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80D8u;
        // 0x1e80dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80E0u;
        goto label_1e80e0;
    }
    ctx->pc = 0x1E80D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E80E0u);
        ctx->pc = 0x1E80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80D8u;
        // 0x1e80dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E80D8u, 0x1E80E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E80E0u;
label_1e80e0:
    // 0x1e80e0: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1e80e4:
    if (ctx->pc == 0x1E80E4u) {
        ctx->pc = 0x1E80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80E0u;
        // 0x1e80e4: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80E8u;
        goto label_1e80e8;
    }
    ctx->pc = 0x1E80E0u;
    {
        const bool branch_taken_0x1e80e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80E0u;
        // 0x1e80e4: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80e0) {
            ctx->pc = 0x1E80C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e80c8;
        }
    }
    ctx->pc = 0x1E80E8u;
label_1e80e8:
    // 0x1e80e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e80e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e80ec:
    // 0x1e80ec: 0xc06870c  jal         func_1A1C30
label_1e80f0:
    if (ctx->pc == 0x1E80F0u) {
        ctx->pc = 0x1E80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80ECu;
        // 0x1e80f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80F4u;
        goto label_1e80f4;
    }
    ctx->pc = 0x1E80ECu;
    SET_GPR_U32(ctx, 31, 0x1E80F4u);
    ctx->pc = 0x1E80F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80ECu;
    // 0x1e80f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E80ECu, 0x1E80F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E80F4u;
label_1e80f4:
    // 0x1e80f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e80f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e80f8:
    // 0x1e80f8: 0xc079e02  jal         func_1E7808
label_1e80fc:
    if (ctx->pc == 0x1E80FCu) {
        ctx->pc = 0x1E80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80F8u;
        // 0x1e80fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8100u;
        goto label_1e8100;
    }
    ctx->pc = 0x1E80F8u;
    SET_GPR_U32(ctx, 31, 0x1E8100u);
    ctx->pc = 0x1E80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80F8u;
    // 0x1e80fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7808u, 0x1E80F8u, 0x1E8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8100u;
label_1e8100:
    // 0x1e8100: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e8100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8104:
    // 0x1e8104: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e8104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8108:
    // 0x1e8108: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e8108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e810c:
    // 0x1e810c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e810cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8110:
    // 0x1e8110: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e8110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8114:
    // 0x1e8114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8118:
    // 0x1e8118: 0x3e00008  jr          $ra
label_1e811c:
    if (ctx->pc == 0x1E811Cu) {
        ctx->pc = 0x1E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8118u;
        // 0x1e811c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8120u;
        goto label_fallthrough_0x1e8118;
    }
    ctx->pc = 0x1E8118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8118u;
        // 0x1e811c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8118:
    ctx->pc = 0x1E8120u;
}
