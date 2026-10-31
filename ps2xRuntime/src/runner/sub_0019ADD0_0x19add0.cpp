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

// Function: sub_0019ADD0
// Address: 0x19add0 - 0x19afd0
void sub_0019ADD0_0x19add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ADD0_0x19add0");
#endif

    switch (ctx->pc) {
        case 0x19add0u: goto label_19add0;
        case 0x19add4u: goto label_19add4;
        case 0x19add8u: goto label_19add8;
        case 0x19addcu: goto label_19addc;
        case 0x19ade0u: goto label_19ade0;
        case 0x19ade4u: goto label_19ade4;
        case 0x19ade8u: goto label_19ade8;
        case 0x19adecu: goto label_19adec;
        case 0x19adf0u: goto label_19adf0;
        case 0x19adf4u: goto label_19adf4;
        case 0x19adf8u: goto label_19adf8;
        case 0x19adfcu: goto label_19adfc;
        case 0x19ae00u: goto label_19ae00;
        case 0x19ae04u: goto label_19ae04;
        case 0x19ae08u: goto label_19ae08;
        case 0x19ae0cu: goto label_19ae0c;
        case 0x19ae10u: goto label_19ae10;
        case 0x19ae14u: goto label_19ae14;
        case 0x19ae18u: goto label_19ae18;
        case 0x19ae1cu: goto label_19ae1c;
        case 0x19ae20u: goto label_19ae20;
        case 0x19ae24u: goto label_19ae24;
        case 0x19ae28u: goto label_19ae28;
        case 0x19ae2cu: goto label_19ae2c;
        case 0x19ae30u: goto label_19ae30;
        case 0x19ae34u: goto label_19ae34;
        case 0x19ae38u: goto label_19ae38;
        case 0x19ae3cu: goto label_19ae3c;
        case 0x19ae40u: goto label_19ae40;
        case 0x19ae44u: goto label_19ae44;
        case 0x19ae48u: goto label_19ae48;
        case 0x19ae4cu: goto label_19ae4c;
        case 0x19ae50u: goto label_19ae50;
        case 0x19ae54u: goto label_19ae54;
        case 0x19ae58u: goto label_19ae58;
        case 0x19ae5cu: goto label_19ae5c;
        case 0x19ae60u: goto label_19ae60;
        case 0x19ae64u: goto label_19ae64;
        case 0x19ae68u: goto label_19ae68;
        case 0x19ae6cu: goto label_19ae6c;
        case 0x19ae70u: goto label_19ae70;
        case 0x19ae74u: goto label_19ae74;
        case 0x19ae78u: goto label_19ae78;
        case 0x19ae7cu: goto label_19ae7c;
        case 0x19ae80u: goto label_19ae80;
        case 0x19ae84u: goto label_19ae84;
        case 0x19ae88u: goto label_19ae88;
        case 0x19ae8cu: goto label_19ae8c;
        case 0x19ae90u: goto label_19ae90;
        case 0x19ae94u: goto label_19ae94;
        case 0x19ae98u: goto label_19ae98;
        case 0x19ae9cu: goto label_19ae9c;
        case 0x19aea0u: goto label_19aea0;
        case 0x19aea4u: goto label_19aea4;
        case 0x19aea8u: goto label_19aea8;
        case 0x19aeacu: goto label_19aeac;
        case 0x19aeb0u: goto label_19aeb0;
        case 0x19aeb4u: goto label_19aeb4;
        case 0x19aeb8u: goto label_19aeb8;
        case 0x19aebcu: goto label_19aebc;
        case 0x19aec0u: goto label_19aec0;
        case 0x19aec4u: goto label_19aec4;
        case 0x19aec8u: goto label_19aec8;
        case 0x19aeccu: goto label_19aecc;
        case 0x19aed0u: goto label_19aed0;
        case 0x19aed4u: goto label_19aed4;
        case 0x19aed8u: goto label_19aed8;
        case 0x19aedcu: goto label_19aedc;
        case 0x19aee0u: goto label_19aee0;
        case 0x19aee4u: goto label_19aee4;
        case 0x19aee8u: goto label_19aee8;
        case 0x19aeecu: goto label_19aeec;
        case 0x19aef0u: goto label_19aef0;
        case 0x19aef4u: goto label_19aef4;
        case 0x19aef8u: goto label_19aef8;
        case 0x19aefcu: goto label_19aefc;
        case 0x19af00u: goto label_19af00;
        case 0x19af04u: goto label_19af04;
        case 0x19af08u: goto label_19af08;
        case 0x19af0cu: goto label_19af0c;
        case 0x19af10u: goto label_19af10;
        case 0x19af14u: goto label_19af14;
        case 0x19af18u: goto label_19af18;
        case 0x19af1cu: goto label_19af1c;
        case 0x19af20u: goto label_19af20;
        case 0x19af24u: goto label_19af24;
        case 0x19af28u: goto label_19af28;
        case 0x19af2cu: goto label_19af2c;
        case 0x19af30u: goto label_19af30;
        case 0x19af34u: goto label_19af34;
        case 0x19af38u: goto label_19af38;
        case 0x19af3cu: goto label_19af3c;
        case 0x19af40u: goto label_19af40;
        case 0x19af44u: goto label_19af44;
        case 0x19af48u: goto label_19af48;
        case 0x19af4cu: goto label_19af4c;
        case 0x19af50u: goto label_19af50;
        case 0x19af54u: goto label_19af54;
        case 0x19af58u: goto label_19af58;
        case 0x19af5cu: goto label_19af5c;
        case 0x19af60u: goto label_19af60;
        case 0x19af64u: goto label_19af64;
        case 0x19af68u: goto label_19af68;
        case 0x19af6cu: goto label_19af6c;
        case 0x19af70u: goto label_19af70;
        case 0x19af74u: goto label_19af74;
        case 0x19af78u: goto label_19af78;
        case 0x19af7cu: goto label_19af7c;
        case 0x19af80u: goto label_19af80;
        case 0x19af84u: goto label_19af84;
        case 0x19af88u: goto label_19af88;
        case 0x19af8cu: goto label_19af8c;
        case 0x19af90u: goto label_19af90;
        case 0x19af94u: goto label_19af94;
        case 0x19af98u: goto label_19af98;
        case 0x19af9cu: goto label_19af9c;
        case 0x19afa0u: goto label_19afa0;
        case 0x19afa4u: goto label_19afa4;
        case 0x19afa8u: goto label_19afa8;
        case 0x19afacu: goto label_19afac;
        case 0x19afb0u: goto label_19afb0;
        case 0x19afb4u: goto label_19afb4;
        case 0x19afb8u: goto label_19afb8;
        case 0x19afbcu: goto label_19afbc;
        case 0x19afc0u: goto label_19afc0;
        case 0x19afc4u: goto label_19afc4;
        case 0x19afc8u: goto label_19afc8;
        case 0x19afccu: goto label_19afcc;
        default: break;
    }

    ctx->pc = 0x19add0u;

