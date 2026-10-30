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

// Function: sub_001019A0
// Address: 0x1019a0 - 0x101a00
void sub_001019A0_0x1019a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001019A0_0x1019a0");
#endif

    switch (ctx->pc) {
        case 0x1019bcu: goto label_1019bc;
        default: break;
    }

    ctx->pc = 0x1019a0u;

    // 0x1019a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1019a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1019a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1019a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1019a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1019acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1019b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019b4: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x1019B4u;
    SET_GPR_U32(ctx, 31, 0x1019BCu);
    ctx->pc = 0x1019B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019B4u;
    // 0x1019b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x1019B4u, 0x1019BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019BCu;
label_1019bc:
    // 0x1019bc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1019BCu;
    {
        const bool branch_taken_0x1019bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1019bc) {
            ctx->pc = 0x1019C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1019BCu;
            // 0x1019c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1019E8u;
            goto label_1019e8;
        }
    }
    ctx->pc = 0x1019C4u;
    // 0x1019c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1019c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1019c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1019c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1019cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1019ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1019d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1019d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1019d4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1019d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1019d8: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x1019d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1019dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1019dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1019e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1019e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1019e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1019e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1019e8:
    // 0x1019e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1019e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1019ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1019ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019ECu;
        // 0x1019f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1019ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1019F4u;
    // 0x1019f4: 0x0  nop
    ctx->pc = 0x1019f4u;
    // NOP
    // 0x1019f8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1019f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1019fc: 0x0  nop
    ctx->pc = 0x1019fcu;
    // NOP
    ctx->pc = 0x101a00u;
}
