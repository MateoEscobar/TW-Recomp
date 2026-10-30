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

// Function: sub_0049DEB0
// Address: 0x49deb0 - 0x49e038
void sub_0049DEB0_0x49deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DEB0_0x49deb0");
#endif

    switch (ctx->pc) {
        case 0x49df28u: goto label_49df28;
        case 0x49df30u: goto label_49df30;
        case 0x49df3cu: goto label_49df3c;
        case 0x49df94u: goto label_49df94;
        case 0x49dfb4u: goto label_49dfb4;
        case 0x49e008u: goto label_49e008;
        default: break;
    }

    ctx->pc = 0x49deb0u;

    // 0x49deb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x49deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x49deb4: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x49deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x49deb8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x49deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x49debc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x49debcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x49dec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49dec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dec4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49dec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49dec8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49dec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49decc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x49deccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x49ded0: 0x30c400f8  andi        $a0, $a2, 0xF8
    ctx->pc = 0x49ded0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)248);
    // 0x49ded4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49ded8: 0x30d39000  andi        $s3, $a2, 0x9000
    ctx->pc = 0x49ded8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)36864);
    // 0x49dedc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x49dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49dee0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x49dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x49dee4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x49dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49dee8: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x49dee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x49deec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x49deecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x49def0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x49def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x49def4: 0xa2040021  sb          $a0, 0x21($s0)
    ctx->pc = 0x49def4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x49def8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x49def8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x49defc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x49DEFCu;
    {
        const bool branch_taken_0x49defc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DEFCu;
        // 0x49df00: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49defc) {
            ctx->pc = 0x49E018u;
            goto label_49e018;
        }
    }
    ctx->pc = 0x49DF04u;
    // 0x49df04: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49df04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49df08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49df08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49df0c: 0x2442fdf0  addiu       $v0, $v0, -0x210
    ctx->pc = 0x49df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x49df10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49df14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49df14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49df18: 0x800008  jr          $a0
    ctx->pc = 0x49DF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49DF20u: goto label_49df20;
            case 0x49DFD0u: goto label_49dfd0;
            case 0x49DFECu: goto label_49dfec;
            case 0x49E010u: goto label_49e010;
            case 0x49E018u: goto label_49e018;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DF18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49DF20u;
label_49df20:
    // 0x49df20: 0xc12a70e  jal         func_4A9C38
    ctx->pc = 0x49DF20u;
    SET_GPR_U32(ctx, 31, 0x49DF28u);
    ctx->pc = 0x49DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DF20u;
    // 0x49df24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C38u, 0x49DF20u, 0x49DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DF28u;
label_49df28:
    // 0x49df28: 0xc120c60  jal         func_483180
    ctx->pc = 0x49DF28u;
    SET_GPR_U32(ctx, 31, 0x49DF30u);
    ctx->pc = 0x49DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DF28u;
    // 0x49df2c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483180u, 0x49DF28u, 0x49DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DF30u;
label_49df30:
    // 0x49df30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49df34: 0xc120dc8  jal         func_483720
    ctx->pc = 0x49DF34u;
    SET_GPR_U32(ctx, 31, 0x49DF3Cu);
    ctx->pc = 0x49DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DF34u;
    // 0x49df38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483720u, 0x49DF34u, 0x49DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DF3Cu;
label_49df3c:
    // 0x49df3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x49df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49df40: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x49df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x49df44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49DF44u;
    {
        const bool branch_taken_0x49df44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF44u;
        // 0x49df48: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df44) {
            ctx->pc = 0x49DF58u;
            goto label_49df58;
        }
    }
    ctx->pc = 0x49DF4Cu;
    // 0x49df4c: 0x3a430003  xori        $v1, $s2, 0x3
    ctx->pc = 0x49df4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x49df50: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x49df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x49df54: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x49df54u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_49df58:
    // 0x49df58: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x49df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49df5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49df60: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49DF60u;
    {
        const bool branch_taken_0x49df60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF60u;
        // 0x49df64: 0x38630008  xori        $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df60) {
            ctx->pc = 0x49DF70u;
            goto label_49df70;
        }
    }
    ctx->pc = 0x49DF68u;
    // 0x49df68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49DF68u;
    {
        const bool branch_taken_0x49df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF68u;
        // 0x49df6c: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df68) {
            ctx->pc = 0x49DF78u;
            goto label_49df78;
        }
    }
    ctx->pc = 0x49DF70u;