label_19add0:
    // 0x19add0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19add4:
    // 0x19add4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19add4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_19add8:
    // 0x19add8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_19addc:
    // 0x19addc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19addcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ade0:
    // 0x19ade0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x19ade0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_19ade4:
    // 0x19ade4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x19ade4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_19ade8:
    // 0x19ade8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19adec:
    // 0x19adec: 0xc066e9c  jal         func_19BA70
label_19adf0:
    if (ctx->pc == 0x19ADF0u) {
        ctx->pc = 0x19ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADECu;
        // 0x19adf0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADF4u;
        goto label_19adf4;
    }
    ctx->pc = 0x19ADECu;
    SET_GPR_U32(ctx, 31, 0x19ADF4u);
    ctx->pc = 0x19ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADECu;
    // 0x19adf0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA70u, 0x19ADECu, 0x19ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADF4u;
label_19adf4:
    // 0x19adf4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x19adf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19adf8:
    // 0x19adf8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_19adfc:
    // 0x19adfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19adfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ae00:
    // 0x19ae00: 0x24429140  addiu       $v0, $v0, -0x6EC0
    ctx->pc = 0x19ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
label_19ae04:
    // 0x19ae04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ae08:
    // 0x19ae08: 0xc066bfe  jal         func_19AFF8
label_19ae0c:
    if (ctx->pc == 0x19AE0Cu) {
        ctx->pc = 0x19AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE08u;
        // 0x19ae0c: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE10u;
        goto label_19ae10;
    }
    ctx->pc = 0x19AE08u;
    SET_GPR_U32(ctx, 31, 0x19AE10u);
    ctx->pc = 0x19AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE08u;
    // 0x19ae0c: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AFF8u, 0x19AE08u, 0x19AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE10u;
