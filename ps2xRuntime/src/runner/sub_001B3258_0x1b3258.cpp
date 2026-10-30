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

// Function: sub_001B3258
// Address: 0x1b3258 - 0x1b32e0
void sub_001B3258_0x1b3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3258_0x1b3258");
#endif

    switch (ctx->pc) {
        case 0x1b329cu: goto label_1b329c;
        case 0x1b32b4u: goto label_1b32b4;
        case 0x1b32c4u: goto label_1b32c4;
        default: break;
    }

    ctx->pc = 0x1b3258u;

    // 0x1b3258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b325c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1b325cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3260: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b3264: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3268: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b326c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b326cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b3270: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b3270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b3274: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b3274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b327c: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1b327cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x1b3280: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b3280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b3284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3288: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b3288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b328c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3294: 0xc06ca64  jal         func_1B2990
    ctx->pc = 0x1B3294u;
    SET_GPR_U32(ctx, 31, 0x1B329Cu);
    ctx->pc = 0x1B3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3294u;
    // 0x1b3298: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x1B3294u, 0x1B329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B329Cu;
label_1b329c:
    // 0x1b329c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b329cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1b32a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b32a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32a4: 0xc46cd424  lwc1        $f12, -0x2BDC($v1)
    ctx->pc = 0x1b32a4u;
    { uint32_t bits = FAST_READ32(0x50D424u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b32a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b32a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32ac: 0xc06cb10  jal         func_1B2C40
    ctx->pc = 0x1B32ACu;
    SET_GPR_U32(ctx, 31, 0x1B32B4u);
    ctx->pc = 0x1B32B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32ACu;
    // 0x1b32b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C40u, 0x1B32ACu, 0x1B32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32B4u;
label_1b32b4:
    // 0x1b32b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b32b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32bc: 0xc06ccb8  jal         func_1B32E0
    ctx->pc = 0x1B32BCu;
    SET_GPR_U32(ctx, 31, 0x1B32C4u);
    ctx->pc = 0x1B32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32BCu;
    // 0x1b32c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x1B32BCu, 0x1B32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32C4u;
label_1b32c4:
    // 0x1b32c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b32c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b32c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b32c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b32cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b32ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b32d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b32d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b32d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b32d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b32d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B32D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32D8u;
        // 0x1b32dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B32D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B32E0u;
}
