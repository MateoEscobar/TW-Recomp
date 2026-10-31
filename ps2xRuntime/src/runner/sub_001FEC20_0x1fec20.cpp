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

// Function: sub_001FEC20
// Address: 0x1fec20 - 0x1fee10
void sub_001FEC20_0x1fec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEC20_0x1fec20");
#endif

    switch (ctx->pc) {
        case 0x1fec44u: goto label_1fec44;
        case 0x1fec70u: goto label_1fec70;
        case 0x1fec80u: goto label_1fec80;
        case 0x1fec90u: goto label_1fec90;
        case 0x1fecb4u: goto label_1fecb4;
        case 0x1fecc8u: goto label_1fecc8;
        case 0x1fecdcu: goto label_1fecdc;
        case 0x1fece8u: goto label_1fece8;
        case 0x1fed10u: goto label_1fed10;
        case 0x1fed48u: goto label_1fed48;
        case 0x1fedb0u: goto label_1fedb0;
        case 0x1feddcu: goto label_1feddc;
        case 0x1fedecu: goto label_1fedec;
        default: break;
    }

    ctx->pc = 0x1fec20u;

    // 0x1fec20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fec24: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1fec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1fec28: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1fec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1fec2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1fec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1fec30: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1fec34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fec38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fec3c: 0xc07f80e  jal         func_1FE038
    ctx->pc = 0x1FEC3Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC44u);
    ctx->pc = 0x1FEC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC3Cu;
    // 0x1fec40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x1FEC3Cu, 0x1FEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC44u;
label_1fec44:
    // 0x1fec44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fec44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fec4c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fec50: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1fec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1fec54: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fec58: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1FEC58u;
    {
        const bool branch_taken_0x1fec58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC58u;
        // 0x1fec5c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec58) {
            ctx->pc = 0x1FED88u;
            goto label_1fed88;
        }
    }
    ctx->pc = 0x1FEC60u;
    // 0x1fec60: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fec64: 0x3c140070  lui         $s4, 0x70
    ctx->pc = 0x1fec64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
    // 0x1fec68: 0x2453ef80  addiu       $s3, $v0, -0x1080
    ctx->pc = 0x1fec68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
    // 0x1fec6c: 0x0  nop
    ctx->pc = 0x1fec6cu;
    // NOP
label_1fec70:
    // 0x1fec70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec78: 0xc080b0c  jal         func_202C30
    ctx->pc = 0x1FEC78u;
    SET_GPR_U32(ctx, 31, 0x1FEC80u);
    ctx->pc = 0x1FEC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC78u;
    // 0x1fec7c: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1FEC78u, 0x1FEC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC80u;
label_1fec80:
    // 0x1fec80: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x1fec80u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fec84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fec84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec88: 0xc080b4a  jal         func_202D28
    ctx->pc = 0x1FEC88u;
    SET_GPR_U32(ctx, 31, 0x1FEC90u);
    ctx->pc = 0x1FEC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC88u;
    // 0x1fec8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D28u, 0x1FEC88u, 0x1FEC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC90u;
label_1fec90:
    // 0x1fec90: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FEC90u;
    {
        const bool branch_taken_0x1fec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC90u;
        // 0x1fec94: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec90) {
            ctx->pc = 0x1FECECu;
            goto label_1fecec;
        }
    }
    ctx->pc = 0x1FEC98u;
    // 0x1fec98: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x1fec98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1fec9c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEC9Cu;
    {
        const bool branch_taken_0x1fec9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fec9c) {
            ctx->pc = 0x1FECA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEC9Cu;
            // 0x1feca0: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FECC0u;
            goto label_1fecc0;
        }
    }
    ctx->pc = 0x1FECA4u;
    // 0x1feca4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1feca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1feca8: 0x2684e998  addiu       $a0, $s4, -0x1668
    ctx->pc = 0x1feca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961560));
    // 0x1fecac: 0xc10904c  jal         func_424130
    ctx->pc = 0x1FECACu;
    SET_GPR_U32(ctx, 31, 0x1FECB4u);
    ctx->pc = 0x1FECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECACu;
    // 0x1fecb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1FECACu, 0x1FECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECB4u;
