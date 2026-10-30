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

// Function: sub_0018CB78
// Address: 0x18cb78 - 0x18cc20
void sub_0018CB78_0x18cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CB78_0x18cb78");
#endif

    switch (ctx->pc) {
        case 0x18cb78u: goto label_18cb78;
        case 0x18cb7cu: goto label_18cb7c;
        case 0x18cb80u: goto label_18cb80;
        case 0x18cb84u: goto label_18cb84;
        case 0x18cb88u: goto label_18cb88;
        case 0x18cb8cu: goto label_18cb8c;
        case 0x18cb90u: goto label_18cb90;
        case 0x18cb94u: goto label_18cb94;
        case 0x18cb98u: goto label_18cb98;
        case 0x18cb9cu: goto label_18cb9c;
        case 0x18cba0u: goto label_18cba0;
        case 0x18cba4u: goto label_18cba4;
        case 0x18cba8u: goto label_18cba8;
        case 0x18cbacu: goto label_18cbac;
        case 0x18cbb0u: goto label_18cbb0;
        case 0x18cbb4u: goto label_18cbb4;
        case 0x18cbb8u: goto label_18cbb8;
        case 0x18cbbcu: goto label_18cbbc;
        case 0x18cbc0u: goto label_18cbc0;
        case 0x18cbc4u: goto label_18cbc4;
        case 0x18cbc8u: goto label_18cbc8;
        case 0x18cbccu: goto label_18cbcc;
        case 0x18cbd0u: goto label_18cbd0;
        case 0x18cbd4u: goto label_18cbd4;
        case 0x18cbd8u: goto label_18cbd8;
        case 0x18cbdcu: goto label_18cbdc;
        case 0x18cbe0u: goto label_18cbe0;
        case 0x18cbe4u: goto label_18cbe4;
        case 0x18cbe8u: goto label_18cbe8;
        case 0x18cbecu: goto label_18cbec;
        case 0x18cbf0u: goto label_18cbf0;
        case 0x18cbf4u: goto label_18cbf4;
        case 0x18cbf8u: goto label_18cbf8;
        case 0x18cbfcu: goto label_18cbfc;
        case 0x18cc00u: goto label_18cc00;
        case 0x18cc04u: goto label_18cc04;
        case 0x18cc08u: goto label_18cc08;
        case 0x18cc0cu: goto label_18cc0c;
        case 0x18cc10u: goto label_18cc10;
        case 0x18cc14u: goto label_18cc14;
        case 0x18cc18u: goto label_18cc18;
        case 0x18cc1cu: goto label_18cc1c;
        default: break;
    }

    ctx->pc = 0x18cb78u;

label_18cb78:
    // 0x18cb78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18cb7c:
    // 0x18cb7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18cb80:
    // 0x18cb80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18cb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18cb84:
    // 0x18cb84: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18cb88:
    // 0x18cb88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cb8c:
    // 0x18cb8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18cb90:
    // 0x18cb90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18cb94:
    // 0x18cb94: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18cb94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18cb98:
    // 0x18cb98: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18cb9c:
    // 0x18cb9c: 0x40f809  jalr        $v0
label_18cba0:
    if (ctx->pc == 0x18CBA0u) {
        ctx->pc = 0x18CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB9Cu;
        // 0x18cba0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBA4u;
        goto label_18cba4;
    }
    ctx->pc = 0x18CB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CBA4u);
        ctx->pc = 0x18CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB9Cu;
        // 0x18cba0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB9Cu, 0x18CBA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CBA4u;
label_18cba4:
    // 0x18cba4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18cba8:
    if (ctx->pc == 0x18CBA8u) {
        ctx->pc = 0x18CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBA4u;
        // 0x18cba8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBACu;
        goto label_18cbac;
    }
    ctx->pc = 0x18CBA4u;
    {
        const bool branch_taken_0x18cba4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBA4u;
        // 0x18cba8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cba4) {
            ctx->pc = 0x18CBC0u;
            goto label_18cbc0;
        }
    }
    ctx->pc = 0x18CBACu;
label_18cbac:
    // 0x18cbac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18cbb0:
    // 0x18cbb0: 0x0  nop
    ctx->pc = 0x18cbb0u;
    // NOP
label_18cbb4:
    // 0x18cbb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18cbb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18cbb8:
    // 0x18cbb8: 0x10000007  b           . + 4 + (0x7 << 2)
label_18cbbc:
    if (ctx->pc == 0x18CBBCu) {
        ctx->pc = 0x18CBC0u;
        goto label_18cbc0;
    }
    ctx->pc = 0x18CBB8u;
    {
        const bool branch_taken_0x18cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cbb8) {
            ctx->pc = 0x18CBD8u;
            goto label_18cbd8;
        }
    }
    ctx->pc = 0x18CBC0u;
label_18cbc0:
    // 0x18cbc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18cbc4:
    // 0x18cbc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18cbc8:
    // 0x18cbc8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18cbcc:
    // 0x18cbcc: 0x0  nop
    ctx->pc = 0x18cbccu;
    // NOP
label_18cbd0:
    // 0x18cbd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18cbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18cbd4:
    // 0x18cbd4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18cbd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18cbd8:
    // 0x18cbd8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18cbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18cbdc:
    // 0x18cbdc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18cbdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18cbe0:
    // 0x18cbe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cbe4:
    // 0x18cbe4: 0xc60101cc  lwc1        $f1, 0x1CC($s0)
    ctx->pc = 0x18cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18cbe8:
    // 0x18cbe8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18cbe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18cbec:
    // 0x18cbec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18cbecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cbf0:
    // 0x18cbf0: 0x0  nop
    ctx->pc = 0x18cbf0u;
    // NOP
label_18cbf4:
    // 0x18cbf4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_18cbf8:
    if (ctx->pc == 0x18CBF8u) {
        ctx->pc = 0x18CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBF4u;
        // 0x18cbf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBFCu;
        goto label_18cbfc;
    }
    ctx->pc = 0x18CBF4u;
    {
        const bool branch_taken_0x18cbf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cbf4) {
            ctx->pc = 0x18CBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CBF4u;
            // 0x18cbf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CC10u;
            goto label_18cc10;
        }
    }
    ctx->pc = 0x18CBFCu;
label_18cbfc:
    // 0x18cbfc: 0xc60001c8  lwc1        $f0, 0x1C8($s0)
    ctx->pc = 0x18cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cc00:
    // 0x18cc00: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x18cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_18cc04:
    // 0x18cc04: 0xe60001cc  swc1        $f0, 0x1CC($s0)
    ctx->pc = 0x18cc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
label_18cc08:
    // 0x18cc08: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x18cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_18cc0c:
    // 0x18cc0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18cc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18cc10:
    // 0x18cc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18cc14:
    // 0x18cc14: 0x3e00008  jr          $ra
label_18cc18:
    if (ctx->pc == 0x18CC18u) {
        ctx->pc = 0x18CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC14u;
        // 0x18cc18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CC1Cu;
        goto label_18cc1c;
    }
    ctx->pc = 0x18CC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC14u;
        // 0x18cc18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CC1Cu;
label_18cc1c:
    // 0x18cc1c: 0x0  nop
    ctx->pc = 0x18cc1cu;
    // NOP
    ctx->pc = 0x18cc20u;
}
