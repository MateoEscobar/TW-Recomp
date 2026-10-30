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

// Function: sub_0028CA50
// Address: 0x28ca50 - 0x28cb98
void sub_0028CA50_0x28ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CA50_0x28ca50");
#endif

    switch (ctx->pc) {
        case 0x28ca50u: goto label_28ca50;
        case 0x28ca54u: goto label_28ca54;
        case 0x28ca58u: goto label_28ca58;
        case 0x28ca5cu: goto label_28ca5c;
        case 0x28ca60u: goto label_28ca60;
        case 0x28ca64u: goto label_28ca64;
        case 0x28ca68u: goto label_28ca68;
        case 0x28ca6cu: goto label_28ca6c;
        case 0x28ca70u: goto label_28ca70;
        case 0x28ca74u: goto label_28ca74;
        case 0x28ca78u: goto label_28ca78;
        case 0x28ca7cu: goto label_28ca7c;
        case 0x28ca80u: goto label_28ca80;
        case 0x28ca84u: goto label_28ca84;
        case 0x28ca88u: goto label_28ca88;
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28ca90u: goto label_28ca90;
        case 0x28ca94u: goto label_28ca94;
        case 0x28ca98u: goto label_28ca98;
        case 0x28ca9cu: goto label_28ca9c;
        case 0x28caa0u: goto label_28caa0;
        case 0x28caa4u: goto label_28caa4;
        case 0x28caa8u: goto label_28caa8;
        case 0x28caacu: goto label_28caac;
        case 0x28cab0u: goto label_28cab0;
        case 0x28cab4u: goto label_28cab4;
        case 0x28cab8u: goto label_28cab8;
        case 0x28cabcu: goto label_28cabc;
        case 0x28cac0u: goto label_28cac0;
        case 0x28cac4u: goto label_28cac4;
        case 0x28cac8u: goto label_28cac8;
        case 0x28caccu: goto label_28cacc;
        case 0x28cad0u: goto label_28cad0;
        case 0x28cad4u: goto label_28cad4;
        case 0x28cad8u: goto label_28cad8;
        case 0x28cadcu: goto label_28cadc;
        case 0x28cae0u: goto label_28cae0;
        case 0x28cae4u: goto label_28cae4;
        case 0x28cae8u: goto label_28cae8;
        case 0x28caecu: goto label_28caec;
        case 0x28caf0u: goto label_28caf0;
        case 0x28caf4u: goto label_28caf4;
        case 0x28caf8u: goto label_28caf8;
        case 0x28cafcu: goto label_28cafc;
        case 0x28cb00u: goto label_28cb00;
        case 0x28cb04u: goto label_28cb04;
        case 0x28cb08u: goto label_28cb08;
        case 0x28cb0cu: goto label_28cb0c;
        case 0x28cb10u: goto label_28cb10;
        case 0x28cb14u: goto label_28cb14;
        case 0x28cb18u: goto label_28cb18;
        case 0x28cb1cu: goto label_28cb1c;
        case 0x28cb20u: goto label_28cb20;
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb28u: goto label_28cb28;
        case 0x28cb2cu: goto label_28cb2c;
        case 0x28cb30u: goto label_28cb30;
        case 0x28cb34u: goto label_28cb34;
        case 0x28cb38u: goto label_28cb38;
        case 0x28cb3cu: goto label_28cb3c;
        case 0x28cb40u: goto label_28cb40;
        case 0x28cb44u: goto label_28cb44;
        case 0x28cb48u: goto label_28cb48;
        case 0x28cb4cu: goto label_28cb4c;
        case 0x28cb50u: goto label_28cb50;
        case 0x28cb54u: goto label_28cb54;
        case 0x28cb58u: goto label_28cb58;
        case 0x28cb5cu: goto label_28cb5c;
        case 0x28cb60u: goto label_28cb60;
        case 0x28cb64u: goto label_28cb64;
        case 0x28cb68u: goto label_28cb68;
        case 0x28cb6cu: goto label_28cb6c;
        case 0x28cb70u: goto label_28cb70;
        case 0x28cb74u: goto label_28cb74;
        case 0x28cb78u: goto label_28cb78;
        case 0x28cb7cu: goto label_28cb7c;
        case 0x28cb80u: goto label_28cb80;
        case 0x28cb84u: goto label_28cb84;
        case 0x28cb88u: goto label_28cb88;
        case 0x28cb8cu: goto label_28cb8c;
        case 0x28cb90u: goto label_28cb90;
        case 0x28cb94u: goto label_28cb94;
        default: break;
    }

    ctx->pc = 0x28ca50u;

