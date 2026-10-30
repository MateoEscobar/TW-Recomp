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

// Function: sub_001B2CA0
// Address: 0x1b2ca0 - 0x1b2d80
void sub_001B2CA0_0x1b2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2CA0_0x1b2ca0");
#endif

    switch (ctx->pc) {
        case 0x1b2cfcu: goto label_1b2cfc;
        case 0x1b2d18u: goto label_1b2d18;
        case 0x1b2d3cu: goto label_1b2d3c;
        case 0x1b2d54u: goto label_1b2d54;
        default: break;
    }

    ctx->pc = 0x1b2ca0u;

    // 0x1b2ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b2ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b2ca4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b2ca8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b2cac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b2cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b2cb0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b2cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2cb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cbc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1b2cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b2cc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b2cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b2cc8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b2cc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2ccc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2CCCu;
    {
        const bool branch_taken_0x1b2ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CCCu;
        // 0x1b2cd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ccc) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2CD4u;
    // 0x1b2cd4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1b2cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1b2cd8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b2cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b2cdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b2cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b2ce0:
    // 0x1b2ce0: 0x265315d0  addiu       $s3, $s2, 0x15D0
    ctx->pc = 0x1b2ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    // 0x1b2ce4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b2cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b2cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cf4: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2CF4u;
    SET_GPR_U32(ctx, 31, 0x1B2CFCu);
    ctx->pc = 0x1B2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CF4u;
    // 0x1b2cf8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2CF4u, 0x1B2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CFCu;
label_1b2cfc:
    // 0x1b2cfc: 0x26523f10  addiu       $s2, $s2, 0x3F10
    ctx->pc = 0x1b2cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    // 0x1b2d00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b2d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d10: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2D10u;
    SET_GPR_U32(ctx, 31, 0x1B2D18u);
    ctx->pc = 0x1B2D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D10u;
    // 0x1b2d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2D10u, 0x1B2D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D18u;
label_1b2d18:
    // 0x1b2d18: 0x2602ffe3  addiu       $v0, $s0, -0x1D
    ctx->pc = 0x1b2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967267));
    // 0x1b2d1c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b2d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b2d20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2D20u;
    {
        const bool branch_taken_0x1b2d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D20u;
        // 0x1b2d24: 0x3c0663db  lui         $a2, 0x63DB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25563 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d20) {
            ctx->pc = 0x1B2D54u;
            goto label_1b2d54;
        }
    }
    ctx->pc = 0x1B2D28u;
    // 0x1b2d28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d30: 0x34c64bff  ori         $a2, $a2, 0x4BFF
    ctx->pc = 0x1b2d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19455);
    // 0x1b2d34: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B2D34u;
    SET_GPR_U32(ctx, 31, 0x1B2D3Cu);
    ctx->pc = 0x1B2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D34u;
    // 0x1b2d38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B2D34u, 0x1B2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D3Cu;
label_1b2d3c:
    // 0x1b2d3c: 0x3c0663db  lui         $a2, 0x63DB
    ctx->pc = 0x1b2d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25563 << 16));
    // 0x1b2d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d48: 0x34c64bff  ori         $a2, $a2, 0x4BFF
    ctx->pc = 0x1b2d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19455);
    // 0x1b2d4c: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D54u);
    ctx->pc = 0x1B2D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D4Cu;
    // 0x1b2d50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B2D4Cu, 0x1B2D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D54u;
label_1b2d54:
    // 0x1b2d54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b2d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2d58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b2d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b2d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2d60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b2d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d68: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b2d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D6Cu;
        // 0x1b2d70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2D74u;
    // 0x1b2d74: 0x0  nop
    ctx->pc = 0x1b2d74u;
    // NOP
    // 0x1b2d78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b2d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b2d7c: 0x0  nop
    ctx->pc = 0x1b2d7cu;
    // NOP
    ctx->pc = 0x1b2d80u;
}
