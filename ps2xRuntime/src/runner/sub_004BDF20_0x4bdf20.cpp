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

// Function: sub_004BDF20
// Address: 0x4bdf20 - 0x4be028
void sub_004BDF20_0x4bdf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BDF20_0x4bdf20");
#endif

    ctx->pc = 0x4bdf20u;

    // 0x4bdf20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bdf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdf24: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4bdf24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bdf28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bdf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdf2c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4bdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4bdf30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bdf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bdf34: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x4bdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x4bdf38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4bdf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4bdf3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bdf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bdf40: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4bdf40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4bdf44: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BDF44u;
    {
        const bool branch_taken_0x4bdf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bdf44) {
            ctx->pc = 0x4BDF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDF44u;
            // 0x4bdf48: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDF68u;
            goto label_4bdf68;
        }
    }
    ctx->pc = 0x4BDF4Cu;
    // 0x4bdf4c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdf4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bdf50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bdf50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bdf54: 0x0  nop
    ctx->pc = 0x4bdf54u;
    // NOP
    // 0x4bdf58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BDF58u;
    {
        const bool branch_taken_0x4bdf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bdf58) {
            ctx->pc = 0x4BDF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDF58u;
            // 0x4bdf5c: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDF68u;
            goto label_4bdf68;
        }
    }
    ctx->pc = 0x4BDF60u;
    // 0x4bdf60: 0x3e00008  jr          $ra
    ctx->pc = 0x4BDF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDF60u;
        // 0x4bdf64: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BDF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BDF68u;
label_4bdf68:
    // 0x4bdf68: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x4bdf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x4bdf6c: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x4bdf6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x4bdf70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bdf70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bdf74: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x4bdf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x4bdf78: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x4bdf78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x4bdf7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bdf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bdf80: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x4bdf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x4bdf84: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x4bdf84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x4bdf88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bdf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bdf8c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bdf8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bdf90: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x4bdf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x4bdf94: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x4bdf94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x4bdf98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bdf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bdf9c: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x4bdf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x4bdfa0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x4bdfa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x4bdfa4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bdfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bdfa8: 0x460c2982  mul.s       $f6, $f5, $f12
    ctx->pc = 0x4bdfa8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x4bdfac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4bdfacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bdfb0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bdfb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bdfb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4bdfb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4bdfb8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bdfb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bdfbc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4bdfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4bdfc0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bdfc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bdfc4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BDFC4u;
    {
        const bool branch_taken_0x4bdfc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDFC4u;
        // 0x4bdfc8: 0x46040040  add.s       $f1, $f0, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdfc4) {
            ctx->pc = 0x4BDFECu;
            goto label_4bdfec;
        }
    }
    ctx->pc = 0x4BDFCCu;
    // 0x4bdfcc: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x4bdfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x4bdfd0: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x4bdfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x4bdfd4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bdfd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bdfd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bdfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bdfdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4bdfdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bdfe0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bdfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bdfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BDFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDFE4u;
        // 0x4bdfe8: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BDFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BDFECu;
label_4bdfec:
    // 0x4bdfec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bdfecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bdff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bdff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bdff4: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x4bdff4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x4bdff8: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x4bdff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x4bdffc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bdffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4be000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4be000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be004: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x4be004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x4be008: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x4be008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x4be00c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4be00cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4be010: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4be010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4be014: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x4be014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x4be018: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4be018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4be01c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE01Cu;
        // 0x4be020: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE024u;
    // 0x4be024: 0x0  nop
    ctx->pc = 0x4be024u;
    // NOP
    ctx->pc = 0x4be028u;
}