label_28ca50:
    // 0x28ca50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28ca54:
    // 0x28ca54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28ca58:
    // 0x28ca58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28ca5c:
    // 0x28ca5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ca5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ca60:
    // 0x28ca60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_28ca64:
    // 0x28ca64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28ca68:
    // 0x28ca68: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x28ca68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_28ca6c:
    // 0x28ca6c: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x28ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_28ca70:
    // 0x28ca70: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x28ca70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28ca74:
    // 0x28ca74: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_28ca78:
    if (ctx->pc == 0x28CA78u) {
        ctx->pc = 0x28CA7Cu;
        goto label_28ca7c;
    }
    ctx->pc = 0x28CA74u;
    {
        const bool branch_taken_0x28ca74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca74) {
            ctx->pc = 0x28CAD4u;
            goto label_28cad4;
        }
    }
    ctx->pc = 0x28CA7Cu;
label_28ca7c:
    // 0x28ca7c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28ca80:
    // 0x28ca80: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x28ca80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_28ca84:
    // 0x28ca84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_28ca88:
    // 0x28ca88: 0x40f809  jalr        $v0
label_28ca8c:
    if (ctx->pc == 0x28CA8Cu) {
        ctx->pc = 0x28CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA88u;
        // 0x28ca8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CA90u;
        goto label_28ca90;
    }
    ctx->pc = 0x28CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CA90u);
        ctx->pc = 0x28CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA88u;
        // 0x28ca8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CA88u, 0x28CA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CA90u;
label_28ca90:
    // 0x28ca90: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x28ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28ca94:
    // 0x28ca94: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_28ca98:
    if (ctx->pc == 0x28CA98u) {
        ctx->pc = 0x28CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA94u;
        // 0x28ca98: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CA9Cu;
        goto label_28ca9c;
    }
    ctx->pc = 0x28CA94u;
    {
        const bool branch_taken_0x28ca94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ca94) {
            ctx->pc = 0x28CA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CA94u;
            // 0x28ca98: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CAACu;
            goto label_28caac;
        }
    }
    ctx->pc = 0x28CA9Cu;
label_28ca9c:
    // 0x28ca9c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28caa0:
    // 0x28caa0: 0xc0c2d54  jal         func_30B550
label_28caa4:
    if (ctx->pc == 0x28CAA4u) {
        ctx->pc = 0x28CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAA0u;
        // 0x28caa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAA8u;
        goto label_28caa8;
    }
    ctx->pc = 0x28CAA0u;
    SET_GPR_U32(ctx, 31, 0x28CAA8u);
    ctx->pc = 0x28CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAA0u;
    // 0x28caa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B550u, 0x28CAA0u, 0x28CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAA8u;
label_28caa8:
    // 0x28caa8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28caac:
    // 0x28caac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x28caacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_28cab0:
    // 0x28cab0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_28cab4:
    // 0x28cab4: 0x40f809  jalr        $v0
label_28cab8:
    if (ctx->pc == 0x28CAB8u) {
        ctx->pc = 0x28CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAB4u;
        // 0x28cab8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CABCu;
        goto label_28cabc;
    }
    ctx->pc = 0x28CAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CABCu);
        ctx->pc = 0x28CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAB4u;
        // 0x28cab8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CAB4u, 0x28CABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CABCu;