label_1fecb4:
    // 0x1fecb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FECB4u;
    {
        const bool branch_taken_0x1fecb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB4u;
        // 0x1fecb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecb4) {
            ctx->pc = 0x1FECD4u;
            goto label_1fecd4;
        }
    }
    ctx->pc = 0x1FECBCu;
    // 0x1fecbc: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x1fecbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1fecc0:
    // 0x1fecc0: 0xc080b68  jal         func_202DA0
    ctx->pc = 0x1FECC0u;
    SET_GPR_U32(ctx, 31, 0x1FECC8u);
    ctx->pc = 0x1FECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECC0u;
    // 0x1fecc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202DA0u, 0x1FECC0u, 0x1FECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECC8u;
label_1fecc8:
    // 0x1fecc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FECC8u;
    {
        const bool branch_taken_0x1fecc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC8u;
        // 0x1feccc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecc8) {
            ctx->pc = 0x1FECECu;
            goto label_1fecec;
        }
    }
    ctx->pc = 0x1FECD0u;
    // 0x1fecd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fecd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fecd4:
    // 0x1fecd4: 0xc07facc  jal         func_1FEB30
    ctx->pc = 0x1FECD4u;
    SET_GPR_U32(ctx, 31, 0x1FECDCu);
    ctx->pc = 0x1FECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECD4u;
    // 0x1fecd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB30u, 0x1FECD4u, 0x1FECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECDCu;
label_1fecdc:
    // 0x1fecdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fecdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fece0: 0xc07faa4  jal         func_1FEA90
    ctx->pc = 0x1FECE0u;
    SET_GPR_U32(ctx, 31, 0x1FECE8u);
    ctx->pc = 0x1FECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECE0u;
    // 0x1fece4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA90u, 0x1FECE0u, 0x1FECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECE8u;
label_1fece8:
    // 0x1fece8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fecec:
    // 0x1fecec: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1fececu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1fecf0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fecf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FECF4u;
    {
        const bool branch_taken_0x1fecf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECF4u;
        // 0x1fecf8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecf4) {
            ctx->pc = 0x1FED30u;
            goto label_1fed30;
        }
    }
    ctx->pc = 0x1FECFCu;
    // 0x1fecfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1fed00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1fed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fed04: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FED04u;
    {
        const bool branch_taken_0x1fed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED04u;
        // 0x1fed08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed04) {
            ctx->pc = 0x1FED74u;
            goto label_1fed74;
        }
    }
    ctx->pc = 0x1FED0Cu;
    // 0x1fed0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fed10:
    // 0x1fed10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fed14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1fed14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1fed18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fed1c: 0x0  nop
    ctx->pc = 0x1fed1cu;
    // NOP
    // 0x1fed20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FED24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED20u;
            // 0x1fed24: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fed10;
        }
    }
    ctx->pc = 0x1FED28u;
    // 0x1fed28: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FED28u;
    {
        const bool branch_taken_0x1fed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED28u;
        // 0x1fed2c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed28) {
            ctx->pc = 0x1FED74u;
            goto label_1fed74;
        }
    }
    ctx->pc = 0x1FED30u;
label_1fed30:
    // 0x1fed30: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fed34: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fed38: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FED38u;
    {
        const bool branch_taken_0x1fed38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fed38) {
            ctx->pc = 0x1FED3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED38u;
            // 0x1fed3c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED64u;
            goto label_1fed64;
        }
    }
    ctx->pc = 0x1FED40u;
    // 0x1fed40: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fed40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1fed44: 0x0  nop
    ctx->pc = 0x1fed44u;
    // NOP
