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

// Function: sub_003D89A8
// Address: 0x3d89a8 - 0x3d8a68
void sub_003D89A8_0x3d89a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D89A8_0x3d89a8");
#endif

    switch (ctx->pc) {
        case 0x3d89a8u: goto label_3d89a8;
        case 0x3d89acu: goto label_3d89ac;
        case 0x3d89b0u: goto label_3d89b0;
        case 0x3d89b4u: goto label_3d89b4;
        case 0x3d89b8u: goto label_3d89b8;
        case 0x3d89bcu: goto label_3d89bc;
        case 0x3d89c0u: goto label_3d89c0;
        case 0x3d89c4u: goto label_3d89c4;
        case 0x3d89c8u: goto label_3d89c8;
        case 0x3d89ccu: goto label_3d89cc;
        case 0x3d89d0u: goto label_3d89d0;
        case 0x3d89d4u: goto label_3d89d4;
        case 0x3d89d8u: goto label_3d89d8;
        case 0x3d89dcu: goto label_3d89dc;
        case 0x3d89e0u: goto label_3d89e0;
        case 0x3d89e4u: goto label_3d89e4;
        case 0x3d89e8u: goto label_3d89e8;
        case 0x3d89ecu: goto label_3d89ec;
        case 0x3d89f0u: goto label_3d89f0;
        case 0x3d89f4u: goto label_3d89f4;
        case 0x3d89f8u: goto label_3d89f8;
        case 0x3d89fcu: goto label_3d89fc;
        case 0x3d8a00u: goto label_3d8a00;
        case 0x3d8a04u: goto label_3d8a04;
        case 0x3d8a08u: goto label_3d8a08;
        case 0x3d8a0cu: goto label_3d8a0c;
        case 0x3d8a10u: goto label_3d8a10;
        case 0x3d8a14u: goto label_3d8a14;
        case 0x3d8a18u: goto label_3d8a18;
        case 0x3d8a1cu: goto label_3d8a1c;
        case 0x3d8a20u: goto label_3d8a20;
        case 0x3d8a24u: goto label_3d8a24;
        case 0x3d8a28u: goto label_3d8a28;
        case 0x3d8a2cu: goto label_3d8a2c;
        case 0x3d8a30u: goto label_3d8a30;
        case 0x3d8a34u: goto label_3d8a34;
        case 0x3d8a38u: goto label_3d8a38;
        case 0x3d8a3cu: goto label_3d8a3c;
        case 0x3d8a40u: goto label_3d8a40;
        case 0x3d8a44u: goto label_3d8a44;
        case 0x3d8a48u: goto label_3d8a48;
        case 0x3d8a4cu: goto label_3d8a4c;
        case 0x3d8a50u: goto label_3d8a50;
        case 0x3d8a54u: goto label_3d8a54;
        case 0x3d8a58u: goto label_3d8a58;
        case 0x3d8a5cu: goto label_3d8a5c;
        case 0x3d8a60u: goto label_3d8a60;
        case 0x3d8a64u: goto label_3d8a64;
        default: break;
    }

    ctx->pc = 0x3d89a8u;

label_3d89a8:
    // 0x3d89a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d89a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d89ac:
    // 0x3d89ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d89b0:
    // 0x3d89b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d89b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d89b4:
    // 0x3d89b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d89b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d89b8:
    // 0x3d89b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d89bc:
    // 0x3d89bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d89bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d89c0:
    // 0x3d89c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d89c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d89c4:
    // 0x3d89c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d89c8:
    // 0x3d89c8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d89c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d89cc:
    // 0x3d89cc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d89d0:
    // 0x3d89d0: 0x40f809  jalr        $v0
label_3d89d4:
    if (ctx->pc == 0x3D89D4u) {
        ctx->pc = 0x3D89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89D0u;
        // 0x3d89d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D89D8u;
        goto label_3d89d8;
    }
    ctx->pc = 0x3D89D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D89D8u);
        ctx->pc = 0x3D89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89D0u;
        // 0x3d89d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D89D0u, 0x3D89D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D89D8u;
