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

// Function: sub_001F7FE8
// Address: 0x1f7fe8 - 0x1f80c8
void sub_001F7FE8_0x1f7fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7FE8_0x1f7fe8");
#endif

    switch (ctx->pc) {
        case 0x1f7fe8u: goto label_1f7fe8;
        case 0x1f7fecu: goto label_1f7fec;
        case 0x1f7ff0u: goto label_1f7ff0;
        case 0x1f7ff4u: goto label_1f7ff4;
        case 0x1f7ff8u: goto label_1f7ff8;
        case 0x1f7ffcu: goto label_1f7ffc;
        case 0x1f8000u: goto label_1f8000;
        case 0x1f8004u: goto label_1f8004;
        case 0x1f8008u: goto label_1f8008;
        case 0x1f800cu: goto label_1f800c;
        case 0x1f8010u: goto label_1f8010;
        case 0x1f8014u: goto label_1f8014;
        case 0x1f8018u: goto label_1f8018;
        case 0x1f801cu: goto label_1f801c;
        case 0x1f8020u: goto label_1f8020;
        case 0x1f8024u: goto label_1f8024;
        case 0x1f8028u: goto label_1f8028;
        case 0x1f802cu: goto label_1f802c;
        case 0x1f8030u: goto label_1f8030;
        case 0x1f8034u: goto label_1f8034;
        case 0x1f8038u: goto label_1f8038;
        case 0x1f803cu: goto label_1f803c;
        case 0x1f8040u: goto label_1f8040;
        case 0x1f8044u: goto label_1f8044;
        case 0x1f8048u: goto label_1f8048;
        case 0x1f804cu: goto label_1f804c;
        case 0x1f8050u: goto label_1f8050;
        case 0x1f8054u: goto label_1f8054;
        case 0x1f8058u: goto label_1f8058;
        case 0x1f805cu: goto label_1f805c;
        case 0x1f8060u: goto label_1f8060;
        case 0x1f8064u: goto label_1f8064;
        case 0x1f8068u: goto label_1f8068;
        case 0x1f806cu: goto label_1f806c;
        case 0x1f8070u: goto label_1f8070;
        case 0x1f8074u: goto label_1f8074;
        case 0x1f8078u: goto label_1f8078;
        case 0x1f807cu: goto label_1f807c;
        case 0x1f8080u: goto label_1f8080;
        case 0x1f8084u: goto label_1f8084;
        case 0x1f8088u: goto label_1f8088;
        case 0x1f808cu: goto label_1f808c;
        case 0x1f8090u: goto label_1f8090;
        case 0x1f8094u: goto label_1f8094;
        case 0x1f8098u: goto label_1f8098;
        case 0x1f809cu: goto label_1f809c;
        case 0x1f80a0u: goto label_1f80a0;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80a8u: goto label_1f80a8;
        case 0x1f80acu: goto label_1f80ac;
        case 0x1f80b0u: goto label_1f80b0;
        case 0x1f80b4u: goto label_1f80b4;
        case 0x1f80b8u: goto label_1f80b8;
        case 0x1f80bcu: goto label_1f80bc;
        case 0x1f80c0u: goto label_1f80c0;
        case 0x1f80c4u: goto label_1f80c4;
        default: break;
    }

    ctx->pc = 0x1f7fe8u;

label_1f7fe8:
    // 0x1f7fe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f7fec:
    // 0x1f7fec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f7ff0:
    // 0x1f7ff0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f7ff4:
    // 0x1f7ff4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f7ff8:
    // 0x1f7ff8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f7ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f7ffc:
    // 0x1f7ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8000:
    // 0x1f8000: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f8000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f8004:
    // 0x1f8004: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x1f8004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_1f8008:
    // 0x1f8008: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f8008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f800c:
    // 0x1f800c: 0x2463d338  addiu       $v1, $v1, -0x2CC8
    ctx->pc = 0x1f800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955832));
label_1f8010:
    // 0x1f8010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8014:
    // 0x1f8014: 0x24c6d368  addiu       $a2, $a2, -0x2C98
    ctx->pc = 0x1f8014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955880));
label_1f8018:
    // 0x1f8018: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1f8018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1f801c:
    // 0x1f801c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f801cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f8020:
    // 0x1f8020: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1f8020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1f8024:
    // 0x1f8024: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1f8024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1f8028:
    // 0x1f8028: 0xc07e2cc  jal         func_1F8B30
label_1f802c:
    if (ctx->pc == 0x1F802Cu) {
        ctx->pc = 0x1F802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8028u;
        // 0x1f802c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8030u;
        goto label_1f8030;
    }
    ctx->pc = 0x1F8028u;
    SET_GPR_U32(ctx, 31, 0x1F8030u);
    ctx->pc = 0x1F802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8028u;
    // 0x1f802c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B30u, 0x1F8028u, 0x1F8030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8030u;
