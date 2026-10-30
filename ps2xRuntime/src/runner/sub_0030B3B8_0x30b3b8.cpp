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

// Function: sub_0030B3B8
// Address: 0x30b3b8 - 0x30b458
void sub_0030B3B8_0x30b3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B3B8_0x30b3b8");
#endif

    switch (ctx->pc) {
        case 0x30b3f8u: goto label_30b3f8;
        case 0x30b400u: goto label_30b400;
        case 0x30b408u: goto label_30b408;
        case 0x30b428u: goto label_30b428;
        default: break;
    }

    ctx->pc = 0x30b3b8u;

    // 0x30b3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30b3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30b3bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30b3c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30b3c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30b3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30b3c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30b3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b3d0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x30b3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30b3d4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B3D4u;
    {
        const bool branch_taken_0x30b3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b3d4) {
            ctx->pc = 0x30B3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B3D4u;
            // 0x30b3d8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B3E4u;
            goto label_30b3e4;
        }
    }
    ctx->pc = 0x30B3DCu;
    // 0x30b3dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30B3DCu;
    {
        const bool branch_taken_0x30b3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3DCu;
        // 0x30b3e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3dc) {
            ctx->pc = 0x30B440u;
            goto label_30b440;
        }
    }
    ctx->pc = 0x30B3E4u;
label_30b3e4:
    // 0x30b3e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30b3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b3e8: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x30b3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30b3ec: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30b3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30b3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b3f4: 0x0  nop
    ctx->pc = 0x30b3f4u;
    // NOP
label_30b3f8:
    // 0x30b3f8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30B3F8u;
    SET_GPR_U32(ctx, 31, 0x30B400u);
    ctx->pc = 0x30B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B3F8u;
    // 0x30b3fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30B3F8u, 0x30B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B400u;
label_30b400:
    // 0x30b400: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30B400u;
    SET_GPR_U32(ctx, 31, 0x30B408u);
    ctx->pc = 0x30B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B400u;
    // 0x30b404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30B400u, 0x30B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B408u;
label_30b408:
    // 0x30b408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b40c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B40Cu;
    {
        const bool branch_taken_0x30b40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B40Cu;
        // 0x30b410: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b40c) {
            ctx->pc = 0x30B430u;
            goto label_30b430;
        }
    }
    ctx->pc = 0x30B414u;
    // 0x30b414: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30b418: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B418u;
    {
        const bool branch_taken_0x30b418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x30b418) {
            ctx->pc = 0x30B430u;
            goto label_30b430;
        }
    }
    ctx->pc = 0x30B420u;
    // 0x30b420: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x30B420u;
    SET_GPR_U32(ctx, 31, 0x30B428u);
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x30B420u, 0x30B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B428u;
label_30b428:
    // 0x30b428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B428u;
    {
        const bool branch_taken_0x30b428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B428u;
        // 0x30b42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b428) {
            ctx->pc = 0x30B440u;
            goto label_30b440;
        }
    }
    ctx->pc = 0x30B430u;
label_30b430:
    // 0x30b430: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30b430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30b434: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30B434u;
    {
        const bool branch_taken_0x30b434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B434u;
        // 0x30b438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b434) {
            ctx->pc = 0x30B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b3f8;
        }
    }
    ctx->pc = 0x30B43Cu;
    // 0x30b43c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30b43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b440:
    // 0x30b440: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30b440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b444: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30b444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b448: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30b448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b450: 0x3e00008  jr          $ra
    ctx->pc = 0x30B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B450u;
        // 0x30b454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B458u;
}
