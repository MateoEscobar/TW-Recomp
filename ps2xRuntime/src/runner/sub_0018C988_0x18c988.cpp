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

// Function: sub_0018C988
// Address: 0x18c988 - 0x18ca50
void sub_0018C988_0x18c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C988_0x18c988");
#endif

    switch (ctx->pc) {
        case 0x18c988u: goto label_18c988;
        case 0x18c98cu: goto label_18c98c;
        case 0x18c990u: goto label_18c990;
        case 0x18c994u: goto label_18c994;
        case 0x18c998u: goto label_18c998;
        case 0x18c99cu: goto label_18c99c;
        case 0x18c9a0u: goto label_18c9a0;
        case 0x18c9a4u: goto label_18c9a4;
        case 0x18c9a8u: goto label_18c9a8;
        case 0x18c9acu: goto label_18c9ac;
        case 0x18c9b0u: goto label_18c9b0;
        case 0x18c9b4u: goto label_18c9b4;
        case 0x18c9b8u: goto label_18c9b8;
        case 0x18c9bcu: goto label_18c9bc;
        case 0x18c9c0u: goto label_18c9c0;
        case 0x18c9c4u: goto label_18c9c4;
        case 0x18c9c8u: goto label_18c9c8;
        case 0x18c9ccu: goto label_18c9cc;
        case 0x18c9d0u: goto label_18c9d0;
        case 0x18c9d4u: goto label_18c9d4;
        case 0x18c9d8u: goto label_18c9d8;
        case 0x18c9dcu: goto label_18c9dc;
        case 0x18c9e0u: goto label_18c9e0;
        case 0x18c9e4u: goto label_18c9e4;
        case 0x18c9e8u: goto label_18c9e8;
        case 0x18c9ecu: goto label_18c9ec;
        case 0x18c9f0u: goto label_18c9f0;
        case 0x18c9f4u: goto label_18c9f4;
        case 0x18c9f8u: goto label_18c9f8;
        case 0x18c9fcu: goto label_18c9fc;
        case 0x18ca00u: goto label_18ca00;
        case 0x18ca04u: goto label_18ca04;
        case 0x18ca08u: goto label_18ca08;
        case 0x18ca0cu: goto label_18ca0c;
        case 0x18ca10u: goto label_18ca10;
        case 0x18ca14u: goto label_18ca14;
        case 0x18ca18u: goto label_18ca18;
        case 0x18ca1cu: goto label_18ca1c;
        case 0x18ca20u: goto label_18ca20;
        case 0x18ca24u: goto label_18ca24;
        case 0x18ca28u: goto label_18ca28;
        case 0x18ca2cu: goto label_18ca2c;
        case 0x18ca30u: goto label_18ca30;
        case 0x18ca34u: goto label_18ca34;
        case 0x18ca38u: goto label_18ca38;
        case 0x18ca3cu: goto label_18ca3c;
        case 0x18ca40u: goto label_18ca40;
        case 0x18ca44u: goto label_18ca44;
        case 0x18ca48u: goto label_18ca48;
        case 0x18ca4cu: goto label_18ca4c;
        default: break;
    }

    ctx->pc = 0x18c988u;

label_18c988:
    // 0x18c988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18c98c:
    // 0x18c98c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18c98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c990:
    // 0x18c990: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18c994:
    // 0x18c994: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x18c994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18c998:
    // 0x18c998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c99c:
    // 0x18c99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18c9a0:
    // 0x18c9a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18c9a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18c9a4:
    // 0x18c9a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18c9a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c9a8:
    // 0x18c9a8: 0xae0501c4  sw          $a1, 0x1C4($s0)
    ctx->pc = 0x18c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 5));
label_18c9ac:
    // 0x18c9ac: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x18c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_18c9b0:
    // 0x18c9b0: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_18c9b4:
    if (ctx->pc == 0x18C9B4u) {
        ctx->pc = 0x18C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9B0u;
        // 0x18c9b4: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9B8u;
        goto label_18c9b8;
    }
    ctx->pc = 0x18C9B0u;
    {
        const bool branch_taken_0x18c9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9B0u;
        // 0x18c9b4: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9b0) {
            ctx->pc = 0x18CA2Cu;
            goto label_18ca2c;
        }
    }
    ctx->pc = 0x18C9B8u;
label_18c9b8:
    // 0x18c9b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18c9bc:
    // 0x18c9bc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18c9c0:
    // 0x18c9c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18c9c4:
    // 0x18c9c4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18c9c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18c9c8:
    // 0x18c9c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18c9cc:
    // 0x18c9cc: 0x40f809  jalr        $v0
