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

// Function: sub_004A7138
// Address: 0x4a7138 - 0x4a71e8
void sub_004A7138_0x4a7138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7138_0x4a7138");
#endif

    switch (ctx->pc) {
        case 0x4a7138u: goto label_4a7138;
        case 0x4a713cu: goto label_4a713c;
        case 0x4a7140u: goto label_4a7140;
        case 0x4a7144u: goto label_4a7144;
        case 0x4a7148u: goto label_4a7148;
        case 0x4a714cu: goto label_4a714c;
        case 0x4a7150u: goto label_4a7150;
        case 0x4a7154u: goto label_4a7154;
        case 0x4a7158u: goto label_4a7158;
        case 0x4a715cu: goto label_4a715c;
        case 0x4a7160u: goto label_4a7160;
        case 0x4a7164u: goto label_4a7164;
        case 0x4a7168u: goto label_4a7168;
        case 0x4a716cu: goto label_4a716c;
        case 0x4a7170u: goto label_4a7170;
        case 0x4a7174u: goto label_4a7174;
        case 0x4a7178u: goto label_4a7178;
        case 0x4a717cu: goto label_4a717c;
        case 0x4a7180u: goto label_4a7180;
        case 0x4a7184u: goto label_4a7184;
        case 0x4a7188u: goto label_4a7188;
        case 0x4a718cu: goto label_4a718c;
        case 0x4a7190u: goto label_4a7190;
        case 0x4a7194u: goto label_4a7194;
        case 0x4a7198u: goto label_4a7198;
        case 0x4a719cu: goto label_4a719c;
        case 0x4a71a0u: goto label_4a71a0;
        case 0x4a71a4u: goto label_4a71a4;
        case 0x4a71a8u: goto label_4a71a8;
        case 0x4a71acu: goto label_4a71ac;
        case 0x4a71b0u: goto label_4a71b0;
        case 0x4a71b4u: goto label_4a71b4;
        case 0x4a71b8u: goto label_4a71b8;
        case 0x4a71bcu: goto label_4a71bc;
        case 0x4a71c0u: goto label_4a71c0;
        case 0x4a71c4u: goto label_4a71c4;
        case 0x4a71c8u: goto label_4a71c8;
        case 0x4a71ccu: goto label_4a71cc;
        case 0x4a71d0u: goto label_4a71d0;
        case 0x4a71d4u: goto label_4a71d4;
        case 0x4a71d8u: goto label_4a71d8;
        case 0x4a71dcu: goto label_4a71dc;
        case 0x4a71e0u: goto label_4a71e0;
        case 0x4a71e4u: goto label_4a71e4;
        default: break;
    }

    ctx->pc = 0x4a7138u;

label_4a7138:
    // 0x4a7138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a7138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a713c:
    // 0x4a713c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a7140:
    // 0x4a7140: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a7140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a7144:
    // 0x4a7144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a7144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a7148:
    // 0x4a7148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a7148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a714c:
    // 0x4a714c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a714cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a7150:
    // 0x4a7150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a7150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a7154:
    // 0x4a7154: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x4a7154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4a7158:
    // 0x4a7158: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4a715c:
    if (ctx->pc == 0x4A715Cu) {
        ctx->pc = 0x4A715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7158u;
        // 0x4a715c: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7160u;
        goto label_4a7160;
    }
    ctx->pc = 0x4A7158u;
    {
        const bool branch_taken_0x4a7158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7158u;
        // 0x4a715c: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7158) {
            ctx->pc = 0x4A7178u;
            goto label_4a7178;
        }
    }
    ctx->pc = 0x4A7160u;
label_4a7160:
    // 0x4a7160: 0x2642ad18  addiu       $v0, $s2, -0x52E8
    ctx->pc = 0x4a7160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946072));
label_4a7164:
    // 0x4a7164: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x4a7164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_4a7168:
    // 0x4a7168: 0x60f809  jalr        $v1
label_4a716c:
    if (ctx->pc == 0x4A716Cu) {
        ctx->pc = 0x4A7170u;
        goto label_4a7170;
    }
    ctx->pc = 0x4A7168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A7170u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7168u, 0x4A7170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7170u;