label_3d89d8:
    // 0x3d89d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3d89d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3d89dc:
    // 0x3d89dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d89dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d89e0:
    // 0x3d89e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d89e4:
    // 0x3d89e4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d89e8:
    // 0x3d89e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d89e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d89ec:
    // 0x3d89ec: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3d89ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3d89f0:
    // 0x3d89f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d89f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d89f4:
    // 0x3d89f4: 0xc0e858c  jal         func_3A1630
label_3d89f8:
    if (ctx->pc == 0x3D89F8u) {
        ctx->pc = 0x3D89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89F4u;
        // 0x3d89f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D89FCu;
        goto label_3d89fc;
    }
    ctx->pc = 0x3D89F4u;
    SET_GPR_U32(ctx, 31, 0x3D89FCu);
    ctx->pc = 0x3D89F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D89F4u;
    // 0x3d89f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D89F4u, 0x3D89FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D89FCu;
label_3d89fc:
    // 0x3d89fc: 0xc0ea14c  jal         func_3A8530
label_3d8a00:
    if (ctx->pc == 0x3D8A00u) {
        ctx->pc = 0x3D8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89FCu;
        // 0x3d8a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8A04u;
        goto label_3d8a04;
    }
    ctx->pc = 0x3D89FCu;
    SET_GPR_U32(ctx, 31, 0x3D8A04u);
    ctx->pc = 0x3D8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D89FCu;
    // 0x3d8a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D89FCu, 0x3D8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8A04u;
label_3d8a04:
    // 0x3d8a04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d8a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d8a08:
    // 0x3d8a08: 0xc0ea12a  jal         func_3A84A8
label_3d8a0c:
    if (ctx->pc == 0x3D8A0Cu) {
        ctx->pc = 0x3D8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A08u;
        // 0x3d8a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8A10u;
        goto label_3d8a10;
    }
    ctx->pc = 0x3D8A08u;
    SET_GPR_U32(ctx, 31, 0x3D8A10u);
    ctx->pc = 0x3D8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8A08u;
    // 0x3d8a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8A08u, 0x3D8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8A10u;
label_3d8a10:
    // 0x3d8a10: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d8a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8a14:
    // 0x3d8a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8a18:
    // 0x3d8a18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d8a1c:
    // 0x3d8a1c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3d8a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3d8a20:
    // 0x3d8a20: 0xc0e858c  jal         func_3A1630
label_3d8a24:
    if (ctx->pc == 0x3D8A24u) {
        ctx->pc = 0x3D8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A20u;
        // 0x3d8a24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8A28u;
        goto label_3d8a28;
    }
    ctx->pc = 0x3D8A20u;
    SET_GPR_U32(ctx, 31, 0x3D8A28u);
    ctx->pc = 0x3D8A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8A20u;
    // 0x3d8a24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8A20u, 0x3D8A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8A28u;
label_3d8a28:
    // 0x3d8a28: 0x3c02ff96  lui         $v0, 0xFF96
    ctx->pc = 0x3d8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65430 << 16));
label_3d8a2c:
    // 0x3d8a2c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3d8a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3d8a30:
    // 0x3d8a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8a34:
    // 0x3d8a34: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3d8a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3d8a38:
    // 0x3d8a38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d8a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8a3c:
    // 0x3d8a3c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3d8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3d8a40:
    // 0x3d8a40: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3d8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3d8a44:
    // 0x3d8a44: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3d8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3d8a48:
    // 0x3d8a48: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3d8a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3d8a4c:
    // 0x3d8a4c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3d8a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3d8a50:
    // 0x3d8a50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d8a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d8a54:
    // 0x3d8a54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d8a54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d8a58:
    // 0x3d8a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8a5c:
    // 0x3d8a5c: 0x3e00008  jr          $ra
label_3d8a60:
    if (ctx->pc == 0x3D8A60u) {
        ctx->pc = 0x3D8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A5Cu;
        // 0x3d8a60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8A64u;
        goto label_3d8a64;
    }
    ctx->pc = 0x3D8A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A5Cu;
        // 0x3d8a60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8A64u;
label_3d8a64:
    // 0x3d8a64: 0x0  nop
    ctx->pc = 0x3d8a64u;
    // NOP
    ctx->pc = 0x3d8a68u;
}