label_18c9d0:
    if (ctx->pc == 0x18C9D0u) {
        ctx->pc = 0x18C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9CCu;
        // 0x18c9d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9D4u;
        goto label_18c9d4;
    }
    ctx->pc = 0x18C9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C9D4u);
        ctx->pc = 0x18C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9CCu;
        // 0x18c9d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C9CCu, 0x18C9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C9D4u;
label_18c9d4:
    // 0x18c9d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18c9d8:
    if (ctx->pc == 0x18C9D8u) {
        ctx->pc = 0x18C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9D4u;
        // 0x18c9d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9DCu;
        goto label_18c9dc;
    }
    ctx->pc = 0x18C9D4u;
    {
        const bool branch_taken_0x18c9d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9D4u;
        // 0x18c9d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9d4) {
            ctx->pc = 0x18C9F0u;
            goto label_18c9f0;
        }
    }
    ctx->pc = 0x18C9DCu;
label_18c9dc:
    // 0x18c9dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c9e0:
    // 0x18c9e0: 0x0  nop
    ctx->pc = 0x18c9e0u;
    // NOP
label_18c9e4:
    // 0x18c9e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18c9e8:
    // 0x18c9e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c9ec:
    if (ctx->pc == 0x18C9ECu) {
        ctx->pc = 0x18C9F0u;
        goto label_18c9f0;
    }
    ctx->pc = 0x18C9E8u;
    {
        const bool branch_taken_0x18c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c9e8) {
            ctx->pc = 0x18CA08u;
            goto label_18ca08;
        }
    }
    ctx->pc = 0x18C9F0u;
label_18c9f0:
    // 0x18c9f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18c9f4:
    // 0x18c9f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18c9f8:
    // 0x18c9f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c9fc:
    // 0x18c9fc: 0x0  nop
    ctx->pc = 0x18c9fcu;
    // NOP
label_18ca00:
    // 0x18ca00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18ca00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18ca04:
    // 0x18ca04: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18ca04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18ca08:
    // 0x18ca08: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18ca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18ca0c:
    // 0x18ca0c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18ca0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18ca10:
    // 0x18ca10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ca10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca14:
    // 0x18ca14: 0x0  nop
    ctx->pc = 0x18ca14u;
    // NOP
label_18ca18:
    // 0x18ca18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18ca18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18ca1c:
    // 0x18ca1c: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x18ca1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_18ca20:
    // 0x18ca20: 0xe60001c8  swc1        $f0, 0x1C8($s0)
    ctx->pc = 0x18ca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 456), bits); }
label_18ca24:
    // 0x18ca24: 0x10000004  b           . + 4 + (0x4 << 2)
label_18ca28:
    if (ctx->pc == 0x18CA28u) {
        ctx->pc = 0x18CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA24u;
        // 0x18ca28: 0xe60101cc  swc1        $f1, 0x1CC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA2Cu;
        goto label_18ca2c;
    }
    ctx->pc = 0x18CA24u;
    {
        const bool branch_taken_0x18ca24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA24u;
        // 0x18ca28: 0xe60101cc  swc1        $f1, 0x1CC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca24) {
            ctx->pc = 0x18CA38u;
            goto label_18ca38;
        }
    }
    ctx->pc = 0x18CA2Cu;
label_18ca2c:
    // 0x18ca2c: 0xe60001c8  swc1        $f0, 0x1C8($s0)
    ctx->pc = 0x18ca2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 456), bits); }
label_18ca30:
    // 0x18ca30: 0xae0501bc  sw          $a1, 0x1BC($s0)
    ctx->pc = 0x18ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 5));
label_18ca34:
    // 0x18ca34: 0xe60001cc  swc1        $f0, 0x1CC($s0)
    ctx->pc = 0x18ca34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
label_18ca38:
    // 0x18ca38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ca38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ca3c:
    // 0x18ca3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ca40:
    // 0x18ca40: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18ca44:
    // 0x18ca44: 0x3e00008  jr          $ra
label_18ca48:
    if (ctx->pc == 0x18CA48u) {
        ctx->pc = 0x18CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA44u;
        // 0x18ca48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA4Cu;
        goto label_18ca4c;
    }
    ctx->pc = 0x18CA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA44u;
        // 0x18ca48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CA4Cu;
label_18ca4c:
    // 0x18ca4c: 0x0  nop
    ctx->pc = 0x18ca4cu;
    // NOP
    ctx->pc = 0x18ca50u;
}