label_19ae10:
    // 0x19ae10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19ae14:
    // 0x19ae14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ae14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19ae18:
    // 0x19ae18: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x19ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_19ae1c:
    // 0x19ae1c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19ae1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_19ae20:
    // 0x19ae20: 0x2484b8a8  addiu       $a0, $a0, -0x4758
    ctx->pc = 0x19ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
label_19ae24:
    // 0x19ae24: 0xc0cd508  jal         func_335420
label_19ae28:
    if (ctx->pc == 0x19AE28u) {
        ctx->pc = 0x19AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE24u;
        // 0x19ae28: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE2Cu;
        goto label_19ae2c;
    }
    ctx->pc = 0x19AE24u;
    SET_GPR_U32(ctx, 31, 0x19AE2Cu);
    ctx->pc = 0x19AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE24u;
    // 0x19ae28: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x19AE24u, 0x19AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE2Cu;
label_19ae2c:
    // 0x19ae2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19ae30:
    // 0x19ae30: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x19ae30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_19ae34:
    // 0x19ae34: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x19ae34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_19ae38:
    // 0x19ae38: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x19ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_19ae3c:
    // 0x19ae3c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x19ae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_19ae40:
    // 0x19ae40: 0x24a538e0  addiu       $a1, $a1, 0x38E0
    ctx->pc = 0x19ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14560));
label_19ae44:
    // 0x19ae44: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x19ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_19ae48:
    // 0x19ae48: 0x250838f0  addiu       $t0, $t0, 0x38F0
    ctx->pc = 0x19ae48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14576));
label_19ae4c:
    // 0x19ae4c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x19ae4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_19ae50:
    // 0x19ae50: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x19ae50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19ae54:
    // 0x19ae54: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19ae54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19ae58:
    // 0x19ae58: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x19ae58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_19ae5c:
    // 0x19ae5c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19ae60:
    // 0x19ae60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19ae60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ae64:
    // 0x19ae64: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_19ae68:
    // 0x19ae68: 0x40f809  jalr        $v0
label_19ae6c:
    if (ctx->pc == 0x19AE6Cu) {
        ctx->pc = 0x19AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE68u;
        // 0x19ae6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE70u;
        goto label_19ae70;
    }
    ctx->pc = 0x19AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AE70u);
        ctx->pc = 0x19AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE68u;
        // 0x19ae6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE68u, 0x19AE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AE70u;
label_19ae70:
    // 0x19ae70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ae70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ae74:
    // 0x19ae74: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_19ae78:
    if (ctx->pc == 0x19AE78u) {
        ctx->pc = 0x19AE7Cu;
        goto label_19ae7c;
    }
    ctx->pc = 0x19AE74u;
    {
        const bool branch_taken_0x19ae74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae74) {
            ctx->pc = 0x19AE88u;
            goto label_19ae88;
        }
    }
    ctx->pc = 0x19AE7Cu;
label_19ae7c:
    // 0x19ae7c: 0xc0686fe  jal         func_1A1BF8
label_19ae80:
    if (ctx->pc == 0x19AE80u) {
        ctx->pc = 0x19AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE7Cu;
        // 0x19ae80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE84u;
        goto label_19ae84;
    }
    ctx->pc = 0x19AE7Cu;
    SET_GPR_U32(ctx, 31, 0x19AE84u);
    ctx->pc = 0x19AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE7Cu;
    // 0x19ae80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x19AE7Cu, 0x19AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE84u;
