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

// Function: sub_00205010
// Address: 0x205010 - 0x2050f0
void sub_00205010_0x205010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205010_0x205010");
#endif

    switch (ctx->pc) {
        case 0x205010u: goto label_205010;
        case 0x205014u: goto label_205014;
        case 0x205018u: goto label_205018;
        case 0x20501cu: goto label_20501c;
        case 0x205020u: goto label_205020;
        case 0x205024u: goto label_205024;
        case 0x205028u: goto label_205028;
        case 0x20502cu: goto label_20502c;
        case 0x205030u: goto label_205030;
        case 0x205034u: goto label_205034;
        case 0x205038u: goto label_205038;
        case 0x20503cu: goto label_20503c;
        case 0x205040u: goto label_205040;
        case 0x205044u: goto label_205044;
        case 0x205048u: goto label_205048;
        case 0x20504cu: goto label_20504c;
        case 0x205050u: goto label_205050;
        case 0x205054u: goto label_205054;
        case 0x205058u: goto label_205058;
        case 0x20505cu: goto label_20505c;
        case 0x205060u: goto label_205060;
        case 0x205064u: goto label_205064;
        case 0x205068u: goto label_205068;
        case 0x20506cu: goto label_20506c;
        case 0x205070u: goto label_205070;
        case 0x205074u: goto label_205074;
        case 0x205078u: goto label_205078;
        case 0x20507cu: goto label_20507c;
        case 0x205080u: goto label_205080;
        case 0x205084u: goto label_205084;
        case 0x205088u: goto label_205088;
        case 0x20508cu: goto label_20508c;
        case 0x205090u: goto label_205090;
        case 0x205094u: goto label_205094;
        case 0x205098u: goto label_205098;
        case 0x20509cu: goto label_20509c;
        case 0x2050a0u: goto label_2050a0;
        case 0x2050a4u: goto label_2050a4;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050acu: goto label_2050ac;
        case 0x2050b0u: goto label_2050b0;
        case 0x2050b4u: goto label_2050b4;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050bcu: goto label_2050bc;
        case 0x2050c0u: goto label_2050c0;
        case 0x2050c4u: goto label_2050c4;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ccu: goto label_2050cc;
        case 0x2050d0u: goto label_2050d0;
        case 0x2050d4u: goto label_2050d4;
        case 0x2050d8u: goto label_2050d8;
        case 0x2050dcu: goto label_2050dc;
        case 0x2050e0u: goto label_2050e0;
        case 0x2050e4u: goto label_2050e4;
        case 0x2050e8u: goto label_2050e8;
        case 0x2050ecu: goto label_2050ec;
        default: break;
    }

    ctx->pc = 0x205010u;

label_205010:
    // 0x205010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_205014:
    // 0x205014: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x205014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_205018:
    // 0x205018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x205018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20501c:
    // 0x20501c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_205020:
    // 0x205020: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x205020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_205024:
    // 0x205024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205028:
    // 0x205028: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x205028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20502c:
    // 0x20502c: 0x2442dbe8  addiu       $v0, $v0, -0x2418
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958056));
label_205030:
    // 0x205030: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x205030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_205034:
    // 0x205034: 0x2463dc10  addiu       $v1, $v1, -0x23F0
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958096));
label_205038:
    // 0x205038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20503c:
    // 0x20503c: 0x24c6dc40  addiu       $a2, $a2, -0x23C0
    ctx->pc = 0x20503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958144));
label_205040:
    // 0x205040: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x205040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_205044:
    // 0x205044: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x205044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205048:
    // 0x205048: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x205048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20504c:
    // 0x20504c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20504cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_205050:
    // 0x205050: 0xc08156c  jal         func_2055B0
label_205054:
    if (ctx->pc == 0x205054u) {
        ctx->pc = 0x205054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205050u;
        // 0x205054: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205058u;
        goto label_205058;
    }
    ctx->pc = 0x205050u;
    SET_GPR_U32(ctx, 31, 0x205058u);
    ctx->pc = 0x205054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205050u;
    // 0x205054: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x205050u, 0x205058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205058u;
