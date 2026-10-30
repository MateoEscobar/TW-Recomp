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

// Function: sub_00310100
// Address: 0x310100 - 0x3101d8
void sub_00310100_0x310100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310100_0x310100");
#endif

    switch (ctx->pc) {
        case 0x310100u: goto label_310100;
        case 0x310104u: goto label_310104;
        case 0x310108u: goto label_310108;
        case 0x31010cu: goto label_31010c;
        case 0x310110u: goto label_310110;
        case 0x310114u: goto label_310114;
        case 0x310118u: goto label_310118;
        case 0x31011cu: goto label_31011c;
        case 0x310120u: goto label_310120;
        case 0x310124u: goto label_310124;
        case 0x310128u: goto label_310128;
        case 0x31012cu: goto label_31012c;
        case 0x310130u: goto label_310130;
        case 0x310134u: goto label_310134;
        case 0x310138u: goto label_310138;
        case 0x31013cu: goto label_31013c;
        case 0x310140u: goto label_310140;
        case 0x310144u: goto label_310144;
        case 0x310148u: goto label_310148;
        case 0x31014cu: goto label_31014c;
        case 0x310150u: goto label_310150;
        case 0x310154u: goto label_310154;
        case 0x310158u: goto label_310158;
        case 0x31015cu: goto label_31015c;
        case 0x310160u: goto label_310160;
        case 0x310164u: goto label_310164;
        case 0x310168u: goto label_310168;
        case 0x31016cu: goto label_31016c;
        case 0x310170u: goto label_310170;
        case 0x310174u: goto label_310174;
        case 0x310178u: goto label_310178;
        case 0x31017cu: goto label_31017c;
        case 0x310180u: goto label_310180;
        case 0x310184u: goto label_310184;
        case 0x310188u: goto label_310188;
        case 0x31018cu: goto label_31018c;
        case 0x310190u: goto label_310190;
        case 0x310194u: goto label_310194;
        case 0x310198u: goto label_310198;
        case 0x31019cu: goto label_31019c;
        case 0x3101a0u: goto label_3101a0;
        case 0x3101a4u: goto label_3101a4;
        case 0x3101a8u: goto label_3101a8;
        case 0x3101acu: goto label_3101ac;
        case 0x3101b0u: goto label_3101b0;
        case 0x3101b4u: goto label_3101b4;
        case 0x3101b8u: goto label_3101b8;
        case 0x3101bcu: goto label_3101bc;
        case 0x3101c0u: goto label_3101c0;
        case 0x3101c4u: goto label_3101c4;
        case 0x3101c8u: goto label_3101c8;
        case 0x3101ccu: goto label_3101cc;
        case 0x3101d0u: goto label_3101d0;
        case 0x3101d4u: goto label_3101d4;
        default: break;
    }

    ctx->pc = 0x310100u;

label_310100:
    // 0x310100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_310104:
    // 0x310104: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x310104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_310108:
    // 0x310108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x310108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31010c:
    // 0x31010c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31010cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_310110:
    // 0x310110: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x310110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_310114:
    // 0x310114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x310114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310118:
    // 0x310118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31011c:
    // 0x31011c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31011cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_310120:
    // 0x310120: 0xc08a61a  jal         func_229868
label_310124:
    if (ctx->pc == 0x310124u) {
        ctx->pc = 0x310124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310120u;
        // 0x310124: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310128u;
        goto label_310128;
    }
    ctx->pc = 0x310120u;
    SET_GPR_U32(ctx, 31, 0x310128u);
    ctx->pc = 0x310124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310120u;
    // 0x310124: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x310120u, 0x310128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310128u;
label_310128:
    // 0x310128: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_31012c:
    if (ctx->pc == 0x31012Cu) {
        ctx->pc = 0x31012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310128u;
        // 0x31012c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310130u;
        goto label_310130;
    }
    ctx->pc = 0x310128u;
    {
        const bool branch_taken_0x310128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310128u;
        // 0x31012c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310128) {
            ctx->pc = 0x3101B8u;
            goto label_3101b8;
        }
    }
    ctx->pc = 0x310130u;
