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

// Function: sub_0014E998
// Address: 0x14e998 - 0x14ea28
void sub_0014E998_0x14e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E998_0x14e998");
#endif

    switch (ctx->pc) {
        case 0x14e9b8u: goto label_14e9b8;
        case 0x14e9c8u: goto label_14e9c8;
        case 0x14e9d4u: goto label_14e9d4;
        case 0x14e9dcu: goto label_14e9dc;
        case 0x14e9e4u: goto label_14e9e4;
        case 0x14e9f8u: goto label_14e9f8;
        case 0x14ea08u: goto label_14ea08;
        default: break;
    }

    ctx->pc = 0x14e998u;

    // 0x14e998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e99c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e9a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9a4: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x14e9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14e9a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14E9A8u;
    {
        const bool branch_taken_0x14e9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9A8u;
        // 0x14e9ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9a8) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E9B0u;
    // 0x14e9b0: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E9B0u;
    SET_GPR_U32(ctx, 31, 0x14E9B8u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E9B0u, 0x14E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9B8u;
label_14e9b8:
    // 0x14e9b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14e9bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e9c0: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E9C0u;
    SET_GPR_U32(ctx, 31, 0x14E9C8u);
    ctx->pc = 0x14E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9C0u;
    // 0x14e9c4: 0xac50c20c  sw          $s0, -0x3DF4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951436), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E9C0u, 0x14E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9C8u;
label_14e9c8:
    // 0x14e9c8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x14e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e9cc: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E9CCu;
    SET_GPR_U32(ctx, 31, 0x14E9D4u);
    ctx->pc = 0x14E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9CCu;
    // 0x14e9d0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E9CCu, 0x14E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9D4u;
label_14e9d4:
    // 0x14e9d4: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E9D4u;
    SET_GPR_U32(ctx, 31, 0x14E9DCu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E9D4u, 0x14E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9DCu;
label_14e9dc:
    // 0x14e9dc: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E9DCu;
    SET_GPR_U32(ctx, 31, 0x14E9E4u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E9DCu, 0x14E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9E4u;
label_14e9e4:
    // 0x14e9e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14E9E4u;
    {
        const bool branch_taken_0x14e9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9E4u;
        // 0x14e9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9e4) {
            ctx->pc = 0x14EA0Cu;
            goto label_14ea0c;
        }
    }
    ctx->pc = 0x14E9ECu;
label_14e9ec:
    // 0x14e9ec: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14e9f0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14E9F0u;
    SET_GPR_U32(ctx, 31, 0x14E9F8u);
    ctx->pc = 0x14E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9F0u;
    // 0x14e9f4: 0x2484bbf8  addiu       $a0, $a0, -0x4408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14E9F0u, 0x14E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9F8u;
label_14e9f8:
    // 0x14e9f8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14e9fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea00: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EA00u;
    SET_GPR_U32(ctx, 31, 0x14EA08u);
    ctx->pc = 0x14EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA00u;
    // 0x14ea04: 0x2484bc18  addiu       $a0, $a0, -0x43E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EA00u, 0x14EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA08u;
label_14ea08:
    // 0x14ea08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ea0c:
    // 0x14ea0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ea0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ea10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x14EA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA14u;
        // 0x14ea18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EA1Cu;
    // 0x14ea1c: 0x0  nop
    ctx->pc = 0x14ea1cu;
    // NOP
    // 0x14ea20: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14ea24: 0x0  nop
    ctx->pc = 0x14ea24u;
    // NOP
    ctx->pc = 0x14ea28u;
}
