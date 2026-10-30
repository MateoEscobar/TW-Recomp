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

// Function: sub_00313230
// Address: 0x313230 - 0x313400
void sub_00313230_0x313230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313230_0x313230");
#endif

    switch (ctx->pc) {
        case 0x313260u: goto label_313260;
        case 0x3132ccu: goto label_3132cc;
        case 0x3132e8u: goto label_3132e8;
        case 0x3132f0u: goto label_3132f0;
        case 0x3132f8u: goto label_3132f8;
        case 0x31331cu: goto label_31331c;
        case 0x31332cu: goto label_31332c;
        case 0x313364u: goto label_313364;
        case 0x313380u: goto label_313380;
        case 0x313390u: goto label_313390;
        case 0x3133b4u: goto label_3133b4;
        case 0x3133d4u: goto label_3133d4;
        default: break;
    }

    ctx->pc = 0x313230u;

    // 0x313230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x313230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x313234: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x313234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x313238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x313238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31323c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31323cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313240: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x313240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x313244: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x313244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313248: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x313248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31324c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x313250: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x313250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x313254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313258: 0xc08a61a  jal         func_229868
    ctx->pc = 0x313258u;
    SET_GPR_U32(ctx, 31, 0x313260u);
    ctx->pc = 0x31325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313258u;
    // 0x31325c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x313258u, 0x313260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313260u;
label_313260:
    // 0x313260: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x313260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313264: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x313264u;
    {
        const bool branch_taken_0x313264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x313268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313264u;
        // 0x313268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313264) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x31326Cu;
    // 0x31326c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x31326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x313270: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313274: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x313274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x313278: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x313278u;
    {
        const bool branch_taken_0x313278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313278u;
        // 0x31327c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313278) {
            ctx->pc = 0x3133D4u;
            goto label_3133d4;
        }
    }
    ctx->pc = 0x313280u;
    // 0x313280: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x313284: 0x2442ed20  addiu       $v0, $v0, -0x12E0
    ctx->pc = 0x313284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962464));
    // 0x313288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x313288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31328c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313290: 0x800008  jr          $a0
    ctx->pc = 0x313290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x313298u: goto label_313298;
            case 0x313398u: goto label_313398;
            case 0x3133A0u: goto label_3133a0;
            case 0x3133ACu: goto label_3133ac;
            case 0x3133BCu: goto label_3133bc;
            case 0x3133D4u: goto label_3133d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313290u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x313298u;
label_313298:
    // 0x313298: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x313298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31329c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x31329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3132a0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3132A0u;
    {
        const bool branch_taken_0x3132a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3132a0) {
            ctx->pc = 0x313388u;
            goto label_313388;
        }
    }
    ctx->pc = 0x3132A8u;
    // 0x3132a8: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x3132a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x3132ac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3132acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3132b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3132B0u;
    {
        const bool branch_taken_0x3132b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132B0u;
        // 0x3132b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132b0) {
            ctx->pc = 0x3132D4u;
            goto label_3132d4;
        }
    }
    ctx->pc = 0x3132B8u;
    // 0x3132b8: 0x90a303ac  lbu         $v1, 0x3AC($a1)
    ctx->pc = 0x3132b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 940)));
    // 0x3132bc: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3132BCu;
    {
        const bool branch_taken_0x3132bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3132C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132BCu;
        // 0x3132c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132bc) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x3132C4u;
    // 0x3132c4: 0xc08a05a  jal         func_228168
    ctx->pc = 0x3132C4u;
    SET_GPR_U32(ctx, 31, 0x3132CCu);
    ctx->pc = 0x3132C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3132C4u;
    // 0x3132c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x3132C4u, 0x3132CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3132CCu;
label_3132cc:
    // 0x3132cc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3132CCu;
    {
        const bool branch_taken_0x3132cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132CCu;
        // 0x3132d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132cc) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x3132D4u;
label_3132d4:
    // 0x3132d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3132d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3132d8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3132d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3132dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3132dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3132e0: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x3132e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x3132e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3132e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3132e8:
    // 0x3132e8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x3132E8u;
    SET_GPR_U32(ctx, 31, 0x3132F0u);
    ctx->pc = 0x3132ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3132E8u;
    // 0x3132ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3132E8u, 0x3132F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3132F0u;
label_3132f0:
    // 0x3132f0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3132F0u;
    SET_GPR_U32(ctx, 31, 0x3132F8u);
    ctx->pc = 0x3132F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3132F0u;
    // 0x3132f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3132F0u, 0x3132F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3132F8u;
label_3132f8:
    // 0x3132f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3132f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3132fc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3132FCu;
    {
        const bool branch_taken_0x3132fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3132fc) {
            ctx->pc = 0x313300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3132FCu;
            // 0x313300: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313340u;
            goto label_313340;
        }
    }
    ctx->pc = 0x313304u;
    // 0x313304: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x313304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x313308: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x313308u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31330c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31330Cu;
    {
        const bool branch_taken_0x31330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31330Cu;
        // 0x313310: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31330c) {
            ctx->pc = 0x31333Cu;
            goto label_31333c;
        }
    }
    ctx->pc = 0x313314u;
    // 0x313314: 0xc08a096  jal         func_228258
    ctx->pc = 0x313314u;
    SET_GPR_U32(ctx, 31, 0x31331Cu);
    ctx->pc = 0x313318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313314u;
    // 0x313318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x313314u, 0x31331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31331Cu;
