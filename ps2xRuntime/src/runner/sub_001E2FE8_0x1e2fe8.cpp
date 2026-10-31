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

// Function: sub_001E2FE8
// Address: 0x1e2fe8 - 0x1e3070
void sub_001E2FE8_0x1e2fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2FE8_0x1e2fe8");
#endif

    switch (ctx->pc) {
        case 0x1e304cu: goto label_1e304c;
        default: break;
    }

    ctx->pc = 0x1e2fe8u;

    // 0x1e2fe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e2fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e2fec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e2ff0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e2ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e2ff4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e2ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e2ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3004: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e3004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1e3008: 0x8c71d310  lw          $s1, -0x2CF0($v1)
    ctx->pc = 0x1e3008u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1e300c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e300cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3010: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1e3010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3014: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e3014u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e301c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e301cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e3020: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1e3024: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1e3024u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1e3028: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1e3028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e302c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e302cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3030: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1e3030u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1e3034: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1e3034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e3038: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x1e3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e303c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e303cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3040: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x1e3040u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x1e3044: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1E3044u;
    SET_GPR_U32(ctx, 31, 0x1E304Cu);
    ctx->pc = 0x1E3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3044u;
    // 0x1e3048: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1E3044u, 0x1E304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E304Cu;
label_1e304c:
    // 0x1e304c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3050: 0xae110260  sw          $s1, 0x260($s0)
    ctx->pc = 0x1e3050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 17));
    // 0x1e3054: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e3054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e3058: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e3058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e305c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e305cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e3060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3068: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3068u;
        // 0x1e306c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3070u;
}
