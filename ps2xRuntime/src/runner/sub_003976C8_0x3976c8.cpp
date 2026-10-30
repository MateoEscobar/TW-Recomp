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

// Function: sub_003976C8
// Address: 0x3976c8 - 0x397730
void sub_003976C8_0x3976c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003976C8_0x3976c8");
#endif

    switch (ctx->pc) {
        case 0x3976ecu: goto label_3976ec;
        case 0x3976f8u: goto label_3976f8;
        case 0x397700u: goto label_397700;
        case 0x397710u: goto label_397710;
        case 0x397718u: goto label_397718;
        default: break;
    }

    ctx->pc = 0x3976c8u;

    // 0x3976c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3976c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3976cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3976ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3976d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3976d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3976d4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3976d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3976d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3976d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3976dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3976dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3976e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3976e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3976e4: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3976E4u;
    SET_GPR_U32(ctx, 31, 0x3976ECu);
    ctx->pc = 0x3976E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3976E4u;
    // 0x3976e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3976E4u, 0x3976ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3976ECu;
label_3976ec:
    // 0x3976ec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3976ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3976f0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3976F0u;
    SET_GPR_U32(ctx, 31, 0x3976F8u);
    ctx->pc = 0x3976F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3976F0u;
    // 0x3976f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3976F0u, 0x3976F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3976F8u;
label_3976f8:
    // 0x3976f8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3976F8u;
    SET_GPR_U32(ctx, 31, 0x397700u);
    ctx->pc = 0x3976FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3976F8u;
    // 0x3976fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3976F8u, 0x397700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397700u;
label_397700:
    // 0x397700: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x397704: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x397704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x397708: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x397708u;
    SET_GPR_U32(ctx, 31, 0x397710u);
    ctx->pc = 0x39770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397708u;
    // 0x39770c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x397708u, 0x397710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397710u;
label_397710:
    // 0x397710: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x397710u;
    SET_GPR_U32(ctx, 31, 0x397718u);
    ctx->pc = 0x397714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397710u;
    // 0x397714: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x397710u, 0x397718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397718u;
label_397718:
    // 0x397718: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x397718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39771c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39771cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397724: 0x3e00008  jr          $ra
    ctx->pc = 0x397724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397724u;
        // 0x397728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39772Cu;
    // 0x39772c: 0x0  nop
    ctx->pc = 0x39772cu;
    // NOP
    ctx->pc = 0x397730u;
}