label_19ae84:
    // 0x19ae84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ae84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ae88:
    // 0x19ae88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19ae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19ae8c:
    // 0x19ae8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ae8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ae90:
    // 0x19ae90: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x19ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_19ae94:
    // 0x19ae94: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_19ae98:
    // 0x19ae98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ae98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19ae9c:
    // 0x19ae9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ae9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19aea0:
    // 0x19aea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19aea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19aea4:
    // 0x19aea4: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x19aea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_19aea8:
    // 0x19aea8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19aea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19aeac:
    // 0x19aeac: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x19aeacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_19aeb0:
    // 0x19aeb0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_19aeb4:
    // 0x19aeb4: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x19aeb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_19aeb8:
    // 0x19aeb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19aeb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19aebc:
    // 0x19aebc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x19aebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_19aec0:
    // 0x19aec0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19aec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19aec4:
    // 0x19aec4: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_19aec8:
    // 0x19aec8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x19aec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_19aecc:
    // 0x19aecc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19aeccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19aed0:
    // 0x19aed0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19aed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19aed4:
    // 0x19aed4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aed8:
    // 0x19aed8: 0x3c090013  lui         $t1, 0x13
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)19 << 16));
label_19aedc:
    // 0x19aedc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x19aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_19aee0:
    // 0x19aee0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x19aee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_19aee4:
    // 0x19aee4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x19aee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_19aee8:
    // 0x19aee8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19aee8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19aeec:
    // 0x19aeec: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x19aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_19aef0:
    // 0x19aef0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x19aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_19aef4:
    // 0x19aef4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_19aef8:
    // 0x19aef8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x19aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_19aefc:
    // 0x19aefc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x19aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_19af00:
    // 0x19af00: 0x40f809  jalr        $v0
label_19af04:
    if (ctx->pc == 0x19AF04u) {
        ctx->pc = 0x19AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF00u;
        // 0x19af04: 0x8e26009c  lw          $a2, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF08u;
        goto label_19af08;
    }
    ctx->pc = 0x19AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AF08u);
        ctx->pc = 0x19AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF00u;
        // 0x19af04: 0x8e26009c  lw          $a2, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AF00u, 0x19AF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AF08u;
label_19af08:
    // 0x19af08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19af08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19af0c:
    // 0x19af0c: 0xc066eec  jal         func_19BBB0
label_19af10:
    if (ctx->pc == 0x19AF10u) {
        ctx->pc = 0x19AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF0Cu;
        // 0x19af10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF14u;
        goto label_19af14;
    }
    ctx->pc = 0x19AF0Cu;
    SET_GPR_U32(ctx, 31, 0x19AF14u);
    ctx->pc = 0x19AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF0Cu;
    // 0x19af10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBB0u, 0x19AF0Cu, 0x19AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF14u;
label_19af14:
    // 0x19af14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x19af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19af18:
    // 0x19af18: 0xc066c66  jal         func_19B198
label_19af1c:
    if (ctx->pc == 0x19AF1Cu) {
        ctx->pc = 0x19AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF18u;
        // 0x19af1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF20u;
        goto label_19af20;
    }
    ctx->pc = 0x19AF18u;
    SET_GPR_U32(ctx, 31, 0x19AF20u);
    ctx->pc = 0x19AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF18u;
    // 0x19af1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B198u, 0x19AF18u, 0x19AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF20u;
