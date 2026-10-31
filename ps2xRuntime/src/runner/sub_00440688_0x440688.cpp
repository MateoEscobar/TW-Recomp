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

// Function: sub_00440688
// Address: 0x440688 - 0x440758
void sub_00440688_0x440688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440688_0x440688");
#endif

    switch (ctx->pc) {
        case 0x4406acu: goto label_4406ac;
        case 0x4406d8u: goto label_4406d8;
        case 0x440714u: goto label_440714;
        default: break;
    }

    ctx->pc = 0x440688u;

    // 0x440688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x440688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x44068c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x440690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x440690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x440694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x440694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x440698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44069c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4406a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4406a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4406a4: 0xc1100e8  jal         func_4403A0
    ctx->pc = 0x4406A4u;
    SET_GPR_U32(ctx, 31, 0x4406ACu);
    ctx->pc = 0x4406A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4406A4u;
    // 0x4406a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4403A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4403A0u, 0x4406A4u, 0x4406ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4406ACu;
label_4406ac:
    // 0x4406ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4406acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4406b0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4406b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4406b4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4406b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4406b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4406b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4406bc: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x4406bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x4406c0: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x4406c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x4406c4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x4406c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x4406c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4406c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4406cc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4406ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x4406d0: 0xc11017e  jal         func_4405F8
    ctx->pc = 0x4406D0u;
    SET_GPR_U32(ctx, 31, 0x4406D8u);
    ctx->pc = 0x4406D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4406D0u;
    // 0x4406d4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4405F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4405F8u, 0x4406D0u, 0x4406D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4406D8u;
label_4406d8:
    // 0x4406d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4406D8u;
    {
        const bool branch_taken_0x4406d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4406d8) {
            ctx->pc = 0x4406DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4406D8u;
            // 0x4406dc: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4406ECu;
            goto label_4406ec;
        }
    }
    ctx->pc = 0x4406E0u;
    // 0x4406e0: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x4406e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x4406e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4406E4u;
    {
        const bool branch_taken_0x4406e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4406E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4406E4u;
        // 0x4406e8: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4406e4) {
            ctx->pc = 0x4406F4u;
            goto label_4406f4;
        }
    }
    ctx->pc = 0x4406ECu;
label_4406ec:
    // 0x4406ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4406ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4406f0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x4406f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_4406f4:
    // 0x4406f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4406f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4406f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4406f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4406fc: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x4406fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x440700: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x440700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x440704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x440704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x440708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44070c: 0xc10ffb6  jal         func_43FED8
    ctx->pc = 0x44070Cu;
    SET_GPR_U32(ctx, 31, 0x440714u);
    ctx->pc = 0x440710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44070Cu;
    // 0x440710: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FED8u, 0x44070Cu, 0x440714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440714u;
label_440714:
    // 0x440714: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x440714u;
    {
        const bool branch_taken_0x440714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x440718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440714u;
        // 0x440718: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440714) {
            ctx->pc = 0x440740u;
            goto label_440740;
        }
    }
    ctx->pc = 0x44071Cu;
    // 0x44071c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x44071cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440720: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x440720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x440724: 0x24a50648  addiu       $a1, $a1, 0x648
    ctx->pc = 0x440724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x440728: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x440728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44072c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x44072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x440730: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x440730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x440734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x440734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440738: 0x811119a  j           func_444668
    ctx->pc = 0x440738u;
    ctx->pc = 0x44073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440738u;
    // 0x44073c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444668u, 0x440738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x440740u;
label_440740:
    // 0x440740: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x440740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x440744: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x440744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x440748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x440748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44074c: 0x3e00008  jr          $ra
    ctx->pc = 0x44074Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44074Cu;
        // 0x440750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44074Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440754u;
    // 0x440754: 0x0  nop
    ctx->pc = 0x440754u;
    // NOP
    ctx->pc = 0x440758u;
}
