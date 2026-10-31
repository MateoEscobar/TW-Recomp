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

// Function: sub_003CAC68
// Address: 0x3cac68 - 0x3cadd8
void sub_003CAC68_0x3cac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAC68_0x3cac68");
#endif

    switch (ctx->pc) {
        case 0x3cac68u: goto label_3cac68;
        case 0x3cac6cu: goto label_3cac6c;
        case 0x3cac70u: goto label_3cac70;
        case 0x3cac74u: goto label_3cac74;
        case 0x3cac78u: goto label_3cac78;
        case 0x3cac7cu: goto label_3cac7c;
        case 0x3cac80u: goto label_3cac80;
        case 0x3cac84u: goto label_3cac84;
        case 0x3cac88u: goto label_3cac88;
        case 0x3cac8cu: goto label_3cac8c;
        case 0x3cac90u: goto label_3cac90;
        case 0x3cac94u: goto label_3cac94;
        case 0x3cac98u: goto label_3cac98;
        case 0x3cac9cu: goto label_3cac9c;
        case 0x3caca0u: goto label_3caca0;
        case 0x3caca4u: goto label_3caca4;
        case 0x3caca8u: goto label_3caca8;
        case 0x3cacacu: goto label_3cacac;
        case 0x3cacb0u: goto label_3cacb0;
        case 0x3cacb4u: goto label_3cacb4;
        case 0x3cacb8u: goto label_3cacb8;
        case 0x3cacbcu: goto label_3cacbc;
        case 0x3cacc0u: goto label_3cacc0;
        case 0x3cacc4u: goto label_3cacc4;
        case 0x3cacc8u: goto label_3cacc8;
        case 0x3cacccu: goto label_3caccc;
        case 0x3cacd0u: goto label_3cacd0;
        case 0x3cacd4u: goto label_3cacd4;
        case 0x3cacd8u: goto label_3cacd8;
        case 0x3cacdcu: goto label_3cacdc;
        case 0x3cace0u: goto label_3cace0;
        case 0x3cace4u: goto label_3cace4;
        case 0x3cace8u: goto label_3cace8;
        case 0x3cacecu: goto label_3cacec;
        case 0x3cacf0u: goto label_3cacf0;
        case 0x3cacf4u: goto label_3cacf4;
        case 0x3cacf8u: goto label_3cacf8;
        case 0x3cacfcu: goto label_3cacfc;
        case 0x3cad00u: goto label_3cad00;
        case 0x3cad04u: goto label_3cad04;
        case 0x3cad08u: goto label_3cad08;
        case 0x3cad0cu: goto label_3cad0c;
        case 0x3cad10u: goto label_3cad10;
        case 0x3cad14u: goto label_3cad14;
        case 0x3cad18u: goto label_3cad18;
        case 0x3cad1cu: goto label_3cad1c;
        case 0x3cad20u: goto label_3cad20;
        case 0x3cad24u: goto label_3cad24;
        case 0x3cad28u: goto label_3cad28;
        case 0x3cad2cu: goto label_3cad2c;
        case 0x3cad30u: goto label_3cad30;
        case 0x3cad34u: goto label_3cad34;
        case 0x3cad38u: goto label_3cad38;
        case 0x3cad3cu: goto label_3cad3c;
        case 0x3cad40u: goto label_3cad40;
        case 0x3cad44u: goto label_3cad44;
        case 0x3cad48u: goto label_3cad48;
        case 0x3cad4cu: goto label_3cad4c;
        case 0x3cad50u: goto label_3cad50;
        case 0x3cad54u: goto label_3cad54;
        case 0x3cad58u: goto label_3cad58;
        case 0x3cad5cu: goto label_3cad5c;
        case 0x3cad60u: goto label_3cad60;
        case 0x3cad64u: goto label_3cad64;
        case 0x3cad68u: goto label_3cad68;
        case 0x3cad6cu: goto label_3cad6c;
        case 0x3cad70u: goto label_3cad70;
        case 0x3cad74u: goto label_3cad74;
        case 0x3cad78u: goto label_3cad78;
        case 0x3cad7cu: goto label_3cad7c;
        case 0x3cad80u: goto label_3cad80;
        case 0x3cad84u: goto label_3cad84;
        case 0x3cad88u: goto label_3cad88;
        case 0x3cad8cu: goto label_3cad8c;
        case 0x3cad90u: goto label_3cad90;
        case 0x3cad94u: goto label_3cad94;
        case 0x3cad98u: goto label_3cad98;
        case 0x3cad9cu: goto label_3cad9c;
        case 0x3cada0u: goto label_3cada0;
        case 0x3cada4u: goto label_3cada4;
        case 0x3cada8u: goto label_3cada8;
        case 0x3cadacu: goto label_3cadac;
        case 0x3cadb0u: goto label_3cadb0;
        case 0x3cadb4u: goto label_3cadb4;
        case 0x3cadb8u: goto label_3cadb8;
        case 0x3cadbcu: goto label_3cadbc;
        case 0x3cadc0u: goto label_3cadc0;
        case 0x3cadc4u: goto label_3cadc4;
        case 0x3cadc8u: goto label_3cadc8;
        case 0x3cadccu: goto label_3cadcc;
        case 0x3cadd0u: goto label_3cadd0;
        case 0x3cadd4u: goto label_3cadd4;
        default: break;
    }

    ctx->pc = 0x3cac68u;