label_28cabc:
    // 0x28cabc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x28cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_28cac0:
    // 0x28cac0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_28cac4:
    if (ctx->pc == 0x28CAC4u) {
        ctx->pc = 0x28CAC8u;
        goto label_28cac8;
    }
    ctx->pc = 0x28CAC0u;
    {
        const bool branch_taken_0x28cac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28cac0) {
            ctx->pc = 0x28CAD4u;
            goto label_28cad4;
        }
    }
    ctx->pc = 0x28CAC8u;
label_28cac8:
    // 0x28cac8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28cacc:
    // 0x28cacc: 0xc0c2fee  jal         func_30BFB8
label_28cad0:
    if (ctx->pc == 0x28CAD0u) {
        ctx->pc = 0x28CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CACCu;
        // 0x28cad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAD4u;
        goto label_28cad4;
    }
    ctx->pc = 0x28CACCu;
    SET_GPR_U32(ctx, 31, 0x28CAD4u);
    ctx->pc = 0x28CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CACCu;
    // 0x28cad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BFB8u, 0x28CACCu, 0x28CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAD4u;
label_28cad4:
    // 0x28cad4: 0xc0899e8  jal         func_2267A0
label_28cad8:
    if (ctx->pc == 0x28CAD8u) {
        ctx->pc = 0x28CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAD4u;
        // 0x28cad8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CADCu;
        goto label_28cadc;
    }
    ctx->pc = 0x28CAD4u;
    SET_GPR_U32(ctx, 31, 0x28CADCu);
    ctx->pc = 0x28CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAD4u;
    // 0x28cad8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x28CAD4u, 0x28CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CADCu;
label_28cadc:
    // 0x28cadc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cae0:
    // 0x28cae0: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_28cae4:
    if (ctx->pc == 0x28CAE4u) {
        ctx->pc = 0x28CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAE0u;
        // 0x28cae4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAE8u;
        goto label_28cae8;
    }
    ctx->pc = 0x28CAE0u;
    {
        const bool branch_taken_0x28cae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cae0) {
            ctx->pc = 0x28CAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CAE0u;
            // 0x28cae4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB7Cu;
            goto label_28cb7c;
        }
    }
    ctx->pc = 0x28CAE8u;
label_28cae8:
    // 0x28cae8: 0xc0a47b4  jal         func_291ED0
label_28caec:
    if (ctx->pc == 0x28CAECu) {
        ctx->pc = 0x28CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAE8u;
        // 0x28caec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAF0u;
        goto label_28caf0;
    }
    ctx->pc = 0x28CAE8u;
    SET_GPR_U32(ctx, 31, 0x28CAF0u);
    ctx->pc = 0x28CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAE8u;
    // 0x28caec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x28CAE8u, 0x28CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAF0u;
label_28caf0:
    // 0x28caf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28caf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28caf4:
    // 0x28caf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28caf8:
    // 0x28caf8: 0x56420020  bnel        $s2, $v0, . + 4 + (0x20 << 2)
label_28cafc:
    if (ctx->pc == 0x28CAFCu) {
        ctx->pc = 0x28CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAF8u;
        // 0x28cafc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB00u;
        goto label_28cb00;
    }
    ctx->pc = 0x28CAF8u;
    {
        const bool branch_taken_0x28caf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x28caf8) {
            ctx->pc = 0x28CAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CAF8u;
            // 0x28cafc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB7Cu;
            goto label_28cb7c;
        }
    }
    ctx->pc = 0x28CB00u;
label_28cb00:
    // 0x28cb00: 0xc089f66  jal         func_227D98
label_28cb04:
    if (ctx->pc == 0x28CB04u) {
        ctx->pc = 0x28CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB00u;
        // 0x28cb04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB08u;
        goto label_28cb08;
    }
    ctx->pc = 0x28CB00u;
    SET_GPR_U32(ctx, 31, 0x28CB08u);
    ctx->pc = 0x28CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB00u;
    // 0x28cb04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x28CB00u, 0x28CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB08u;
