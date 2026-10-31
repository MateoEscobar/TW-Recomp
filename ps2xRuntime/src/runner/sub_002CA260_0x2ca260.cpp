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

// Function: sub_002CA260
// Address: 0x2ca260 - 0x2ca2c0
void sub_002CA260_0x2ca260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA260_0x2ca260");
#endif

    switch (ctx->pc) {
        case 0x2ca288u: goto label_2ca288;
        default: break;
    }

    ctx->pc = 0x2ca260u;

    // 0x2ca260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ca264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca26c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca270: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ca270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca278: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2ca278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2ca27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca280: 0xc0acb08  jal         func_2B2C20
    ctx->pc = 0x2CA280u;
    SET_GPR_U32(ctx, 31, 0x2CA288u);
    ctx->pc = 0x2CA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA280u;
    // 0x2ca284: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2CA280u, 0x2CA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA288u;
label_2ca288:
    // 0x2ca288: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2ca28c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ca28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ca290: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ca290u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2ca294: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x2ca294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
    // 0x2ca298: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2ca298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2ca29c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca2a4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ca2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ca2a8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2ca2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ca2ac: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x2ca2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x2ca2b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca2b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2B8u;
        // 0x2ca2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA2C0u;
}
