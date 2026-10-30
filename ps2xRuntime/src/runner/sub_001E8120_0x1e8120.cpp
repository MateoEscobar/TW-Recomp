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

// Function: sub_001E8120
// Address: 0x1e8120 - 0x1e81c0
void sub_001E8120_0x1e8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8120_0x1e8120");
#endif

    switch (ctx->pc) {
        case 0x1e8120u: goto label_1e8120;
        case 0x1e8124u: goto label_1e8124;
        case 0x1e8128u: goto label_1e8128;
        case 0x1e812cu: goto label_1e812c;
        case 0x1e8130u: goto label_1e8130;
        case 0x1e8134u: goto label_1e8134;
        case 0x1e8138u: goto label_1e8138;
        case 0x1e813cu: goto label_1e813c;
        case 0x1e8140u: goto label_1e8140;
        case 0x1e8144u: goto label_1e8144;
        case 0x1e8148u: goto label_1e8148;
        case 0x1e814cu: goto label_1e814c;
        case 0x1e8150u: goto label_1e8150;
        case 0x1e8154u: goto label_1e8154;
        case 0x1e8158u: goto label_1e8158;
        case 0x1e815cu: goto label_1e815c;
        case 0x1e8160u: goto label_1e8160;
        case 0x1e8164u: goto label_1e8164;
        case 0x1e8168u: goto label_1e8168;
        case 0x1e816cu: goto label_1e816c;
        case 0x1e8170u: goto label_1e8170;
        case 0x1e8174u: goto label_1e8174;
        case 0x1e8178u: goto label_1e8178;
        case 0x1e817cu: goto label_1e817c;
        case 0x1e8180u: goto label_1e8180;
        case 0x1e8184u: goto label_1e8184;
        case 0x1e8188u: goto label_1e8188;
        case 0x1e818cu: goto label_1e818c;
        case 0x1e8190u: goto label_1e8190;
        case 0x1e8194u: goto label_1e8194;
        case 0x1e8198u: goto label_1e8198;
        case 0x1e819cu: goto label_1e819c;
        case 0x1e81a0u: goto label_1e81a0;
        case 0x1e81a4u: goto label_1e81a4;
        case 0x1e81a8u: goto label_1e81a8;
        case 0x1e81acu: goto label_1e81ac;
        case 0x1e81b0u: goto label_1e81b0;
        case 0x1e81b4u: goto label_1e81b4;
        case 0x1e81b8u: goto label_1e81b8;
        case 0x1e81bcu: goto label_1e81bc;
        default: break;
    }

    ctx->pc = 0x1e8120u;

label_1e8120:
    // 0x1e8120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e8124:
    // 0x1e8124: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e8124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1e8128:
    // 0x1e8128: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e8128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e812c:
    // 0x1e812c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1e8130:
    // 0x1e8130: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e8130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e8134:
    // 0x1e8134: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e8134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e8138:
    // 0x1e8138: 0x26700490  addiu       $s0, $s3, 0x490
    ctx->pc = 0x1e8138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
label_1e813c:
    // 0x1e813c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1e8140:
    // 0x1e8140: 0x26720790  addiu       $s2, $s3, 0x790
    ctx->pc = 0x1e8140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
label_1e8144:
    // 0x1e8144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e8148:
    // 0x1e8148: 0xc079e1a  jal         func_1E7868
label_1e814c:
    if (ctx->pc == 0x1E814Cu) {
        ctx->pc = 0x1E814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8148u;
        // 0x1e814c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8150u;
        goto label_1e8150;
    }
    ctx->pc = 0x1E8148u;
    SET_GPR_U32(ctx, 31, 0x1E8150u);
    ctx->pc = 0x1E814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8148u;
    // 0x1e814c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7868u, 0x1E8148u, 0x1E8150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8150u;
label_1e8150:
    // 0x1e8150: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e8150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8154:
    // 0x1e8154: 0x0  nop
    ctx->pc = 0x1e8154u;
    // NOP