label_28cb08:
    // 0x28cb08: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_28cb0c:
    if (ctx->pc == 0x28CB0Cu) {
        ctx->pc = 0x28CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB08u;
        // 0x28cb0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB10u;
        goto label_28cb10;
    }
    ctx->pc = 0x28CB08u;
    {
        const bool branch_taken_0x28cb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cb08) {
            ctx->pc = 0x28CB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CB08u;
            // 0x28cb0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB7Cu;
            goto label_28cb7c;
        }
    }
    ctx->pc = 0x28CB10u;
label_28cb10:
    // 0x28cb10: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_28cb14:
    // 0x28cb14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28cb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28cb18:
    // 0x28cb18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28cb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28cb1c:
    // 0x28cb1c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28cb1cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_28cb20:
    // 0x28cb20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28cb20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28cb24:
    // 0x28cb24: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_28cb28:
    if (ctx->pc == 0x28CB28u) {
        ctx->pc = 0x28CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB24u;
        // 0x28cb28: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB2Cu;
        goto label_28cb2c;
    }
    ctx->pc = 0x28CB24u;
    {
        const bool branch_taken_0x28cb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x28CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB24u;
        // 0x28cb28: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb24) {
            ctx->pc = 0x28CB34u;
            goto label_28cb34;
        }
    }
    ctx->pc = 0x28CB2Cu;
label_28cb2c:
    // 0x28cb2c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_28cb30:
    // 0x28cb30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28cb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28cb34:
    // 0x28cb34: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x28cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28cb38:
    // 0x28cb38: 0xc0cd4ee  jal         func_3353B8
label_28cb3c:
    if (ctx->pc == 0x28CB3Cu) {
        ctx->pc = 0x28CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB38u;
        // 0x28cb3c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB40u;
        goto label_28cb40;
    }
    ctx->pc = 0x28CB38u;
    SET_GPR_U32(ctx, 31, 0x28CB40u);
    ctx->pc = 0x28CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB38u;
    // 0x28cb3c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x28CB38u, 0x28CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB40u;
label_28cb40:
    // 0x28cb40: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x28cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_28cb44:
    // 0x28cb44: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x28cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_28cb48:
    // 0x28cb48: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x28cb48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28cb4c:
    // 0x28cb4c: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x28cb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_28cb50:
    // 0x28cb50: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28cb54:
    // 0x28cb54: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x28cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_28cb58:
    // 0x28cb58: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x28cb58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_28cb5c:
    // 0x28cb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cb60:
    // 0x28cb60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28cb60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28cb64:
    // 0x28cb64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28cb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cb68:
    // 0x28cb68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28cb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cb6c:
    // 0x28cb6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28cb6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cb70:
    // 0x28cb70: 0xc088178  jal         func_2205E0
label_28cb74:
    if (ctx->pc == 0x28CB74u) {
        ctx->pc = 0x28CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB70u;
        // 0x28cb74: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB78u;
        goto label_28cb78;
    }
    ctx->pc = 0x28CB70u;
    SET_GPR_U32(ctx, 31, 0x28CB78u);
    ctx->pc = 0x28CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB70u;
    // 0x28cb74: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x28CB70u, 0x28CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB78u;
label_28cb78:
    // 0x28cb78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28cb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28cb7c:
    // 0x28cb7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28cb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28cb80:
    // 0x28cb80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28cb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28cb84:
    // 0x28cb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28cb88:
    // 0x28cb88: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x28cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28cb8c:
    // 0x28cb8c: 0x3e00008  jr          $ra
label_28cb90:
    if (ctx->pc == 0x28CB90u) {
        ctx->pc = 0x28CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB8Cu;
        // 0x28cb90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB94u;
        goto label_28cb94;
    }
    ctx->pc = 0x28CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB8Cu;
        // 0x28cb90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CB94u;
label_28cb94:
    // 0x28cb94: 0x0  nop
    ctx->pc = 0x28cb94u;
    // NOP
    ctx->pc = 0x28cb98u;
}