label_49df70:
    // 0x49df70: 0x34822000  ori         $v0, $a0, 0x2000
    ctx->pc = 0x49df70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x49df74: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x49df74u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_49df78:
    // 0x49df78: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x49df78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x49df7c: 0x131a02  srl         $v1, $s3, 8
    ctx->pc = 0x49df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x49df80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49df84: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x49df84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49df88: 0xa2020023  sb          $v0, 0x23($s0)
    ctx->pc = 0x49df88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x49df8c: 0xc12612c  jal         func_4984B0
    ctx->pc = 0x49DF8Cu;
    SET_GPR_U32(ctx, 31, 0x49DF94u);
    ctx->pc = 0x49DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DF8Cu;
    // 0x49df90: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984B0u, 0x49DF8Cu, 0x49DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DF94u;
label_49df94:
    // 0x49df94: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x49df94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x49df98: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x49df98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x49df9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49DF9Cu;
    {
        const bool branch_taken_0x49df9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF9Cu;
        // 0x49dfa0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df9c) {
            ctx->pc = 0x49DFACu;
            goto label_49dfac;
        }
    }
    ctx->pc = 0x49DFA4u;
    // 0x49dfa4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x49dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x49dfa8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x49dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_49dfac:
    // 0x49dfac: 0xc12612c  jal         func_4984B0
    ctx->pc = 0x49DFACu;
    SET_GPR_U32(ctx, 31, 0x49DFB4u);
    ctx->pc = 0x49DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DFACu;
    // 0x49dfb0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984B0u, 0x49DFACu, 0x49DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DFB4u;
label_49dfb4:
    // 0x49dfb4: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x49dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x49dfb8: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x49dfb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x49dfbc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x49DFBCu;
    {
        const bool branch_taken_0x49dfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFBCu;
        // 0x49dfc0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfbc) {
            ctx->pc = 0x49E008u;
            goto label_49e008;
        }
    }
    ctx->pc = 0x49DFC4u;
    // 0x49dfc4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x49dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x49dfc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x49DFC8u;
    {
        const bool branch_taken_0x49dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFC8u;
        // 0x49dfcc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfc8) {
            ctx->pc = 0x49E008u;
            goto label_49e008;
        }
    }
    ctx->pc = 0x49DFD0u;
label_49dfd0:
    // 0x49dfd0: 0x30c20f00  andi        $v0, $a2, 0xF00
    ctx->pc = 0x49dfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x49dfd4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x49dfd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x49dfd8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49DFD8u;
    {
        const bool branch_taken_0x49dfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFD8u;
        // 0x49dfdc: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfd8) {
            ctx->pc = 0x49E008u;
            goto label_49e008;
        }
    }
    ctx->pc = 0x49DFE0u;
    // 0x49dfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49dfe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49DFE4u;
    {
        const bool branch_taken_0x49dfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFE4u;
        // 0x49dfe8: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dfe4) {
            ctx->pc = 0x49E008u;
            goto label_49e008;
        }
    }
    ctx->pc = 0x49DFECu;
label_49dfec:
    // 0x49dfec: 0x8f8286c0  lw          $v0, -0x7940($gp)
    ctx->pc = 0x49dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x49dff0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x49dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49dff4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x49dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x49dff8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49DFF8u;
    {
        const bool branch_taken_0x49dff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x49DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DFF8u;
        // 0x49dffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dff8) {
            ctx->pc = 0x49E004u;
            goto label_49e004;
        }
    }
    ctx->pc = 0x49E000u;
    // 0x49e000: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x49e000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_49e004:
    // 0x49e004: 0xa2050023  sb          $a1, 0x23($s0)
    ctx->pc = 0x49e004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 5));
label_49e008:
    // 0x49e008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49E008u;
    {
        const bool branch_taken_0x49e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E008u;
        // 0x49e00c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e008) {
            ctx->pc = 0x49E01Cu;
            goto label_49e01c;
        }
    }
    ctx->pc = 0x49E010u;
label_49e010:
    // 0x49e010: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x49E010u;
    {
        const bool branch_taken_0x49e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E010u;
        // 0x49e014: 0xa2000023  sb          $zero, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e010) {
            ctx->pc = 0x49E008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e008;
        }
    }
    ctx->pc = 0x49E018u;
label_49e018:
    // 0x49e018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49e018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e01c:
    // 0x49e01c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x49e01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49e020: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x49e020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49e024: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x49e024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49e028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49e028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49e02c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49e02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49e030: 0x3e00008  jr          $ra
    ctx->pc = 0x49E030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E030u;
        // 0x49e034: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E038u;
}