label_19af20:
    // 0x19af20: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x19af20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19af24:
    // 0x19af24: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x19af24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19af28:
    // 0x19af28: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x19af28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19af2c:
    // 0x19af2c: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x19af2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19af30:
    // 0x19af30: 0xb22200af  sdl         $v0, 0xAF($s1)
    ctx->pc = 0x19af30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af34:
    // 0x19af34: 0xb62200a8  sdr         $v0, 0xA8($s1)
    ctx->pc = 0x19af34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af38:
    // 0x19af38: 0xb22300b7  sdl         $v1, 0xB7($s1)
    ctx->pc = 0x19af38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af3c:
    // 0x19af3c: 0xb62300b0  sdr         $v1, 0xB0($s1)
    ctx->pc = 0x19af3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af40:
    // 0x19af40: 0x6a2600af  ldl         $a2, 0xAF($s1)
    ctx->pc = 0x19af40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19af44:
    // 0x19af44: 0x6e2600a8  ldr         $a2, 0xA8($s1)
    ctx->pc = 0x19af44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19af48:
    // 0x19af48: 0x6a2200b7  ldl         $v0, 0xB7($s1)
    ctx->pc = 0x19af48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19af4c:
    // 0x19af4c: 0x6e2200b0  ldr         $v0, 0xB0($s1)
    ctx->pc = 0x19af4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19af50:
    // 0x19af50: 0xb22600bf  sdl         $a2, 0xBF($s1)
    ctx->pc = 0x19af50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af54:
    // 0x19af54: 0xb62600b8  sdr         $a2, 0xB8($s1)
    ctx->pc = 0x19af54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af58:
    // 0x19af58: 0xb22200c7  sdl         $v0, 0xC7($s1)
    ctx->pc = 0x19af58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af5c:
    // 0x19af5c: 0xb62200c0  sdr         $v0, 0xC0($s1)
    ctx->pc = 0x19af5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af60:
    // 0x19af60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x19af60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19af64:
    // 0x19af64: 0xc066c66  jal         func_19B198
label_19af68:
    if (ctx->pc == 0x19AF68u) {
        ctx->pc = 0x19AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF64u;
        // 0x19af68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF6Cu;
        goto label_19af6c;
    }
    ctx->pc = 0x19AF64u;
    SET_GPR_U32(ctx, 31, 0x19AF6Cu);
    ctx->pc = 0x19AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF64u;
    // 0x19af68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B198u, 0x19AF64u, 0x19AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF6Cu;
label_19af6c:
    // 0x19af6c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x19af6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19af70:
    // 0x19af70: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x19af70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19af74:
    // 0x19af74: 0x6ba2002f  ldl         $v0, 0x2F($sp)
    ctx->pc = 0x19af74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19af78:
    // 0x19af78: 0x6fa20028  ldr         $v0, 0x28($sp)
    ctx->pc = 0x19af78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19af7c:
    // 0x19af7c: 0xb22600cf  sdl         $a2, 0xCF($s1)
    ctx->pc = 0x19af7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af80:
    // 0x19af80: 0xb62600c8  sdr         $a2, 0xC8($s1)
    ctx->pc = 0x19af80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af84:
    // 0x19af84: 0xb22200d7  sdl         $v0, 0xD7($s1)
    ctx->pc = 0x19af84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af88:
    // 0x19af88: 0xb62200d0  sdr         $v0, 0xD0($s1)
    ctx->pc = 0x19af88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19af8c:
    // 0x19af8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19af90:
    // 0x19af90: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x19af90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_19af94:
    // 0x19af94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19af98:
    // 0x19af98: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19af9c:
    // 0x19af9c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19afa0:
    // 0x19afa0: 0x40f809  jalr        $v0
label_19afa4:
    if (ctx->pc == 0x19AFA4u) {
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA0u;
        // 0x19afa4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFA8u;
        goto label_19afa8;
    }
    ctx->pc = 0x19AFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AFA8u);
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA0u;
        // 0x19afa4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFA0u, 0x19AFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AFA8u;
label_19afa8:
    // 0x19afa8: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x19afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_19afac:
    // 0x19afac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19afacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19afb0:
    // 0x19afb0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19afb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19afb4:
    // 0x19afb4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19afb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19afb8:
    // 0x19afb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19afb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19afbc:
    // 0x19afbc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x19afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19afc0:
    // 0x19afc0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x19afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19afc4:
    // 0x19afc4: 0x3e00008  jr          $ra
label_19afc8:
    if (ctx->pc == 0x19AFC8u) {
        ctx->pc = 0x19AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFC4u;
        // 0x19afc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFCCu;
        goto label_19afcc;
    }
    ctx->pc = 0x19AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFC4u;
        // 0x19afc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AFCCu;
label_19afcc:
    // 0x19afcc: 0x0  nop
    ctx->pc = 0x19afccu;
    // NOP
    ctx->pc = 0x19afd0u;
}
