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

// Function: sub_002DE540
// Address: 0x2de540 - 0x2de608
void sub_002DE540_0x2de540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE540_0x2de540");
#endif

    switch (ctx->pc) {
        case 0x2de56cu: goto label_2de56c;
        case 0x2de57cu: goto label_2de57c;
        case 0x2de594u: goto label_2de594;
        case 0x2de5a0u: goto label_2de5a0;
        case 0x2de5a8u: goto label_2de5a8;
        case 0x2de5ccu: goto label_2de5cc;
        case 0x2de5e4u: goto label_2de5e4;
        default: break;
    }

    ctx->pc = 0x2de540u;

    // 0x2de540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2de540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2de544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de548: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2de548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2de54c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2de54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de550: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2de550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2de554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de55c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2de55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2de560: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2de560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2de564: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2DE564u;
    SET_GPR_U32(ctx, 31, 0x2DE56Cu);
    ctx->pc = 0x2DE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE564u;
    // 0x2de568: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DE564u, 0x2DE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE56Cu;
label_2de56c:
    // 0x2de56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2de570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de574: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2DE574u;
    SET_GPR_U32(ctx, 31, 0x2DE57Cu);
    ctx->pc = 0x2DE578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE574u;
    // 0x2de578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DE574u, 0x2DE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE57Cu;
label_2de57c:
    // 0x2de57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de580: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE580u;
    {
        const bool branch_taken_0x2de580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE580u;
        // 0x2de584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de580) {
            ctx->pc = 0x2DE5A8u;
            goto label_2de5a8;
        }
    }
    ctx->pc = 0x2DE588u;
    // 0x2de588: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2de588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2de58c: 0xc08750a  jal         func_21D428
    ctx->pc = 0x2DE58Cu;
    SET_GPR_U32(ctx, 31, 0x2DE594u);
    ctx->pc = 0x2DE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE58Cu;
    // 0x2de590: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2DE58Cu, 0x2DE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE594u;
label_2de594:
    // 0x2de594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de598: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x2DE598u;
    SET_GPR_U32(ctx, 31, 0x2DE5A0u);
    ctx->pc = 0x2DE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE598u;
    // 0x2de59c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2DE598u, 0x2DE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5A0u;
label_2de5a0:
    // 0x2de5a0: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2DE5A0u;
    SET_GPR_U32(ctx, 31, 0x2DE5A8u);
    ctx->pc = 0x2DE5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5A0u;
    // 0x2de5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DE5A0u, 0x2DE5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5A8u;
label_2de5a8:
    // 0x2de5a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2de5ac: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2de5acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x2de5b0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2de5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2de5b4: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2de5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
    // 0x2de5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de5bc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2de5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2de5c0: 0x8c710048  lw          $s1, 0x48($v1)
    ctx->pc = 0x2de5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2de5c4: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2DE5C4u;
    SET_GPR_U32(ctx, 31, 0x2DE5CCu);
    ctx->pc = 0x2DE5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5C4u;
    // 0x2de5c8: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2DE5C4u, 0x2DE5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5CCu;
label_2de5cc:
    // 0x2de5cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2de5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2de5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de5d4: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2de5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x2de5d8: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x2de5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2de5dc: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2DE5DCu;
    SET_GPR_U32(ctx, 31, 0x2DE5E4u);
    ctx->pc = 0x2DE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5DCu;
    // 0x2de5e0: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2DE5DCu, 0x2DE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5E4u;
label_2de5e4:
    // 0x2de5e4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2de5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2de5e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2de5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de5ec: 0xae510020  sw          $s1, 0x20($s2)
    ctx->pc = 0x2de5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 17));
    // 0x2de5f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2de5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de5f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de5f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5FCu;
        // 0x2de600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE604u;
    // 0x2de604: 0x0  nop
    ctx->pc = 0x2de604u;
    // NOP
    ctx->pc = 0x2de608u;
}