label_205058:
    // 0x205058: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20505c:
    // 0x20505c: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_205060:
    // 0x205060: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x205060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_205064:
    // 0x205064: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205068:
    // 0x205068: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20506c:
    if (ctx->pc == 0x20506Cu) {
        ctx->pc = 0x20506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205068u;
        // 0x20506c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205070u;
        goto label_205070;
    }
    ctx->pc = 0x205068u;
    {
        const bool branch_taken_0x205068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205068u;
        // 0x20506c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205068) {
            ctx->pc = 0x205098u;
            goto label_205098;
        }
    }
    ctx->pc = 0x205070u;
label_205070:
    // 0x205070: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205074:
    // 0x205074: 0xc1376d6  jal         func_4DDB58
label_205078:
    if (ctx->pc == 0x205078u) {
        ctx->pc = 0x205078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205074u;
        // 0x205078: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20507Cu;
        goto label_20507c;
    }
    ctx->pc = 0x205074u;
    SET_GPR_U32(ctx, 31, 0x20507Cu);
    ctx->pc = 0x205078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205074u;
    // 0x205078: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x205074u, 0x20507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20507Cu;
label_20507c:
    // 0x20507c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205080:
    // 0x205080: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x205080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_205084:
    // 0x205084: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205088:
    // 0x205088: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20508c:
    // 0x20508c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205090:
    // 0x205090: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x205090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_205094:
    // 0x205094: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x205094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_205098:
    // 0x205098: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x205098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20509c:
    // 0x20509c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2050a0:
    if (ctx->pc == 0x2050A0u) {
        ctx->pc = 0x2050A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20509Cu;
        // 0x2050a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050A4u;
        goto label_2050a4;
    }
    ctx->pc = 0x20509Cu;
    {
        const bool branch_taken_0x20509c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20509Cu;
        // 0x2050a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20509c) {
            ctx->pc = 0x2050C8u;
            goto label_2050c8;
        }
    }
    ctx->pc = 0x2050A4u;
label_2050a4:
    // 0x2050a4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2050a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2050a8:
    // 0x2050a8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_2050ac:
    // 0x2050ac: 0x24c686d0  addiu       $a2, $a2, -0x7930
    ctx->pc = 0x2050acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936272));
label_2050b0:
    // 0x2050b0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x2050b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2050b4:
    // 0x2050b4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2050b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2050b8:
    // 0x2050b8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2050b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2050bc:
    // 0x2050bc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2050bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2050c0:
    // 0x2050c0: 0x60f809  jalr        $v1
label_2050c4:
    if (ctx->pc == 0x2050C4u) {
        ctx->pc = 0x2050C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C0u;
        // 0x2050c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050C8u;
        goto label_2050c8;
    }
    ctx->pc = 0x2050C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2050C8u);
        ctx->pc = 0x2050C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C0u;
        // 0x2050c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2050C0u, 0x2050C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2050C8u;
label_2050c8:
    // 0x2050c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2050c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2050cc:
    // 0x2050cc: 0xc06a39e  jal         func_1A8E78
label_2050d0:
    if (ctx->pc == 0x2050D0u) {
        ctx->pc = 0x2050D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050CCu;
        // 0x2050d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050D4u;
        goto label_2050d4;
    }
    ctx->pc = 0x2050CCu;
    SET_GPR_U32(ctx, 31, 0x2050D4u);
    ctx->pc = 0x2050D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050CCu;
    // 0x2050d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x2050CCu, 0x2050D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050D4u;
label_2050d4:
    // 0x2050d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2050d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2050d8:
    // 0x2050d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2050d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2050dc:
    // 0x2050dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2050dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2050e0:
    // 0x2050e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2050e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2050e4:
    // 0x2050e4: 0x3e00008  jr          $ra
label_2050e8:
    if (ctx->pc == 0x2050E8u) {
        ctx->pc = 0x2050E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050E4u;
        // 0x2050e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050ECu;
        goto label_2050ec;
    }
    ctx->pc = 0x2050E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2050E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050E4u;
        // 0x2050e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2050E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2050ECu;
label_2050ec:
    // 0x2050ec: 0x0  nop
    ctx->pc = 0x2050ecu;
    // NOP
    ctx->pc = 0x2050f0u;
}
