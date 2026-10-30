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

// Function: sub_002FDB90
// Address: 0x2fdb90 - 0x2fdc28
void sub_002FDB90_0x2fdb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDB90_0x2fdb90");
#endif

    switch (ctx->pc) {
        case 0x2fdbc4u: goto label_2fdbc4;
        case 0x2fdbccu: goto label_2fdbcc;
        case 0x2fdbdcu: goto label_2fdbdc;
        case 0x2fdbe8u: goto label_2fdbe8;
        case 0x2fdc0cu: goto label_2fdc0c;
        default: break;
    }

    ctx->pc = 0x2fdb90u;

    // 0x2fdb90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fdb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fdb94: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2fdb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2fdb98: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fdb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fdb9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2fdb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2fdba0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fdba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fdba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fdba8: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x2fdba8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2fdbac: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2fdbacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fdbb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fdbb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdbb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fdbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2fdbb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdbbc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FDBBCu;
    SET_GPR_U32(ctx, 31, 0x2FDBC4u);
    ctx->pc = 0x2FDBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDBBCu;
    // 0x2fdbc0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FDBBCu, 0x2FDBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDBC4u;
label_2fdbc4:
    // 0x2fdbc4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FDBC4u;
    SET_GPR_U32(ctx, 31, 0x2FDBCCu);
    ctx->pc = 0x2FDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDBC4u;
    // 0x2fdbc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FDBC4u, 0x2FDBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDBCCu;
label_2fdbcc:
    // 0x2fdbcc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FDBCCu;
    {
        const bool branch_taken_0x2fdbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDBCCu;
        // 0x2fdbd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbcc) {
            ctx->pc = 0x2FDC10u;
            goto label_2fdc10;
        }
    }
    ctx->pc = 0x2FDBD4u;
    // 0x2fdbd4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FDBD4u;
    SET_GPR_U32(ctx, 31, 0x2FDBDCu);
    ctx->pc = 0x2FDBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDBD4u;
    // 0x2fdbd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FDBD4u, 0x2FDBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDBDCu;
label_2fdbdc:
    // 0x2fdbdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fdbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdbe0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2FDBE0u;
    SET_GPR_U32(ctx, 31, 0x2FDBE8u);
    ctx->pc = 0x2FDBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDBE0u;
    // 0x2fdbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2FDBE0u, 0x2FDBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDBE8u;
label_2fdbe8:
    // 0x2fdbe8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDBE8u;
    {
        const bool branch_taken_0x2fdbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDBE8u;
        // 0x2fdbec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbe8) {
            ctx->pc = 0x2FDC0Cu;
            goto label_2fdc0c;
        }
    }
    ctx->pc = 0x2FDBF0u;
    // 0x2fdbf0: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x2fdbf0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fdbf4: 0x0  nop
    ctx->pc = 0x2fdbf4u;
    // NOP
    // 0x2fdbf8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2fdbf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2fdbfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc00: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2fdc00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2fdc04: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2FDC04u;
    SET_GPR_U32(ctx, 31, 0x2FDC0Cu);
    ctx->pc = 0x2FDC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC04u;
    // 0x2fdc08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2FDC04u, 0x2FDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC0Cu;
label_2fdc0c:
    // 0x2fdc0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fdc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fdc10:
    // 0x2fdc10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2fdc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fdc14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fdc14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdc18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdc1c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2fdc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fdc20: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC20u;
        // 0x2fdc24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC28u;
}