label_310130:
    // 0x310130: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x310130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_310134:
    // 0x310134: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_310138:
    if (ctx->pc == 0x310138u) {
        ctx->pc = 0x310138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310134u;
        // 0x310138: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31013Cu;
        goto label_31013c;
    }
    ctx->pc = 0x310134u;
    {
        const bool branch_taken_0x310134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x310138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310134u;
        // 0x310138: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310134) {
            ctx->pc = 0x310190u;
            goto label_310190;
        }
    }
    ctx->pc = 0x31013Cu;
label_31013c:
    // 0x31013c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_310140:
    if (ctx->pc == 0x310140u) {
        ctx->pc = 0x310140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31013Cu;
        // 0x310140: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310144u;
        goto label_310144;
    }
    ctx->pc = 0x31013Cu;
    {
        const bool branch_taken_0x31013c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31013Cu;
        // 0x310140: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31013c) {
            ctx->pc = 0x310154u;
            goto label_310154;
        }
    }
    ctx->pc = 0x310144u;
label_310144:
    // 0x310144: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_310148:
    if (ctx->pc == 0x310148u) {
        ctx->pc = 0x310148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310144u;
        // 0x310148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31014Cu;
        goto label_31014c;
    }
    ctx->pc = 0x310144u;
    {
        const bool branch_taken_0x310144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x310148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310144u;
        // 0x310148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310144) {
            ctx->pc = 0x310170u;
            goto label_310170;
        }
    }
    ctx->pc = 0x31014Cu;
label_31014c:
    // 0x31014c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_310150:
    if (ctx->pc == 0x310150u) {
        ctx->pc = 0x310150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31014Cu;
        // 0x310150: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310154u;
        goto label_310154;
    }
    ctx->pc = 0x31014Cu;
    {
        const bool branch_taken_0x31014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31014Cu;
        // 0x310150: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31014c) {
            ctx->pc = 0x3101C0u;
            goto label_3101c0;
        }
    }
    ctx->pc = 0x310154u;
label_310154:
    // 0x310154: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x310154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_310158:
    // 0x310158: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_31015c:
    if (ctx->pc == 0x31015Cu) {
        ctx->pc = 0x31015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310158u;
        // 0x31015c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310160u;
        goto label_310160;
    }
    ctx->pc = 0x310158u;
    {
        const bool branch_taken_0x310158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310158u;
        // 0x31015c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310158) {
            ctx->pc = 0x3101A0u;
            goto label_3101a0;
        }
    }
    ctx->pc = 0x310160u;
label_310160:
    // 0x310160: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_310164:
    if (ctx->pc == 0x310164u) {
        ctx->pc = 0x310164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310160u;
        // 0x310164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310168u;
        goto label_310168;
    }
    ctx->pc = 0x310160u;
    {
        const bool branch_taken_0x310160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x310164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310160u;
        // 0x310164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310160) {
            ctx->pc = 0x310190u;
            goto label_310190;
        }
    }
    ctx->pc = 0x310168u;
label_310168:
    // 0x310168: 0x10000015  b           . + 4 + (0x15 << 2)
label_31016c:
    if (ctx->pc == 0x31016Cu) {
        ctx->pc = 0x31016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310168u;
        // 0x31016c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310170u;
        goto label_310170;
    }
    ctx->pc = 0x310168u;
    {
        const bool branch_taken_0x310168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310168u;
        // 0x31016c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310168) {
            ctx->pc = 0x3101C0u;
            goto label_3101c0;
        }
    }
    ctx->pc = 0x310170u;
label_310170:
    // 0x310170: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x310170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_310174:
    // 0x310174: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x310174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_310178:
    // 0x310178: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x310178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31017c:
    // 0x31017c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_310180:
    // 0x310180: 0x60f809  jalr        $v1
