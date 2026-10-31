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

// Function: sub_00415118
// Address: 0x415118 - 0x4151c0
void sub_00415118_0x415118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415118_0x415118");
#endif

    switch (ctx->pc) {
        case 0x415118u: goto label_415118;
        case 0x41511cu: goto label_41511c;
        case 0x415120u: goto label_415120;
        case 0x415124u: goto label_415124;
        case 0x415128u: goto label_415128;
        case 0x41512cu: goto label_41512c;
        case 0x415130u: goto label_415130;
        case 0x415134u: goto label_415134;
        case 0x415138u: goto label_415138;
        case 0x41513cu: goto label_41513c;
        case 0x415140u: goto label_415140;
        case 0x415144u: goto label_415144;
        case 0x415148u: goto label_415148;
        case 0x41514cu: goto label_41514c;
        case 0x415150u: goto label_415150;
        case 0x415154u: goto label_415154;
        case 0x415158u: goto label_415158;
        case 0x41515cu: goto label_41515c;
        case 0x415160u: goto label_415160;
        case 0x415164u: goto label_415164;
        case 0x415168u: goto label_415168;
        case 0x41516cu: goto label_41516c;
        case 0x415170u: goto label_415170;
        case 0x415174u: goto label_415174;
        case 0x415178u: goto label_415178;
        case 0x41517cu: goto label_41517c;
        case 0x415180u: goto label_415180;
        case 0x415184u: goto label_415184;
        case 0x415188u: goto label_415188;
        case 0x41518cu: goto label_41518c;
        case 0x415190u: goto label_415190;
        case 0x415194u: goto label_415194;
        case 0x415198u: goto label_415198;
        case 0x41519cu: goto label_41519c;
        case 0x4151a0u: goto label_4151a0;
        case 0x4151a4u: goto label_4151a4;
        case 0x4151a8u: goto label_4151a8;
        case 0x4151acu: goto label_4151ac;
        case 0x4151b0u: goto label_4151b0;
        case 0x4151b4u: goto label_4151b4;
        case 0x4151b8u: goto label_4151b8;
        case 0x4151bcu: goto label_4151bc;
        default: break;
    }

    ctx->pc = 0x415118u;

label_415118:
    // 0x415118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x415118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41511c:
    // 0x41511c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_415120:
    // 0x415120: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x415120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_415124:
    // 0x415124: 0x2411026c  addiu       $s1, $zero, 0x26C
    ctx->pc = 0x415124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
label_415128:
    // 0x415128: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x415128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41512c:
    // 0x41512c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41512cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415130:
    // 0x415130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_415134:
    // 0x415134: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x415134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_415138:
    // 0x415138: 0xc0e403c  jal         func_3900F0
label_41513c:
    if (ctx->pc == 0x41513Cu) {
        ctx->pc = 0x41513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415138u;
        // 0x41513c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415140u;
        goto label_415140;
    }
    ctx->pc = 0x415138u;
    SET_GPR_U32(ctx, 31, 0x415140u);
    ctx->pc = 0x41513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415138u;
    // 0x41513c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900F0u, 0x415138u, 0x415140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415140u;
label_415140:
    // 0x415140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x415140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415144:
    // 0x415144: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
label_415148:
    if (ctx->pc == 0x415148u) {
        ctx->pc = 0x415148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415144u;
        // 0x415148: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41514Cu;
        goto label_41514c;
    }
    ctx->pc = 0x415144u;
    {
        const bool branch_taken_0x415144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x415144) {
            ctx->pc = 0x415148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415144u;
            // 0x415148: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415190u;
            goto label_415190;
        }
    }
    ctx->pc = 0x41514Cu;
label_41514c:
    // 0x41514c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_415150:
    // 0x415150: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x415150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_415154:
    // 0x415154: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x415154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_415158:
    // 0x415158: 0x40f809  jalr        $v0
