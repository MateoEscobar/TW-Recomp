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

// Function: sub_0039C2E0
// Address: 0x39c2e0 - 0x39c388
void sub_0039C2E0_0x39c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C2E0_0x39c2e0");
#endif

    switch (ctx->pc) {
        case 0x39c32cu: goto label_39c32c;
        case 0x39c338u: goto label_39c338;
        case 0x39c340u: goto label_39c340;
        case 0x39c350u: goto label_39c350;
        case 0x39c358u: goto label_39c358;
        case 0x39c368u: goto label_39c368;
        case 0x39c374u: goto label_39c374;
        default: break;
    }

    ctx->pc = 0x39c2e0u;

    // 0x39c2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39c2e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x39c2e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x39c2ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c2f0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x39c2f4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x39c2f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39c2f8: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x39c2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x39c2fc: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x39c2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x39c300: 0x48e00  sll         $s1, $a0, 24
    ctx->pc = 0x39c300u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x39c304: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x39c304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x39c308: 0x90a4000c  lbu         $a0, 0xC($a1)
    ctx->pc = 0x39c308u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x39c30c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x39c30cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x39c310: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x39c310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x39c314: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x39c314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x39c318: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x39C318u;
    {
        const bool branch_taken_0x39c318 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C318u;
        // 0x39c31c: 0x2248825  or          $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c318) {
            ctx->pc = 0x39C360u;
            goto label_39c360;
        }
    }
    ctx->pc = 0x39C320u;
    // 0x39c320: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x39c320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x39c324: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39C324u;
    SET_GPR_U32(ctx, 31, 0x39C32Cu);
    ctx->pc = 0x39C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C324u;
    // 0x39c328: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39C324u, 0x39C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C32Cu;
label_39c32c:
    // 0x39c32c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39c330: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39C330u;
    SET_GPR_U32(ctx, 31, 0x39C338u);
    ctx->pc = 0x39C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C330u;
    // 0x39c334: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39C330u, 0x39C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C338u;
label_39c338:
    // 0x39c338: 0xc0e4060  jal         func_390180
    ctx->pc = 0x39C338u;
    SET_GPR_U32(ctx, 31, 0x39C340u);
    ctx->pc = 0x39C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C338u;
    // 0x39c33c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39C338u, 0x39C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C340u;
label_39c340:
    // 0x39c340: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39c344: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x39c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x39c348: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39C348u;
    SET_GPR_U32(ctx, 31, 0x39C350u);
    ctx->pc = 0x39C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C348u;
    // 0x39c34c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39C348u, 0x39C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C350u;
label_39c350:
    // 0x39c350: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39C350u;
    SET_GPR_U32(ctx, 31, 0x39C358u);
    ctx->pc = 0x39C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C350u;
    // 0x39c354: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39C350u, 0x39C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C358u;
label_39c358:
    // 0x39c358: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39C358u;
    {
        const bool branch_taken_0x39c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C358u;
        // 0x39c35c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c358) {
            ctx->pc = 0x39C378u;
            goto label_39c378;
        }
    }
    ctx->pc = 0x39C360u;
label_39c360:
    // 0x39c360: 0xc0e4060  jal         func_390180
    ctx->pc = 0x39C360u;
    SET_GPR_U32(ctx, 31, 0x39C368u);
    ctx->pc = 0x39C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C360u;
    // 0x39c364: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39C360u, 0x39C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C368u;
label_39c368:
    // 0x39c368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39c368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c36c: 0xc07a6b0  jal         func_1E9AC0
    ctx->pc = 0x39C36Cu;
    SET_GPR_U32(ctx, 31, 0x39C374u);
    ctx->pc = 0x39C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C36Cu;
    // 0x39c370: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AC0u, 0x39C36Cu, 0x39C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C374u;
label_39c374:
    // 0x39c374: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39c374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c378:
    // 0x39c378: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39c378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c380: 0x3e00008  jr          $ra
    ctx->pc = 0x39C380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C380u;
        // 0x39c384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C388u;
}
