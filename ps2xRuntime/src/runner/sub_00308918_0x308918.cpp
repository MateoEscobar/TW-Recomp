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

// Function: sub_00308918
// Address: 0x308918 - 0x3089b0
void sub_00308918_0x308918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308918_0x308918");
#endif

    switch (ctx->pc) {
        case 0x308968u: goto label_308968;
        default: break;
    }

    ctx->pc = 0x308918u;

    // 0x308918: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30891c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x308920: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x308920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x308924: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x308924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x308928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30892c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30892cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x308930: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x308930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x308934: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x308934u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x308938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30893c: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x30893cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x308940: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x308940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x308944: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x308944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x308948: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x308948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30894c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x308950: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x308950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x308954: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x308954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x308958: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x308958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30895c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30895cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x308960: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x308960u;
    SET_GPR_U32(ctx, 31, 0x308968u);
    ctx->pc = 0x308964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308960u;
    // 0x308964: 0xae090008  sw          $t1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x308960u, 0x308968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308968u;
label_308968:
    // 0x308968: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x308968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30896c: 0xa2110024  sb          $s1, 0x24($s0)
    ctx->pc = 0x30896cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 17));
    // 0x308970: 0x244233e0  addiu       $v0, $v0, 0x33E0
    ctx->pc = 0x308970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13280));
    // 0x308974: 0xa2120025  sb          $s2, 0x25($s0)
    ctx->pc = 0x308974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 18));
    // 0x308978: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x308978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30897c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30897cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308980: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x308980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x308984: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x308984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x308988: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x308988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x30898c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x30898cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x308990: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x308990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x308994: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x308994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308998: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x308998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30899c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30899cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3089a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3089a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3089a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3089A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3089A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089A4u;
        // 0x3089a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3089A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3089ACu;
    // 0x3089ac: 0x0  nop
    ctx->pc = 0x3089acu;
    // NOP
    ctx->pc = 0x3089b0u;
}
