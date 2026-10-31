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

// Function: sub_003418F8
// Address: 0x3418f8 - 0x341970
void sub_003418F8_0x3418f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003418F8_0x3418f8");
#endif

    switch (ctx->pc) {
        case 0x341918u: goto label_341918;
        default: break;
    }

    ctx->pc = 0x3418f8u;

    // 0x3418f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3418f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3418fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3418fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x341900: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x341900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x341904: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x341904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x341908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34190c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341910: 0xc0d0456  jal         func_341158
    ctx->pc = 0x341910u;
    SET_GPR_U32(ctx, 31, 0x341918u);
    ctx->pc = 0x341914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341910u;
    // 0x341914: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x341910u, 0x341918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341918u;
label_341918:
    // 0x341918: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x341918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x34191c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x34191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x341920: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x341920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x341924: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x341924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x341928: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x341928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x34192c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x34192cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x341930: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x341930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x341934: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x341934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x341938: 0xa600003c  sh          $zero, 0x3C($s0)
    ctx->pc = 0x341938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x34193c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x34193cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x341940: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x341940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x341944: 0x24a516d0  addiu       $a1, $a1, 0x16D0
    ctx->pc = 0x341944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5840));
    // 0x341948: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x341948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x34194c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34194cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341954: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x341954u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x341958: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x341958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x34195c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x34195cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116D0u));
    // 0x341960: 0x7e040060  sq          $a0, 0x60($s0)
    ctx->pc = 0x341960u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 4));
    // 0x341964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x341964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341968: 0x3e00008  jr          $ra
    ctx->pc = 0x341968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341968u;
        // 0x34196c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341970u;
}
