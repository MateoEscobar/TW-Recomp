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

// Function: sub_001AC0E8
// Address: 0x1ac0e8 - 0x1ac1d8
void sub_001AC0E8_0x1ac0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC0E8_0x1ac0e8");
#endif

    switch (ctx->pc) {
        case 0x1ac0e8u: goto label_1ac0e8;
        case 0x1ac0ecu: goto label_1ac0ec;
        case 0x1ac0f0u: goto label_1ac0f0;
        case 0x1ac0f4u: goto label_1ac0f4;
        case 0x1ac0f8u: goto label_1ac0f8;
        case 0x1ac0fcu: goto label_1ac0fc;
        case 0x1ac100u: goto label_1ac100;
        case 0x1ac104u: goto label_1ac104;
        case 0x1ac108u: goto label_1ac108;
        case 0x1ac10cu: goto label_1ac10c;
        case 0x1ac110u: goto label_1ac110;
        case 0x1ac114u: goto label_1ac114;
        case 0x1ac118u: goto label_1ac118;
        case 0x1ac11cu: goto label_1ac11c;
        case 0x1ac120u: goto label_1ac120;
        case 0x1ac124u: goto label_1ac124;
        case 0x1ac128u: goto label_1ac128;
        case 0x1ac12cu: goto label_1ac12c;
        case 0x1ac130u: goto label_1ac130;
        case 0x1ac134u: goto label_1ac134;
        case 0x1ac138u: goto label_1ac138;
        case 0x1ac13cu: goto label_1ac13c;
        case 0x1ac140u: goto label_1ac140;
        case 0x1ac144u: goto label_1ac144;
        case 0x1ac148u: goto label_1ac148;
        case 0x1ac14cu: goto label_1ac14c;
        case 0x1ac150u: goto label_1ac150;
        case 0x1ac154u: goto label_1ac154;
        case 0x1ac158u: goto label_1ac158;
        case 0x1ac15cu: goto label_1ac15c;
        case 0x1ac160u: goto label_1ac160;
        case 0x1ac164u: goto label_1ac164;
        case 0x1ac168u: goto label_1ac168;
        case 0x1ac16cu: goto label_1ac16c;
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac174u: goto label_1ac174;
        case 0x1ac178u: goto label_1ac178;
        case 0x1ac17cu: goto label_1ac17c;
        case 0x1ac180u: goto label_1ac180;
        case 0x1ac184u: goto label_1ac184;
        case 0x1ac188u: goto label_1ac188;
        case 0x1ac18cu: goto label_1ac18c;
        case 0x1ac190u: goto label_1ac190;
        case 0x1ac194u: goto label_1ac194;
        case 0x1ac198u: goto label_1ac198;
        case 0x1ac19cu: goto label_1ac19c;
        case 0x1ac1a0u: goto label_1ac1a0;
        case 0x1ac1a4u: goto label_1ac1a4;
        case 0x1ac1a8u: goto label_1ac1a8;
        case 0x1ac1acu: goto label_1ac1ac;
        case 0x1ac1b0u: goto label_1ac1b0;
        case 0x1ac1b4u: goto label_1ac1b4;
        case 0x1ac1b8u: goto label_1ac1b8;
        case 0x1ac1bcu: goto label_1ac1bc;
        case 0x1ac1c0u: goto label_1ac1c0;
        case 0x1ac1c4u: goto label_1ac1c4;
        case 0x1ac1c8u: goto label_1ac1c8;
        case 0x1ac1ccu: goto label_1ac1cc;
        case 0x1ac1d0u: goto label_1ac1d0;
        case 0x1ac1d4u: goto label_1ac1d4;
        default: break;
    }

    ctx->pc = 0x1ac0e8u;

label_1ac0e8:
    // 0x1ac0e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ac0ec:
    // 0x1ac0ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ac0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ac0f0:
    // 0x1ac0f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ac0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ac0f4:
    // 0x1ac0f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac0f8:
    // 0x1ac0f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ac0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1ac0fc:
    // 0x1ac0fc: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x1ac0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1ac100:
    // 0x1ac100: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ac100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1ac104:
    // 0x1ac104: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ac104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac108:
    // 0x1ac108: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ac108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ac10c:
    // 0x1ac10c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ac10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac110:
    // 0x1ac110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac114:
    // 0x1ac114: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ac114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ac118:
    // 0x1ac118: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ac118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ac11c:
    // 0x1ac11c: 0x8e3000c0  lw          $s0, 0xC0($s1)
    ctx->pc = 0x1ac11cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ac120:
    // 0x1ac120: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ac120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ac124:
    // 0x1ac124: 0x3a083  sra         $s4, $v1, 2
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
label_1ac128:
    // 0x1ac128: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x1ac128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1ac12c:
    // 0x1ac12c: 0x0  nop
    ctx->pc = 0x1ac12cu;
    // NOP
label_1ac130:
    // 0x1ac130: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1ac134:
    if (ctx->pc == 0x1AC134u) {
        ctx->pc = 0x1AC138u;
        goto label_1ac138;
    }
    ctx->pc = 0x1AC130u;
    {
        const bool branch_taken_0x1ac130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac130) {
            ctx->pc = 0x1AC188u;
            goto label_1ac188;
        }
    }
    ctx->pc = 0x1AC138u;
label_1ac138:
    // 0x1ac138: 0x922300b9  lbu         $v1, 0xB9($s1)
    ctx->pc = 0x1ac138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 185)));