label_310184:
    if (ctx->pc == 0x310184u) {
        ctx->pc = 0x310184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310180u;
        // 0x310184: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310188u;
        goto label_310188;
    }
    ctx->pc = 0x310180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x310188u);
        ctx->pc = 0x310184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310180u;
        // 0x310184: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310180u, 0x310188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x310188u;
label_310188:
    // 0x310188: 0x1000000c  b           . + 4 + (0xC << 2)
label_31018c:
    if (ctx->pc == 0x31018Cu) {
        ctx->pc = 0x31018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310188u;
        // 0x31018c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310190u;
        goto label_310190;
    }
    ctx->pc = 0x310188u;
    {
        const bool branch_taken_0x310188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310188u;
        // 0x31018c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310188) {
            ctx->pc = 0x3101BCu;
            goto label_3101bc;
        }
    }
    ctx->pc = 0x310190u;
label_310190:
    // 0x310190: 0xc0c3d5c  jal         func_30F570
label_310194:
    if (ctx->pc == 0x310194u) {
        ctx->pc = 0x310194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310190u;
        // 0x310194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310198u;
        goto label_310198;
    }
    ctx->pc = 0x310190u;
    SET_GPR_U32(ctx, 31, 0x310198u);
    ctx->pc = 0x310194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310190u;
    // 0x310194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F570u, 0x310190u, 0x310198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310198u;
label_310198:
    // 0x310198: 0x10000008  b           . + 4 + (0x8 << 2)
label_31019c:
    if (ctx->pc == 0x31019Cu) {
        ctx->pc = 0x31019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310198u;
        // 0x31019c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3101A0u;
        goto label_3101a0;
    }
    ctx->pc = 0x310198u;
    {
        const bool branch_taken_0x310198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310198u;
        // 0x31019c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310198) {
            ctx->pc = 0x3101BCu;
            goto label_3101bc;
        }
    }
    ctx->pc = 0x3101A0u;
label_3101a0:
    // 0x3101a0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3101a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3101a4:
    // 0x3101a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3101a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3101a8:
    // 0x3101a8: 0xc0c3e86  jal         func_30FA18
label_3101ac:
    if (ctx->pc == 0x3101ACu) {
        ctx->pc = 0x3101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101A8u;
        // 0x3101ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3101B0u;
        goto label_3101b0;
    }
    ctx->pc = 0x3101A8u;
    SET_GPR_U32(ctx, 31, 0x3101B0u);
    ctx->pc = 0x3101ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3101A8u;
    // 0x3101ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA18u, 0x3101A8u, 0x3101B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101B0u;
label_3101b0:
    // 0x3101b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3101b4:
    if (ctx->pc == 0x3101B4u) {
        ctx->pc = 0x3101B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101B0u;
        // 0x3101b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3101B8u;
        goto label_3101b8;
    }
    ctx->pc = 0x3101B0u;
    {
        const bool branch_taken_0x3101b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101B0u;
        // 0x3101b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101b0) {
            ctx->pc = 0x3101BCu;
            goto label_3101bc;
        }
    }
    ctx->pc = 0x3101B8u;
label_3101b8:
    // 0x3101b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3101b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3101bc:
    // 0x3101bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3101bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3101c0:
    // 0x3101c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3101c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3101c4:
    // 0x3101c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3101c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3101c8:
    // 0x3101c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3101c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3101cc:
    // 0x3101cc: 0x3e00008  jr          $ra
label_3101d0:
    if (ctx->pc == 0x3101D0u) {
        ctx->pc = 0x3101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101CCu;
        // 0x3101d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3101D4u;
        goto label_3101d4;
    }
    ctx->pc = 0x3101CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101CCu;
        // 0x3101d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3101CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3101D4u;
label_3101d4:
    // 0x3101d4: 0x0  nop
    ctx->pc = 0x3101d4u;
    // NOP
    ctx->pc = 0x3101d8u;
}
