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

// Function: sub_0037AFB8
// Address: 0x37afb8 - 0x37b038
void sub_0037AFB8_0x37afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AFB8_0x37afb8");
#endif

    switch (ctx->pc) {
        case 0x37afe0u: goto label_37afe0;
        case 0x37afe8u: goto label_37afe8;
        case 0x37affcu: goto label_37affc;
        case 0x37b004u: goto label_37b004;
        case 0x37b010u: goto label_37b010;
        case 0x37b01cu: goto label_37b01c;
        default: break;
    }

    ctx->pc = 0x37afb8u;

    // 0x37afb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37afb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37afbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37afbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37afc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37afc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37afc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37afc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37afc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37afcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37afccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37afd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37afd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37afd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AFD8u;
    SET_GPR_U32(ctx, 31, 0x37AFE0u);
    ctx->pc = 0x37AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFD8u;
    // 0x37afdc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AFD8u, 0x37AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFE0u;
label_37afe0:
    // 0x37afe0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37AFE0u;
    SET_GPR_U32(ctx, 31, 0x37AFE8u);
    ctx->pc = 0x37AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFE0u;
    // 0x37afe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37AFE0u, 0x37AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFE8u;
label_37afe8:
    // 0x37afe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37afe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37afec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37afecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aff0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37aff4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AFF4u;
    SET_GPR_U32(ctx, 31, 0x37AFFCu);
    ctx->pc = 0x37AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFF4u;
    // 0x37aff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AFF4u, 0x37AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFFCu;
label_37affc:
    // 0x37affc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37AFFCu;
    SET_GPR_U32(ctx, 31, 0x37B004u);
    ctx->pc = 0x37B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFFCu;
    // 0x37b000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37AFFCu, 0x37B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B004u;
label_37b004:
    // 0x37b004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b008: 0xc104c66  jal         func_413198
    ctx->pc = 0x37B008u;
    SET_GPR_U32(ctx, 31, 0x37B010u);
    ctx->pc = 0x37B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B008u;
    // 0x37b00c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413198u, 0x37B008u, 0x37B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B010u;
label_37b010:
    // 0x37b010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b014: 0xc102562  jal         func_409588
    ctx->pc = 0x37B014u;
    SET_GPR_U32(ctx, 31, 0x37B01Cu);
    ctx->pc = 0x37B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B014u;
    // 0x37b018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37B014u, 0x37B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B01Cu;
label_37b01c:
    // 0x37b01c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37b01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b024: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37b024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b028: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37b028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b030: 0x3e00008  jr          $ra
    ctx->pc = 0x37B030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B030u;
        // 0x37b034: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B038u;
}
