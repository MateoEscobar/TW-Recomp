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

// Function: sub_004D8AB0
// Address: 0x4d8ab0 - 0x4d8b10
void sub_004D8AB0_0x4d8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8AB0_0x4d8ab0");
#endif

    switch (ctx->pc) {
        case 0x4d8ad8u: goto label_4d8ad8;
        case 0x4d8ae8u: goto label_4d8ae8;
        case 0x4d8af4u: goto label_4d8af4;
        default: break;
    }

    ctx->pc = 0x4d8ab0u;

    // 0x4d8ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d8ab4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4d8ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4d8ab8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4d8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4d8abc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4d8abcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x4d8ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d8ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8ac4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d8ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4d8ac8: 0x8e0469ec  lw          $a0, 0x69EC($s0)
    ctx->pc = 0x4d8ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x4d8acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d8accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d8ad0: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x4D8AD0u;
    SET_GPR_U32(ctx, 31, 0x4D8AD8u);
    ctx->pc = 0x4D8AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8AD0u;
    // 0x4d8ad4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x4D8AD0u, 0x4D8AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8AD8u;
label_4d8ad8:
    // 0x4d8ad8: 0x8e0469ec  lw          $a0, 0x69EC($s0)
    ctx->pc = 0x4d8ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x4d8adc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d8adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8ae0: 0xc10eef6  jal         func_43BBD8
    ctx->pc = 0x4D8AE0u;
    SET_GPR_U32(ctx, 31, 0x4D8AE8u);
    ctx->pc = 0x4D8AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8AE0u;
    // 0x4d8ae4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43BBD8u, 0x4D8AE0u, 0x4D8AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8AE8u;
label_4d8ae8:
    // 0x4d8ae8: 0x8e0469ec  lw          $a0, 0x69EC($s0)
    ctx->pc = 0x4d8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x4d8aec: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x4D8AECu;
    SET_GPR_U32(ctx, 31, 0x4D8AF4u);
    ctx->pc = 0x4D8AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8AECu;
    // 0x4d8af0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x4D8AECu, 0x4D8AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8AF4u;
label_4d8af4:
    // 0x4d8af4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d8af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8af8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4d8af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8afc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d8afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8b00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4d8b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8b08: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8B08u;
        // 0x4d8b0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8B10u;
}
