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

// Function: sub_001D1958
// Address: 0x1d1958 - 0x1d19a8
void sub_001D1958_0x1d1958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1958_0x1d1958");
#endif

    switch (ctx->pc) {
        case 0x1d1998u: goto label_1d1998;
        default: break;
    }

    ctx->pc = 0x1d1958u;

    // 0x1d1958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d195c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d195cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1964: 0x3c06ff80  lui         $a2, 0xFF80
    ctx->pc = 0x1d1964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65408 << 16));
    // 0x1d1968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d196c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d196cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d1970: 0x24840170  addiu       $a0, $a0, 0x170
    ctx->pc = 0x1d1970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x1d1974: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d1974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d1978: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x1d1978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x1d197c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d197cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1980: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d1980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1984: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1988: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d198c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d198cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1990: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1D1990u;
    SET_GPR_U32(ctx, 31, 0x1D1998u);
    ctx->pc = 0x1D1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1990u;
    // 0x1d1994: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1D1990u, 0x1D1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1998u;
label_1d1998:
    // 0x1d1998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d199c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D199Cu;
        // 0x1d19a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D199Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19A4u;
    // 0x1d19a4: 0x0  nop
    ctx->pc = 0x1d19a4u;
    // NOP
    ctx->pc = 0x1d19a8u;
}
