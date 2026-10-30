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

// Function: sub_002DA960
// Address: 0x2da960 - 0x2daa20
void sub_002DA960_0x2da960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA960_0x2da960");
#endif

    switch (ctx->pc) {
        case 0x2da960u: goto label_2da960;
        case 0x2da964u: goto label_2da964;
        case 0x2da968u: goto label_2da968;
        case 0x2da96cu: goto label_2da96c;
        case 0x2da970u: goto label_2da970;
        case 0x2da974u: goto label_2da974;
        case 0x2da978u: goto label_2da978;
        case 0x2da97cu: goto label_2da97c;
        case 0x2da980u: goto label_2da980;
        case 0x2da984u: goto label_2da984;
        case 0x2da988u: goto label_2da988;
        case 0x2da98cu: goto label_2da98c;
        case 0x2da990u: goto label_2da990;
        case 0x2da994u: goto label_2da994;
        case 0x2da998u: goto label_2da998;
        case 0x2da99cu: goto label_2da99c;
        case 0x2da9a0u: goto label_2da9a0;
        case 0x2da9a4u: goto label_2da9a4;
        case 0x2da9a8u: goto label_2da9a8;
        case 0x2da9acu: goto label_2da9ac;
        case 0x2da9b0u: goto label_2da9b0;
        case 0x2da9b4u: goto label_2da9b4;
        case 0x2da9b8u: goto label_2da9b8;
        case 0x2da9bcu: goto label_2da9bc;
        case 0x2da9c0u: goto label_2da9c0;
        case 0x2da9c4u: goto label_2da9c4;
        case 0x2da9c8u: goto label_2da9c8;
        case 0x2da9ccu: goto label_2da9cc;
        case 0x2da9d0u: goto label_2da9d0;
        case 0x2da9d4u: goto label_2da9d4;
        case 0x2da9d8u: goto label_2da9d8;
        case 0x2da9dcu: goto label_2da9dc;
        case 0x2da9e0u: goto label_2da9e0;
        case 0x2da9e4u: goto label_2da9e4;
        case 0x2da9e8u: goto label_2da9e8;
        case 0x2da9ecu: goto label_2da9ec;
        case 0x2da9f0u: goto label_2da9f0;
        case 0x2da9f4u: goto label_2da9f4;
        case 0x2da9f8u: goto label_2da9f8;
        case 0x2da9fcu: goto label_2da9fc;
        case 0x2daa00u: goto label_2daa00;
        case 0x2daa04u: goto label_2daa04;
        case 0x2daa08u: goto label_2daa08;
        case 0x2daa0cu: goto label_2daa0c;
        case 0x2daa10u: goto label_2daa10;
        case 0x2daa14u: goto label_2daa14;
        case 0x2daa18u: goto label_2daa18;
        case 0x2daa1cu: goto label_2daa1c;
        default: break;
    }

    ctx->pc = 0x2da960u;

label_2da960:
    // 0x2da960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2da960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2da964:
    // 0x2da964: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2da964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2da968:
    // 0x2da968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2da968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2da96c:
    // 0x2da96c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da970:
    // 0x2da970: 0xc10587a  jal         func_4161E8
label_2da974:
    if (ctx->pc == 0x2DA974u) {
        ctx->pc = 0x2DA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA970u;
        // 0x2da974: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA978u;
        goto label_2da978;
    }
    ctx->pc = 0x2DA970u;
    SET_GPR_U32(ctx, 31, 0x2DA978u);
    ctx->pc = 0x2DA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA970u;
    // 0x2da974: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DA970u, 0x2DA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA978u;