label_1ac13c:
    // 0x1ac13c: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x1ac13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ac140:
    // 0x1ac140: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1ac144:
    // 0x1ac144: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x1ac144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ac148:
    // 0x1ac148: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1ac14c:
    if (ctx->pc == 0x1AC14Cu) {
        ctx->pc = 0x1AC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC148u;
        // 0x1ac14c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC150u;
        goto label_1ac150;
    }
    ctx->pc = 0x1AC148u;
    {
        const bool branch_taken_0x1ac148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac148) {
            ctx->pc = 0x1AC14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC148u;
            // 0x1ac14c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC164u;
            goto label_1ac164;
        }
    }
    ctx->pc = 0x1AC150u;
label_1ac150:
    // 0x1ac150: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1ac150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1ac154:
    // 0x1ac154: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ac158:
    if (ctx->pc == 0x1AC158u) {
        ctx->pc = 0x1AC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC154u;
        // 0x1ac158: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC15Cu;
        goto label_1ac15c;
    }
    ctx->pc = 0x1AC154u;
    {
        const bool branch_taken_0x1ac154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC154u;
        // 0x1ac158: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac154) {
            ctx->pc = 0x1AC160u;
            goto label_1ac160;
        }
    }
    ctx->pc = 0x1AC15Cu;
label_1ac15c:
    // 0x1ac15c: 0x8e3000c0  lw          $s0, 0xC0($s1)
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ac160:
    // 0x1ac160: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ac160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac164:
    // 0x1ac164: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ac168:
    // 0x1ac168: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac16c:
    // 0x1ac16c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x1ac16cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_1ac170:
    // 0x1ac170: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_1ac174:
    // 0x1ac174: 0x40f809  jalr        $v0
label_1ac178:
    if (ctx->pc == 0x1AC178u) {
        ctx->pc = 0x1AC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC174u;
        // 0x1ac178: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC17Cu;
        goto label_1ac17c;
    }
    ctx->pc = 0x1AC174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC17Cu);
        ctx->pc = 0x1AC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC174u;
        // 0x1ac178: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC174u, 0x1AC17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC17Cu;
label_1ac17c:
    // 0x1ac17c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_1ac180:
    if (ctx->pc == 0x1AC180u) {
        ctx->pc = 0x1AC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC17Cu;
        // 0x1ac180: 0x254102b  sltu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC184u;
        goto label_1ac184;
    }
    ctx->pc = 0x1AC17Cu;
    {
        const bool branch_taken_0x1ac17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC17Cu;
        // 0x1ac180: 0x254102b  sltu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac17c) {
            ctx->pc = 0x1AC130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac130;
        }
    }
    ctx->pc = 0x1AC184u;
label_1ac184:
    // 0x1ac184: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ac184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac188:
    // 0x1ac188: 0x5260000b  beql        $s3, $zero, . + 4 + (0xB << 2)
label_1ac18c:
    if (ctx->pc == 0x1AC18Cu) {
        ctx->pc = 0x1AC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC188u;
        // 0x1ac18c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC190u;
        goto label_1ac190;
    }
    ctx->pc = 0x1AC188u;
    {
        const bool branch_taken_0x1ac188 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac188) {
            ctx->pc = 0x1AC18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC188u;
            // 0x1ac18c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC1B8u;
            goto label_1ac1b8;
        }
    }
    ctx->pc = 0x1AC190u;
label_1ac190:
    // 0x1ac190: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ac194:
    // 0x1ac194: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_1ac198:
    if (ctx->pc == 0x1AC198u) {
        ctx->pc = 0x1AC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC194u;
        // 0x1ac198: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC19Cu;
        goto label_1ac19c;
    }
    ctx->pc = 0x1AC194u;
    {
        const bool branch_taken_0x1ac194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC194u;
        // 0x1ac198: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac194) {
            ctx->pc = 0x1AC1B4u;
            goto label_1ac1b4;
        }
    }
    ctx->pc = 0x1AC19Cu;
label_1ac19c:
    // 0x1ac19c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac1a0:
    // 0x1ac1a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac1a4:
    // 0x1ac1a4: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1ac1a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1ac1a8:
    // 0x1ac1a8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1ac1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1ac1ac:
    // 0x1ac1ac: 0x60f809  jalr        $v1
label_1ac1b0:
    if (ctx->pc == 0x1AC1B0u) {
        ctx->pc = 0x1AC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1ACu;
        // 0x1ac1b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1B4u;
        goto label_1ac1b4;
    }
    ctx->pc = 0x1AC1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC1B4u);
        ctx->pc = 0x1AC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1ACu;
        // 0x1ac1b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC1ACu, 0x1AC1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC1B4u;
label_1ac1b4:
    // 0x1ac1b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ac1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac1b8:
    // 0x1ac1b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ac1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac1bc:
    // 0x1ac1bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ac1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac1c0:
    // 0x1ac1c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ac1c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac1c4:
    // 0x1ac1c4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ac1c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac1c8:
    // 0x1ac1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac1cc:
    // 0x1ac1cc: 0x3e00008  jr          $ra
label_1ac1d0:
    if (ctx->pc == 0x1AC1D0u) {
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1D4u;
        goto label_1ac1d4;
    }
    ctx->pc = 0x1AC1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC1D4u;
label_1ac1d4:
    // 0x1ac1d4: 0x0  nop
    ctx->pc = 0x1ac1d4u;
    // NOP
    ctx->pc = 0x1ac1d8u;
}
