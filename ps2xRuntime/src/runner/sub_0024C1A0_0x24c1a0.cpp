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

// Function: sub_0024C1A0
// Address: 0x24c1a0 - 0x24c280
void sub_0024C1A0_0x24c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C1A0_0x24c1a0");
#endif

    switch (ctx->pc) {
        case 0x24c1ccu: goto label_24c1cc;
        case 0x24c1d4u: goto label_24c1d4;
        case 0x24c208u: goto label_24c208;
        case 0x24c214u: goto label_24c214;
        case 0x24c220u: goto label_24c220;
        case 0x24c22cu: goto label_24c22c;
        case 0x24c238u: goto label_24c238;
        case 0x24c240u: goto label_24c240;
        case 0x24c24cu: goto label_24c24c;
        case 0x24c25cu: goto label_24c25c;
        case 0x24c264u: goto label_24c264;
        default: break;
    }

    ctx->pc = 0x24c1a0u;

    // 0x24c1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24c1a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24c1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24c1a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24c1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24c1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24c1b8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x24c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x24c1bc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24C1BCu;
    {
        const bool branch_taken_0x24c1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1BCu;
        // 0x24c1c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1bc) {
            ctx->pc = 0x24C268u;
            goto label_24c268;
        }
    }
    ctx->pc = 0x24C1C4u;
    // 0x24c1c4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x24C1C4u;
    SET_GPR_U32(ctx, 31, 0x24C1CCu);
    ctx->pc = 0x24C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1C4u;
    // 0x24c1c8: 0x26240364  addiu       $a0, $s1, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24C1C4u, 0x24C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1CCu;
label_24c1cc:
    // 0x24c1cc: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x24C1CCu;
    SET_GPR_U32(ctx, 31, 0x24C1D4u);
    ctx->pc = 0x24C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1CCu;
    // 0x24c1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24C1CCu, 0x24C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1D4u;
label_24c1d4:
    // 0x24c1d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24c1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1d8: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x24C1D8u;
    {
        const bool branch_taken_0x24c1d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1D8u;
        // 0x24c1dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1d8) {
            ctx->pc = 0x24C264u;
            goto label_24c264;
        }
    }
    ctx->pc = 0x24C1E0u;
    // 0x24c1e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x24c1e4: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x24c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x24c1e8: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x24c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x24c1ec: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x24c1ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c1f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24c1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x24c1f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24c1f4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x24c1f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x24c1fc: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x24c1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x24c200: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x24C200u;
    SET_GPR_U32(ctx, 31, 0x24C208u);
    ctx->pc = 0x24C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C200u;
    // 0x24c204: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24C200u, 0x24C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C208u;
label_24c208:
    // 0x24c208: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x24c20c: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x24C20Cu;
    SET_GPR_U32(ctx, 31, 0x24C214u);
    ctx->pc = 0x24C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C20Cu;
    // 0x24c210: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24C20Cu, 0x24C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C214u;
label_24c214:
    // 0x24c214: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x24c218: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x24C218u;
    SET_GPR_U32(ctx, 31, 0x24C220u);
    ctx->pc = 0x24C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C218u;
    // 0x24c21c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x24C218u, 0x24C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C220u;
label_24c220:
    // 0x24c220: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x24c224: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x24C224u;
    SET_GPR_U32(ctx, 31, 0x24C22Cu);
    ctx->pc = 0x24C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C224u;
    // 0x24c228: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C224u, 0x24C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C22Cu;
label_24c22c:
    // 0x24c22c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x24c230: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x24C230u;
    SET_GPR_U32(ctx, 31, 0x24C238u);
    ctx->pc = 0x24C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C230u;
    // 0x24c234: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C230u, 0x24C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C238u;
label_24c238:
    // 0x24c238: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x24C238u;
    SET_GPR_U32(ctx, 31, 0x24C240u);
    ctx->pc = 0x24C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C238u;
    // 0x24c23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x24C238u, 0x24C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C240u;
label_24c240:
    // 0x24c240: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x24c244: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x24C244u;
    SET_GPR_U32(ctx, 31, 0x24C24Cu);
    ctx->pc = 0x24C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C244u;
    // 0x24c248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x24C244u, 0x24C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C24Cu;
label_24c24c:
    // 0x24c24c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x24c250: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x24c250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x24c254: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x24C254u;
    SET_GPR_U32(ctx, 31, 0x24C25Cu);
    ctx->pc = 0x24C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C254u;
    // 0x24c258: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x24C254u, 0x24C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C25Cu;
label_24c25c:
    // 0x24c25c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x24C25Cu;
    SET_GPR_U32(ctx, 31, 0x24C264u);
    ctx->pc = 0x24C260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C25Cu;
    // 0x24c260: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24C25Cu, 0x24C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C264u;
label_24c264:
    // 0x24c264: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24c264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24c268:
    // 0x24c268: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24c268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c26c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24c26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24c270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c274: 0x3e00008  jr          $ra
    ctx->pc = 0x24C274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C274u;
        // 0x24c278: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C27Cu;
    // 0x24c27c: 0x0  nop
    ctx->pc = 0x24c27cu;
    // NOP
    ctx->pc = 0x24c280u;
}
