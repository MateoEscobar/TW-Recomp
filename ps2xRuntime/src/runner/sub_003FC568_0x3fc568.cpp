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

// Function: sub_003FC568
// Address: 0x3fc568 - 0x3fc600
void sub_003FC568_0x3fc568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC568_0x3fc568");
#endif

    switch (ctx->pc) {
        case 0x3fc588u: goto label_3fc588;
        case 0x3fc5e0u: goto label_3fc5e0;
        case 0x3fc5ecu: goto label_3fc5ec;
        default: break;
    }

    ctx->pc = 0x3fc568u;

    // 0x3fc568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fc568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3fc56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fc56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fc570: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3fc570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3fc574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fc574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fc578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fc57c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fc57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc580: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3FC580u;
    SET_GPR_U32(ctx, 31, 0x3FC588u);
    ctx->pc = 0x3FC584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC580u;
    // 0x3fc584: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3FC580u, 0x3FC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC588u;
label_3fc588:
    // 0x3fc588: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x3fc588u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x3fc58c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fc58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fc590: 0x0  nop
    ctx->pc = 0x3fc590u;
    // NOP
    // 0x3fc594: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3fc594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fc598: 0x0  nop
    ctx->pc = 0x3fc598u;
    // NOP
    // 0x3fc59c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3FC59Cu;
    {
        const bool branch_taken_0x3fc59c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC59Cu;
        // 0x3fc5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc59c) {
            ctx->pc = 0x3FC5C8u;
            goto label_3fc5c8;
        }
    }
    ctx->pc = 0x3FC5A4u;
    // 0x3fc5a4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fc5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3fc5a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fc5a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3fc5ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fc5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fc5b0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3fc5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3fc5b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fc5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3fc5b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3fc5b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3fc5bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fc5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3fc5c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3FC5C0u;
    {
        const bool branch_taken_0x3fc5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC5C0u;
        // 0x3fc5c4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc5c0) {
            ctx->pc = 0x3FC5E4u;
            goto label_3fc5e4;
        }
    }
    ctx->pc = 0x3FC5C8u;
label_3fc5c8:
    // 0x3fc5c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3fc5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3fc5cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fc5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fc5d0: 0x0  nop
    ctx->pc = 0x3fc5d0u;
    // NOP
    // 0x3fc5d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fc5d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3fc5d8: 0xc0e963a  jal         func_3A58E8
    ctx->pc = 0x3FC5D8u;
    SET_GPR_U32(ctx, 31, 0x3FC5E0u);
    ctx->pc = 0x3FC5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC5D8u;
    // 0x3fc5dc: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58E8u, 0x3FC5D8u, 0x3FC5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC5E0u;
label_3fc5e0:
    // 0x3fc5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc5e4:
    // 0x3fc5e4: 0xc0ff086  jal         func_3FC218
    ctx->pc = 0x3FC5E4u;
    SET_GPR_U32(ctx, 31, 0x3FC5ECu);
    ctx->pc = 0x3FC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC5E4u;
    // 0x3fc5e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC218u, 0x3FC5E4u, 0x3FC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC5ECu;
label_3fc5ec:
    // 0x3fc5ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3fc5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fc5f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fc5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fc5f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fc5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fc5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FC5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC5F8u;
        // 0x3fc5fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FC600u;
}
