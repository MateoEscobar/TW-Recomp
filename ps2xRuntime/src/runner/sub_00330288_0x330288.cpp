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

// Function: sub_00330288
// Address: 0x330288 - 0x330368
void sub_00330288_0x330288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330288_0x330288");
#endif

    switch (ctx->pc) {
        case 0x3302b4u: goto label_3302b4;
        case 0x3302c4u: goto label_3302c4;
        case 0x3302d0u: goto label_3302d0;
        case 0x3302dcu: goto label_3302dc;
        case 0x3302e4u: goto label_3302e4;
        case 0x330300u: goto label_330300;
        case 0x330318u: goto label_330318;
        case 0x33033cu: goto label_33033c;
        default: break;
    }

    ctx->pc = 0x330288u;

    // 0x330288: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x330288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x33028c: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x33028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
    // 0x330290: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x330290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330294: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x330294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
    // 0x330298: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x330298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
    // 0x33029c: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x33029cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
    // 0x3302a0: 0x7fb40430  sq          $s4, 0x430($sp)
    ctx->pc = 0x3302a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 20));
    // 0x3302a4: 0x7fb50420  sq          $s5, 0x420($sp)
    ctx->pc = 0x3302a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 21));
    // 0x3302a8: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3302a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
    // 0x3302ac: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x3302ACu;
    SET_GPR_U32(ctx, 31, 0x3302B4u);
    ctx->pc = 0x3302B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302ACu;
    // 0x3302b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x3302ACu, 0x3302B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3302B4u;
label_3302b4:
    // 0x3302b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3302b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3302b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302bc: 0xc0c930c  jal         func_324C30
    ctx->pc = 0x3302BCu;
    SET_GPR_U32(ctx, 31, 0x3302C4u);
    ctx->pc = 0x3302C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302BCu;
    // 0x3302c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C30u, 0x3302BCu, 0x3302C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3302C4u;
label_3302c4:
    // 0x3302c4: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x3302C4u;
    {
        const bool branch_taken_0x3302c4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3302C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302C4u;
        // 0x3302c8: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3302c4) {
            ctx->pc = 0x330334u;
            goto label_330334;
        }
    }
    ctx->pc = 0x3302CCu;
    // 0x3302cc: 0x27b4040c  addiu       $s4, $sp, 0x40C
    ctx->pc = 0x3302ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
label_3302d0:
    // 0x3302d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3302d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302d4: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x3302D4u;
    SET_GPR_U32(ctx, 31, 0x3302DCu);
    ctx->pc = 0x3302D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302D4u;
    // 0x3302d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x3302D4u, 0x3302DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3302DCu;
label_3302dc:
    // 0x3302dc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3302DCu;
    SET_GPR_U32(ctx, 31, 0x3302E4u);
    ctx->pc = 0x3302E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302DCu;
    // 0x3302e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3302DCu, 0x3302E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3302E4u;
label_3302e4:
    // 0x3302e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3302e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302e8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3302e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3302ec: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3302ECu;
    {
        const bool branch_taken_0x3302ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3302F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302ECu;
        // 0x3302f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3302ec) {
            ctx->pc = 0x330300u;
            goto label_330300;
        }
    }
    ctx->pc = 0x3302F4u;
    // 0x3302f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3302f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302f8: 0xc0c910e  jal         func_324438
    ctx->pc = 0x3302F8u;
    SET_GPR_U32(ctx, 31, 0x330300u);
    ctx->pc = 0x3302FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302F8u;
    // 0x3302fc: 0x26a65f18  addiu       $a2, $s5, 0x5F18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 24344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x3302F8u, 0x330300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330300u;
label_330300:
    // 0x330300: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x330300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330304: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x330304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x330308: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330308u;
    {
        const bool branch_taken_0x330308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330308u;
        // 0x33030c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330308) {
            ctx->pc = 0x33031Cu;
            goto label_33031c;
        }
    }
    ctx->pc = 0x330310u;
    // 0x330310: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x330310u;
    SET_GPR_U32(ctx, 31, 0x330318u);
    ctx->pc = 0x330314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330310u;
    // 0x330314: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x330310u, 0x330318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330318u;
label_330318:
    // 0x330318: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x330318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33031c:
    // 0x33031c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33031cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x330320: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x330320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x330324: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x330324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x330328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x330328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33032c: 0x1060ffe8  beqz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x33032Cu;
    {
        const bool branch_taken_0x33032c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33032Cu;
        // 0x330330: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33032c) {
            ctx->pc = 0x3302D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3302d0;
        }
    }
    ctx->pc = 0x330334u;
label_330334:
    // 0x330334: 0xc0c92c0  jal         func_324B00
    ctx->pc = 0x330334u;
    SET_GPR_U32(ctx, 31, 0x33033Cu);
    ctx->pc = 0x330338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330334u;
    // 0x330338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B00u, 0x330334u, 0x33033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33033Cu;
label_33033c:
    // 0x33033c: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x33033cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x330340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330344: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x330344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x330348: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x330348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x33034c: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x33034cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x330350: 0x7bb40430  lq          $s4, 0x430($sp)
    ctx->pc = 0x330350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x330354: 0x7bb50420  lq          $s5, 0x420($sp)
    ctx->pc = 0x330354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x330358: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x330358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x33035c: 0x3e00008  jr          $ra
    ctx->pc = 0x33035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33035Cu;
        // 0x330360: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330364u;
    // 0x330364: 0x0  nop
    ctx->pc = 0x330364u;
    // NOP
    ctx->pc = 0x330368u;
}