label_41515c:
    if (ctx->pc == 0x41515Cu) {
        ctx->pc = 0x41515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415158u;
        // 0x41515c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415160u;
        goto label_415160;
    }
    ctx->pc = 0x415158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415160u);
        ctx->pc = 0x41515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415158u;
        // 0x41515c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415158u, 0x415160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415160u;
label_415160:
    // 0x415160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x415160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415164:
    // 0x415164: 0xc10c313  jal         func_430C4C
label_415168:
    if (ctx->pc == 0x415168u) {
        ctx->pc = 0x415168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415164u;
        // 0x415168: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41516Cu;
        goto label_41516c;
    }
    ctx->pc = 0x415164u;
    SET_GPR_U32(ctx, 31, 0x41516Cu);
    ctx->pc = 0x415168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415164u;
    // 0x415168: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x415164u, 0x41516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41516Cu;
label_41516c:
    // 0x41516c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_415170:
    if (ctx->pc == 0x415170u) {
        ctx->pc = 0x415170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41516Cu;
        // 0x415170: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415174u;
        goto label_415174;
    }
    ctx->pc = 0x41516Cu;
    {
        const bool branch_taken_0x41516c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41516Cu;
        // 0x415170: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41516c) {
            ctx->pc = 0x415190u;
            goto label_415190;
        }
    }
    ctx->pc = 0x415174u;
label_415174:
    // 0x415174: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x415174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_415178:
    // 0x415178: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x415178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41517c:
    // 0x41517c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_415180:
    // 0x415180: 0x40f809  jalr        $v0
label_415184:
    if (ctx->pc == 0x415184u) {
        ctx->pc = 0x415184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415180u;
        // 0x415184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415188u;
        goto label_415188;
    }
    ctx->pc = 0x415180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415188u);
        ctx->pc = 0x415184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415180u;
        // 0x415184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415180u, 0x415188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415188u;
label_415188:
    // 0x415188: 0x10000007  b           . + 4 + (0x7 << 2)
label_41518c:
    if (ctx->pc == 0x41518Cu) {
        ctx->pc = 0x41518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415188u;
        // 0x41518c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415190u;
        goto label_415190;
    }
    ctx->pc = 0x415188u;
    {
        const bool branch_taken_0x415188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415188u;
        // 0x41518c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415188) {
            ctx->pc = 0x4151A8u;
            goto label_4151a8;
        }
    }
    ctx->pc = 0x415190u;
label_415190:
    // 0x415190: 0x2a2202ec  slti        $v0, $s1, 0x2EC
    ctx->pc = 0x415190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)748) ? 1 : 0);
label_415194:
    // 0x415194: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_415198:
    if (ctx->pc == 0x415198u) {
        ctx->pc = 0x415198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415194u;
        // 0x415198: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41519Cu;
        goto label_41519c;
    }
    ctx->pc = 0x415194u;
    {
        const bool branch_taken_0x415194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415194u;
        // 0x415198: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415194) {
            ctx->pc = 0x415138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415138;
        }
    }
    ctx->pc = 0x41519Cu;
label_41519c:
    // 0x41519c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41519cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4151a0:
    // 0x4151a0: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x4151a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_4151a4:
    // 0x4151a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4151a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4151a8:
    // 0x4151a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4151a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4151ac:
    // 0x4151ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4151acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4151b0:
    // 0x4151b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4151b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4151b4:
    // 0x4151b4: 0x3e00008  jr          $ra
label_4151b8:
    if (ctx->pc == 0x4151B8u) {
        ctx->pc = 0x4151B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4151B4u;
        // 0x4151b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4151BCu;
        goto label_4151bc;
    }
    ctx->pc = 0x4151B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4151B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4151B4u;
        // 0x4151b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4151B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4151BCu;
label_4151bc:
    // 0x4151bc: 0x0  nop
    ctx->pc = 0x4151bcu;
    // NOP
    ctx->pc = 0x4151c0u;
}
