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

// Function: sub_00229B90
// Address: 0x229b90 - 0x229c40
void sub_00229B90_0x229b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229B90_0x229b90");
#endif

    switch (ctx->pc) {
        case 0x229bc8u: goto label_229bc8;
        case 0x229bd0u: goto label_229bd0;
        case 0x229c14u: goto label_229c14;
        default: break;
    }

    ctx->pc = 0x229b90u;

    // 0x229b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x229b94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x229b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x229b98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x229b9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ba0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x229ba0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x229ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ba8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x229ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x229bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229bb0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x229bb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x229bb4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x229bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x229bb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x229bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x229bbc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x229bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x229bc0: 0x8e3200cc  lw          $s2, 0xCC($s1)
    ctx->pc = 0x229bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x229bc4: 0x0  nop
    ctx->pc = 0x229bc4u;
    // NOP
label_229bc8:
    // 0x229bc8: 0xc08a200  jal         func_228800
    ctx->pc = 0x229BC8u;
    SET_GPR_U32(ctx, 31, 0x229BD0u);
    ctx->pc = 0x229BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BC8u;
    // 0x229bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x229BC8u, 0x229BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BD0u;
label_229bd0:
    // 0x229bd0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x229bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x229bd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229bdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x229be0: 0x944300b8  lhu         $v1, 0xB8($v0)
    ctx->pc = 0x229be0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x229be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229bec: 0x0  nop
    ctx->pc = 0x229becu;
    // NOP
    // 0x229bf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229bf4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x229bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x229bf8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x229bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x229bfc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x229c00: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x229c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x229c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229C04u;
    {
        const bool branch_taken_0x229c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C04u;
        // 0x229c08: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c04) {
            ctx->pc = 0x229C14u;
            goto label_229c14;
        }
    }
    ctx->pc = 0x229C0Cu;
    // 0x229c0c: 0xc09523c  jal         func_2548F0
    ctx->pc = 0x229C0Cu;
    SET_GPR_U32(ctx, 31, 0x229C14u);
    ctx->pc = 0x2548F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548F0u, 0x229C0Cu, 0x229C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C14u;
label_229c14:
    // 0x229c14: 0x2e02002d  sltiu       $v0, $s0, 0x2D
    ctx->pc = 0x229c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x229c18: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x229C18u;
    {
        const bool branch_taken_0x229c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C18u;
        // 0x229c1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c18) {
            ctx->pc = 0x229BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229bc8;
        }
    }
    ctx->pc = 0x229C20u;
    // 0x229c20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x229c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x229c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229c28: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x229c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229c2c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x229c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229c30: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x229c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229c34: 0x3e00008  jr          $ra
    ctx->pc = 0x229C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C34u;
        // 0x229c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229C3Cu;
    // 0x229c3c: 0x0  nop
    ctx->pc = 0x229c3cu;
    // NOP
    ctx->pc = 0x229c40u;
}