label_2da978:
    // 0x2da978: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2da978u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2da97c:
    // 0x2da97c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2da97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2da980:
    // 0x2da980: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2da980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2da984:
    // 0x2da984: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2da984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2da988:
    // 0x2da988: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x2da988u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_2da98c:
    // 0x2da98c: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x2da98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2da990:
    // 0x2da990: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2da990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2da994:
    // 0x2da994: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2da994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2da998:
    // 0x2da998: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x2da998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_2da99c:
    // 0x2da99c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2da99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da9a0:
    // 0x2da9a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2da9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2da9a4:
    // 0x2da9a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2da9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2da9a8:
    // 0x2da9a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2da9a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2da9ac:
    // 0x2da9ac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2da9b0:
    if (ctx->pc == 0x2DA9B0u) {
        ctx->pc = 0x2DA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9ACu;
        // 0x2da9b0: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9B4u;
        goto label_2da9b4;
    }
    ctx->pc = 0x2DA9ACu;
    {
        const bool branch_taken_0x2da9ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9ACu;
        // 0x2da9b0: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da9ac) {
            ctx->pc = 0x2DA9C8u;
            goto label_2da9c8;
        }
    }
    ctx->pc = 0x2DA9B4u;
label_2da9b4:
    // 0x2da9b4: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2da9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2da9b8:
    // 0x2da9b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da9b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da9bc:
    // 0x2da9bc: 0x0  nop
    ctx->pc = 0x2da9bcu;
    // NOP
label_2da9c0:
    // 0x2da9c0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_2da9c4:
    if (ctx->pc == 0x2DA9C4u) {
        ctx->pc = 0x2DA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9C0u;
        // 0x2da9c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9C8u;
        goto label_2da9c8;
    }
    ctx->pc = 0x2DA9C0u;
    {
        const bool branch_taken_0x2da9c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da9c0) {
            ctx->pc = 0x2DA9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA9C0u;
            // 0x2da9c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA9E8u;
            goto label_2da9e8;
        }
    }
    ctx->pc = 0x2DA9C8u;
label_2da9c8:
    // 0x2da9c8: 0xc60d0040  lwc1        $f13, 0x40($s0)
    ctx->pc = 0x2da9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2da9cc:
    // 0x2da9cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2da9d0:
    // 0x2da9d0: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x2da9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_2da9d4:
    // 0x2da9d4: 0xc0cddb0  jal         func_3376C0
label_2da9d8:
    if (ctx->pc == 0x2DA9D8u) {
        ctx->pc = 0x2DA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9D4u;
        // 0x2da9d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9DCu;
        goto label_2da9dc;
    }
    ctx->pc = 0x2DA9D4u;
    SET_GPR_U32(ctx, 31, 0x2DA9DCu);
    ctx->pc = 0x2DA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9D4u;
    // 0x2da9d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3376C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376C0u, 0x2DA9D4u, 0x2DA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9DCu;
label_2da9dc:
    // 0x2da9dc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2da9dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2da9e0:
    // 0x2da9e0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2da9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_2da9e4:
    // 0x2da9e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2da9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2da9e8:
    // 0x2da9e8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2da9e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2da9ec:
    // 0x2da9ec: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2da9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2da9f0:
    // 0x2da9f0: 0xa0f809  jalr        $a1
label_2da9f4:
    if (ctx->pc == 0x2DA9F4u) {
        ctx->pc = 0x2DA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9F0u;
        // 0x2da9f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9F8u;
        goto label_2da9f8;
    }
    ctx->pc = 0x2DA9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2DA9F8u);
        ctx->pc = 0x2DA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9F0u;
        // 0x2da9f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9F0u, 0x2DA9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA9F8u;
label_2da9f8:
    // 0x2da9f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2da9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2da9fc:
    // 0x2da9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2da9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2daa00:
    // 0x2daa00: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2daa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2daa04:
    // 0x2daa04: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2daa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2daa08:
    // 0x2daa08: 0x24421f40  addiu       $v0, $v0, 0x1F40
    ctx->pc = 0x2daa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
label_2daa0c:
    // 0x2daa0c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2daa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_2daa10:
    // 0x2daa10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2daa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2daa14:
    // 0x2daa14: 0x3e00008  jr          $ra
label_2daa18:
    if (ctx->pc == 0x2DAA18u) {
        ctx->pc = 0x2DAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA14u;
        // 0x2daa18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA1Cu;
        goto label_2daa1c;
    }
    ctx->pc = 0x2DAA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA14u;
        // 0x2daa18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAA1Cu;
label_2daa1c:
    // 0x2daa1c: 0x0  nop
    ctx->pc = 0x2daa1cu;
    // NOP
    ctx->pc = 0x2daa20u;
}
