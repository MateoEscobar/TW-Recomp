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

// Function: sub_00373370
// Address: 0x373370 - 0x373400
void sub_00373370_0x373370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373370_0x373370");
#endif

    switch (ctx->pc) {
        case 0x373398u: goto label_373398;
        case 0x3733a0u: goto label_3733a0;
        case 0x3733b8u: goto label_3733b8;
        case 0x3733c0u: goto label_3733c0;
        case 0x3733d4u: goto label_3733d4;
        case 0x3733e4u: goto label_3733e4;
        default: break;
    }

    ctx->pc = 0x373370u;

    // 0x373370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37337c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x373380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373384: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x373384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373388: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37338c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373390: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373390u;
    SET_GPR_U32(ctx, 31, 0x373398u);
    ctx->pc = 0x373394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373390u;
    // 0x373394: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373390u, 0x373398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373398u;
label_373398:
    // 0x373398: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373398u;
    SET_GPR_U32(ctx, 31, 0x3733A0u);
    ctx->pc = 0x37339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373398u;
    // 0x37339c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373398u, 0x3733A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733A0u;
label_3733a0:
    // 0x3733a0: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3733a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3733a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3733a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3733a8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3733a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3733ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3733acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3733b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3733B0u;
    SET_GPR_U32(ctx, 31, 0x3733B8u);
    ctx->pc = 0x3733B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733B0u;
    // 0x3733b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3733B0u, 0x3733B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733B8u;
label_3733b8:
    // 0x3733b8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3733B8u;
    SET_GPR_U32(ctx, 31, 0x3733C0u);
    ctx->pc = 0x3733BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733B8u;
    // 0x3733bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3733B8u, 0x3733C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733C0u;
label_3733c0:
    // 0x3733c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3733c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3733c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3733c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3733c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3733c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3733cc: 0xc102488  jal         func_409220
    ctx->pc = 0x3733CCu;
    SET_GPR_U32(ctx, 31, 0x3733D4u);
    ctx->pc = 0x3733D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733CCu;
    // 0x3733d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3733CCu, 0x3733D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733D4u;
label_3733d4:
    // 0x3733d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3733d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3733d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3733d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3733dc: 0xc05aace  jal         func_16AB38
    ctx->pc = 0x3733DCu;
    SET_GPR_U32(ctx, 31, 0x3733E4u);
    ctx->pc = 0x3733E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733DCu;
    // 0x3733e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB38u, 0x3733DCu, 0x3733E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733E4u;
label_3733e4:
    // 0x3733e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3733e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3733e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3733e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3733ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3733ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3733f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3733f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3733f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3733f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3733f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3733F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3733FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733F8u;
        // 0x3733fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3733F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373400u;
}