label_31331c:
    // 0x31331c: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31331Cu;
    {
        const bool branch_taken_0x31331c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x31331c) {
            ctx->pc = 0x313320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31331Cu;
            // 0x313320: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313340u;
            goto label_313340;
        }
    }
    ctx->pc = 0x313324u;
    // 0x313324: 0xc087502  jal         func_21D408
    ctx->pc = 0x313324u;
    SET_GPR_U32(ctx, 31, 0x31332Cu);
    ctx->pc = 0x313328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313324u;
    // 0x313328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x313324u, 0x31332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31332Cu;
label_31332c:
    // 0x31332c: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x31332cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
    // 0x313330: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x313330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x313334: 0x54710005  bnel        $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x313334u;
    {
        const bool branch_taken_0x313334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x313334) {
            ctx->pc = 0x313338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313334u;
            // 0x313338: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31334Cu;
            goto label_31334c;
        }
    }
    ctx->pc = 0x31333Cu;
label_31333c:
    // 0x31333c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31333cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_313340:
    // 0x313340: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x313340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x313344: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x313344u;
    {
        const bool branch_taken_0x313344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313344) {
            ctx->pc = 0x313348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313344u;
            // 0x313348: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3132E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3132e8;
        }
    }
    ctx->pc = 0x31334Cu;
label_31334c:
    // 0x31334c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313350: 0x16a20021  bne         $s5, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x313350u;
    {
        const bool branch_taken_0x313350 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x313354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313350u;
        // 0x313354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313350) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x313358u;
    // 0x313358: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x313358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31335c: 0xc05959e  jal         func_165678
    ctx->pc = 0x31335Cu;
    SET_GPR_U32(ctx, 31, 0x313364u);
    ctx->pc = 0x313360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31335Cu;
    // 0x313360: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31335Cu, 0x313364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313364u;
label_313364:
    // 0x313364: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x313364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x313368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x313368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31336c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31336cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313370: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x313370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x313374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313378: 0xc107138  jal         func_41C4E0
    ctx->pc = 0x313378u;
    SET_GPR_U32(ctx, 31, 0x313380u);
    ctx->pc = 0x31337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313378u;
    // 0x31337c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x313378u, 0x313380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313380u;
label_313380:
    // 0x313380: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x313380u;
    {
        const bool branch_taken_0x313380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313380u;
        // 0x313384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313380) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x313388u;
label_313388:
    // 0x313388: 0xc059578  jal         func_1655E0
    ctx->pc = 0x313388u;
    SET_GPR_U32(ctx, 31, 0x313390u);
    ctx->pc = 0x1655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655E0u, 0x313388u, 0x313390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313390u;
label_313390:
    // 0x313390: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x313390u;
    {
        const bool branch_taken_0x313390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313390u;
        // 0x313394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313390) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x313398u;
label_313398:
    // 0x313398: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x313398u;
    {
        const bool branch_taken_0x313398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313398u;
        // 0x31339c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313398) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x3133A0u;
label_3133a0:
    // 0x3133a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3133a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3133a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3133A4u;
    {
        const bool branch_taken_0x3133a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3133A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133A4u;
        // 0x3133a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133a4) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x3133ACu;
label_3133ac:
    // 0x3133ac: 0xc0c4c0a  jal         func_313028
    ctx->pc = 0x3133ACu;
    SET_GPR_U32(ctx, 31, 0x3133B4u);
    ctx->pc = 0x3133B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133ACu;
    // 0x3133b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313028u, 0x3133ACu, 0x3133B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133B4u;
label_3133b4:
    // 0x3133b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3133B4u;
    {
        const bool branch_taken_0x3133b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3133B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133B4u;
        // 0x3133b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133b4) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x3133BCu;
label_3133bc:
    // 0x3133bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3133bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3133c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3133c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3133c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3133C4u;
    {
        const bool branch_taken_0x3133c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133C4u;
        // 0x3133c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133c4) {
            ctx->pc = 0x3133D8u;
            goto label_3133d8;
        }
    }
    ctx->pc = 0x3133CCu;
    // 0x3133cc: 0xc0c4c0a  jal         func_313028
    ctx->pc = 0x3133CCu;
    SET_GPR_U32(ctx, 31, 0x3133D4u);
    ctx->pc = 0x3133D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133CCu;
    // 0x3133d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313028u, 0x3133CCu, 0x3133D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133D4u;
label_3133d4:
    // 0x3133d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3133d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3133d8:
    // 0x3133d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3133d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3133dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3133dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3133e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3133e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3133e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3133e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3133e8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3133e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3133ec: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3133ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3133f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3133f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3133f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3133F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3133F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133F4u;
        // 0x3133f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3133F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3133FCu;
    // 0x3133fc: 0x0  nop
    ctx->pc = 0x3133fcu;
    // NOP
    ctx->pc = 0x313400u;
}
