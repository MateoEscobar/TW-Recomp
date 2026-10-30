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

// Function: sub_00330110
// Address: 0x330110 - 0x3301b8
void sub_00330110_0x330110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330110_0x330110");
#endif

    switch (ctx->pc) {
        case 0x330138u: goto label_330138;
        case 0x330148u: goto label_330148;
        case 0x330150u: goto label_330150;
        case 0x330164u: goto label_330164;
        case 0x330170u: goto label_330170;
        case 0x330180u: goto label_330180;
        case 0x330194u: goto label_330194;
        default: break;
    }

    ctx->pc = 0x330110u;

    // 0x330110: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x330110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x330114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x330114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330118: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x330118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
    // 0x33011c: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x33011cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x330120: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x330120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
    // 0x330124: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x330124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
    // 0x330128: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x330128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
    // 0x33012c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x33012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x330130: 0xc0c9192  jal         func_324648
    ctx->pc = 0x330130u;
    SET_GPR_U32(ctx, 31, 0x330138u);
    ctx->pc = 0x330134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330130u;
    // 0x330134: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x330130u, 0x330138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330138u;
label_330138:
    // 0x330138: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x330138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33013c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330140: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x330140u;
    SET_GPR_U32(ctx, 31, 0x330148u);
    ctx->pc = 0x330144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330140u;
    // 0x330144: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x330140u, 0x330148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330148u;
label_330148:
    // 0x330148: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x330148u;
    SET_GPR_U32(ctx, 31, 0x330150u);
    ctx->pc = 0x33014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330148u;
    // 0x33014c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x330148u, 0x330150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330150u;
label_330150:
    // 0x330150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x330150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330158: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x330158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33015c: 0xc0c930c  jal         func_324C30
    ctx->pc = 0x33015Cu;
    SET_GPR_U32(ctx, 31, 0x330164u);
    ctx->pc = 0x330160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33015Cu;
    // 0x330160: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C30u, 0x33015Cu, 0x330164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330164u;
label_330164:
    // 0x330164: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x330164u;
    {
        const bool branch_taken_0x330164 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x330168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330164u;
        // 0x330168: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330164) {
            ctx->pc = 0x33018Cu;
            goto label_33018c;
        }
    }
    ctx->pc = 0x33016Cu;
    // 0x33016c: 0x0  nop
    ctx->pc = 0x33016cu;
    // NOP
label_330170:
    // 0x330170: 0x8fa60410  lw          $a2, 0x410($sp)
    ctx->pc = 0x330170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x330174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330178: 0xc0c929a  jal         func_324A68
    ctx->pc = 0x330178u;
    SET_GPR_U32(ctx, 31, 0x330180u);
    ctx->pc = 0x33017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330178u;
    // 0x33017c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A68u, 0x330178u, 0x330180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330180u;
label_330180:
    // 0x330180: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x330180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330184: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x330184u;
    {
        const bool branch_taken_0x330184 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x330188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330184u;
        // 0x330188: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330184) {
            ctx->pc = 0x330170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330170;
        }
    }
    ctx->pc = 0x33018Cu;
label_33018c:
    // 0x33018c: 0xc0c92c0  jal         func_324B00
    ctx->pc = 0x33018Cu;
    SET_GPR_U32(ctx, 31, 0x330194u);
    ctx->pc = 0x330190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33018Cu;
    // 0x330190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B00u, 0x33018Cu, 0x330194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330194u;
label_330194:
    // 0x330194: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x330194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x330198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33019c: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x33019cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x3301a0: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3301a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x3301a4: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3301a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x3301a8: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3301a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x3301ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3301ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3301B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301ACu;
        // 0x3301b0: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3301ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3301B4u;
    // 0x3301b4: 0x0  nop
    ctx->pc = 0x3301b4u;
    // NOP
    ctx->pc = 0x3301b8u;
}
