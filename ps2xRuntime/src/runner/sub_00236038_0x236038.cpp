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

// Function: sub_00236038
// Address: 0x236038 - 0x2360f8
void sub_00236038_0x236038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236038_0x236038");
#endif

    switch (ctx->pc) {
        case 0x236058u: goto label_236058;
        case 0x236060u: goto label_236060;
        case 0x23608cu: goto label_23608c;
        case 0x2360e4u: goto label_2360e4;
        default: break;
    }

    ctx->pc = 0x236038u;

    // 0x236038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23603c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x23603cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x236040: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x236040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x236044: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x236044u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x236048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23604c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236050: 0xc0e4060  jal         func_390180
    ctx->pc = 0x236050u;
    SET_GPR_U32(ctx, 31, 0x236058u);
    ctx->pc = 0x236054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236050u;
    // 0x236054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x236050u, 0x236058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236058u;
label_236058:
    // 0x236058: 0xc08a61a  jal         func_229868
    ctx->pc = 0x236058u;
    SET_GPR_U32(ctx, 31, 0x236060u);
    ctx->pc = 0x23605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236058u;
    // 0x23605c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x236058u, 0x236060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236060u;
label_236060:
    // 0x236060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236064: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x236064u;
    {
        const bool branch_taken_0x236064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x236064) {
            ctx->pc = 0x236068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236064u;
            // 0x236068: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360E8u;
            goto label_2360e8;
        }
    }
    ctx->pc = 0x23606Cu;
    // 0x23606c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x23606cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x236070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236078: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x236078u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23607c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x23607Cu;
    {
        const bool branch_taken_0x23607c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23607c) {
            ctx->pc = 0x236080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23607Cu;
            // 0x236080: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360DCu;
            goto label_2360dc;
        }
    }
    ctx->pc = 0x236084u;
    // 0x236084: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x236084u;
    SET_GPR_U32(ctx, 31, 0x23608Cu);
    ctx->pc = 0x236088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236084u;
    // 0x236088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x236084u, 0x23608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23608Cu;
label_23608c:
    // 0x23608c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x23608cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x236090: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236090u;
    {
        const bool branch_taken_0x236090 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x236094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236090u;
        // 0x236094: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236090) {
            ctx->pc = 0x2360ACu;
            goto label_2360ac;
        }
    }
    ctx->pc = 0x236098u;
    // 0x236098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x236098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23609c: 0x0  nop
    ctx->pc = 0x23609cu;
    // NOP
    // 0x2360a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2360a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2360a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2360A4u;
    {
        const bool branch_taken_0x2360a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2360a4) {
            ctx->pc = 0x2360C4u;
            goto label_2360c4;
        }
    }
    ctx->pc = 0x2360ACu;
label_2360ac:
    // 0x2360ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2360acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2360b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2360b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2360b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2360b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2360b8: 0x0  nop
    ctx->pc = 0x2360b8u;
    // NOP
    // 0x2360bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2360bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2360c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2360c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2360c4:
    // 0x2360c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2360c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2360c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2360c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2360cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2360ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2360d0: 0x0  nop
    ctx->pc = 0x2360d0u;
    // NOP
    // 0x2360d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2360d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2360d8: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x2360d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2360dc:
    // 0x2360dc: 0xc08a6e4  jal         func_229B90
    ctx->pc = 0x2360DCu;
    SET_GPR_U32(ctx, 31, 0x2360E4u);
    ctx->pc = 0x2360E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360DCu;
    // 0x2360e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B90u, 0x2360DCu, 0x2360E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360E4u;
label_2360e4:
    // 0x2360e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2360e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2360e8:
    // 0x2360e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2360e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2360ec: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2360ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2360f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2360F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2360F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360F0u;
        // 0x2360f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2360F8u;
}
