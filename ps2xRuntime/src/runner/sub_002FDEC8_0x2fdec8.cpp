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

// Function: sub_002FDEC8
// Address: 0x2fdec8 - 0x2fdf50
void sub_002FDEC8_0x2fdec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDEC8_0x2fdec8");
#endif

    switch (ctx->pc) {
        case 0x2fdf34u: goto label_2fdf34;
        case 0x2fdf40u: goto label_2fdf40;
        default: break;
    }

    ctx->pc = 0x2fdec8u;

    // 0x2fdec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdecc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fdeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fded0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fded4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fded4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fded8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdedc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2fdedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fdee0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDEE0u;
    {
        const bool branch_taken_0x2fdee0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2FDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEE0u;
        // 0x2fdee4: 0xc4410110  lwc1        $f1, 0x110($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdee0) {
            ctx->pc = 0x2FDEFCu;
            goto label_2fdefc;
        }
    }
    ctx->pc = 0x2FDEE8u;
    // 0x2fdee8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fdee8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdeec: 0x0  nop
    ctx->pc = 0x2fdeecu;
    // NOP
    // 0x2fdef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDEF4u;
    {
        const bool branch_taken_0x2fdef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdef4) {
            ctx->pc = 0x2FDF18u;
            goto label_2fdf18;
        }
    }
    ctx->pc = 0x2FDEFCu;
label_2fdefc:
    // 0x2fdefc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2fdefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2fdf00: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2fdf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2fdf04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fdf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fdf08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf0c: 0x0  nop
    ctx->pc = 0x2fdf0cu;
    // NOP
    // 0x2fdf10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdf14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2fdf14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2fdf18:
    // 0x2fdf18: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2fdf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x2fdf1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2fdf1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2fdf20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fdf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fdf24: 0x0  nop
    ctx->pc = 0x2fdf24u;
    // NOP
    // 0x2fdf28: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2fdf28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2fdf2c: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2FDF2Cu;
    SET_GPR_U32(ctx, 31, 0x2FDF34u);
    ctx->pc = 0x2FDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF2Cu;
    // 0x2fdf30: 0x460c0b00  add.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2FDF2Cu, 0x2FDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF34u;
label_2fdf34:
    // 0x2fdf34: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2fdf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2fdf38: 0xc0bf71a  jal         func_2FDC68
    ctx->pc = 0x2FDF38u;
    SET_GPR_U32(ctx, 31, 0x2FDF40u);
    ctx->pc = 0x2FDF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF38u;
    // 0x2fdf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC68u, 0x2FDF38u, 0x2FDF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF40u;
label_2fdf40:
    // 0x2fdf40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fdf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdf48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF48u;
        // 0x2fdf4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF50u;
}
