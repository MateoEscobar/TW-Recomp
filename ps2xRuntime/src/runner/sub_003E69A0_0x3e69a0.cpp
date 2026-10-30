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

// Function: sub_003E69A0
// Address: 0x3e69a0 - 0x3e6a60
void sub_003E69A0_0x3e69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E69A0_0x3e69a0");
#endif

    switch (ctx->pc) {
        case 0x3e69d8u: goto label_3e69d8;
        case 0x3e69e4u: goto label_3e69e4;
        case 0x3e69f4u: goto label_3e69f4;
        case 0x3e6a2cu: goto label_3e6a2c;
        case 0x3e6a3cu: goto label_3e6a3c;
        default: break;
    }

    ctx->pc = 0x3e69a0u;

    // 0x3e69a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3e69a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e69a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3e69a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3e69a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3e69ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e69acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e69b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3e69b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e69b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e69b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e69bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3e69c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e69c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e69c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e69cc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3e69ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x3e69d0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E69D0u;
    SET_GPR_U32(ctx, 31, 0x3E69D8u);
    ctx->pc = 0x3E69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E69D0u;
    // 0x3e69d4: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E69D0u, 0x3E69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E69D8u;
label_3e69d8:
    // 0x3e69d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e69d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69dc: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E69DCu;
    SET_GPR_U32(ctx, 31, 0x3E69E4u);
    ctx->pc = 0x3E69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E69DCu;
    // 0x3e69e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E69DCu, 0x3E69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E69E4u;
label_3e69e4:
    // 0x3e69e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e69e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e69e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e69e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69ec: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3E69ECu;
    SET_GPR_U32(ctx, 31, 0x3E69F4u);
    ctx->pc = 0x3E69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E69ECu;
    // 0x3e69f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E69ECu, 0x3E69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E69F4u;
label_3e69f4:
    // 0x3e69f4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3e69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3e69f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e69fc: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3e69fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6a00: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e6a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3e6a04: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3e6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x3e6a08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e6a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e6a0c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x3e6a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x3e6a10: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x3e6a10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3e6a14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e6a18: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x3e6a18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
    // 0x3e6a1c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3e6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3e6a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e6a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a24: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E6A24u;
    SET_GPR_U32(ctx, 31, 0x3E6A2Cu);
    ctx->pc = 0x3E6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A24u;
    // 0x3e6a28: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E6A24u, 0x3E6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A2Cu;
label_3e6a2c:
    // 0x3e6a2c: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3e6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x3e6a30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e6a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a34: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E6A34u;
    SET_GPR_U32(ctx, 31, 0x3E6A3Cu);
    ctx->pc = 0x3E6A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A34u;
    // 0x3e6a38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E6A34u, 0x3E6A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A3Cu;
label_3e6a3c:
    // 0x3e6a3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e6a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e6a40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e6a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e6a44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e6a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e6a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e6a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6a4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3e6a4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e6a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6a54: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3e6a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e6a58: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A58u;
        // 0x3e6a5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6A60u;
}
