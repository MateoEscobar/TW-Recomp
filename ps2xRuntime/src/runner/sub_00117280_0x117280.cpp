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

// Function: sub_00117280
// Address: 0x117280 - 0x1172c8
void sub_00117280_0x117280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117280_0x117280");
#endif

    switch (ctx->pc) {
        case 0x1172b8u: goto label_1172b8;
        default: break;
    }

    ctx->pc = 0x117280u;

    // 0x117280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117284: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x117284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11728c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x117290: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x117290u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x117294: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x117294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x117298: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x117298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11729c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11729cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1172a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1172a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1172a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1172a8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1172a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172ac: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1172acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1172b0: 0xc04420c  jal         func_110830
    ctx->pc = 0x1172B0u;
    SET_GPR_U32(ctx, 31, 0x1172B8u);
    ctx->pc = 0x1172B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172B0u;
    // 0x1172b4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x1172B0u, 0x1172B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172B8u;
label_1172b8:
    // 0x1172b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1172b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1172bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1172BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1172C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172BCu;
        // 0x1172c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1172BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1172C4u;
    // 0x1172c4: 0x0  nop
    ctx->pc = 0x1172c4u;
    // NOP
    ctx->pc = 0x1172c8u;
}
