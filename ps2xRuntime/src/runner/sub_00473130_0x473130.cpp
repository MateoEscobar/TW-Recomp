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

// Function: sub_00473130
// Address: 0x473130 - 0x4731c0
void sub_00473130_0x473130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473130_0x473130");
#endif

    switch (ctx->pc) {
        case 0x473130u: goto label_473130;
        case 0x473134u: goto label_473134;
        case 0x473138u: goto label_473138;
        case 0x47313cu: goto label_47313c;
        case 0x473140u: goto label_473140;
        case 0x473144u: goto label_473144;
        case 0x473148u: goto label_473148;
        case 0x47314cu: goto label_47314c;
        case 0x473150u: goto label_473150;
        case 0x473154u: goto label_473154;
        case 0x473158u: goto label_473158;
        case 0x47315cu: goto label_47315c;
        case 0x473160u: goto label_473160;
        case 0x473164u: goto label_473164;
        case 0x473168u: goto label_473168;
        case 0x47316cu: goto label_47316c;
        case 0x473170u: goto label_473170;
        case 0x473174u: goto label_473174;
        case 0x473178u: goto label_473178;
        case 0x47317cu: goto label_47317c;
        case 0x473180u: goto label_473180;
        case 0x473184u: goto label_473184;
        case 0x473188u: goto label_473188;
        case 0x47318cu: goto label_47318c;
        case 0x473190u: goto label_473190;
        case 0x473194u: goto label_473194;
        case 0x473198u: goto label_473198;
        case 0x47319cu: goto label_47319c;
        case 0x4731a0u: goto label_4731a0;
        case 0x4731a4u: goto label_4731a4;
        case 0x4731a8u: goto label_4731a8;
        case 0x4731acu: goto label_4731ac;
        case 0x4731b0u: goto label_4731b0;
        case 0x4731b4u: goto label_4731b4;
        case 0x4731b8u: goto label_4731b8;
        case 0x4731bcu: goto label_4731bc;
        default: break;
    }

    ctx->pc = 0x473130u;

label_473130:
    // 0x473130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x473130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_473134:
    // 0x473134: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x473134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
label_473138:
    // 0x473138: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x473138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47313c:
    // 0x47313c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x47313cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_473140:
    // 0x473140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x473140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473144:
    // 0x473144: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x473144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_473148:
    // 0x473148: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x473148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47314c:
    // 0x47314c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_473150:
    // 0x473150: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x473150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_473154:
    // 0x473154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_473158:
    // 0x473158: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x473158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47315c:
    // 0x47315c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_473160:
    // 0x473160: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x473160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_473164:
    // 0x473164: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_473168:
    if (ctx->pc == 0x473168u) {
        ctx->pc = 0x473168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473164u;
        // 0x473168: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47316Cu;
        goto label_47316c;
    }
    ctx->pc = 0x473164u;
    {
        const bool branch_taken_0x473164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x473168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473164u;
        // 0x473168: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473164) {
            ctx->pc = 0x47318Cu;
            goto label_47318c;
        }
    }
    ctx->pc = 0x47316Cu;
label_47316c:
    // 0x47316c: 0x0  nop
    ctx->pc = 0x47316cu;
    // NOP
label_473170:
    // 0x473170: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x473170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_473174:
    // 0x473174: 0x280f809  jalr        $s4
label_473178:
    if (ctx->pc == 0x473178u) {
        ctx->pc = 0x473178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473174u;
        // 0x473178: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47317Cu;
        goto label_47317c;
    }
    ctx->pc = 0x473174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x47317Cu);
        ctx->pc = 0x473178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473174u;
        // 0x473178: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473174u, 0x47317Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47317Cu;
label_47317c:
    // 0x47317c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473180:
    if (ctx->pc == 0x473180u) {
        ctx->pc = 0x473180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47317Cu;
        // 0x473180: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473184u;
        goto label_473184;
    }
    ctx->pc = 0x47317Cu;
    {
        const bool branch_taken_0x47317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47317Cu;
        // 0x473180: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47317c) {
            ctx->pc = 0x47318Cu;
            goto label_47318c;
        }
    }
    ctx->pc = 0x473184u;
label_473184:
    // 0x473184: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_473188:
    if (ctx->pc == 0x473188u) {
        ctx->pc = 0x473188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473184u;
        // 0x473188: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47318Cu;
        goto label_47318c;
    }
    ctx->pc = 0x473184u;
    {
        const bool branch_taken_0x473184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x473188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473184u;
        // 0x473188: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473184) {
            ctx->pc = 0x473170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_473170;
        }
    }
    ctx->pc = 0x47318Cu;
label_47318c:
    // 0x47318c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x47318cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_473190:
    // 0x473190: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x473190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_473194:
    // 0x473194: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x473194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_473198:
    // 0x473198: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x473198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47319c:
    // 0x47319c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x47319cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4731a0:
    // 0x4731a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4731a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4731a4:
    // 0x4731a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4731a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4731a8:
    // 0x4731a8: 0x3e00008  jr          $ra
label_4731ac:
    if (ctx->pc == 0x4731ACu) {
        ctx->pc = 0x4731ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4731A8u;
        // 0x4731ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4731B0u;
        goto label_4731b0;
    }
    ctx->pc = 0x4731A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4731ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4731A8u;
        // 0x4731ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4731A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4731B0u;
label_4731b0:
    // 0x4731b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4731b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4731b4:
    // 0x4731b4: 0x0  nop
    ctx->pc = 0x4731b4u;
    // NOP
label_4731b8:
    // 0x4731b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4731b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4731bc:
    // 0x4731bc: 0x0  nop
    ctx->pc = 0x4731bcu;
    // NOP
    ctx->pc = 0x4731c0u;
}
