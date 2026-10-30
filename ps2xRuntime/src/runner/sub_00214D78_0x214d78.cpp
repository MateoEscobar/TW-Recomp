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

// Function: sub_00214D78
// Address: 0x214d78 - 0x214df0
void sub_00214D78_0x214d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D78_0x214d78");
#endif

    switch (ctx->pc) {
        case 0x214d9cu: goto label_214d9c;
        case 0x214dd4u: goto label_214dd4;
        default: break;
    }

    ctx->pc = 0x214d78u;

    // 0x214d78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214d7c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x214d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x214d80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214d84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x214d88: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x214d88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x214d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214d94: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x214D94u;
    SET_GPR_U32(ctx, 31, 0x214D9Cu);
    ctx->pc = 0x214D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D94u;
    // 0x214d98: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x214D94u, 0x214D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D9Cu;
label_214d9c:
    // 0x214d9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x214d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x214da0: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x214da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x214da4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x214da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x214da8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x214da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x214dac: 0x3c014607  lui         $at, 0x4607
    ctx->pc = 0x214dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17927 << 16));
    // 0x214db0: 0x3421f000  ori         $at, $at, 0xF000
    ctx->pc = 0x214db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x214db4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214db8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dbc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x214dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214dc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dc8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214dcc: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x214DCCu;
    SET_GPR_U32(ctx, 31, 0x214DD4u);
    ctx->pc = 0x214DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DCCu;
    // 0x214dd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x214DCCu, 0x214DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214DD4u;
label_214dd4:
    // 0x214dd4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x214dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x214dd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214ddc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214de4: 0x3e00008  jr          $ra
    ctx->pc = 0x214DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DE4u;
        // 0x214de8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214DECu;
    // 0x214dec: 0x0  nop
    ctx->pc = 0x214decu;
    // NOP
    ctx->pc = 0x214df0u;
}