label_1f8030:
    // 0x1f8030: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f8030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f8034:
    // 0x1f8034: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1f8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1f8038:
    // 0x1f8038: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1f8038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1f803c:
    // 0x1f803c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f8040:
    // 0x1f8040: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8044:
    if (ctx->pc == 0x1F8044u) {
        ctx->pc = 0x1F8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8040u;
        // 0x1f8044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8048u;
        goto label_1f8048;
    }
    ctx->pc = 0x1F8040u;
    {
        const bool branch_taken_0x1f8040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8040u;
        // 0x1f8044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8040) {
            ctx->pc = 0x1F8070u;
            goto label_1f8070;
        }
    }
    ctx->pc = 0x1F8048u;
label_1f8048:
    // 0x1f8048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f8048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f804c:
    // 0x1f804c: 0xc1376d6  jal         func_4DDB58
label_1f8050:
    if (ctx->pc == 0x1F8050u) {
        ctx->pc = 0x1F8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F804Cu;
        // 0x1f8050: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8054u;
        goto label_1f8054;
    }
    ctx->pc = 0x1F804Cu;
    SET_GPR_U32(ctx, 31, 0x1F8054u);
    ctx->pc = 0x1F8050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F804Cu;
    // 0x1f8050: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1F804Cu, 0x1F8054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8054u;
label_1f8054:
    // 0x1f8054: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f8054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8058:
    // 0x1f8058: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f8058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f805c:
    // 0x1f805c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8060:
    // 0x1f8060: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f8060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f8064:
    // 0x1f8064: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8068:
    // 0x1f8068: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1f8068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1f806c:
    // 0x1f806c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f806cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f8070:
    // 0x1f8070: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f8070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8074:
    // 0x1f8074: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f8078:
    if (ctx->pc == 0x1F8078u) {
        ctx->pc = 0x1F8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8074u;
        // 0x1f8078: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F807Cu;
        goto label_1f807c;
    }
    ctx->pc = 0x1F8074u;
    {
        const bool branch_taken_0x1f8074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8074u;
        // 0x1f8078: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8074) {
            ctx->pc = 0x1F80A0u;
            goto label_1f80a0;
        }
    }
    ctx->pc = 0x1F807Cu;
label_1f807c:
    // 0x1f807c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1f807cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1f8080:
    // 0x1f8080: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f8084:
    // 0x1f8084: 0x24c67848  addiu       $a2, $a2, 0x7848
    ctx->pc = 0x1f8084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30792));
label_1f8088:
    // 0x1f8088: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1f8088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1f808c:
    // 0x1f808c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f8090:
    // 0x1f8090: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1f8090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1f8094:
    // 0x1f8094: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1f8094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1f8098:
    // 0x1f8098: 0x60f809  jalr        $v1
label_1f809c:
    if (ctx->pc == 0x1F809Cu) {
        ctx->pc = 0x1F809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8098u;
        // 0x1f809c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80A0u;
        goto label_1f80a0;
    }
    ctx->pc = 0x1F8098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F80A0u);
        ctx->pc = 0x1F809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8098u;
        // 0x1f809c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8098u, 0x1F80A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F80A0u;
label_1f80a0:
    // 0x1f80a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f80a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f80a4:
    // 0x1f80a4: 0xc06a39e  jal         func_1A8E78
label_1f80a8:
    if (ctx->pc == 0x1F80A8u) {
        ctx->pc = 0x1F80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80A4u;
        // 0x1f80a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80ACu;
        goto label_1f80ac;
    }
    ctx->pc = 0x1F80A4u;
    SET_GPR_U32(ctx, 31, 0x1F80ACu);
    ctx->pc = 0x1F80A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80A4u;
    // 0x1f80a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1F80A4u, 0x1F80ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80ACu;
label_1f80ac:
    // 0x1f80ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f80acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f80b0:
    // 0x1f80b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f80b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f80b4:
    // 0x1f80b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f80b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f80b8:
    // 0x1f80b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f80b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f80bc:
    // 0x1f80bc: 0x3e00008  jr          $ra
label_1f80c0:
    if (ctx->pc == 0x1F80C0u) {
        ctx->pc = 0x1F80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80BCu;
        // 0x1f80c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80C4u;
        goto label_1f80c4;
    }
    ctx->pc = 0x1F80BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80BCu;
        // 0x1f80c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F80BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F80C4u;
label_1f80c4:
    // 0x1f80c4: 0x0  nop
    ctx->pc = 0x1f80c4u;
    // NOP
    ctx->pc = 0x1f80c8u;
}
