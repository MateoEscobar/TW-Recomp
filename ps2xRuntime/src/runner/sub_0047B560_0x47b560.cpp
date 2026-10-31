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

// Function: sub_0047B560
// Address: 0x47b560 - 0x47b5e0
void sub_0047B560_0x47b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B560_0x47b560");
#endif

    switch (ctx->pc) {
        case 0x47b570u: goto label_47b570;
        case 0x47b594u: goto label_47b594;
        case 0x47b5b0u: goto label_47b5b0;
        case 0x47b5bcu: goto label_47b5bc;
        case 0x47b5ccu: goto label_47b5cc;
        default: break;
    }

    ctx->pc = 0x47b560u;

    // 0x47b560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47b568: 0xc11851c  jal         func_461470
    ctx->pc = 0x47B568u;
    SET_GPR_U32(ctx, 31, 0x47B570u);
    ctx->pc = 0x47B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B568u;
    // 0x47b56c: 0x24041001  addiu       $a0, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x47B568u, 0x47B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B570u;
label_47b570:
    // 0x47b570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b574: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x47b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x47b578: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47b578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47b57c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47b580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47b584: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x47B584u;
    {
        const bool branch_taken_0x47b584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B584u;
        // 0x47b588: 0xac64005c  sw          $a0, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b584) {
            ctx->pc = 0x47B5C4u;
            goto label_47b5c4;
        }
    }
    ctx->pc = 0x47B58Cu;
    // 0x47b58c: 0xc11cfb4  jal         func_473ED0
    ctx->pc = 0x47B58Cu;
    SET_GPR_U32(ctx, 31, 0x47B594u);
    ctx->pc = 0x47B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B58Cu;
    // 0x47b590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473ED0u, 0x47B58Cu, 0x47B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B594u;
label_47b594:
    // 0x47b594: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47b598: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47b598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x47b59c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47b5a0: 0x24a5eed0  addiu       $a1, $a1, -0x1130
    ctx->pc = 0x47b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962896));
    // 0x47b5a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x47b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x47b5a8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47B5A8u;
    SET_GPR_U32(ctx, 31, 0x47B5B0u);
    ctx->pc = 0x47B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B5A8u;
    // 0x47b5ac: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47B5A8u, 0x47B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5B0u;
label_47b5b0:
    // 0x47b5b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47b5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b5b4: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47B5B4u;
    SET_GPR_U32(ctx, 31, 0x47B5BCu);
    ctx->pc = 0x47B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B5B4u;
    // 0x47b5b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47B5B4u, 0x47B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5BCu;
label_47b5bc:
    // 0x47b5bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B5BCu;
    {
        const bool branch_taken_0x47b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B5BCu;
        // 0x47b5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b5bc) {
            ctx->pc = 0x47B5D0u;
            goto label_47b5d0;
        }
    }
    ctx->pc = 0x47B5C4u;
label_47b5c4:
    // 0x47b5c4: 0xc11cfb4  jal         func_473ED0
    ctx->pc = 0x47B5C4u;
    SET_GPR_U32(ctx, 31, 0x47B5CCu);
    ctx->pc = 0x473ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473ED0u, 0x47B5C4u, 0x47B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5CCu;
label_47b5cc:
    // 0x47b5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b5d0:
    // 0x47b5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47b5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x47B5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B5D4u;
        // 0x47b5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B5DCu;
    // 0x47b5dc: 0x0  nop
    ctx->pc = 0x47b5dcu;
    // NOP
    ctx->pc = 0x47b5e0u;
}