label_3cac68:
    // 0x3cac68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3cac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3cac6c:
    // 0x3cac6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3cac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3cac70:
    // 0x3cac70: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3cac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3cac74:
    // 0x3cac74: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3cac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3cac78:
    // 0x3cac78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3cac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3cac7c:
    // 0x3cac7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cac7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cac80:
    // 0x3cac80: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3cac80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3cac84:
    // 0x3cac84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cac84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cac88:
    // 0x3cac88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3cac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3cac8c:
    // 0x3cac8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3cac8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3cac90:
    // 0x3cac90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cac94:
    // 0x3cac94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3cac94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3cac98:
    // 0x3cac98: 0xc047e6c  jal         func_11F9B0
label_3cac9c:
    if (ctx->pc == 0x3CAC9Cu) {
        ctx->pc = 0x3CAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC98u;
        // 0x3cac9c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CACA0u;
        goto label_3caca0;
    }
    ctx->pc = 0x3CAC98u;
    SET_GPR_U32(ctx, 31, 0x3CACA0u);
    ctx->pc = 0x3CAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAC98u;
    // 0x3cac9c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3CAC98u, 0x3CACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CACA0u;
label_3caca0:
    // 0x3caca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3caca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3caca4:
    // 0x3caca4: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x3caca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_3caca8:
    // 0x3caca8: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x3caca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_3cacac:
    // 0x3cacac: 0xa0f809  jalr        $a1
label_3cacb0:
    if (ctx->pc == 0x3CACB0u) {
        ctx->pc = 0x3CACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACACu;
        // 0x3cacb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CACB4u;
        goto label_3cacb4;
    }
    ctx->pc = 0x3CACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3CACB4u);
        ctx->pc = 0x3CACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACACu;
        // 0x3cacb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CACACu, 0x3CACB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CACB4u;
label_3cacb4:
    // 0x3cacb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3cacb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3cacb8:
    // 0x3cacb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cacb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cacbc:
    // 0x3cacbc: 0xc047e6c  jal         func_11F9B0
label_3cacc0:
    if (ctx->pc == 0x3CACC0u) {
        ctx->pc = 0x3CACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACBCu;
        // 0x3cacc0: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CACC4u;
        goto label_3cacc4;
    }
    ctx->pc = 0x3CACBCu;
    SET_GPR_U32(ctx, 31, 0x3CACC4u);
    ctx->pc = 0x3CACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CACBCu;
    // 0x3cacc0: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3CACBCu, 0x3CACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CACC4u;
label_3cacc4:
    // 0x3cacc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cacc8:
    // 0x3cacc8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3cacc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3caccc:
    // 0x3caccc: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3cacccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3cacd0:
    // 0x3cacd0: 0xa0f809  jalr        $a1
label_3cacd4:
    if (ctx->pc == 0x3CACD4u) {
        ctx->pc = 0x3CACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACD0u;
        // 0x3cacd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CACD8u;
        goto label_3cacd8;
    }
    ctx->pc = 0x3CACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3CACD8u);
        ctx->pc = 0x3CACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACD0u;
        // 0x3cacd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CACD0u, 0x3CACD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CACD8u;
label_3cacd8:
    // 0x3cacd8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3cacd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3cacdc:
    // 0x3cacdc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3cacdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3cace0:
    // 0x3cace0: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3cace0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3cace4:
    // 0x3cace4: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x3cace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
label_3cace8:
    // 0x3cace8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cace8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cacec:
    // 0x3cacec: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3cacecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3cacf0:
    // 0x3cacf0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cacf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cacf4:
    // 0x3cacf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cacf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cacf8:
    // 0x3cacf8: 0xc0cd508  jal         func_335420