label_1fed48:
    // 0x1fed48: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fed4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fed50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fed54: 0x0  nop
    ctx->pc = 0x1fed54u;
    // NOP
    // 0x1fed58: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FED58u;
    {
        const bool branch_taken_0x1fed58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fed58) {
            ctx->pc = 0x1FED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED58u;
            // 0x1fed5c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fed48;
        }
    }
    ctx->pc = 0x1FED60u;
    // 0x1fed60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fed64:
    // 0x1fed64: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fed68: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FED68u;
    {
        const bool branch_taken_0x1fed68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fed68) {
            ctx->pc = 0x1FED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED68u;
            // 0x1fed6c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED70u;
            goto label_1fed70;
        }
    }
    ctx->pc = 0x1FED70u;
label_1fed70:
    // 0x1fed70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1fed74:
    // 0x1fed74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fed74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed78: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fed78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1fed7c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1fed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fed80: 0x1483ffbb  bne         $a0, $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1FED80u;
    {
        const bool branch_taken_0x1fed80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED80u;
        // 0x1fed84: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed80) {
            ctx->pc = 0x1FEC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fec70;
        }
    }
    ctx->pc = 0x1FED88u;
label_1fed88:
    // 0x1fed88: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1fed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1fed8c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1fed8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fed90: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fed94: 0x12300015  beq         $s1, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FED94u;
    {
        const bool branch_taken_0x1fed94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1FED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED94u;
        // 0x1fed98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed94) {
            ctx->pc = 0x1FEDECu;
            goto label_1fedec;
        }
    }
    ctx->pc = 0x1FED9Cu;
    // 0x1fed9c: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x1fed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1feda0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1feda0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1feda4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1feda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feda8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEDA8u;
    {
        const bool branch_taken_0x1feda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDA8u;
        // 0x1fedac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feda8) {
            ctx->pc = 0x1FEDC8u;
            goto label_1fedc8;
        }
    }
    ctx->pc = 0x1FEDB0u;
label_1fedb0:
    // 0x1fedb0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1fedb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1fedb4: 0x0  nop
    ctx->pc = 0x1fedb4u;
    // NOP
    // 0x1fedb8: 0x0  nop
    ctx->pc = 0x1fedb8u;
    // NOP
    // 0x1fedbc: 0x0  nop
    ctx->pc = 0x1fedbcu;
    // NOP
    // 0x1fedc0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FEDC0u;
    {
        const bool branch_taken_0x1fedc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDC0u;
        // 0x1fedc4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedc0) {
            ctx->pc = 0x1FEDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fedb0;
        }
    }
    ctx->pc = 0x1FEDC8u;
label_1fedc8:
    // 0x1fedc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fedc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fedccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedd0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1fedd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1fedd4: 0xc13ad78  jal         func_4EB5E0
    ctx->pc = 0x1FEDD4u;
    SET_GPR_U32(ctx, 31, 0x1FEDDCu);
    ctx->pc = 0x1FEDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDD4u;
    // 0x1fedd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB5E0u, 0x1FEDD4u, 0x1FEDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDDCu;
label_1feddc:
    // 0x1feddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1feddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fede0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fede0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fede4: 0xc13ae20  jal         func_4EB880
    ctx->pc = 0x1FEDE4u;
    SET_GPR_U32(ctx, 31, 0x1FEDECu);
    ctx->pc = 0x1FEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDE4u;
    // 0x1fede8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB880u, 0x1FEDE4u, 0x1FEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDECu;
label_1fedec:
    // 0x1fedec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1fedecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fedf0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1fedf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fedf4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1fedf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fedf8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1fedf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fedfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fedfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fee00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fee00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fee04: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE04u;
        // 0x1fee08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEE0Cu;
    // 0x1fee0c: 0x0  nop
    ctx->pc = 0x1fee0cu;
    // NOP
    ctx->pc = 0x1fee10u;
}