label_4a7170:
    // 0x4a7170: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4a7170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4a7174:
    // 0x4a7174: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4a7174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_4a7178:
    // 0x4a7178: 0x2643ad18  addiu       $v1, $s2, -0x52E8
    ctx->pc = 0x4a7178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946072));
label_4a717c:
    // 0x4a717c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a717cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a7180:
    // 0x4a7180: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x4a7180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_4a7184:
    // 0x4a7184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a7184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7188:
    // 0x4a7188: 0x40f809  jalr        $v0
label_4a718c:
    if (ctx->pc == 0x4A718Cu) {
        ctx->pc = 0x4A718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7188u;
        // 0x4a718c: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7190u;
        goto label_4a7190;
    }
    ctx->pc = 0x4A7188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A7190u);
        ctx->pc = 0x4A718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7188u;
        // 0x4a718c: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7188u, 0x4A7190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7190u;
label_4a7190:
    // 0x4a7190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a7194:
    if (ctx->pc == 0x4A7194u) {
        ctx->pc = 0x4A7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7190u;
        // 0x4a7194: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7198u;
        goto label_4a7198;
    }
    ctx->pc = 0x4A7190u;
    {
        const bool branch_taken_0x4a7190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7190u;
        // 0x4a7194: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7190) {
            ctx->pc = 0x4A71A0u;
            goto label_4a71a0;
        }
    }
    ctx->pc = 0x4A7198u;
label_4a7198:
    // 0x4a7198: 0x1000000b  b           . + 4 + (0xB << 2)
label_4a719c:
    if (ctx->pc == 0x4A719Cu) {
        ctx->pc = 0x4A719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7198u;
        // 0x4a719c: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A71A0u;
        goto label_4a71a0;
    }
    ctx->pc = 0x4A7198u;
    {
        const bool branch_taken_0x4a7198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7198u;
        // 0x4a719c: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7198) {
            ctx->pc = 0x4A71C8u;
            goto label_4a71c8;
        }
    }
    ctx->pc = 0x4A71A0u;
label_4a71a0:
    // 0x4a71a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a71a4:
    // 0x4a71a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a71a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a71a8:
    // 0x4a71a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a71a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a71ac:
    // 0x4a71ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a71acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a71b0:
    // 0x4a71b0: 0xc11eff2  jal         func_47BFC8
label_4a71b4:
    if (ctx->pc == 0x4A71B4u) {
        ctx->pc = 0x4A71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71B0u;
        // 0x4a71b4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A71B8u;
        goto label_4a71b8;
    }
    ctx->pc = 0x4A71B0u;
    SET_GPR_U32(ctx, 31, 0x4A71B8u);
    ctx->pc = 0x4A71B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A71B0u;
    // 0x4a71b4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A71B0u, 0x4A71B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A71B8u;
label_4a71b8:
    // 0x4a71b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a71b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a71bc:
    // 0x4a71bc: 0xc11f024  jal         func_47C090
label_4a71c0:
    if (ctx->pc == 0x4A71C0u) {
        ctx->pc = 0x4A71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71BCu;
        // 0x4a71c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A71C4u;
        goto label_4a71c4;
    }
    ctx->pc = 0x4A71BCu;
    SET_GPR_U32(ctx, 31, 0x4A71C4u);
    ctx->pc = 0x4A71C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A71BCu;
    // 0x4a71c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A71BCu, 0x4A71C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A71C4u;
label_4a71c4:
    // 0x4a71c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a71c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a71c8:
    // 0x4a71c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a71c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a71cc:
    // 0x4a71cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a71ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a71d0:
    // 0x4a71d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a71d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a71d4:
    // 0x4a71d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a71d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a71d8:
    // 0x4a71d8: 0x3e00008  jr          $ra
label_4a71dc:
    if (ctx->pc == 0x4A71DCu) {
        ctx->pc = 0x4A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71D8u;
        // 0x4a71dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A71E0u;
        goto label_4a71e0;
    }
    ctx->pc = 0x4A71D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71D8u;
        // 0x4a71dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A71D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A71E0u;
label_4a71e0:
    // 0x4a71e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4a71e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4a71e4:
    // 0x4a71e4: 0x0  nop
    ctx->pc = 0x4a71e4u;
    // NOP
    ctx->pc = 0x4a71e8u;
}