label_3cacfc:
    if (ctx->pc == 0x3CACFCu) {
        ctx->pc = 0x3CACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACF8u;
        // 0x3cacfc: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAD00u;
        goto label_3cad00;
    }
    ctx->pc = 0x3CACF8u;
    SET_GPR_U32(ctx, 31, 0x3CAD00u);
    ctx->pc = 0x3CACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CACF8u;
    // 0x3cacfc: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3CACF8u, 0x3CAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAD00u;
label_3cad00:
    // 0x3cad00: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3cad00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3cad04:
    // 0x3cad04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cad04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cad08:
    // 0x3cad08: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3cad08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3cad0c:
    // 0x3cad0c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3cad0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cad10:
    // 0x3cad10: 0xc0cd508  jal         func_335420
label_3cad14:
    if (ctx->pc == 0x3CAD14u) {
        ctx->pc = 0x3CAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAD10u;
        // 0x3cad14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAD18u;
        goto label_3cad18;
    }
    ctx->pc = 0x3CAD10u;
    SET_GPR_U32(ctx, 31, 0x3CAD18u);
    ctx->pc = 0x3CAD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAD10u;
    // 0x3cad14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3CAD10u, 0x3CAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAD18u;
label_3cad18:
    // 0x3cad18: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3cad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3cad1c:
    // 0x3cad1c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3cad1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cad20:
    // 0x3cad20: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3cad20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cad24:
    // 0x3cad24: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3cad24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3cad28:
    // 0x3cad28: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3cad28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3cad2c:
    // 0x3cad2c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3cad2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cad30:
    // 0x3cad30: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3cad30u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3cad34:
    // 0x3cad34: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3cad34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3cad38:
    // 0x3cad38: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3cad38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cad3c:
    // 0x3cad3c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3cad3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cad40:
    // 0x3cad40: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3cad40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3cad44:
    // 0x3cad44: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3cad44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cad48:
    // 0x3cad48: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3cad48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3cad4c:
    // 0x3cad4c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3cad4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3cad50:
    // 0x3cad50: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3cad50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cad54:
    // 0x3cad54: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3cad54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3cad58:
    // 0x3cad58: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3cad58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cad5c:
    // 0x3cad5c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3cad5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cad60:
    // 0x3cad60: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3cad60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cad64:
    // 0x3cad64: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3cad64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3cad68:
    // 0x3cad68: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x3cad68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cad6c:
    // 0x3cad6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cad70:
    // 0x3cad70: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3cad70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3cad74:
    // 0x3cad74: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3cad74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3cad78:
    // 0x3cad78: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3cad78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3cad7c:
    // 0x3cad7c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3cad7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3cad80:
    // 0x3cad80: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x3cad80u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_3cad84:
    // 0x3cad84: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3cad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3cad88:
    // 0x3cad88: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3cad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3cad8c:
    // 0x3cad8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cad8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cad90:
    // 0x3cad90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cad90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cad94:
    // 0x3cad94: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3cad94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3cad98:
    // 0x3cad98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cad98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cad9c:
    // 0x3cad9c: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3cad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_3cada0:
    // 0x3cada0: 0xc0cd518  jal         func_335460
label_3cada4:
    if (ctx->pc == 0x3CADA4u) {
        ctx->pc = 0x3CADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CADA0u;
        // 0x3cada4: 0x7fa50040  sq          $a1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CADA8u;
        goto label_3cada8;
    }
    ctx->pc = 0x3CADA0u;
    SET_GPR_U32(ctx, 31, 0x3CADA8u);
    ctx->pc = 0x3CADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CADA0u;
    // 0x3cada4: 0x7fa50040  sq          $a1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CADA0u, 0x3CADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CADA8u;
label_3cada8:
    // 0x3cada8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3cada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cadac:
    // 0x3cadac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3cadacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cadb0:
    // 0x3cadb0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3cadb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cadb4:
    // 0x3cadb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3cadb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3cadb8:
    // 0x3cadb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3cadb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3cadbc:
    // 0x3cadbc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3cadbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cadc0:
    // 0x3cadc0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3cadc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3cadc4:
    // 0x3cadc4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3cadc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cadc8:
    // 0x3cadc8: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x3cadc8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_3cadcc:
    // 0x3cadcc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3cadccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cadd0:
    // 0x3cadd0: 0x3e00008  jr          $ra
label_3cadd4:
    if (ctx->pc == 0x3CADD4u) {
        ctx->pc = 0x3CADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CADD0u;
        // 0x3cadd4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CADD8u;
        goto label_fallthrough_0x3cadd0;
    }
    ctx->pc = 0x3CADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CADD0u;
        // 0x3cadd4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CADD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cadd0:
    ctx->pc = 0x3CADD8u;
}