label_1e8158:
    // 0x1e8158: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e815c:
    // 0x1e815c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e8160:
    // 0x1e8160: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1e8160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1e8164:
    // 0x1e8164: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1e8164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1e8168:
    // 0x1e8168: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1e816c:
    // 0x1e816c: 0x40f809  jalr        $v0
label_1e8170:
    if (ctx->pc == 0x1E8170u) {
        ctx->pc = 0x1E8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E816Cu;
        // 0x1e8170: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8174u;
        goto label_1e8174;
    }
    ctx->pc = 0x1E816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8174u);
        ctx->pc = 0x1E8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E816Cu;
        // 0x1e8170: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E816Cu, 0x1E8174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8174u;
label_1e8174:
    // 0x1e8174: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1e8174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1e8178:
    // 0x1e8178: 0xc073462  jal         func_1CD188
label_1e817c:
    if (ctx->pc == 0x1E817Cu) {
        ctx->pc = 0x1E817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8178u;
        // 0x1e817c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8180u;
        goto label_1e8180;
    }
    ctx->pc = 0x1E8178u;
    SET_GPR_U32(ctx, 31, 0x1E8180u);
    ctx->pc = 0x1E817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8178u;
    // 0x1e817c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1E8178u, 0x1E8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8180u;
label_1e8180:
    // 0x1e8180: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x1e8180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1e8184:
    // 0x1e8184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1e8188:
    if (ctx->pc == 0x1E8188u) {
        ctx->pc = 0x1E8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8184u;
        // 0x1e8188: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E818Cu;
        goto label_1e818c;
    }
    ctx->pc = 0x1E8184u;
    {
        const bool branch_taken_0x1e8184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8184u;
        // 0x1e8188: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8184) {
            ctx->pc = 0x1E8158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8158;
        }
    }
    ctx->pc = 0x1E818Cu;
label_1e818c:
    // 0x1e818c: 0xc073462  jal         func_1CD188
label_1e8190:
    if (ctx->pc == 0x1E8190u) {
        ctx->pc = 0x1E8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E818Cu;
        // 0x1e8190: 0x26640a00  addiu       $a0, $s3, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8194u;
        goto label_1e8194;
    }
    ctx->pc = 0x1E818Cu;
    SET_GPR_U32(ctx, 31, 0x1E8194u);
    ctx->pc = 0x1E8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E818Cu;
    // 0x1e8190: 0x26640a00  addiu       $a0, $s3, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1E818Cu, 0x1E8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8194u;
label_1e8194:
    // 0x1e8194: 0xc073462  jal         func_1CD188
label_1e8198:
    if (ctx->pc == 0x1E8198u) {
        ctx->pc = 0x1E8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8194u;
        // 0x1e8198: 0x26640ad0  addiu       $a0, $s3, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E819Cu;
        goto label_1e819c;
    }
    ctx->pc = 0x1E8194u;
    SET_GPR_U32(ctx, 31, 0x1E819Cu);
    ctx->pc = 0x1E8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8194u;
    // 0x1e8198: 0x26640ad0  addiu       $a0, $s3, 0xAD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1E8194u, 0x1E819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E819Cu;
label_1e819c:
    // 0x1e819c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e819cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e81a0:
    // 0x1e81a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e81a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e81a4:
    // 0x1e81a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e81a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e81a8:
    // 0x1e81a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e81a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e81ac:
    // 0x1e81ac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e81acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e81b0:
    // 0x1e81b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e81b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e81b4:
    // 0x1e81b4: 0x3e00008  jr          $ra
label_1e81b8:
    if (ctx->pc == 0x1E81B8u) {
        ctx->pc = 0x1E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81B4u;
        // 0x1e81b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E81BCu;
        goto label_1e81bc;
    }
    ctx->pc = 0x1E81B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81B4u;
        // 0x1e81b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E81B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E81BCu;
label_1e81bc:
    // 0x1e81bc: 0x0  nop
    ctx->pc = 0x1e81bcu;
    // NOP
    ctx->pc = 0x1e81c0u;
}
