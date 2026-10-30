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

// Function: sub_00214D08
// Address: 0x214d08 - 0x214d78
void sub_00214D08_0x214d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D08_0x214d08");
#endif

    switch (ctx->pc) {
        case 0x214d2cu: goto label_214d2c;
        case 0x214d60u: goto label_214d60;
        default: break;
    }

    ctx->pc = 0x214d08u;

    // 0x214d08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214d0c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x214d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214d10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214d14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x214d18: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x214d18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x214d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214d24: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x214D24u;
    SET_GPR_U32(ctx, 31, 0x214D2Cu);
    ctx->pc = 0x214D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D24u;
    // 0x214d28: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x214D24u, 0x214D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D2Cu;
label_214d2c:
    // 0x214d2c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x214d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x214d30: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x214d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x214d34: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x214d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x214d38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214d3c: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x214d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x214d40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d48: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x214d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214d50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d54: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x214d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214d58: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x214D58u;
    SET_GPR_U32(ctx, 31, 0x214D60u);
    ctx->pc = 0x214D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D58u;
    // 0x214d5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x214D58u, 0x214D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D60u;
label_214d60:
    // 0x214d60: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x214d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x214d64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214d68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214d6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d70: 0x3e00008  jr          $ra
    ctx->pc = 0x214D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D70u;
        // 0x214d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214D78u;
}
